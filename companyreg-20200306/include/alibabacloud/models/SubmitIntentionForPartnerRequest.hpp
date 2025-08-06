// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITINTENTIONFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITINTENTIONFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class SubmitIntentionForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIntentionForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(Grade, grade_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIntentionForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(Grade, grade_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SubmitIntentionForPartnerRequest() = default ;
    SubmitIntentionForPartnerRequest(const SubmitIntentionForPartnerRequest &) = default ;
    SubmitIntentionForPartnerRequest(SubmitIntentionForPartnerRequest &&) = default ;
    SubmitIntentionForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIntentionForPartnerRequest() = default ;
    SubmitIntentionForPartnerRequest& operator=(const SubmitIntentionForPartnerRequest &) = default ;
    SubmitIntentionForPartnerRequest& operator=(SubmitIntentionForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->bizType_ != nullptr && this->channel_ != nullptr && this->commodityType_ != nullptr && this->contactName_ != nullptr && this->description_ != nullptr
        && this->extInfo_ != nullptr && this->grade_ != nullptr && this->mobile_ != nullptr && this->userId_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline SubmitIntentionForPartnerRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline SubmitIntentionForPartnerRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline SubmitIntentionForPartnerRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // commodityType Field Functions 
    bool hasCommodityType() const { return this->commodityType_ != nullptr;};
    void deleteCommodityType() { this->commodityType_ = nullptr;};
    inline string commodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
    inline SubmitIntentionForPartnerRequest& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline SubmitIntentionForPartnerRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitIntentionForPartnerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline SubmitIntentionForPartnerRequest& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline int32_t grade() const { DARABONBA_PTR_GET_DEFAULT(grade_, 0) };
    inline SubmitIntentionForPartnerRequest& setGrade(int32_t grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline SubmitIntentionForPartnerRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SubmitIntentionForPartnerRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> area_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> commodityType_ = nullptr;
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> extInfo_ = nullptr;
    std::shared_ptr<int32_t> grade_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
