// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOSQUERYREGISTRATIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOSQUERYREGISTRATIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class MosQueryRegistrationInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MosQueryRegistrationInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(CheckinStatus, checkinStatus_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QrCode, qrCode_);
    };
    friend void from_json(const Darabonba::Json& j, MosQueryRegistrationInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(CheckinStatus, checkinStatus_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QrCode, qrCode_);
    };
    MosQueryRegistrationInfoRequest() = default ;
    MosQueryRegistrationInfoRequest(const MosQueryRegistrationInfoRequest &) = default ;
    MosQueryRegistrationInfoRequest(MosQueryRegistrationInfoRequest &&) = default ;
    MosQueryRegistrationInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MosQueryRegistrationInfoRequest() = default ;
    MosQueryRegistrationInfoRequest& operator=(const MosQueryRegistrationInfoRequest &) = default ;
    MosQueryRegistrationInfoRequest& operator=(MosQueryRegistrationInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityId_ == nullptr
        && this->checkinStatus_ == nullptr && this->keyword_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->qrCode_ == nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline MosQueryRegistrationInfoRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // checkinStatus Field Functions 
    bool hasCheckinStatus() const { return this->checkinStatus_ != nullptr;};
    void deleteCheckinStatus() { this->checkinStatus_ = nullptr;};
    inline string getCheckinStatus() const { DARABONBA_PTR_GET_DEFAULT(checkinStatus_, "") };
    inline MosQueryRegistrationInfoRequest& setCheckinStatus(string checkinStatus) { DARABONBA_PTR_SET_VALUE(checkinStatus_, checkinStatus) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline MosQueryRegistrationInfoRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline MosQueryRegistrationInfoRequest& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline MosQueryRegistrationInfoRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qrCode Field Functions 
    bool hasQrCode() const { return this->qrCode_ != nullptr;};
    void deleteQrCode() { this->qrCode_ = nullptr;};
    inline string getQrCode() const { DARABONBA_PTR_GET_DEFAULT(qrCode_, "") };
    inline MosQueryRegistrationInfoRequest& setQrCode(string qrCode) { DARABONBA_PTR_SET_VALUE(qrCode_, qrCode) };


  protected:
    shared_ptr<string> activityId_ {};
    shared_ptr<string> checkinStatus_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> page_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> qrCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
