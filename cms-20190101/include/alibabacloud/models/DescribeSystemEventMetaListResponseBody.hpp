// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTMETALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTMETALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventMetaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventMetaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventMetaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSystemEventMetaListResponseBody() = default ;
    DescribeSystemEventMetaListResponseBody(const DescribeSystemEventMetaListResponseBody &) = default ;
    DescribeSystemEventMetaListResponseBody(DescribeSystemEventMetaListResponseBody &&) = default ;
    DescribeSystemEventMetaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventMetaListResponseBody() = default ;
    DescribeSystemEventMetaListResponseBody& operator=(const DescribeSystemEventMetaListResponseBody &) = default ;
    DescribeSystemEventMetaListResponseBody& operator=(DescribeSystemEventMetaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Resource, resource_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
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
      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NameDesc, nameDesc_);
          DARABONBA_PTR_TO_JSON(NameDesc.En, nameDesc_en_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameDesc, nameDesc_);
          DARABONBA_PTR_FROM_JSON(NameDesc.En, nameDesc_en_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        };
        Resource() = default ;
        Resource(const Resource &) = default ;
        Resource(Resource &&) = default ;
        Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resource() = default ;
        Resource& operator=(const Resource &) = default ;
        Resource& operator=(Resource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventType_ == nullptr
        && this->level_ == nullptr && this->name_ == nullptr && this->nameDesc_ == nullptr && this->nameDesc_en_ == nullptr && this->product_ == nullptr
        && this->status_ == nullptr && this->statusDesc_ == nullptr; };
        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline Resource& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Resource& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Resource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameDesc Field Functions 
        bool hasNameDesc() const { return this->nameDesc_ != nullptr;};
        void deleteNameDesc() { this->nameDesc_ = nullptr;};
        inline string getNameDesc() const { DARABONBA_PTR_GET_DEFAULT(nameDesc_, "") };
        inline Resource& setNameDesc(string nameDesc) { DARABONBA_PTR_SET_VALUE(nameDesc_, nameDesc) };


        // nameDesc_en Field Functions 
        bool hasNameDesc_en() const { return this->nameDesc_en_ != nullptr;};
        void deleteNameDesc_en() { this->nameDesc_en_ = nullptr;};
        inline string getNameDesc_en() const { DARABONBA_PTR_GET_DEFAULT(nameDesc_en_, "") };
        inline Resource& setNameDesc_en(string nameDesc_en) { DARABONBA_PTR_SET_VALUE(nameDesc_en_, nameDesc_en) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline Resource& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Resource& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline Resource& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      protected:
        // The type of the system event. Valid values:
        // 
        // *   StatusNotification: fault notifications
        // *   Exception: exceptions
        // *   Maintenance: O\\&M
        shared_ptr<string> eventType_ {};
        // The alert level. Valid values:
        // 
        // *   CRITICAL
        // *   WARN
        // *   INFO
        shared_ptr<string> level_ {};
        // The name of the system event.
        shared_ptr<string> name_ {};
        // The description of the event name.
        shared_ptr<string> nameDesc_ {};
        shared_ptr<string> nameDesc_en_ {};
        // The abbreviation of the service name.
        shared_ptr<string> product_ {};
        // The status of the system event.
        shared_ptr<string> status_ {};
        // The description of the event status.
        shared_ptr<string> statusDesc_ {};
      };

      virtual bool empty() const override { return this->resource_ == nullptr; };
      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const vector<Data::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Data::Resource>) };
      inline vector<Data::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Data::Resource>) };
      inline Data& setResource(const vector<Data::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Data& setResource(vector<Data::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    protected:
      shared_ptr<vector<Data::Resource>> resource_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeSystemEventMetaListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSystemEventMetaListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSystemEventMetaListResponseBody::Data) };
    inline DescribeSystemEventMetaListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSystemEventMetaListResponseBody::Data) };
    inline DescribeSystemEventMetaListResponseBody& setData(const DescribeSystemEventMetaListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSystemEventMetaListResponseBody& setData(DescribeSystemEventMetaListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSystemEventMetaListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemEventMetaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSystemEventMetaListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The queried meta information.
    shared_ptr<DescribeSystemEventMetaListResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
