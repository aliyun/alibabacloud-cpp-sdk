// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVPPRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVPPRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class ListAivppResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAivppResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAivppResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAivppResourcesResponseBody() = default ;
    ListAivppResourcesResponseBody(const ListAivppResourcesResponseBody &) = default ;
    ListAivppResourcesResponseBody(ListAivppResourcesResponseBody &&) = default ;
    ListAivppResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAivppResourcesResponseBody() = default ;
    ListAivppResourcesResponseBody& operator=(const ListAivppResourcesResponseBody &) = default ;
    ListAivppResourcesResponseBody& operator=(ListAivppResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectNum, connectNum_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(LeftQuantity, leftQuantity_);
        DARABONBA_PTR_TO_JSON(MessageTps, messageTps_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(Specification, specification_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectNum, connectNum_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(LeftQuantity, leftQuantity_);
        DARABONBA_PTR_FROM_JSON(MessageTps, messageTps_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(Specification, specification_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->connectNum_ == nullptr
        && this->detail_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->leftQuantity_ == nullptr
        && this->messageTps_ == nullptr && this->orderId_ == nullptr && this->quantity_ == nullptr && this->specification_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->userId_ == nullptr; };
      // connectNum Field Functions 
      bool hasConnectNum() const { return this->connectNum_ != nullptr;};
      void deleteConnectNum() { this->connectNum_ = nullptr;};
      inline int32_t getConnectNum() const { DARABONBA_PTR_GET_DEFAULT(connectNum_, 0) };
      inline Data& setConnectNum(int32_t connectNum) { DARABONBA_PTR_SET_VALUE(connectNum_, connectNum) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Data& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Data& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // leftQuantity Field Functions 
      bool hasLeftQuantity() const { return this->leftQuantity_ != nullptr;};
      void deleteLeftQuantity() { this->leftQuantity_ = nullptr;};
      inline string getLeftQuantity() const { DARABONBA_PTR_GET_DEFAULT(leftQuantity_, "") };
      inline Data& setLeftQuantity(string leftQuantity) { DARABONBA_PTR_SET_VALUE(leftQuantity_, leftQuantity) };


      // messageTps Field Functions 
      bool hasMessageTps() const { return this->messageTps_ != nullptr;};
      void deleteMessageTps() { this->messageTps_ = nullptr;};
      inline int32_t getMessageTps() const { DARABONBA_PTR_GET_DEFAULT(messageTps_, 0) };
      inline Data& setMessageTps(int32_t messageTps) { DARABONBA_PTR_SET_VALUE(messageTps_, messageTps) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Data& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
      inline Data& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // specification Field Functions 
      bool hasSpecification() const { return this->specification_ != nullptr;};
      void deleteSpecification() { this->specification_ = nullptr;};
      inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
      inline Data& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int32_t> connectNum_ {};
      shared_ptr<string> detail_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceType_ {};
      shared_ptr<string> leftQuantity_ {};
      shared_ptr<int32_t> messageTps_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<string> quantity_ {};
      shared_ptr<string> specification_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAivppResourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAivppResourcesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAivppResourcesResponseBody::Data>) };
    inline vector<ListAivppResourcesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAivppResourcesResponseBody::Data>) };
    inline ListAivppResourcesResponseBody& setData(const vector<ListAivppResourcesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAivppResourcesResponseBody& setData(vector<ListAivppResourcesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAivppResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAivppResourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAivppResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAivppResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListAivppResourcesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAivppResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAivppResourcesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
