// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSOLUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSOLUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListUserSolutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSolutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSolutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    ListUserSolutionsResponseBody() = default ;
    ListUserSolutionsResponseBody(const ListUserSolutionsResponseBody &) = default ;
    ListUserSolutionsResponseBody(ListUserSolutionsResponseBody &&) = default ;
    ListUserSolutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSolutionsResponseBody() = default ;
    ListUserSolutionsResponseBody& operator=(const ListUserSolutionsResponseBody &) = default ;
    ListUserSolutionsResponseBody& operator=(ListUserSolutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeliveryOrderBizId, deliveryOrderBizId_);
        DARABONBA_PTR_TO_JSON(IntentionAssignBizId, intentionAssignBizId_);
        DARABONBA_PTR_TO_JSON(IntentionBizId, intentionBizId_);
        DARABONBA_PTR_TO_JSON(PartnerCode, partnerCode_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeliveryOrderBizId, deliveryOrderBizId_);
        DARABONBA_PTR_FROM_JSON(IntentionAssignBizId, intentionAssignBizId_);
        DARABONBA_PTR_FROM_JSON(IntentionBizId, intentionBizId_);
        DARABONBA_PTR_FROM_JSON(PartnerCode, partnerCode_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->createTime_ == nullptr && this->deliveryOrderBizId_ == nullptr && this->intentionAssignBizId_ == nullptr && this->intentionBizId_ == nullptr
        && this->partnerCode_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Data& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline Data& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deliveryOrderBizId Field Functions 
      bool hasDeliveryOrderBizId() const { return this->deliveryOrderBizId_ != nullptr;};
      void deleteDeliveryOrderBizId() { this->deliveryOrderBizId_ = nullptr;};
      inline string getDeliveryOrderBizId() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderBizId_, "") };
      inline Data& setDeliveryOrderBizId(string deliveryOrderBizId) { DARABONBA_PTR_SET_VALUE(deliveryOrderBizId_, deliveryOrderBizId) };


      // intentionAssignBizId Field Functions 
      bool hasIntentionAssignBizId() const { return this->intentionAssignBizId_ != nullptr;};
      void deleteIntentionAssignBizId() { this->intentionAssignBizId_ = nullptr;};
      inline string getIntentionAssignBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionAssignBizId_, "") };
      inline Data& setIntentionAssignBizId(string intentionAssignBizId) { DARABONBA_PTR_SET_VALUE(intentionAssignBizId_, intentionAssignBizId) };


      // intentionBizId Field Functions 
      bool hasIntentionBizId() const { return this->intentionBizId_ != nullptr;};
      void deleteIntentionBizId() { this->intentionBizId_ = nullptr;};
      inline string getIntentionBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionBizId_, "") };
      inline Data& setIntentionBizId(string intentionBizId) { DARABONBA_PTR_SET_VALUE(intentionBizId_, intentionBizId) };


      // partnerCode Field Functions 
      bool hasPartnerCode() const { return this->partnerCode_ != nullptr;};
      void deletePartnerCode() { this->partnerCode_ = nullptr;};
      inline string getPartnerCode() const { DARABONBA_PTR_GET_DEFAULT(partnerCode_, "") };
      inline Data& setPartnerCode(string partnerCode) { DARABONBA_PTR_SET_VALUE(partnerCode_, partnerCode) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> bizId_ {};
      shared_ptr<string> bizType_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> deliveryOrderBizId_ {};
      shared_ptr<string> intentionAssignBizId_ {};
      shared_ptr<string> intentionBizId_ {};
      shared_ptr<string> partnerCode_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline ListUserSolutionsResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUserSolutionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUserSolutionsResponseBody::Data>) };
    inline vector<ListUserSolutionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUserSolutionsResponseBody::Data>) };
    inline ListUserSolutionsResponseBody& setData(const vector<ListUserSolutionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUserSolutionsResponseBody& setData(vector<ListUserSolutionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserSolutionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserSolutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline ListUserSolutionsResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline ListUserSolutionsResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<vector<ListUserSolutionsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
