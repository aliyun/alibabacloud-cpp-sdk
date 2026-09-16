// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSkillResponseBody() = default ;
    ListSkillResponseBody(const ListSkillResponseBody &) = default ;
    ListSkillResponseBody(ListSkillResponseBody &&) = default ;
    ListSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillResponseBody() = default ;
    ListSkillResponseBody& operator=(const ListSkillResponseBody &) = default ;
    ListSkillResponseBody& operator=(ListSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveVersionId, activeVersionId_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_ANY_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Dbtypes, dbtypes_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(SkillType, skillType_);
        DARABONBA_PTR_TO_JSON(Slug, slug_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveVersionId, activeVersionId_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_ANY_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Dbtypes, dbtypes_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
        DARABONBA_PTR_FROM_JSON(Slug, slug_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
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
      virtual bool empty() const override { return this->activeVersionId_ == nullptr
        && this->category_ == nullptr && this->content_ == nullptr && this->createdAt_ == nullptr && this->dbtypes_ == nullptr && this->description_ == nullptr
        && this->displayName_ == nullptr && this->icon_ == nullptr && this->id_ == nullptr && this->isDeleted_ == nullptr && this->name_ == nullptr
        && this->scope_ == nullptr && this->skillType_ == nullptr && this->slug_ == nullptr && this->updatedAt_ == nullptr; };
      // activeVersionId Field Functions 
      bool hasActiveVersionId() const { return this->activeVersionId_ != nullptr;};
      void deleteActiveVersionId() { this->activeVersionId_ = nullptr;};
      inline string getActiveVersionId() const { DARABONBA_PTR_GET_DEFAULT(activeVersionId_, "") };
      inline Data& setActiveVersionId(string activeVersionId) { DARABONBA_PTR_SET_VALUE(activeVersionId_, activeVersionId) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline       const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
      Darabonba::Json & getContent() { DARABONBA_GET(content_) };
      inline Data& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
      inline Data& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // dbtypes Field Functions 
      bool hasDbtypes() const { return this->dbtypes_ != nullptr;};
      void deleteDbtypes() { this->dbtypes_ = nullptr;};
      inline const vector<string> & getDbtypes() const { DARABONBA_PTR_GET_CONST(dbtypes_, vector<string>) };
      inline vector<string> getDbtypes() { DARABONBA_PTR_GET(dbtypes_, vector<string>) };
      inline Data& setDbtypes(const vector<string> & dbtypes) { DARABONBA_PTR_SET_VALUE(dbtypes_, dbtypes) };
      inline Data& setDbtypes(vector<string> && dbtypes) { DARABONBA_PTR_SET_RVALUE(dbtypes_, dbtypes) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Data& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
      inline Data& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Data& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // skillType Field Functions 
      bool hasSkillType() const { return this->skillType_ != nullptr;};
      void deleteSkillType() { this->skillType_ = nullptr;};
      inline string getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, "") };
      inline Data& setSkillType(string skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


      // slug Field Functions 
      bool hasSlug() const { return this->slug_ != nullptr;};
      void deleteSlug() { this->slug_ = nullptr;};
      inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
      inline Data& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The ID of the currently active version.
      shared_ptr<string> activeVersionId_ {};
      // The skill category.
      shared_ptr<string> category_ {};
      // The data content.
      Darabonba::Json content_ {};
      // The creation time.
      shared_ptr<string> createdAt_ {};
      // The list of database types.
      shared_ptr<vector<string>> dbtypes_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The display name of the skill.
      shared_ptr<string> displayName_ {};
      // The public HTTPS URL of the current icon. Empty if not configured.
      shared_ptr<string> icon_ {};
      // The unique identifier of the skill.
      shared_ptr<string> id_ {};
      // Indicates whether the skill is deleted.
      shared_ptr<bool> isDeleted_ {};
      // The skill name.
      shared_ptr<string> name_ {};
      // The visibility scope of the skill.
      shared_ptr<string> scope_ {};
      // The skill type.
      shared_ptr<string> skillType_ {};
      // The stable identifier of the skill.
      shared_ptr<string> slug_ {};
      // The update time.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSkillResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSkillResponseBody::Data>) };
    inline vector<ListSkillResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSkillResponseBody::Data>) };
    inline ListSkillResponseBody& setData(const vector<ListSkillResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSkillResponseBody& setData(vector<ListSkillResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSkillResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSkillResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSkillResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The skill list.
    shared_ptr<vector<ListSkillResponseBody::Data>> data_ {};
    // The current page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The unique request identifier.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
