// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONMSESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONMSESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationMseServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationMseServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EnableAhas, enableAhas_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationMseServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EnableAhas, enableAhas_);
    };
    DescribeApplicationMseServiceRequest() = default ;
    DescribeApplicationMseServiceRequest(const DescribeApplicationMseServiceRequest &) = default ;
    DescribeApplicationMseServiceRequest(DescribeApplicationMseServiceRequest &&) = default ;
    DescribeApplicationMseServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationMseServiceRequest() = default ;
    DescribeApplicationMseServiceRequest& operator=(const DescribeApplicationMseServiceRequest &) = default ;
    DescribeApplicationMseServiceRequest& operator=(DescribeApplicationMseServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->enableAhas_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationMseServiceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline bool getEnableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, false) };
    inline DescribeApplicationMseServiceRequest& setEnableAhas(bool enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Specifies whether to enable traffic limiting and degradation. Set to true to check traffic limiting and degradation permissions when accessing related APIs; set to false otherwise.
    // 
    // This parameter is required.
    shared_ptr<bool> enableAhas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
