// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBizEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBizEntitiesResponseBody() = default ;
    ListBizEntitiesResponseBody(const ListBizEntitiesResponseBody &) = default ;
    ListBizEntitiesResponseBody(ListBizEntitiesResponseBody &&) = default ;
    ListBizEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizEntitiesResponseBody() = default ;
    ListBizEntitiesResponseBody& operator=(const ListBizEntitiesResponseBody &) = default ;
    ListBizEntitiesResponseBody& operator=(ListBizEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(BizEntityList, bizEntityList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(BizEntityList, bizEntityList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BizEntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizEntityList& obj) { 
          DARABONBA_PTR_TO_JSON(BelongToBizEntityIdList, belongToBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(ChildBizEntityIdList, childBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(HasChildBizEntity, hasChildBizEntity_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_TO_JSON(LevelSubBizObject, levelSubBizObject_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(RefTableCount, refTableCount_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
          DARABONBA_PTR_TO_JSON(SuffixBizEntityIdList, suffixBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BizEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(BelongToBizEntityIdList, belongToBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(ChildBizEntityIdList, childBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(HasChildBizEntity, hasChildBizEntity_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_FROM_JSON(LevelSubBizObject, levelSubBizObject_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(RefTableCount, refTableCount_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
          DARABONBA_PTR_FROM_JSON(SuffixBizEntityIdList, suffixBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        BizEntityList() = default ;
        BizEntityList(const BizEntityList &) = default ;
        BizEntityList(BizEntityList &&) = default ;
        BizEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizEntityList() = default ;
        BizEntityList& operator=(const BizEntityList &) = default ;
        BizEntityList& operator=(BizEntityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->belongToBizEntityIdList_ == nullptr
        && this->bizUnitId_ == nullptr && this->childBizEntityIdList_ == nullptr && this->dataDomainId_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hasChildBizEntity_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr
        && this->lastModifierName_ == nullptr && this->levelSubBizObject_ == nullptr && this->name_ == nullptr && this->onlineStatus_ == nullptr && this->ownerName_ == nullptr
        && this->ownerUserId_ == nullptr && this->refBizEntityIdList_ == nullptr && this->refTableCount_ == nullptr && this->status_ == nullptr && this->subType_ == nullptr
        && this->suffixBizEntityIdList_ == nullptr && this->type_ == nullptr; };
        // belongToBizEntityIdList Field Functions 
        bool hasBelongToBizEntityIdList() const { return this->belongToBizEntityIdList_ != nullptr;};
        void deleteBelongToBizEntityIdList() { this->belongToBizEntityIdList_ = nullptr;};
        inline const vector<int64_t> & getBelongToBizEntityIdList() const { DARABONBA_PTR_GET_CONST(belongToBizEntityIdList_, vector<int64_t>) };
        inline vector<int64_t> getBelongToBizEntityIdList() { DARABONBA_PTR_GET(belongToBizEntityIdList_, vector<int64_t>) };
        inline BizEntityList& setBelongToBizEntityIdList(const vector<int64_t> & belongToBizEntityIdList) { DARABONBA_PTR_SET_VALUE(belongToBizEntityIdList_, belongToBizEntityIdList) };
        inline BizEntityList& setBelongToBizEntityIdList(vector<int64_t> && belongToBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(belongToBizEntityIdList_, belongToBizEntityIdList) };


        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline BizEntityList& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


        // childBizEntityIdList Field Functions 
        bool hasChildBizEntityIdList() const { return this->childBizEntityIdList_ != nullptr;};
        void deleteChildBizEntityIdList() { this->childBizEntityIdList_ = nullptr;};
        inline const vector<int64_t> & getChildBizEntityIdList() const { DARABONBA_PTR_GET_CONST(childBizEntityIdList_, vector<int64_t>) };
        inline vector<int64_t> getChildBizEntityIdList() { DARABONBA_PTR_GET(childBizEntityIdList_, vector<int64_t>) };
        inline BizEntityList& setChildBizEntityIdList(const vector<int64_t> & childBizEntityIdList) { DARABONBA_PTR_SET_VALUE(childBizEntityIdList_, childBizEntityIdList) };
        inline BizEntityList& setChildBizEntityIdList(vector<int64_t> && childBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(childBizEntityIdList_, childBizEntityIdList) };


        // dataDomainId Field Functions 
        bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
        void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
        inline int64_t getDataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
        inline BizEntityList& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BizEntityList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline BizEntityList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline BizEntityList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline BizEntityList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // hasChildBizEntity Field Functions 
        bool hasHasChildBizEntity() const { return this->hasChildBizEntity_ != nullptr;};
        void deleteHasChildBizEntity() { this->hasChildBizEntity_ = nullptr;};
        inline bool getHasChildBizEntity() const { DARABONBA_PTR_GET_DEFAULT(hasChildBizEntity_, false) };
        inline BizEntityList& setHasChildBizEntity(bool hasChildBizEntity) { DARABONBA_PTR_SET_VALUE(hasChildBizEntity_, hasChildBizEntity) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline BizEntityList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline BizEntityList& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // lastModifierName Field Functions 
        bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
        void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
        inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
        inline BizEntityList& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


        // levelSubBizObject Field Functions 
        bool hasLevelSubBizObject() const { return this->levelSubBizObject_ != nullptr;};
        void deleteLevelSubBizObject() { this->levelSubBizObject_ = nullptr;};
        inline bool getLevelSubBizObject() const { DARABONBA_PTR_GET_DEFAULT(levelSubBizObject_, false) };
        inline BizEntityList& setLevelSubBizObject(bool levelSubBizObject) { DARABONBA_PTR_SET_VALUE(levelSubBizObject_, levelSubBizObject) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BizEntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // onlineStatus Field Functions 
        bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
        void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
        inline string getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, "") };
        inline BizEntityList& setOnlineStatus(string onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline BizEntityList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
        inline BizEntityList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


        // refBizEntityIdList Field Functions 
        bool hasRefBizEntityIdList() const { return this->refBizEntityIdList_ != nullptr;};
        void deleteRefBizEntityIdList() { this->refBizEntityIdList_ = nullptr;};
        inline const vector<int64_t> & getRefBizEntityIdList() const { DARABONBA_PTR_GET_CONST(refBizEntityIdList_, vector<int64_t>) };
        inline vector<int64_t> getRefBizEntityIdList() { DARABONBA_PTR_GET(refBizEntityIdList_, vector<int64_t>) };
        inline BizEntityList& setRefBizEntityIdList(const vector<int64_t> & refBizEntityIdList) { DARABONBA_PTR_SET_VALUE(refBizEntityIdList_, refBizEntityIdList) };
        inline BizEntityList& setRefBizEntityIdList(vector<int64_t> && refBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(refBizEntityIdList_, refBizEntityIdList) };


        // refTableCount Field Functions 
        bool hasRefTableCount() const { return this->refTableCount_ != nullptr;};
        void deleteRefTableCount() { this->refTableCount_ = nullptr;};
        inline int32_t getRefTableCount() const { DARABONBA_PTR_GET_DEFAULT(refTableCount_, 0) };
        inline BizEntityList& setRefTableCount(int32_t refTableCount) { DARABONBA_PTR_SET_VALUE(refTableCount_, refTableCount) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BizEntityList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline BizEntityList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // suffixBizEntityIdList Field Functions 
        bool hasSuffixBizEntityIdList() const { return this->suffixBizEntityIdList_ != nullptr;};
        void deleteSuffixBizEntityIdList() { this->suffixBizEntityIdList_ = nullptr;};
        inline const vector<int64_t> & getSuffixBizEntityIdList() const { DARABONBA_PTR_GET_CONST(suffixBizEntityIdList_, vector<int64_t>) };
        inline vector<int64_t> getSuffixBizEntityIdList() { DARABONBA_PTR_GET(suffixBizEntityIdList_, vector<int64_t>) };
        inline BizEntityList& setSuffixBizEntityIdList(const vector<int64_t> & suffixBizEntityIdList) { DARABONBA_PTR_SET_VALUE(suffixBizEntityIdList_, suffixBizEntityIdList) };
        inline BizEntityList& setSuffixBizEntityIdList(vector<int64_t> && suffixBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(suffixBizEntityIdList_, suffixBizEntityIdList) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BizEntityList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<int64_t>> belongToBizEntityIdList_ {};
        shared_ptr<int64_t> bizUnitId_ {};
        shared_ptr<vector<int64_t>> childBizEntityIdList_ {};
        shared_ptr<int64_t> dataDomainId_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<bool> hasChildBizEntity_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> lastModifier_ {};
        shared_ptr<string> lastModifierName_ {};
        shared_ptr<bool> levelSubBizObject_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> onlineStatus_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<string> ownerUserId_ {};
        shared_ptr<vector<int64_t>> refBizEntityIdList_ {};
        shared_ptr<int32_t> refTableCount_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> subType_ {};
        shared_ptr<vector<int64_t>> suffixBizEntityIdList_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->bizEntityList_ == nullptr
        && this->totalCount_ == nullptr; };
      // bizEntityList Field Functions 
      bool hasBizEntityList() const { return this->bizEntityList_ != nullptr;};
      void deleteBizEntityList() { this->bizEntityList_ = nullptr;};
      inline const vector<PageResult::BizEntityList> & getBizEntityList() const { DARABONBA_PTR_GET_CONST(bizEntityList_, vector<PageResult::BizEntityList>) };
      inline vector<PageResult::BizEntityList> getBizEntityList() { DARABONBA_PTR_GET(bizEntityList_, vector<PageResult::BizEntityList>) };
      inline PageResult& setBizEntityList(const vector<PageResult::BizEntityList> & bizEntityList) { DARABONBA_PTR_SET_VALUE(bizEntityList_, bizEntityList) };
      inline PageResult& setBizEntityList(vector<PageResult::BizEntityList> && bizEntityList) { DARABONBA_PTR_SET_RVALUE(bizEntityList_, bizEntityList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::BizEntityList>> bizEntityList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBizEntitiesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBizEntitiesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBizEntitiesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListBizEntitiesResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListBizEntitiesResponseBody::PageResult) };
    inline ListBizEntitiesResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListBizEntitiesResponseBody::PageResult) };
    inline ListBizEntitiesResponseBody& setPageResult(const ListBizEntitiesResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListBizEntitiesResponseBody& setPageResult(ListBizEntitiesResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBizEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBizEntitiesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListBizEntitiesResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
