// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLCENTERPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLCENTERPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListCallCenterProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallCenterProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallCenterProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCallCenterProvidersResponseBody() = default ;
    ListCallCenterProvidersResponseBody(const ListCallCenterProvidersResponseBody &) = default ;
    ListCallCenterProvidersResponseBody(ListCallCenterProvidersResponseBody &&) = default ;
    ListCallCenterProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallCenterProvidersResponseBody() = default ;
    ListCallCenterProvidersResponseBody& operator=(const ListCallCenterProvidersResponseBody &) = default ;
    ListCallCenterProvidersResponseBody& operator=(ListCallCenterProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Providers, providers_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Providers, providers_);
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
      class Providers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Providers& obj) { 
          DARABONBA_PTR_TO_JSON(Destination, destination_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Extras, extras_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Originator, originator_);
          DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
          DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
          DARABONBA_PTR_TO_JSON(ReferTo, referTo_);
          DARABONBA_PTR_TO_JSON(TrunkId, trunkId_);
        };
        friend void from_json(const Darabonba::Json& j, Providers& obj) { 
          DARABONBA_PTR_FROM_JSON(Destination, destination_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Extras, extras_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Originator, originator_);
          DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
          DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
          DARABONBA_PTR_FROM_JSON(ReferTo, referTo_);
          DARABONBA_PTR_FROM_JSON(TrunkId, trunkId_);
        };
        Providers() = default ;
        Providers(const Providers &) = default ;
        Providers(Providers &&) = default ;
        Providers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Providers() = default ;
        Providers& operator=(const Providers &) = default ;
        Providers& operator=(Providers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destination_ == nullptr
        && this->displayName_ == nullptr && this->extras_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->originator_ == nullptr
        && this->providerId_ == nullptr && this->providerType_ == nullptr && this->referTo_ == nullptr && this->trunkId_ == nullptr; };
        // destination Field Functions 
        bool hasDestination() const { return this->destination_ != nullptr;};
        void deleteDestination() { this->destination_ = nullptr;};
        inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
        inline Providers& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Providers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // extras Field Functions 
        bool hasExtras() const { return this->extras_ != nullptr;};
        void deleteExtras() { this->extras_ = nullptr;};
        inline string getExtras() const { DARABONBA_PTR_GET_DEFAULT(extras_, "") };
        inline Providers& setExtras(string extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Providers& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Providers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // originator Field Functions 
        bool hasOriginator() const { return this->originator_ != nullptr;};
        void deleteOriginator() { this->originator_ = nullptr;};
        inline string getOriginator() const { DARABONBA_PTR_GET_DEFAULT(originator_, "") };
        inline Providers& setOriginator(string originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };


        // providerId Field Functions 
        bool hasProviderId() const { return this->providerId_ != nullptr;};
        void deleteProviderId() { this->providerId_ = nullptr;};
        inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
        inline Providers& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


        // providerType Field Functions 
        bool hasProviderType() const { return this->providerType_ != nullptr;};
        void deleteProviderType() { this->providerType_ = nullptr;};
        inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
        inline Providers& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


        // referTo Field Functions 
        bool hasReferTo() const { return this->referTo_ != nullptr;};
        void deleteReferTo() { this->referTo_ = nullptr;};
        inline string getReferTo() const { DARABONBA_PTR_GET_DEFAULT(referTo_, "") };
        inline Providers& setReferTo(string referTo) { DARABONBA_PTR_SET_VALUE(referTo_, referTo) };


        // trunkId Field Functions 
        bool hasTrunkId() const { return this->trunkId_ != nullptr;};
        void deleteTrunkId() { this->trunkId_ = nullptr;};
        inline string getTrunkId() const { DARABONBA_PTR_GET_DEFAULT(trunkId_, "") };
        inline Providers& setTrunkId(string trunkId) { DARABONBA_PTR_SET_VALUE(trunkId_, trunkId) };


      protected:
        shared_ptr<string> destination_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> extras_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> originator_ {};
        shared_ptr<string> providerId_ {};
        shared_ptr<string> providerType_ {};
        shared_ptr<string> referTo_ {};
        shared_ptr<string> trunkId_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->providers_ == nullptr && this->totalCount_ == nullptr; };
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


      // providers Field Functions 
      bool hasProviders() const { return this->providers_ != nullptr;};
      void deleteProviders() { this->providers_ = nullptr;};
      inline const vector<Data::Providers> & getProviders() const { DARABONBA_PTR_GET_CONST(providers_, vector<Data::Providers>) };
      inline vector<Data::Providers> getProviders() { DARABONBA_PTR_GET(providers_, vector<Data::Providers>) };
      inline Data& setProviders(const vector<Data::Providers> & providers) { DARABONBA_PTR_SET_VALUE(providers_, providers) };
      inline Data& setProviders(vector<Data::Providers> && providers) { DARABONBA_PTR_SET_RVALUE(providers_, providers) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Providers>> providers_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCallCenterProvidersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCallCenterProvidersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCallCenterProvidersResponseBody::Data) };
    inline ListCallCenterProvidersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCallCenterProvidersResponseBody::Data) };
    inline ListCallCenterProvidersResponseBody& setData(const ListCallCenterProvidersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCallCenterProvidersResponseBody& setData(ListCallCenterProvidersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCallCenterProvidersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCallCenterProvidersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListCallCenterProvidersResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListCallCenterProvidersResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCallCenterProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListCallCenterProvidersResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
