// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESERVICELASTACCESSEDDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATESERVICELASTACCESSEDDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class GenerateServiceLastAccessedDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateServiceLastAccessedDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateServiceLastAccessedDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
    };
    GenerateServiceLastAccessedDetailsRequest() = default ;
    GenerateServiceLastAccessedDetailsRequest(const GenerateServiceLastAccessedDetailsRequest &) = default ;
    GenerateServiceLastAccessedDetailsRequest(GenerateServiceLastAccessedDetailsRequest &&) = default ;
    GenerateServiceLastAccessedDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateServiceLastAccessedDetailsRequest() = default ;
    GenerateServiceLastAccessedDetailsRequest& operator=(const GenerateServiceLastAccessedDetailsRequest &) = default ;
    GenerateServiceLastAccessedDetailsRequest& operator=(GenerateServiceLastAccessedDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && this->granularity_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline GenerateServiceLastAccessedDetailsRequest& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline GenerateServiceLastAccessedDetailsRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the RAM identity for which you want to generate a permission audit report. Resource Access Management (RAM) users and regular RAM roles are supported.
    // 
    // Format:
    // - Resource Access Management (RAM) user: `acs:ram::<account_id>:user/<user_name>`
    // - RAM role: `acs:ram::<account_id>:role/<role_name>`
    // 
    // This parameter is required.
    shared_ptr<string> arn_ {};
    // The granularity of the permission audit report. Valid values:
    // - `SERVICE_LEVEL`: analyzes the permissions and access records of the RAM identity at the cloud service level. You can view the cloud service permissions granted to the RAM identity, the cloud services that the RAM identity has accessed, and the last access time for each cloud service. For more information about the cloud services that support service-level auditing, see [Cloud services that support permission auditing](https://www.alibabacloud.com/help/en/ram/cloud-services-that-support-permission-auditing).
    // - `ACTION_LEVEL`: analyzes the permissions and access records of the RAM identity at the API operation level, which provides a finer granularity than the service level. You can view the specific API operations that the RAM identity is authorized to perform and has performed. For more information about the cloud services that support operation-level auditing, see the cloud services whose **Audit granularity** is **Operation level** in [Cloud services that support permission auditing](https://www.alibabacloud.com/help/en/ram/cloud-services-that-support-permission-auditing).
    shared_ptr<string> granularity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
