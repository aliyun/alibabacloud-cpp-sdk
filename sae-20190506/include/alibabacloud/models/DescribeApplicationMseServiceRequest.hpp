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
    virtual bool empty() const override { this->appId_ != nullptr
        && this->enableAhas_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationMseServiceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline bool enableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, false) };
    inline DescribeApplicationMseServiceRequest& setEnableAhas(bool enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enableAhas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
