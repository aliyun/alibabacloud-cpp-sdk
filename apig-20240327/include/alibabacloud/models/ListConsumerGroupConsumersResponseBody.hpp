// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERGROUPCONSUMERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERGROUPCONSUMERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListConsumerGroupConsumersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerGroupConsumersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerGroupConsumersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListConsumerGroupConsumersResponseBody() = default ;
    ListConsumerGroupConsumersResponseBody(const ListConsumerGroupConsumersResponseBody &) = default ;
    ListConsumerGroupConsumersResponseBody(ListConsumerGroupConsumersResponseBody &&) = default ;
    ListConsumerGroupConsumersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerGroupConsumersResponseBody() = default ;
    ListConsumerGroupConsumersResponseBody& operator=(const ListConsumerGroupConsumersResponseBody &) = default ;
    ListConsumerGroupConsumersResponseBody& operator=(ListConsumerGroupConsumersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
          DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(joinTimestamp, joinTimestamp_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
          DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(joinTimestamp, joinTimestamp_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->deployStatus_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->joinTimestamp_ == nullptr && this->name_ == nullptr; };
        // consumerId Field Functions 
        bool hasConsumerId() const { return this->consumerId_ != nullptr;};
        void deleteConsumerId() { this->consumerId_ = nullptr;};
        inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
        inline Items& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


        // deployStatus Field Functions 
        bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
        void deleteDeployStatus() { this->deployStatus_ = nullptr;};
        inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
        inline Items& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Items& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // joinTimestamp Field Functions 
        bool hasJoinTimestamp() const { return this->joinTimestamp_ != nullptr;};
        void deleteJoinTimestamp() { this->joinTimestamp_ = nullptr;};
        inline int64_t getJoinTimestamp() const { DARABONBA_PTR_GET_DEFAULT(joinTimestamp_, 0L) };
        inline Items& setJoinTimestamp(int64_t joinTimestamp) { DARABONBA_PTR_SET_VALUE(joinTimestamp_, joinTimestamp) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> consumerId_ {};
        shared_ptr<string> deployStatus_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<int64_t> joinTimestamp_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListConsumerGroupConsumersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListConsumerGroupConsumersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListConsumerGroupConsumersResponseBody::Data) };
    inline ListConsumerGroupConsumersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListConsumerGroupConsumersResponseBody::Data) };
    inline ListConsumerGroupConsumersResponseBody& setData(const ListConsumerGroupConsumersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConsumerGroupConsumersResponseBody& setData(ListConsumerGroupConsumersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConsumerGroupConsumersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsumerGroupConsumersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListConsumerGroupConsumersResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
