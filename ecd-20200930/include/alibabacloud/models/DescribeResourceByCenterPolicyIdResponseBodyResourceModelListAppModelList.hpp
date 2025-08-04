// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYCENTERPOLICYIDRESPONSEBODYRESOURCEMODELLISTAPPMODELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYCENTERPOLICYIDRESPONSEBODYRESOURCEMODELLISTAPPMODELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList() = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList(const DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList &) = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList(DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList &&) = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList() = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList& operator=(const DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList &) = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList& operator=(DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    // The application ID. This parameter is only applicable to cloud applications.
    std::shared_ptr<string> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
