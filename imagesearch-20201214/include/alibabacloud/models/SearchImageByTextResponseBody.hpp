// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEBYTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEBYTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class SearchImageByTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageByTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Auctions, auctions_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Head, head_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PicInfo, picInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageByTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Auctions, auctions_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Head, head_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PicInfo, picInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SearchImageByTextResponseBody() = default ;
    SearchImageByTextResponseBody(const SearchImageByTextResponseBody &) = default ;
    SearchImageByTextResponseBody(SearchImageByTextResponseBody &&) = default ;
    SearchImageByTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageByTextResponseBody() = default ;
    SearchImageByTextResponseBody& operator=(const SearchImageByTextResponseBody &) = default ;
    SearchImageByTextResponseBody& operator=(SearchImageByTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PicInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PicInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AllCategories, allCategories_);
      };
      friend void from_json(const Darabonba::Json& j, PicInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AllCategories, allCategories_);
      };
      PicInfo() = default ;
      PicInfo(const PicInfo &) = default ;
      PicInfo(PicInfo &&) = default ;
      PicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PicInfo() = default ;
      PicInfo& operator=(const PicInfo &) = default ;
      PicInfo& operator=(PicInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AllCategories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllCategories& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, AllCategories& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        AllCategories() = default ;
        AllCategories(const AllCategories &) = default ;
        AllCategories(AllCategories &&) = default ;
        AllCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllCategories() = default ;
        AllCategories& operator=(const AllCategories &) = default ;
        AllCategories& operator=(AllCategories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline AllCategories& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AllCategories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<int32_t> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->allCategories_ == nullptr; };
      // allCategories Field Functions 
      bool hasAllCategories() const { return this->allCategories_ != nullptr;};
      void deleteAllCategories() { this->allCategories_ = nullptr;};
      inline const vector<PicInfo::AllCategories> & getAllCategories() const { DARABONBA_PTR_GET_CONST(allCategories_, vector<PicInfo::AllCategories>) };
      inline vector<PicInfo::AllCategories> getAllCategories() { DARABONBA_PTR_GET(allCategories_, vector<PicInfo::AllCategories>) };
      inline PicInfo& setAllCategories(const vector<PicInfo::AllCategories> & allCategories) { DARABONBA_PTR_SET_VALUE(allCategories_, allCategories) };
      inline PicInfo& setAllCategories(vector<PicInfo::AllCategories> && allCategories) { DARABONBA_PTR_SET_RVALUE(allCategories_, allCategories) };


    protected:
      shared_ptr<vector<PicInfo::AllCategories>> allCategories_ {};
    };

    class Head : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Head& obj) { 
        DARABONBA_PTR_TO_JSON(DocsFound, docsFound_);
        DARABONBA_PTR_TO_JSON(DocsReturn, docsReturn_);
        DARABONBA_PTR_TO_JSON(SearchTime, searchTime_);
      };
      friend void from_json(const Darabonba::Json& j, Head& obj) { 
        DARABONBA_PTR_FROM_JSON(DocsFound, docsFound_);
        DARABONBA_PTR_FROM_JSON(DocsReturn, docsReturn_);
        DARABONBA_PTR_FROM_JSON(SearchTime, searchTime_);
      };
      Head() = default ;
      Head(const Head &) = default ;
      Head(Head &&) = default ;
      Head(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Head() = default ;
      Head& operator=(const Head &) = default ;
      Head& operator=(Head &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->docsFound_ == nullptr
        && this->docsReturn_ == nullptr && this->searchTime_ == nullptr; };
      // docsFound Field Functions 
      bool hasDocsFound() const { return this->docsFound_ != nullptr;};
      void deleteDocsFound() { this->docsFound_ = nullptr;};
      inline int32_t getDocsFound() const { DARABONBA_PTR_GET_DEFAULT(docsFound_, 0) };
      inline Head& setDocsFound(int32_t docsFound) { DARABONBA_PTR_SET_VALUE(docsFound_, docsFound) };


      // docsReturn Field Functions 
      bool hasDocsReturn() const { return this->docsReturn_ != nullptr;};
      void deleteDocsReturn() { this->docsReturn_ = nullptr;};
      inline int32_t getDocsReturn() const { DARABONBA_PTR_GET_DEFAULT(docsReturn_, 0) };
      inline Head& setDocsReturn(int32_t docsReturn) { DARABONBA_PTR_SET_VALUE(docsReturn_, docsReturn) };


      // searchTime Field Functions 
      bool hasSearchTime() const { return this->searchTime_ != nullptr;};
      void deleteSearchTime() { this->searchTime_ = nullptr;};
      inline int32_t getSearchTime() const { DARABONBA_PTR_GET_DEFAULT(searchTime_, 0) };
      inline Head& setSearchTime(int32_t searchTime) { DARABONBA_PTR_SET_VALUE(searchTime_, searchTime) };


    protected:
      shared_ptr<int32_t> docsFound_ {};
      shared_ptr<int32_t> docsReturn_ {};
      shared_ptr<int32_t> searchTime_ {};
    };

    class Auctions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Auctions& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
        DARABONBA_PTR_TO_JSON(IntAttr, intAttr_);
        DARABONBA_PTR_TO_JSON(IntAttr2, intAttr2_);
        DARABONBA_PTR_TO_JSON(IntAttr3, intAttr3_);
        DARABONBA_PTR_TO_JSON(IntAttr4, intAttr4_);
        DARABONBA_PTR_TO_JSON(PicName, picName_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(StrAttr, strAttr_);
        DARABONBA_PTR_TO_JSON(StrAttr2, strAttr2_);
        DARABONBA_PTR_TO_JSON(StrAttr3, strAttr3_);
        DARABONBA_PTR_TO_JSON(StrAttr4, strAttr4_);
      };
      friend void from_json(const Darabonba::Json& j, Auctions& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
        DARABONBA_PTR_FROM_JSON(IntAttr, intAttr_);
        DARABONBA_PTR_FROM_JSON(IntAttr2, intAttr2_);
        DARABONBA_PTR_FROM_JSON(IntAttr3, intAttr3_);
        DARABONBA_PTR_FROM_JSON(IntAttr4, intAttr4_);
        DARABONBA_PTR_FROM_JSON(PicName, picName_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(StrAttr, strAttr_);
        DARABONBA_PTR_FROM_JSON(StrAttr2, strAttr2_);
        DARABONBA_PTR_FROM_JSON(StrAttr3, strAttr3_);
        DARABONBA_PTR_FROM_JSON(StrAttr4, strAttr4_);
      };
      Auctions() = default ;
      Auctions(const Auctions &) = default ;
      Auctions(Auctions &&) = default ;
      Auctions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Auctions() = default ;
      Auctions& operator=(const Auctions &) = default ;
      Auctions& operator=(Auctions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->customContent_ == nullptr && this->intAttr_ == nullptr && this->intAttr2_ == nullptr && this->intAttr3_ == nullptr && this->intAttr4_ == nullptr
        && this->picName_ == nullptr && this->productId_ == nullptr && this->score_ == nullptr && this->strAttr_ == nullptr && this->strAttr2_ == nullptr
        && this->strAttr3_ == nullptr && this->strAttr4_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
      inline Auctions& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // customContent Field Functions 
      bool hasCustomContent() const { return this->customContent_ != nullptr;};
      void deleteCustomContent() { this->customContent_ = nullptr;};
      inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
      inline Auctions& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


      // intAttr Field Functions 
      bool hasIntAttr() const { return this->intAttr_ != nullptr;};
      void deleteIntAttr() { this->intAttr_ = nullptr;};
      inline int32_t getIntAttr() const { DARABONBA_PTR_GET_DEFAULT(intAttr_, 0) };
      inline Auctions& setIntAttr(int32_t intAttr) { DARABONBA_PTR_SET_VALUE(intAttr_, intAttr) };


      // intAttr2 Field Functions 
      bool hasIntAttr2() const { return this->intAttr2_ != nullptr;};
      void deleteIntAttr2() { this->intAttr2_ = nullptr;};
      inline int32_t getIntAttr2() const { DARABONBA_PTR_GET_DEFAULT(intAttr2_, 0) };
      inline Auctions& setIntAttr2(int32_t intAttr2) { DARABONBA_PTR_SET_VALUE(intAttr2_, intAttr2) };


      // intAttr3 Field Functions 
      bool hasIntAttr3() const { return this->intAttr3_ != nullptr;};
      void deleteIntAttr3() { this->intAttr3_ = nullptr;};
      inline int32_t getIntAttr3() const { DARABONBA_PTR_GET_DEFAULT(intAttr3_, 0) };
      inline Auctions& setIntAttr3(int32_t intAttr3) { DARABONBA_PTR_SET_VALUE(intAttr3_, intAttr3) };


      // intAttr4 Field Functions 
      bool hasIntAttr4() const { return this->intAttr4_ != nullptr;};
      void deleteIntAttr4() { this->intAttr4_ = nullptr;};
      inline int32_t getIntAttr4() const { DARABONBA_PTR_GET_DEFAULT(intAttr4_, 0) };
      inline Auctions& setIntAttr4(int32_t intAttr4) { DARABONBA_PTR_SET_VALUE(intAttr4_, intAttr4) };


      // picName Field Functions 
      bool hasPicName() const { return this->picName_ != nullptr;};
      void deletePicName() { this->picName_ = nullptr;};
      inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
      inline Auctions& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Auctions& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Auctions& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // strAttr Field Functions 
      bool hasStrAttr() const { return this->strAttr_ != nullptr;};
      void deleteStrAttr() { this->strAttr_ = nullptr;};
      inline string getStrAttr() const { DARABONBA_PTR_GET_DEFAULT(strAttr_, "") };
      inline Auctions& setStrAttr(string strAttr) { DARABONBA_PTR_SET_VALUE(strAttr_, strAttr) };


      // strAttr2 Field Functions 
      bool hasStrAttr2() const { return this->strAttr2_ != nullptr;};
      void deleteStrAttr2() { this->strAttr2_ = nullptr;};
      inline string getStrAttr2() const { DARABONBA_PTR_GET_DEFAULT(strAttr2_, "") };
      inline Auctions& setStrAttr2(string strAttr2) { DARABONBA_PTR_SET_VALUE(strAttr2_, strAttr2) };


      // strAttr3 Field Functions 
      bool hasStrAttr3() const { return this->strAttr3_ != nullptr;};
      void deleteStrAttr3() { this->strAttr3_ = nullptr;};
      inline string getStrAttr3() const { DARABONBA_PTR_GET_DEFAULT(strAttr3_, "") };
      inline Auctions& setStrAttr3(string strAttr3) { DARABONBA_PTR_SET_VALUE(strAttr3_, strAttr3) };


      // strAttr4 Field Functions 
      bool hasStrAttr4() const { return this->strAttr4_ != nullptr;};
      void deleteStrAttr4() { this->strAttr4_ = nullptr;};
      inline string getStrAttr4() const { DARABONBA_PTR_GET_DEFAULT(strAttr4_, "") };
      inline Auctions& setStrAttr4(string strAttr4) { DARABONBA_PTR_SET_VALUE(strAttr4_, strAttr4) };


    protected:
      shared_ptr<int32_t> categoryId_ {};
      shared_ptr<string> customContent_ {};
      shared_ptr<int32_t> intAttr_ {};
      shared_ptr<int32_t> intAttr2_ {};
      shared_ptr<int32_t> intAttr3_ {};
      shared_ptr<int32_t> intAttr4_ {};
      shared_ptr<string> picName_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<float> score_ {};
      shared_ptr<string> strAttr_ {};
      shared_ptr<string> strAttr2_ {};
      shared_ptr<string> strAttr3_ {};
      shared_ptr<string> strAttr4_ {};
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
        && this->auctions_ == nullptr && this->code_ == nullptr && this->head_ == nullptr && this->msg_ == nullptr && this->picInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const SearchImageByTextResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, SearchImageByTextResponseBody::AccessDeniedDetail) };
    inline SearchImageByTextResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, SearchImageByTextResponseBody::AccessDeniedDetail) };
    inline SearchImageByTextResponseBody& setAccessDeniedDetail(const SearchImageByTextResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline SearchImageByTextResponseBody& setAccessDeniedDetail(SearchImageByTextResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // auctions Field Functions 
    bool hasAuctions() const { return this->auctions_ != nullptr;};
    void deleteAuctions() { this->auctions_ = nullptr;};
    inline const vector<SearchImageByTextResponseBody::Auctions> & getAuctions() const { DARABONBA_PTR_GET_CONST(auctions_, vector<SearchImageByTextResponseBody::Auctions>) };
    inline vector<SearchImageByTextResponseBody::Auctions> getAuctions() { DARABONBA_PTR_GET(auctions_, vector<SearchImageByTextResponseBody::Auctions>) };
    inline SearchImageByTextResponseBody& setAuctions(const vector<SearchImageByTextResponseBody::Auctions> & auctions) { DARABONBA_PTR_SET_VALUE(auctions_, auctions) };
    inline SearchImageByTextResponseBody& setAuctions(vector<SearchImageByTextResponseBody::Auctions> && auctions) { DARABONBA_PTR_SET_RVALUE(auctions_, auctions) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SearchImageByTextResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // head Field Functions 
    bool hasHead() const { return this->head_ != nullptr;};
    void deleteHead() { this->head_ = nullptr;};
    inline const SearchImageByTextResponseBody::Head & getHead() const { DARABONBA_PTR_GET_CONST(head_, SearchImageByTextResponseBody::Head) };
    inline SearchImageByTextResponseBody::Head getHead() { DARABONBA_PTR_GET(head_, SearchImageByTextResponseBody::Head) };
    inline SearchImageByTextResponseBody& setHead(const SearchImageByTextResponseBody::Head & head) { DARABONBA_PTR_SET_VALUE(head_, head) };
    inline SearchImageByTextResponseBody& setHead(SearchImageByTextResponseBody::Head && head) { DARABONBA_PTR_SET_RVALUE(head_, head) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline SearchImageByTextResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // picInfo Field Functions 
    bool hasPicInfo() const { return this->picInfo_ != nullptr;};
    void deletePicInfo() { this->picInfo_ = nullptr;};
    inline const SearchImageByTextResponseBody::PicInfo & getPicInfo() const { DARABONBA_PTR_GET_CONST(picInfo_, SearchImageByTextResponseBody::PicInfo) };
    inline SearchImageByTextResponseBody::PicInfo getPicInfo() { DARABONBA_PTR_GET(picInfo_, SearchImageByTextResponseBody::PicInfo) };
    inline SearchImageByTextResponseBody& setPicInfo(const SearchImageByTextResponseBody::PicInfo & picInfo) { DARABONBA_PTR_SET_VALUE(picInfo_, picInfo) };
    inline SearchImageByTextResponseBody& setPicInfo(SearchImageByTextResponseBody::PicInfo && picInfo) { DARABONBA_PTR_SET_RVALUE(picInfo_, picInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchImageByTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchImageByTextResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<SearchImageByTextResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<vector<SearchImageByTextResponseBody::Auctions>> auctions_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<SearchImageByTextResponseBody::Head> head_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<SearchImageByTextResponseBody::PicInfo> picInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
