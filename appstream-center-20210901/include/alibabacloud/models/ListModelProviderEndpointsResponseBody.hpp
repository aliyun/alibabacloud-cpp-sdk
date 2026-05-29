// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPROVIDERENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPROVIDERENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListModelProviderEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelProviderEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelProviderEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListModelProviderEndpointsResponseBody() = default ;
    ListModelProviderEndpointsResponseBody(const ListModelProviderEndpointsResponseBody &) = default ;
    ListModelProviderEndpointsResponseBody(ListModelProviderEndpointsResponseBody &&) = default ;
    ListModelProviderEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelProviderEndpointsResponseBody() = default ;
    ListModelProviderEndpointsResponseBody& operator=(const ListModelProviderEndpointsResponseBody &) = default ;
    ListModelProviderEndpointsResponseBody& operator=(ListModelProviderEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
        DARABONBA_PTR_TO_JSON(ProviderUrl, providerUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
        DARABONBA_PTR_FROM_JSON(ProviderUrl, providerUrl_);
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
      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(ApiType, apiType_);
          DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProviderUrl, providerUrl_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
          DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProviderUrl, providerUrl_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiType_ == nullptr
        && this->baseUrl_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->providerUrl_ == nullptr && this->tags_ == nullptr; };
        // apiType Field Functions 
        bool hasApiType() const { return this->apiType_ != nullptr;};
        void deleteApiType() { this->apiType_ = nullptr;};
        inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
        inline Endpoints& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


        // baseUrl Field Functions 
        bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
        void deleteBaseUrl() { this->baseUrl_ = nullptr;};
        inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
        inline Endpoints& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Endpoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Endpoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // providerUrl Field Functions 
        bool hasProviderUrl() const { return this->providerUrl_ != nullptr;};
        void deleteProviderUrl() { this->providerUrl_ = nullptr;};
        inline string getProviderUrl() const { DARABONBA_PTR_GET_DEFAULT(providerUrl_, "") };
        inline Endpoints& setProviderUrl(string providerUrl) { DARABONBA_PTR_SET_VALUE(providerUrl_, providerUrl) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Endpoints& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Endpoints& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> apiType_ {};
        shared_ptr<string> baseUrl_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> providerUrl_ {};
        shared_ptr<vector<string>> tags_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->endpoints_ == nullptr && this->providerName_ == nullptr && this->providerUrl_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<Data::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Data::Endpoints>) };
      inline vector<Data::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<Data::Endpoints>) };
      inline Data& setEndpoints(const vector<Data::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline Data& setEndpoints(vector<Data::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline Data& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      // providerUrl Field Functions 
      bool hasProviderUrl() const { return this->providerUrl_ != nullptr;};
      void deleteProviderUrl() { this->providerUrl_ = nullptr;};
      inline string getProviderUrl() const { DARABONBA_PTR_GET_DEFAULT(providerUrl_, "") };
      inline Data& setProviderUrl(string providerUrl) { DARABONBA_PTR_SET_VALUE(providerUrl_, providerUrl) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<vector<Data::Endpoints>> endpoints_ {};
      shared_ptr<string> providerName_ {};
      shared_ptr<string> providerUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListModelProviderEndpointsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListModelProviderEndpointsResponseBody::Data>) };
    inline vector<ListModelProviderEndpointsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListModelProviderEndpointsResponseBody::Data>) };
    inline ListModelProviderEndpointsResponseBody& setData(const vector<ListModelProviderEndpointsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListModelProviderEndpointsResponseBody& setData(vector<ListModelProviderEndpointsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelProviderEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListModelProviderEndpointsResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
