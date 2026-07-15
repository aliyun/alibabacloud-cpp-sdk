// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSRESPONSEBODY_HPP_
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
  class ListConsumerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListConsumerGroupsResponseBody() = default ;
    ListConsumerGroupsResponseBody(const ListConsumerGroupsResponseBody &) = default ;
    ListConsumerGroupsResponseBody(ListConsumerGroupsResponseBody &&) = default ;
    ListConsumerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerGroupsResponseBody() = default ;
    ListConsumerGroupsResponseBody& operator=(const ListConsumerGroupsResponseBody &) = default ;
    ListConsumerGroupsResponseBody& operator=(ListConsumerGroupsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(consumerCount, consumerCount_);
          DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
          DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(consumerCount, consumerCount_);
          DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
          DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
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
        virtual bool empty() const override { return this->consumerCount_ == nullptr
        && this->consumerGroupId_ == nullptr && this->createTimestamp_ == nullptr && this->description_ == nullptr && this->gatewayType_ == nullptr && this->name_ == nullptr; };
        // consumerCount Field Functions 
        bool hasConsumerCount() const { return this->consumerCount_ != nullptr;};
        void deleteConsumerCount() { this->consumerCount_ = nullptr;};
        inline int64_t getConsumerCount() const { DARABONBA_PTR_GET_DEFAULT(consumerCount_, 0L) };
        inline Items& setConsumerCount(int64_t consumerCount) { DARABONBA_PTR_SET_VALUE(consumerCount_, consumerCount) };


        // consumerGroupId Field Functions 
        bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
        void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
        inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
        inline Items& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Items& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gatewayType Field Functions 
        bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
        void deleteGatewayType() { this->gatewayType_ = nullptr;};
        inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
        inline Items& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<int64_t> consumerCount_ {};
        shared_ptr<string> consumerGroupId_ {};
        shared_ptr<int64_t> createTimestamp_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> gatewayType_ {};
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
    inline ListConsumerGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListConsumerGroupsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListConsumerGroupsResponseBody::Data) };
    inline ListConsumerGroupsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListConsumerGroupsResponseBody::Data) };
    inline ListConsumerGroupsResponseBody& setData(const ListConsumerGroupsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConsumerGroupsResponseBody& setData(ListConsumerGroupsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConsumerGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsumerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListConsumerGroupsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
