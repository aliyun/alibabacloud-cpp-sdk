// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYTEMPLATESRESPONSEBODY_HPP_
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
  class ListQualityTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListQualityTemplatesResponseBody() = default ;
    ListQualityTemplatesResponseBody(const ListQualityTemplatesResponseBody &) = default ;
    ListQualityTemplatesResponseBody(ListQualityTemplatesResponseBody &&) = default ;
    ListQualityTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityTemplatesResponseBody() = default ;
    ListQualityTemplatesResponseBody& operator=(const ListQualityTemplatesResponseBody &) = default ;
    ListQualityTemplatesResponseBody& operator=(ListQualityTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(QualityTemplateList, qualityTemplateList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(QualityTemplateList, qualityTemplateList_);
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
      class QualityTemplateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QualityTemplateList& obj) { 
          DARABONBA_PTR_TO_JSON(Catalog, catalog_);
          DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FormPropertyList, formPropertyList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsSystemTemplate, isSystemTemplate_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(ModifierName, modifierName_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(SupportAllDataSourceType, supportAllDataSourceType_);
          DARABONBA_PTR_TO_JSON(SupportDataSourceTypeList, supportDataSourceTypeList_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(TypeName, typeName_);
        };
        friend void from_json(const Darabonba::Json& j, QualityTemplateList& obj) { 
          DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
          DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FormPropertyList, formPropertyList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsSystemTemplate, isSystemTemplate_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(ModifierName, modifierName_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(SupportAllDataSourceType, supportAllDataSourceType_);
          DARABONBA_PTR_FROM_JSON(SupportDataSourceTypeList, supportDataSourceTypeList_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
        };
        QualityTemplateList() = default ;
        QualityTemplateList(const QualityTemplateList &) = default ;
        QualityTemplateList(QualityTemplateList &&) = default ;
        QualityTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QualityTemplateList() = default ;
        QualityTemplateList& operator=(const QualityTemplateList &) = default ;
        QualityTemplateList& operator=(QualityTemplateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FormPropertyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FormPropertyList& obj) { 
            DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, FormPropertyList& obj) { 
            DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          FormPropertyList() = default ;
          FormPropertyList(const FormPropertyList &) = default ;
          FormPropertyList(FormPropertyList &&) = default ;
          FormPropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FormPropertyList() = default ;
          FormPropertyList& operator=(const FormPropertyList &) = default ;
          FormPropertyList& operator=(FormPropertyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->componentType_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
          // componentType Field Functions 
          bool hasComponentType() const { return this->componentType_ != nullptr;};
          void deleteComponentType() { this->componentType_ = nullptr;};
          inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
          inline FormPropertyList& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FormPropertyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline FormPropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> componentType_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->catalog_ == nullptr
        && this->catalogName_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->description_ == nullptr
        && this->formPropertyList_ == nullptr && this->id_ == nullptr && this->isSystemTemplate_ == nullptr && this->modifier_ == nullptr && this->modifierName_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->ownerName_ == nullptr && this->supportAllDataSourceType_ == nullptr
        && this->supportDataSourceTypeList_ == nullptr && this->type_ == nullptr && this->typeName_ == nullptr; };
        // catalog Field Functions 
        bool hasCatalog() const { return this->catalog_ != nullptr;};
        void deleteCatalog() { this->catalog_ = nullptr;};
        inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
        inline QualityTemplateList& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


        // catalogName Field Functions 
        bool hasCatalogName() const { return this->catalogName_ != nullptr;};
        void deleteCatalogName() { this->catalogName_ = nullptr;};
        inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
        inline QualityTemplateList& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline QualityTemplateList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline QualityTemplateList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline QualityTemplateList& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline QualityTemplateList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // formPropertyList Field Functions 
        bool hasFormPropertyList() const { return this->formPropertyList_ != nullptr;};
        void deleteFormPropertyList() { this->formPropertyList_ = nullptr;};
        inline const vector<QualityTemplateList::FormPropertyList> & getFormPropertyList() const { DARABONBA_PTR_GET_CONST(formPropertyList_, vector<QualityTemplateList::FormPropertyList>) };
        inline vector<QualityTemplateList::FormPropertyList> getFormPropertyList() { DARABONBA_PTR_GET(formPropertyList_, vector<QualityTemplateList::FormPropertyList>) };
        inline QualityTemplateList& setFormPropertyList(const vector<QualityTemplateList::FormPropertyList> & formPropertyList) { DARABONBA_PTR_SET_VALUE(formPropertyList_, formPropertyList) };
        inline QualityTemplateList& setFormPropertyList(vector<QualityTemplateList::FormPropertyList> && formPropertyList) { DARABONBA_PTR_SET_RVALUE(formPropertyList_, formPropertyList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline QualityTemplateList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isSystemTemplate Field Functions 
        bool hasIsSystemTemplate() const { return this->isSystemTemplate_ != nullptr;};
        void deleteIsSystemTemplate() { this->isSystemTemplate_ = nullptr;};
        inline bool getIsSystemTemplate() const { DARABONBA_PTR_GET_DEFAULT(isSystemTemplate_, false) };
        inline QualityTemplateList& setIsSystemTemplate(bool isSystemTemplate) { DARABONBA_PTR_SET_VALUE(isSystemTemplate_, isSystemTemplate) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline QualityTemplateList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // modifierName Field Functions 
        bool hasModifierName() const { return this->modifierName_ != nullptr;};
        void deleteModifierName() { this->modifierName_ = nullptr;};
        inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
        inline QualityTemplateList& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline QualityTemplateList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QualityTemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline QualityTemplateList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline QualityTemplateList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // supportAllDataSourceType Field Functions 
        bool hasSupportAllDataSourceType() const { return this->supportAllDataSourceType_ != nullptr;};
        void deleteSupportAllDataSourceType() { this->supportAllDataSourceType_ = nullptr;};
        inline bool getSupportAllDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(supportAllDataSourceType_, false) };
        inline QualityTemplateList& setSupportAllDataSourceType(bool supportAllDataSourceType) { DARABONBA_PTR_SET_VALUE(supportAllDataSourceType_, supportAllDataSourceType) };


        // supportDataSourceTypeList Field Functions 
        bool hasSupportDataSourceTypeList() const { return this->supportDataSourceTypeList_ != nullptr;};
        void deleteSupportDataSourceTypeList() { this->supportDataSourceTypeList_ = nullptr;};
        inline const vector<string> & getSupportDataSourceTypeList() const { DARABONBA_PTR_GET_CONST(supportDataSourceTypeList_, vector<string>) };
        inline vector<string> getSupportDataSourceTypeList() { DARABONBA_PTR_GET(supportDataSourceTypeList_, vector<string>) };
        inline QualityTemplateList& setSupportDataSourceTypeList(const vector<string> & supportDataSourceTypeList) { DARABONBA_PTR_SET_VALUE(supportDataSourceTypeList_, supportDataSourceTypeList) };
        inline QualityTemplateList& setSupportDataSourceTypeList(vector<string> && supportDataSourceTypeList) { DARABONBA_PTR_SET_RVALUE(supportDataSourceTypeList_, supportDataSourceTypeList) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline QualityTemplateList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // typeName Field Functions 
        bool hasTypeName() const { return this->typeName_ != nullptr;};
        void deleteTypeName() { this->typeName_ = nullptr;};
        inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
        inline QualityTemplateList& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


      protected:
        shared_ptr<string> catalog_ {};
        shared_ptr<string> catalogName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<string> description_ {};
        shared_ptr<vector<QualityTemplateList::FormPropertyList>> formPropertyList_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> isSystemTemplate_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<string> modifierName_ {};
        shared_ptr<string> modifyTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<bool> supportAllDataSourceType_ {};
        shared_ptr<vector<string>> supportDataSourceTypeList_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> typeName_ {};
      };

      virtual bool empty() const override { return this->qualityTemplateList_ == nullptr
        && this->totalCount_ == nullptr; };
      // qualityTemplateList Field Functions 
      bool hasQualityTemplateList() const { return this->qualityTemplateList_ != nullptr;};
      void deleteQualityTemplateList() { this->qualityTemplateList_ = nullptr;};
      inline const vector<PageResult::QualityTemplateList> & getQualityTemplateList() const { DARABONBA_PTR_GET_CONST(qualityTemplateList_, vector<PageResult::QualityTemplateList>) };
      inline vector<PageResult::QualityTemplateList> getQualityTemplateList() { DARABONBA_PTR_GET(qualityTemplateList_, vector<PageResult::QualityTemplateList>) };
      inline PageResult& setQualityTemplateList(const vector<PageResult::QualityTemplateList> & qualityTemplateList) { DARABONBA_PTR_SET_VALUE(qualityTemplateList_, qualityTemplateList) };
      inline PageResult& setQualityTemplateList(vector<PageResult::QualityTemplateList> && qualityTemplateList) { DARABONBA_PTR_SET_RVALUE(qualityTemplateList_, qualityTemplateList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::QualityTemplateList>> qualityTemplateList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListQualityTemplatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListQualityTemplatesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListQualityTemplatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListQualityTemplatesResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListQualityTemplatesResponseBody::PageResult) };
    inline ListQualityTemplatesResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListQualityTemplatesResponseBody::PageResult) };
    inline ListQualityTemplatesResponseBody& setPageResult(const ListQualityTemplatesResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListQualityTemplatesResponseBody& setPageResult(ListQualityTemplatesResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQualityTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListQualityTemplatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListQualityTemplatesResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
