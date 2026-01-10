// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelInfoConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListModelProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListModelProvidersResponseBody() = default ;
    ListModelProvidersResponseBody(const ListModelProvidersResponseBody &) = default ;
    ListModelProvidersResponseBody(ListModelProvidersResponseBody &&) = default ;
    ListModelProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelProvidersResponseBody() = default ;
    ListModelProvidersResponseBody& operator=(const ListModelProvidersResponseBody &) = default ;
    ListModelProvidersResponseBody& operator=(ListModelProvidersResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
          DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
          DARABONBA_PTR_TO_JSON(modelInfoConfig, modelInfoConfig_);
          DARABONBA_PTR_TO_JSON(modelType, modelType_);
          DARABONBA_PTR_TO_JSON(models, models_);
          DARABONBA_PTR_TO_JSON(providerName, providerName_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
          DARABONBA_PTR_FROM_JSON(modelInfoConfig, modelInfoConfig_);
          DARABONBA_PTR_FROM_JSON(modelType, modelType_);
          DARABONBA_PTR_FROM_JSON(models, models_);
          DARABONBA_PTR_FROM_JSON(providerName, providerName_);
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
        virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->modelInfoConfig_ == nullptr && this->modelType_ == nullptr && this->models_ == nullptr && this->providerName_ == nullptr; };
        // baseUrl Field Functions 
        bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
        void deleteBaseUrl() { this->baseUrl_ = nullptr;};
        inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
        inline Items& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


        // modelInfoConfig Field Functions 
        bool hasModelInfoConfig() const { return this->modelInfoConfig_ != nullptr;};
        void deleteModelInfoConfig() { this->modelInfoConfig_ = nullptr;};
        inline const ModelInfoConfig & getModelInfoConfig() const { DARABONBA_PTR_GET_CONST(modelInfoConfig_, ModelInfoConfig) };
        inline ModelInfoConfig getModelInfoConfig() { DARABONBA_PTR_GET(modelInfoConfig_, ModelInfoConfig) };
        inline Items& setModelInfoConfig(const ModelInfoConfig & modelInfoConfig) { DARABONBA_PTR_SET_VALUE(modelInfoConfig_, modelInfoConfig) };
        inline Items& setModelInfoConfig(ModelInfoConfig && modelInfoConfig) { DARABONBA_PTR_SET_RVALUE(modelInfoConfig_, modelInfoConfig) };


        // modelType Field Functions 
        bool hasModelType() const { return this->modelType_ != nullptr;};
        void deleteModelType() { this->modelType_ = nullptr;};
        inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
        inline Items& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


        // models Field Functions 
        bool hasModels() const { return this->models_ != nullptr;};
        void deleteModels() { this->models_ = nullptr;};
        inline const vector<string> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<string>) };
        inline vector<string> getModels() { DARABONBA_PTR_GET(models_, vector<string>) };
        inline Items& setModels(const vector<string> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
        inline Items& setModels(vector<string> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


        // providerName Field Functions 
        bool hasProviderName() const { return this->providerName_ != nullptr;};
        void deleteProviderName() { this->providerName_ = nullptr;};
        inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
        inline Items& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      protected:
        // baseUrl
        shared_ptr<string> baseUrl_ {};
        // modelInfoConfig
        shared_ptr<ModelInfoConfig> modelInfoConfig_ {};
        shared_ptr<string> modelType_ {};
        shared_ptr<vector<string>> models_ {};
        shared_ptr<string> providerName_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
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


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListModelProvidersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListModelProvidersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListModelProvidersResponseBody::Data) };
    inline ListModelProvidersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListModelProvidersResponseBody::Data) };
    inline ListModelProvidersResponseBody& setData(const ListModelProvidersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListModelProvidersResponseBody& setData(ListModelProvidersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListModelProvidersResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
