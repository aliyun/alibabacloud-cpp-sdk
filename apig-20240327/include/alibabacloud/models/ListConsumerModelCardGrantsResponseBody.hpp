// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERMODELCARDGRANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERMODELCARDGRANTSRESPONSEBODY_HPP_
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
  class ListConsumerModelCardGrantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerModelCardGrantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerModelCardGrantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListConsumerModelCardGrantsResponseBody() = default ;
    ListConsumerModelCardGrantsResponseBody(const ListConsumerModelCardGrantsResponseBody &) = default ;
    ListConsumerModelCardGrantsResponseBody(ListConsumerModelCardGrantsResponseBody &&) = default ;
    ListConsumerModelCardGrantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerModelCardGrantsResponseBody() = default ;
    ListConsumerModelCardGrantsResponseBody& operator=(const ListConsumerModelCardGrantsResponseBody &) = default ;
    ListConsumerModelCardGrantsResponseBody& operator=(ListConsumerModelCardGrantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(entitlementState, entitlementState_);
        DARABONBA_PTR_TO_JSON(grants, grants_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(entitlementState, entitlementState_);
        DARABONBA_PTR_FROM_JSON(grants, grants_);
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
      class Grants : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Grants& obj) { 
          DARABONBA_PTR_TO_JSON(items, items_);
          DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
        };
        friend void from_json(const Darabonba::Json& j, Grants& obj) { 
          DARABONBA_PTR_FROM_JSON(items, items_);
          DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
        };
        Grants() = default ;
        Grants(const Grants &) = default ;
        Grants(Grants &&) = default ;
        Grants(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Grants() = default ;
        Grants& operator=(const Grants &) = default ;
        Grants& operator=(Grants &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(grantTimestamp, grantTimestamp_);
            DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
            DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
            DARABONBA_PTR_TO_JSON(principalId, principalId_);
            DARABONBA_PTR_TO_JSON(principalType, principalType_);
            DARABONBA_PTR_TO_JSON(targetType, targetType_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(grantTimestamp, grantTimestamp_);
            DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
            DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
            DARABONBA_PTR_FROM_JSON(principalId, principalId_);
            DARABONBA_PTR_FROM_JSON(principalType, principalType_);
            DARABONBA_PTR_FROM_JSON(targetType, targetType_);
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
          virtual bool empty() const override { return this->grantTimestamp_ == nullptr
        && this->httpApiId_ == nullptr && this->modelCardId_ == nullptr && this->principalId_ == nullptr && this->principalType_ == nullptr && this->targetType_ == nullptr; };
          // grantTimestamp Field Functions 
          bool hasGrantTimestamp() const { return this->grantTimestamp_ != nullptr;};
          void deleteGrantTimestamp() { this->grantTimestamp_ = nullptr;};
          inline int64_t getGrantTimestamp() const { DARABONBA_PTR_GET_DEFAULT(grantTimestamp_, 0L) };
          inline Items& setGrantTimestamp(int64_t grantTimestamp) { DARABONBA_PTR_SET_VALUE(grantTimestamp_, grantTimestamp) };


          // httpApiId Field Functions 
          bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
          void deleteHttpApiId() { this->httpApiId_ = nullptr;};
          inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
          inline Items& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


          // modelCardId Field Functions 
          bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
          void deleteModelCardId() { this->modelCardId_ = nullptr;};
          inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
          inline Items& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


          // principalId Field Functions 
          bool hasPrincipalId() const { return this->principalId_ != nullptr;};
          void deletePrincipalId() { this->principalId_ = nullptr;};
          inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
          inline Items& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


          // principalType Field Functions 
          bool hasPrincipalType() const { return this->principalType_ != nullptr;};
          void deletePrincipalType() { this->principalType_ = nullptr;};
          inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
          inline Items& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


          // targetType Field Functions 
          bool hasTargetType() const { return this->targetType_ != nullptr;};
          void deleteTargetType() { this->targetType_ = nullptr;};
          inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
          inline Items& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


        protected:
          // The timestamp when the authorization was granted.
          shared_ptr<int64_t> grantTimestamp_ {};
          // The ID of the Model API to which the authorization belongs.
          shared_ptr<string> httpApiId_ {};
          // The ID of the model card.
          shared_ptr<string> modelCardId_ {};
          // The ID of the authorized principal.
          shared_ptr<string> principalId_ {};
          // The type of the authorized principal.
          shared_ptr<string> principalType_ {};
          // The target type. Valid values: MODEL and MODEL_GROUP. If this parameter is omitted, the value defaults to MODEL. For MODEL_GROUP rows, the modelCardId field contains the group ID, and direct entitlements are not expanded or forged.
          shared_ptr<string> targetType_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<Grants::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Grants::Items>) };
        inline vector<Grants::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Grants::Items>) };
        inline Grants& setItems(const vector<Grants::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Grants& setItems(vector<Grants::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
        inline Grants& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline Grants& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
        inline Grants& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      protected:
        // The list of model entitlement facts.
        shared_ptr<vector<Grants::Items>> items_ {};
        // The page number.
        shared_ptr<int32_t> pageNumber_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries.
        shared_ptr<int32_t> totalSize_ {};
      };

      class EntitlementState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntitlementState& obj) { 
          DARABONBA_PTR_TO_JSON(appliedRevision, appliedRevision_);
          DARABONBA_PTR_TO_JSON(desiredRevision, desiredRevision_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, EntitlementState& obj) { 
          DARABONBA_PTR_FROM_JSON(appliedRevision, appliedRevision_);
          DARABONBA_PTR_FROM_JSON(desiredRevision, desiredRevision_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        EntitlementState() = default ;
        EntitlementState(const EntitlementState &) = default ;
        EntitlementState(EntitlementState &&) = default ;
        EntitlementState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntitlementState() = default ;
        EntitlementState& operator=(const EntitlementState &) = default ;
        EntitlementState& operator=(EntitlementState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appliedRevision_ == nullptr
        && this->desiredRevision_ == nullptr && this->errorMessage_ == nullptr && this->status_ == nullptr; };
        // appliedRevision Field Functions 
        bool hasAppliedRevision() const { return this->appliedRevision_ != nullptr;};
        void deleteAppliedRevision() { this->appliedRevision_ = nullptr;};
        inline int64_t getAppliedRevision() const { DARABONBA_PTR_GET_DEFAULT(appliedRevision_, 0L) };
        inline EntitlementState& setAppliedRevision(int64_t appliedRevision) { DARABONBA_PTR_SET_VALUE(appliedRevision_, appliedRevision) };


        // desiredRevision Field Functions 
        bool hasDesiredRevision() const { return this->desiredRevision_ != nullptr;};
        void deleteDesiredRevision() { this->desiredRevision_ = nullptr;};
        inline int64_t getDesiredRevision() const { DARABONBA_PTR_GET_DEFAULT(desiredRevision_, 0L) };
        inline EntitlementState& setDesiredRevision(int64_t desiredRevision) { DARABONBA_PTR_SET_VALUE(desiredRevision_, desiredRevision) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline EntitlementState& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EntitlementState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The applied revision number.
        shared_ptr<int64_t> appliedRevision_ {};
        // The desired revision number.
        shared_ptr<int64_t> desiredRevision_ {};
        // The error message returned when the projection fails.
        shared_ptr<string> errorMessage_ {};
        // The projection status. Valid values: Pending, Applying, Committed, and Failed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->entitlementState_ == nullptr
        && this->grants_ == nullptr; };
      // entitlementState Field Functions 
      bool hasEntitlementState() const { return this->entitlementState_ != nullptr;};
      void deleteEntitlementState() { this->entitlementState_ = nullptr;};
      inline const Data::EntitlementState & getEntitlementState() const { DARABONBA_PTR_GET_CONST(entitlementState_, Data::EntitlementState) };
      inline Data::EntitlementState getEntitlementState() { DARABONBA_PTR_GET(entitlementState_, Data::EntitlementState) };
      inline Data& setEntitlementState(const Data::EntitlementState & entitlementState) { DARABONBA_PTR_SET_VALUE(entitlementState_, entitlementState) };
      inline Data& setEntitlementState(Data::EntitlementState && entitlementState) { DARABONBA_PTR_SET_RVALUE(entitlementState_, entitlementState) };


      // grants Field Functions 
      bool hasGrants() const { return this->grants_ != nullptr;};
      void deleteGrants() { this->grants_ = nullptr;};
      inline const Data::Grants & getGrants() const { DARABONBA_PTR_GET_CONST(grants_, Data::Grants) };
      inline Data::Grants getGrants() { DARABONBA_PTR_GET(grants_, Data::Grants) };
      inline Data& setGrants(const Data::Grants & grants) { DARABONBA_PTR_SET_VALUE(grants_, grants) };
      inline Data& setGrants(Data::Grants && grants) { DARABONBA_PTR_SET_RVALUE(grants_, grants) };


    protected:
      // The projection state of the model entitlement in the gateway domain.
      shared_ptr<Data::EntitlementState> entitlementState_ {};
      // The paginated list of model entitlements.
      shared_ptr<Data::Grants> grants_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListConsumerModelCardGrantsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListConsumerModelCardGrantsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListConsumerModelCardGrantsResponseBody::Data) };
    inline ListConsumerModelCardGrantsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListConsumerModelCardGrantsResponseBody::Data) };
    inline ListConsumerModelCardGrantsResponseBody& setData(const ListConsumerModelCardGrantsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConsumerModelCardGrantsResponseBody& setData(ListConsumerModelCardGrantsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConsumerModelCardGrantsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsumerModelCardGrantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. Ok is returned for successful requests, and a specific business error code is returned for failed requests.
    shared_ptr<string> code_ {};
    // The business result returned by the consumer operation.
    shared_ptr<ListConsumerModelCardGrantsResponseBody::Data> data_ {};
    // The response message that describes the request processing result.
    shared_ptr<string> message_ {};
    // The request ID generated by the system to trace the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
