// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELCARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELCARDSRESPONSEBODY_HPP_
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
  class ListModelCardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelCardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelCardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListModelCardsResponseBody() = default ;
    ListModelCardsResponseBody(const ListModelCardsResponseBody &) = default ;
    ListModelCardsResponseBody(ListModelCardsResponseBody &&) = default ;
    ListModelCardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelCardsResponseBody() = default ;
    ListModelCardsResponseBody& operator=(const ListModelCardsResponseBody &) = default ;
    ListModelCardsResponseBody& operator=(ListModelCardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(availablePaths, availablePaths_);
        DARABONBA_ANY_TO_JSON(features, features_);
        DARABONBA_PTR_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_ANY_TO_JSON(pricing, pricing_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(snapshots, snapshots_);
        DARABONBA_PTR_TO_JSON(source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(availablePaths, availablePaths_);
        DARABONBA_ANY_FROM_JSON(features, features_);
        DARABONBA_PTR_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_ANY_FROM_JSON(pricing, pricing_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(snapshots, snapshots_);
        DARABONBA_PTR_FROM_JSON(source, source_);
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
      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
        };
        Meta() = default ;
        Meta(const Meta &) = default ;
        Meta(Meta &&) = default ;
        Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Meta() = default ;
        Meta& operator=(const Meta &) = default ;
        Meta& operator=(Meta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Meta& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        // The description text of the model card.
        shared_ptr<string> description_ {};
      };

      class AvailablePaths : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailablePaths& obj) { 
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AvailablePaths& obj) { 
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        AvailablePaths() = default ;
        AvailablePaths(const AvailablePaths &) = default ;
        AvailablePaths(AvailablePaths &&) = default ;
        AvailablePaths(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailablePaths() = default ;
        AvailablePaths& operator=(const AvailablePaths &) = default ;
        AvailablePaths& operator=(AvailablePaths &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->path_ == nullptr
        && this->type_ == nullptr; };
        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline AvailablePaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AvailablePaths& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The request path of the API.
        shared_ptr<string> path_ {};
        // The type identifier of the available path record. The valid values are not specified in the API definition.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->availablePaths_ == nullptr
        && this->features_ == nullptr && this->meta_ == nullptr && this->modelName_ == nullptr && this->pricing_ == nullptr && this->provider_ == nullptr
        && this->snapshots_ == nullptr && this->source_ == nullptr; };
      // availablePaths Field Functions 
      bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
      void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
      inline const vector<Data::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<Data::AvailablePaths>) };
      inline vector<Data::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<Data::AvailablePaths>) };
      inline Data& setAvailablePaths(const vector<Data::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
      inline Data& setAvailablePaths(vector<Data::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline       const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
      Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
      inline Data& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
      inline Data& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const Data::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Data::Meta) };
      inline Data::Meta getMeta() { DARABONBA_PTR_GET(meta_, Data::Meta) };
      inline Data& setMeta(const Data::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Data& setMeta(Data::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Data& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // pricing Field Functions 
      bool hasPricing() const { return this->pricing_ != nullptr;};
      void deletePricing() { this->pricing_ = nullptr;};
      inline       const Darabonba::Json & getPricing() const { DARABONBA_GET(pricing_) };
      Darabonba::Json & getPricing() { DARABONBA_GET(pricing_) };
      inline Data& setPricing(const Darabonba::Json & pricing) { DARABONBA_SET_VALUE(pricing_, pricing) };
      inline Data& setPricing(Darabonba::Json && pricing) { DARABONBA_SET_RVALUE(pricing_, pricing) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline Data& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // snapshots Field Functions 
      bool hasSnapshots() const { return this->snapshots_ != nullptr;};
      void deleteSnapshots() { this->snapshots_ = nullptr;};
      inline const vector<Darabonba::Json> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<Darabonba::Json>) };
      inline Data& setSnapshots(const vector<Darabonba::Json> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
      inline Data& setSnapshots(vector<Darabonba::Json> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The list of available paths for the model card. Each element consists of a path and a type member. The API definition does not specify the criteria for determining availability.
      shared_ptr<vector<Data::AvailablePaths>> availablePaths_ {};
      // The feature configuration of the model card in a key-value pair map structure. The set of keys is not specified in the API definition.
      Darabonba::Json features_ {};
      // The metadata container of the model card. Only the description member is declared in the API definition.
      shared_ptr<Data::Meta> meta_ {};
      // The name of the model.
      shared_ptr<string> modelName_ {};
      // The pricing information of the model card in a key-value pair map structure. The set of keys and billing criteria are not specified in the API definition.
      Darabonba::Json pricing_ {};
      // The identifier of the model provider for the model card.
      shared_ptr<string> provider_ {};
      // The list of snapshots for the model card. Array items are map structures with unspecified members. The API definition does not specify the snapshot content or generation rules.
      shared_ptr<vector<Darabonba::Json>> snapshots_ {};
      // The source identifier of the model card. The valid values are not specified in the API definition.
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListModelCardsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListModelCardsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListModelCardsResponseBody::Data>) };
    inline vector<ListModelCardsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListModelCardsResponseBody::Data>) };
    inline ListModelCardsResponseBody& setData(const vector<ListModelCardsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListModelCardsResponseBody& setData(vector<ListModelCardsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListModelCardsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelCardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<vector<ListModelCardsResponseBody::Data>> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
