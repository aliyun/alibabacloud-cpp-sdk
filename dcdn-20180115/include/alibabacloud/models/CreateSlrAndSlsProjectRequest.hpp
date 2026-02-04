// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLRANDSLSPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESLRANDSLSPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateSlrAndSlsProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlrAndSlsProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlrAndSlsProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    CreateSlrAndSlsProjectRequest() = default ;
    CreateSlrAndSlsProjectRequest(const CreateSlrAndSlsProjectRequest &) = default ;
    CreateSlrAndSlsProjectRequest(CreateSlrAndSlsProjectRequest &&) = default ;
    CreateSlrAndSlsProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlrAndSlsProjectRequest() = default ;
    CreateSlrAndSlsProjectRequest& operator=(const CreateSlrAndSlsProjectRequest &) = default ;
    CreateSlrAndSlsProjectRequest& operator=(CreateSlrAndSlsProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->region_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateSlrAndSlsProjectRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateSlrAndSlsProjectRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The type of the collected logs. Default value: cdn_log_access_l1. Valid values:
    // 
    // *   **cdn_log_access_l1**: access logs of L1 Dynamic Route for CDN (DCDN) points of presence (POPs)
    // *   **cdn_log_origin**: back-to-origin logs
    // *   **cdn_log_er**: EdgeRoutine logs
    shared_ptr<string> businessType_ {};
    // The region where Log Service resides. Valid values:
    // 
    // *   **cn-hangzhou**
    // *   **cn-shanghai**
    // *   **cn-qingdao**
    // *   **cn-beijing**
    // *   **cn-zhangjiakou**
    // *   **cn-shenzhen**
    // *   **eu-central-1**
    // *   **us-west-1**
    // *   **ap-south-1**
    // *   **ap-southeast-1**
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
