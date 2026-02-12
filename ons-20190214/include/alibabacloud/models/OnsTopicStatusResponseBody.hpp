// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTOPICSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSTOPICSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTopicStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTopicStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTopicStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsTopicStatusResponseBody() = default ;
    OnsTopicStatusResponseBody(const OnsTopicStatusResponseBody &) = default ;
    OnsTopicStatusResponseBody(OnsTopicStatusResponseBody &&) = default ;
    OnsTopicStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTopicStatusResponseBody() = default ;
    OnsTopicStatusResponseBody& operator=(const OnsTopicStatusResponseBody &) = default ;
    OnsTopicStatusResponseBody& operator=(OnsTopicStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LastTimeStamp, lastTimeStamp_);
        DARABONBA_PTR_TO_JSON(Perm, perm_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LastTimeStamp, lastTimeStamp_);
        DARABONBA_PTR_FROM_JSON(Perm, perm_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      virtual bool empty() const override { return this->lastTimeStamp_ == nullptr
        && this->perm_ == nullptr && this->totalCount_ == nullptr; };
      // lastTimeStamp Field Functions 
      bool hasLastTimeStamp() const { return this->lastTimeStamp_ != nullptr;};
      void deleteLastTimeStamp() { this->lastTimeStamp_ = nullptr;};
      inline int64_t getLastTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimeStamp_, 0L) };
      inline Data& setLastTimeStamp(int64_t lastTimeStamp) { DARABONBA_PTR_SET_VALUE(lastTimeStamp_, lastTimeStamp) };


      // perm Field Functions 
      bool hasPerm() const { return this->perm_ != nullptr;};
      void deletePerm() { this->perm_ = nullptr;};
      inline int32_t getPerm() const { DARABONBA_PTR_GET_DEFAULT(perm_, 0) };
      inline Data& setPerm(int32_t perm) { DARABONBA_PTR_SET_VALUE(perm_, perm) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The point in time when the latest message is ready in the topic. If no message exists in the topic, the return value of this parameter is 0.
      // 
      // The value of this parameter is a UNIX timestamp in milliseconds.
      // 
      // For information about the definition of ready messages and ready time, see [Terms](https://help.aliyun.com/document_detail/29533.html).
      shared_ptr<int64_t> lastTimeStamp_ {};
      // Indicates the operations that you can perform on the topic. Valid values:
      // 
      // *   **2**: You can publish messages to the topic.
      // *   **4**: You can subscribe to the topic.
      // *   **6**: You can publish messages to and subscribe to the topic.
      shared_ptr<int32_t> perm_ {};
      // The total number of messages in all partitions of the topic.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsTopicStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsTopicStatusResponseBody::Data) };
    inline OnsTopicStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsTopicStatusResponseBody::Data) };
    inline OnsTopicStatusResponseBody& setData(const OnsTopicStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsTopicStatusResponseBody& setData(OnsTopicStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsTopicStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data structure of the queried topic.
    shared_ptr<OnsTopicStatusResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
