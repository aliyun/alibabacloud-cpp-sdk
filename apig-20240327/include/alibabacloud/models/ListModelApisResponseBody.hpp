// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelApiListApiInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListModelApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListModelApisResponseBody() = default ;
    ListModelApisResponseBody(const ListModelApisResponseBody &) = default ;
    ListModelApisResponseBody(ListModelApisResponseBody &&) = default ;
    ListModelApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelApisResponseBody() = default ;
    ListModelApisResponseBody& operator=(const ListModelApisResponseBody &) = default ;
    ListModelApisResponseBody& operator=(ListModelApisResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(creationMode, creationMode_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(versionEnabled, versionEnabled_);
          DARABONBA_PTR_TO_JSON(versionedHttpApis, versionedHttpApis_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(creationMode, creationMode_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(versionEnabled, versionEnabled_);
          DARABONBA_PTR_FROM_JSON(versionedHttpApis, versionedHttpApis_);
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
        virtual bool empty() const override { return this->creationMode_ == nullptr
        && this->gatewayId_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->versionEnabled_ == nullptr && this->versionedHttpApis_ == nullptr; };
        // creationMode Field Functions 
        bool hasCreationMode() const { return this->creationMode_ != nullptr;};
        void deleteCreationMode() { this->creationMode_ = nullptr;};
        inline string getCreationMode() const { DARABONBA_PTR_GET_DEFAULT(creationMode_, "") };
        inline Items& setCreationMode(string creationMode) { DARABONBA_PTR_SET_VALUE(creationMode_, creationMode) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // versionEnabled Field Functions 
        bool hasVersionEnabled() const { return this->versionEnabled_ != nullptr;};
        void deleteVersionEnabled() { this->versionEnabled_ = nullptr;};
        inline bool getVersionEnabled() const { DARABONBA_PTR_GET_DEFAULT(versionEnabled_, false) };
        inline Items& setVersionEnabled(bool versionEnabled) { DARABONBA_PTR_SET_VALUE(versionEnabled_, versionEnabled) };


        // versionedHttpApis Field Functions 
        bool hasVersionedHttpApis() const { return this->versionedHttpApis_ != nullptr;};
        void deleteVersionedHttpApis() { this->versionedHttpApis_ = nullptr;};
        inline const vector<ModelApiListApiInfo> & getVersionedHttpApis() const { DARABONBA_PTR_GET_CONST(versionedHttpApis_, vector<ModelApiListApiInfo>) };
        inline vector<ModelApiListApiInfo> getVersionedHttpApis() { DARABONBA_PTR_GET(versionedHttpApis_, vector<ModelApiListApiInfo>) };
        inline Items& setVersionedHttpApis(const vector<ModelApiListApiInfo> & versionedHttpApis) { DARABONBA_PTR_SET_VALUE(versionedHttpApis_, versionedHttpApis) };
        inline Items& setVersionedHttpApis(vector<ModelApiListApiInfo> && versionedHttpApis) { DARABONBA_PTR_SET_RVALUE(versionedHttpApis_, versionedHttpApis) };


      protected:
        // The creation mode. Valid values: ChooseModel (created by selecting a model) and Scene (created by scenario). Single-object operations still use the ModelApi or HttpApi operation corresponding to the mode.
        shared_ptr<string> creationMode_ {};
        // The gateway instance ID.
        shared_ptr<string> gatewayId_ {};
        // The name of the API.
        shared_ptr<string> name_ {};
        // The type of the API.
        shared_ptr<string> type_ {};
        // Indicates whether version management is enabled.
        shared_ptr<bool> versionEnabled_ {};
        // The versioned API information.
        shared_ptr<vector<ModelApiListApiInfo>> versionedHttpApis_ {};
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
      // The model API information.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListModelApisResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListModelApisResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListModelApisResponseBody::Data) };
    inline ListModelApisResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListModelApisResponseBody::Data) };
    inline ListModelApisResponseBody& setData(const ListModelApisResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListModelApisResponseBody& setData(ListModelApisResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListModelApisResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The list of model APIs.
    shared_ptr<ListModelApisResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID. It is generated by the system and used to locate the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
