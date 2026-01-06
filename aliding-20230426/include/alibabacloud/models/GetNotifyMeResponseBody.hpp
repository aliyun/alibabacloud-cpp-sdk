// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTIFYMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNOTIFYMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNotifyMeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotifyMeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetNotifyMeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetNotifyMeResponseBody() = default ;
    GetNotifyMeResponseBody(const GetNotifyMeResponseBody &) = default ;
    GetNotifyMeResponseBody(GetNotifyMeResponseBody &&) = default ;
    GetNotifyMeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotifyMeResponseBody() = default ;
    GetNotifyMeResponseBody& operator=(const GetNotifyMeResponseBody &) = default ;
    GetNotifyMeResponseBody& operator=(GetNotifyMeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
        DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
        DARABONBA_PTR_TO_JSON(InstStatus, instStatus_);
        DARABONBA_PTR_TO_JSON(MobileUrl, mobileUrl_);
        DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
        DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
        DARABONBA_PTR_FROM_JSON(InstStatus, instStatus_);
        DARABONBA_PTR_FROM_JSON(MobileUrl, mobileUrl_);
        DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activityId_ == nullptr
        && this->appType_ == nullptr && this->corpId_ == nullptr && this->createTimeGMT_ == nullptr && this->creatorUserId_ == nullptr && this->formInstanceId_ == nullptr
        && this->instStatus_ == nullptr && this->mobileUrl_ == nullptr && this->modifiedTimeGMT_ == nullptr; };
      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
      inline Data& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Data& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // createTimeGMT Field Functions 
      bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
      void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
      inline string getCreateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
      inline Data& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


      // creatorUserId Field Functions 
      bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
      void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
      inline string getCreatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
      inline Data& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


      // formInstanceId Field Functions 
      bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
      void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
      inline string getFormInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
      inline Data& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


      // instStatus Field Functions 
      bool hasInstStatus() const { return this->instStatus_ != nullptr;};
      void deleteInstStatus() { this->instStatus_ = nullptr;};
      inline string getInstStatus() const { DARABONBA_PTR_GET_DEFAULT(instStatus_, "") };
      inline Data& setInstStatus(string instStatus) { DARABONBA_PTR_SET_VALUE(instStatus_, instStatus) };


      // mobileUrl Field Functions 
      bool hasMobileUrl() const { return this->mobileUrl_ != nullptr;};
      void deleteMobileUrl() { this->mobileUrl_ = nullptr;};
      inline string getMobileUrl() const { DARABONBA_PTR_GET_DEFAULT(mobileUrl_, "") };
      inline Data& setMobileUrl(string mobileUrl) { DARABONBA_PTR_SET_VALUE(mobileUrl_, mobileUrl) };


      // modifiedTimeGMT Field Functions 
      bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
      void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
      inline string getModifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
      inline Data& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    protected:
      shared_ptr<string> activityId_ {};
      shared_ptr<string> appType_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> createTimeGMT_ {};
      shared_ptr<string> creatorUserId_ {};
      shared_ptr<string> formInstanceId_ {};
      shared_ptr<string> instStatus_ {};
      shared_ptr<string> mobileUrl_ {};
      shared_ptr<string> modifiedTimeGMT_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetNotifyMeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetNotifyMeResponseBody::Data>) };
    inline vector<GetNotifyMeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetNotifyMeResponseBody::Data>) };
    inline GetNotifyMeResponseBody& setData(const vector<GetNotifyMeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNotifyMeResponseBody& setData(vector<GetNotifyMeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetNotifyMeResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNotifyMeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetNotifyMeResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetNotifyMeResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetNotifyMeResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<GetNotifyMeResponseBody::Data>> data_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
