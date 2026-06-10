// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDSENTITYVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDSENTITYVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListDSEntityValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDSEntityValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EntityValues, entityValues_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDSEntityValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityValues, entityValues_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDSEntityValueResponseBody() = default ;
    ListDSEntityValueResponseBody(const ListDSEntityValueResponseBody &) = default ;
    ListDSEntityValueResponseBody(ListDSEntityValueResponseBody &&) = default ;
    ListDSEntityValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDSEntityValueResponseBody() = default ;
    ListDSEntityValueResponseBody& operator=(const ListDSEntityValueResponseBody &) = default ;
    ListDSEntityValueResponseBody& operator=(ListDSEntityValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntityValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityValues& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(EntityValueId, entityValueId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Synonyms, synonyms_);
      };
      friend void from_json(const Darabonba::Json& j, EntityValues& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(EntityValueId, entityValueId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Synonyms, synonyms_);
      };
      EntityValues() = default ;
      EntityValues(const EntityValues &) = default ;
      EntityValues(EntityValues &&) = default ;
      EntityValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityValues() = default ;
      EntityValues& operator=(const EntityValues &) = default ;
      EntityValues& operator=(EntityValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->entityId_ == nullptr && this->entityValueId_ == nullptr && this->modifyTime_ == nullptr && this->synonyms_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline EntityValues& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EntityValues& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
      inline EntityValues& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityValueId Field Functions 
      bool hasEntityValueId() const { return this->entityValueId_ != nullptr;};
      void deleteEntityValueId() { this->entityValueId_ = nullptr;};
      inline int64_t getEntityValueId() const { DARABONBA_PTR_GET_DEFAULT(entityValueId_, 0L) };
      inline EntityValues& setEntityValueId(int64_t entityValueId) { DARABONBA_PTR_SET_VALUE(entityValueId_, entityValueId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline EntityValues& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // synonyms Field Functions 
      bool hasSynonyms() const { return this->synonyms_ != nullptr;};
      void deleteSynonyms() { this->synonyms_ = nullptr;};
      inline const vector<string> & getSynonyms() const { DARABONBA_PTR_GET_CONST(synonyms_, vector<string>) };
      inline vector<string> getSynonyms() { DARABONBA_PTR_GET(synonyms_, vector<string>) };
      inline EntityValues& setSynonyms(const vector<string> & synonyms) { DARABONBA_PTR_SET_VALUE(synonyms_, synonyms) };
      inline EntityValues& setSynonyms(vector<string> && synonyms) { DARABONBA_PTR_SET_RVALUE(synonyms_, synonyms) };


    protected:
      // The content of the entity value, which can be a standard value or a regular expression.
      shared_ptr<string> content_ {};
      // The creation time of the entity value in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the entity.
      shared_ptr<int64_t> entityId_ {};
      // The ID of the entity value.
      shared_ptr<int64_t> entityValueId_ {};
      // The last modification time of the entity value in UTC.
      shared_ptr<string> modifyTime_ {};
      // A list of synonyms for the entity value.
      shared_ptr<vector<string>> synonyms_ {};
    };

    virtual bool empty() const override { return this->entityValues_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // entityValues Field Functions 
    bool hasEntityValues() const { return this->entityValues_ != nullptr;};
    void deleteEntityValues() { this->entityValues_ = nullptr;};
    inline const vector<ListDSEntityValueResponseBody::EntityValues> & getEntityValues() const { DARABONBA_PTR_GET_CONST(entityValues_, vector<ListDSEntityValueResponseBody::EntityValues>) };
    inline vector<ListDSEntityValueResponseBody::EntityValues> getEntityValues() { DARABONBA_PTR_GET(entityValues_, vector<ListDSEntityValueResponseBody::EntityValues>) };
    inline ListDSEntityValueResponseBody& setEntityValues(const vector<ListDSEntityValueResponseBody::EntityValues> & entityValues) { DARABONBA_PTR_SET_VALUE(entityValues_, entityValues) };
    inline ListDSEntityValueResponseBody& setEntityValues(vector<ListDSEntityValueResponseBody::EntityValues> && entityValues) { DARABONBA_PTR_SET_RVALUE(entityValues_, entityValues) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDSEntityValueResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDSEntityValueResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDSEntityValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDSEntityValueResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of entity values.
    shared_ptr<vector<ListDSEntityValueResponseBody::EntityValues>> entityValues_ {};
    // The page number of the returned results.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the returned page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // The total count of matching entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
