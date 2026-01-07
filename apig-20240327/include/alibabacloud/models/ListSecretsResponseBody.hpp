// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/KMSConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListSecretsResponseBody() = default ;
    ListSecretsResponseBody(const ListSecretsResponseBody &) = default ;
    ListSecretsResponseBody(ListSecretsResponseBody &&) = default ;
    ListSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBody() = default ;
    ListSecretsResponseBody& operator=(const ListSecretsResponseBody &) = default ;
    ListSecretsResponseBody& operator=(ListSecretsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
          DARABONBA_PTR_TO_JSON(kmsConfig, kmsConfig_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(referenceCount, referenceCount_);
          DARABONBA_PTR_TO_JSON(secretId, secretId_);
          DARABONBA_PTR_TO_JSON(secretSource, secretSource_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
          DARABONBA_PTR_FROM_JSON(kmsConfig, kmsConfig_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(referenceCount, referenceCount_);
          DARABONBA_PTR_FROM_JSON(secretId, secretId_);
          DARABONBA_PTR_FROM_JSON(secretSource, secretSource_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
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
        virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->gatewayType_ == nullptr && this->kmsConfig_ == nullptr && this->name_ == nullptr && this->referenceCount_ == nullptr && this->secretId_ == nullptr
        && this->secretSource_ == nullptr && this->status_ == nullptr && this->updateTimestamp_ == nullptr; };
        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Items& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // gatewayType Field Functions 
        bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
        void deleteGatewayType() { this->gatewayType_ = nullptr;};
        inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
        inline Items& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


        // kmsConfig Field Functions 
        bool hasKmsConfig() const { return this->kmsConfig_ != nullptr;};
        void deleteKmsConfig() { this->kmsConfig_ = nullptr;};
        inline const KMSConfig & getKmsConfig() const { DARABONBA_PTR_GET_CONST(kmsConfig_, KMSConfig) };
        inline KMSConfig getKmsConfig() { DARABONBA_PTR_GET(kmsConfig_, KMSConfig) };
        inline Items& setKmsConfig(const KMSConfig & kmsConfig) { DARABONBA_PTR_SET_VALUE(kmsConfig_, kmsConfig) };
        inline Items& setKmsConfig(KMSConfig && kmsConfig) { DARABONBA_PTR_SET_RVALUE(kmsConfig_, kmsConfig) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // referenceCount Field Functions 
        bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
        void deleteReferenceCount() { this->referenceCount_ = nullptr;};
        inline int32_t getReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
        inline Items& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


        // secretId Field Functions 
        bool hasSecretId() const { return this->secretId_ != nullptr;};
        void deleteSecretId() { this->secretId_ = nullptr;};
        inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
        inline Items& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


        // secretSource Field Functions 
        bool hasSecretSource() const { return this->secretSource_ != nullptr;};
        void deleteSecretSource() { this->secretSource_ = nullptr;};
        inline string getSecretSource() const { DARABONBA_PTR_GET_DEFAULT(secretSource_, "") };
        inline Items& setSecretSource(string secretSource) { DARABONBA_PTR_SET_VALUE(secretSource_, secretSource) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Items& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        shared_ptr<int64_t> createTimestamp_ {};
        shared_ptr<string> gatewayType_ {};
        shared_ptr<KMSConfig> kmsConfig_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> referenceCount_ {};
        shared_ptr<string> secretId_ {};
        shared_ptr<string> secretSource_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> updateTimestamp_ {};
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
    inline ListSecretsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSecretsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSecretsResponseBody::Data) };
    inline ListSecretsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSecretsResponseBody::Data) };
    inline ListSecretsResponseBody& setData(const ListSecretsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSecretsResponseBody& setData(ListSecretsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSecretsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListSecretsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
