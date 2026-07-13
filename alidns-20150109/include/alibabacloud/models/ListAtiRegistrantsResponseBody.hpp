// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATIREGISTRANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATIREGISTRANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListAtiRegistrantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAtiRegistrantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Registrants, registrants_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListAtiRegistrantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Registrants, registrants_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListAtiRegistrantsResponseBody() = default ;
    ListAtiRegistrantsResponseBody(const ListAtiRegistrantsResponseBody &) = default ;
    ListAtiRegistrantsResponseBody(ListAtiRegistrantsResponseBody &&) = default ;
    ListAtiRegistrantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAtiRegistrantsResponseBody() = default ;
    ListAtiRegistrantsResponseBody& operator=(const ListAtiRegistrantsResponseBody &) = default ;
    ListAtiRegistrantsResponseBody& operator=(ListAtiRegistrantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Registrants : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Registrants& obj) { 
        DARABONBA_PTR_TO_JSON(Registrant, registrant_);
      };
      friend void from_json(const Darabonba::Json& j, Registrants& obj) { 
        DARABONBA_PTR_FROM_JSON(Registrant, registrant_);
      };
      Registrants() = default ;
      Registrants(const Registrants &) = default ;
      Registrants(Registrants &&) = default ;
      Registrants(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Registrants() = default ;
      Registrants& operator=(const Registrants &) = default ;
      Registrants& operator=(Registrants &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Registrant : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Registrant& obj) { 
          DARABONBA_PTR_TO_JSON(Cc, cc_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(DocumentCode, documentCode_);
          DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Registrant& obj) { 
          DARABONBA_PTR_FROM_JSON(Cc, cc_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(DocumentCode, documentCode_);
          DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
        };
        Registrant() = default ;
        Registrant(const Registrant &) = default ;
        Registrant(Registrant &&) = default ;
        Registrant(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Registrant() = default ;
        Registrant& operator=(const Registrant &) = default ;
        Registrant& operator=(Registrant &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cc_ == nullptr
        && this->city_ == nullptr && this->createTimestamp_ == nullptr && this->documentCode_ == nullptr && this->documentType_ == nullptr && this->email_ == nullptr
        && this->name_ == nullptr && this->registrantId_ == nullptr && this->state_ == nullptr && this->status_ == nullptr && this->updateTimestamp_ == nullptr; };
        // cc Field Functions 
        bool hasCc() const { return this->cc_ != nullptr;};
        void deleteCc() { this->cc_ = nullptr;};
        inline string getCc() const { DARABONBA_PTR_GET_DEFAULT(cc_, "") };
        inline Registrant& setCc(string cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline Registrant& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline string getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, "") };
        inline Registrant& setCreateTimestamp(string createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // documentCode Field Functions 
        bool hasDocumentCode() const { return this->documentCode_ != nullptr;};
        void deleteDocumentCode() { this->documentCode_ = nullptr;};
        inline string getDocumentCode() const { DARABONBA_PTR_GET_DEFAULT(documentCode_, "") };
        inline Registrant& setDocumentCode(string documentCode) { DARABONBA_PTR_SET_VALUE(documentCode_, documentCode) };


        // documentType Field Functions 
        bool hasDocumentType() const { return this->documentType_ != nullptr;};
        void deleteDocumentType() { this->documentType_ = nullptr;};
        inline string getDocumentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
        inline Registrant& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Registrant& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Registrant& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // registrantId Field Functions 
        bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
        void deleteRegistrantId() { this->registrantId_ = nullptr;};
        inline string getRegistrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
        inline Registrant& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Registrant& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Registrant& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline string getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, "") };
        inline Registrant& setUpdateTimestamp(string updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        shared_ptr<string> cc_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> createTimestamp_ {};
        shared_ptr<string> documentCode_ {};
        shared_ptr<string> documentType_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> registrantId_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> updateTimestamp_ {};
      };

      virtual bool empty() const override { return this->registrant_ == nullptr; };
      // registrant Field Functions 
      bool hasRegistrant() const { return this->registrant_ != nullptr;};
      void deleteRegistrant() { this->registrant_ = nullptr;};
      inline const vector<Registrants::Registrant> & getRegistrant() const { DARABONBA_PTR_GET_CONST(registrant_, vector<Registrants::Registrant>) };
      inline vector<Registrants::Registrant> getRegistrant() { DARABONBA_PTR_GET(registrant_, vector<Registrants::Registrant>) };
      inline Registrants& setRegistrant(const vector<Registrants::Registrant> & registrant) { DARABONBA_PTR_SET_VALUE(registrant_, registrant) };
      inline Registrants& setRegistrant(vector<Registrants::Registrant> && registrant) { DARABONBA_PTR_SET_RVALUE(registrant_, registrant) };


    protected:
      shared_ptr<vector<Registrants::Registrant>> registrant_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      shared_ptr<string> authAction_ {};
      shared_ptr<string> authPrincipalDisplayName_ {};
      shared_ptr<string> authPrincipalOwnerId_ {};
      shared_ptr<string> authPrincipalType_ {};
      shared_ptr<string> encodedDiagnosticMessage_ {};
      shared_ptr<string> noPermissionType_ {};
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->registrants_ == nullptr
        && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const ListAtiRegistrantsResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, ListAtiRegistrantsResponseBody::AccessDeniedDetail) };
    inline ListAtiRegistrantsResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, ListAtiRegistrantsResponseBody::AccessDeniedDetail) };
    inline ListAtiRegistrantsResponseBody& setAccessDeniedDetail(const ListAtiRegistrantsResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline ListAtiRegistrantsResponseBody& setAccessDeniedDetail(ListAtiRegistrantsResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAtiRegistrantsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAtiRegistrantsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAtiRegistrantsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAtiRegistrantsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // registrants Field Functions 
    bool hasRegistrants() const { return this->registrants_ != nullptr;};
    void deleteRegistrants() { this->registrants_ = nullptr;};
    inline const ListAtiRegistrantsResponseBody::Registrants & getRegistrants() const { DARABONBA_PTR_GET_CONST(registrants_, ListAtiRegistrantsResponseBody::Registrants) };
    inline ListAtiRegistrantsResponseBody::Registrants getRegistrants() { DARABONBA_PTR_GET(registrants_, ListAtiRegistrantsResponseBody::Registrants) };
    inline ListAtiRegistrantsResponseBody& setRegistrants(const ListAtiRegistrantsResponseBody::Registrants & registrants) { DARABONBA_PTR_SET_VALUE(registrants_, registrants) };
    inline ListAtiRegistrantsResponseBody& setRegistrants(ListAtiRegistrantsResponseBody::Registrants && registrants) { DARABONBA_PTR_SET_RVALUE(registrants_, registrants) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAtiRegistrantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline ListAtiRegistrantsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListAtiRegistrantsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    shared_ptr<ListAtiRegistrantsResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<ListAtiRegistrantsResponseBody::Registrants> registrants_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItems_ {};
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
