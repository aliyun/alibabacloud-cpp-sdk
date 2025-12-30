// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUSINESSOPPORTUNITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUSINESSOPPORTUNITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class CreateBusinessOpportunityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBusinessOpportunityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(VCode, VCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBusinessOpportunityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(VCode, VCode_);
    };
    CreateBusinessOpportunityRequest() = default ;
    CreateBusinessOpportunityRequest(const CreateBusinessOpportunityRequest &) = default ;
    CreateBusinessOpportunityRequest(CreateBusinessOpportunityRequest &&) = default ;
    CreateBusinessOpportunityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBusinessOpportunityRequest() = default ;
    CreateBusinessOpportunityRequest& operator=(const CreateBusinessOpportunityRequest &) = default ;
    CreateBusinessOpportunityRequest& operator=(CreateBusinessOpportunityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->contactName_ == nullptr && this->mobile_ == nullptr && this->source_ == nullptr && this->VCode_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateBusinessOpportunityRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CreateBusinessOpportunityRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CreateBusinessOpportunityRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline CreateBusinessOpportunityRequest& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // VCode Field Functions 
    bool hasVCode() const { return this->VCode_ != nullptr;};
    void deleteVCode() { this->VCode_ = nullptr;};
    inline string getVCode() const { DARABONBA_PTR_GET_DEFAULT(VCode_, "") };
    inline CreateBusinessOpportunityRequest& setVCode(string VCode) { DARABONBA_PTR_SET_VALUE(VCode_, VCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    shared_ptr<string> contactName_ {};
    // This parameter is required.
    shared_ptr<string> mobile_ {};
    // This parameter is required.
    shared_ptr<int32_t> source_ {};
    shared_ptr<string> VCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
