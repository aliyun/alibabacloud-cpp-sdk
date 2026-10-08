// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTCHANGEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTCHANGEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRecentChangeOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentChangeOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderList, changeOrderList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentChangeOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderList, changeOrderList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecentChangeOrderResponseBody() = default ;
    ListRecentChangeOrderResponseBody(const ListRecentChangeOrderResponseBody &) = default ;
    ListRecentChangeOrderResponseBody(ListRecentChangeOrderResponseBody &&) = default ;
    ListRecentChangeOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentChangeOrderResponseBody() = default ;
    ListRecentChangeOrderResponseBody& operator=(const ListRecentChangeOrderResponseBody &) = default ;
    ListRecentChangeOrderResponseBody& operator=(ListRecentChangeOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChangeOrderList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeOrderList& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeOrder, changeOrder_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeOrderList& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeOrder, changeOrder_);
      };
      ChangeOrderList() = default ;
      ChangeOrderList(const ChangeOrderList &) = default ;
      ChangeOrderList(ChangeOrderList &&) = default ;
      ChangeOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeOrderList() = default ;
      ChangeOrderList& operator=(const ChangeOrderList &) = default ;
      ChangeOrderList& operator=(ChangeOrderList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChangeOrder : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeOrder& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(BatchCount, batchCount_);
          DARABONBA_PTR_TO_JSON(BatchType, batchType_);
          DARABONBA_PTR_TO_JSON(ChangeOrderDescription, changeOrderDescription_);
          DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
          DARABONBA_PTR_TO_JSON(CoType, coType_);
          DARABONBA_PTR_TO_JSON(CoTypeCode, coTypeCode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeOrder& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(BatchCount, batchCount_);
          DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
          DARABONBA_PTR_FROM_JSON(ChangeOrderDescription, changeOrderDescription_);
          DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
          DARABONBA_PTR_FROM_JSON(CoType, coType_);
          DARABONBA_PTR_FROM_JSON(CoTypeCode, coTypeCode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        ChangeOrder() = default ;
        ChangeOrder(const ChangeOrder &) = default ;
        ChangeOrder(ChangeOrder &&) = default ;
        ChangeOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeOrder() = default ;
        ChangeOrder& operator=(const ChangeOrder &) = default ;
        ChangeOrder& operator=(ChangeOrder &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->batchCount_ == nullptr && this->batchType_ == nullptr && this->changeOrderDescription_ == nullptr && this->changeOrderId_ == nullptr && this->coType_ == nullptr
        && this->coTypeCode_ == nullptr && this->createTime_ == nullptr && this->createUserId_ == nullptr && this->finishTime_ == nullptr && this->groupId_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline ChangeOrder& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // batchCount Field Functions 
        bool hasBatchCount() const { return this->batchCount_ != nullptr;};
        void deleteBatchCount() { this->batchCount_ = nullptr;};
        inline int32_t getBatchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0) };
        inline ChangeOrder& setBatchCount(int32_t batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


        // batchType Field Functions 
        bool hasBatchType() const { return this->batchType_ != nullptr;};
        void deleteBatchType() { this->batchType_ = nullptr;};
        inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
        inline ChangeOrder& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


        // changeOrderDescription Field Functions 
        bool hasChangeOrderDescription() const { return this->changeOrderDescription_ != nullptr;};
        void deleteChangeOrderDescription() { this->changeOrderDescription_ = nullptr;};
        inline string getChangeOrderDescription() const { DARABONBA_PTR_GET_DEFAULT(changeOrderDescription_, "") };
        inline ChangeOrder& setChangeOrderDescription(string changeOrderDescription) { DARABONBA_PTR_SET_VALUE(changeOrderDescription_, changeOrderDescription) };


        // changeOrderId Field Functions 
        bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
        void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
        inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
        inline ChangeOrder& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


        // coType Field Functions 
        bool hasCoType() const { return this->coType_ != nullptr;};
        void deleteCoType() { this->coType_ = nullptr;};
        inline string getCoType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
        inline ChangeOrder& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


        // coTypeCode Field Functions 
        bool hasCoTypeCode() const { return this->coTypeCode_ != nullptr;};
        void deleteCoTypeCode() { this->coTypeCode_ = nullptr;};
        inline string getCoTypeCode() const { DARABONBA_PTR_GET_DEFAULT(coTypeCode_, "") };
        inline ChangeOrder& setCoTypeCode(string coTypeCode) { DARABONBA_PTR_SET_VALUE(coTypeCode_, coTypeCode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ChangeOrder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUserId Field Functions 
        bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
        void deleteCreateUserId() { this->createUserId_ = nullptr;};
        inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
        inline ChangeOrder& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline ChangeOrder& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ChangeOrder& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ChangeOrder& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ChangeOrder& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ChangeOrder& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<int32_t> batchCount_ {};
        shared_ptr<string> batchType_ {};
        shared_ptr<string> changeOrderDescription_ {};
        shared_ptr<string> changeOrderId_ {};
        shared_ptr<string> coType_ {};
        shared_ptr<string> coTypeCode_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> createUserId_ {};
        shared_ptr<string> finishTime_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> source_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->changeOrder_ == nullptr; };
      // changeOrder Field Functions 
      bool hasChangeOrder() const { return this->changeOrder_ != nullptr;};
      void deleteChangeOrder() { this->changeOrder_ = nullptr;};
      inline const vector<ChangeOrderList::ChangeOrder> & getChangeOrder() const { DARABONBA_PTR_GET_CONST(changeOrder_, vector<ChangeOrderList::ChangeOrder>) };
      inline vector<ChangeOrderList::ChangeOrder> getChangeOrder() { DARABONBA_PTR_GET(changeOrder_, vector<ChangeOrderList::ChangeOrder>) };
      inline ChangeOrderList& setChangeOrder(const vector<ChangeOrderList::ChangeOrder> & changeOrder) { DARABONBA_PTR_SET_VALUE(changeOrder_, changeOrder) };
      inline ChangeOrderList& setChangeOrder(vector<ChangeOrderList::ChangeOrder> && changeOrder) { DARABONBA_PTR_SET_RVALUE(changeOrder_, changeOrder) };


    protected:
      shared_ptr<vector<ChangeOrderList::ChangeOrder>> changeOrder_ {};
    };

    virtual bool empty() const override { return this->changeOrderList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // changeOrderList Field Functions 
    bool hasChangeOrderList() const { return this->changeOrderList_ != nullptr;};
    void deleteChangeOrderList() { this->changeOrderList_ = nullptr;};
    inline const ListRecentChangeOrderResponseBody::ChangeOrderList & getChangeOrderList() const { DARABONBA_PTR_GET_CONST(changeOrderList_, ListRecentChangeOrderResponseBody::ChangeOrderList) };
    inline ListRecentChangeOrderResponseBody::ChangeOrderList getChangeOrderList() { DARABONBA_PTR_GET(changeOrderList_, ListRecentChangeOrderResponseBody::ChangeOrderList) };
    inline ListRecentChangeOrderResponseBody& setChangeOrderList(const ListRecentChangeOrderResponseBody::ChangeOrderList & changeOrderList) { DARABONBA_PTR_SET_VALUE(changeOrderList_, changeOrderList) };
    inline ListRecentChangeOrderResponseBody& setChangeOrderList(ListRecentChangeOrderResponseBody::ChangeOrderList && changeOrderList) { DARABONBA_PTR_SET_RVALUE(changeOrderList_, changeOrderList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListRecentChangeOrderResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRecentChangeOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentChangeOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListRecentChangeOrderResponseBody::ChangeOrderList> changeOrderList_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
