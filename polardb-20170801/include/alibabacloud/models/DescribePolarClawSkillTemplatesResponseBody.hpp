// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillTemplates, skillTemplates_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillTemplates, skillTemplates_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePolarClawSkillTemplatesResponseBody() = default ;
    DescribePolarClawSkillTemplatesResponseBody(const DescribePolarClawSkillTemplatesResponseBody &) = default ;
    DescribePolarClawSkillTemplatesResponseBody(DescribePolarClawSkillTemplatesResponseBody &&) = default ;
    DescribePolarClawSkillTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillTemplatesResponseBody() = default ;
    DescribePolarClawSkillTemplatesResponseBody& operator=(const DescribePolarClawSkillTemplatesResponseBody &) = default ;
    DescribePolarClawSkillTemplatesResponseBody& operator=(DescribePolarClawSkillTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SkillTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(Created, created_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Modified, modified_);
        DARABONBA_PTR_TO_JSON(SkillCounts, skillCounts_);
        DARABONBA_PTR_TO_JSON(SkillTemplateDesc, skillTemplateDesc_);
        DARABONBA_PTR_TO_JSON(SkillTemplateId, skillTemplateId_);
        DARABONBA_PTR_TO_JSON(SkillTemplateName, skillTemplateName_);
        DARABONBA_PTR_TO_JSON(SkillTemplateType, skillTemplateType_);
        DARABONBA_PTR_TO_JSON(SrcApplicationId, srcApplicationId_);
      };
      friend void from_json(const Darabonba::Json& j, SkillTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(Created, created_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Modified, modified_);
        DARABONBA_PTR_FROM_JSON(SkillCounts, skillCounts_);
        DARABONBA_PTR_FROM_JSON(SkillTemplateDesc, skillTemplateDesc_);
        DARABONBA_PTR_FROM_JSON(SkillTemplateId, skillTemplateId_);
        DARABONBA_PTR_FROM_JSON(SkillTemplateName, skillTemplateName_);
        DARABONBA_PTR_FROM_JSON(SkillTemplateType, skillTemplateType_);
        DARABONBA_PTR_FROM_JSON(SrcApplicationId, srcApplicationId_);
      };
      SkillTemplates() = default ;
      SkillTemplates(const SkillTemplates &) = default ;
      SkillTemplates(SkillTemplates &&) = default ;
      SkillTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SkillTemplates() = default ;
      SkillTemplates& operator=(const SkillTemplates &) = default ;
      SkillTemplates& operator=(SkillTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->id_ == nullptr && this->modified_ == nullptr && this->skillCounts_ == nullptr && this->skillTemplateDesc_ == nullptr && this->skillTemplateId_ == nullptr
        && this->skillTemplateName_ == nullptr && this->skillTemplateType_ == nullptr && this->srcApplicationId_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline SkillTemplates& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline SkillTemplates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modified Field Functions 
      bool hasModified() const { return this->modified_ != nullptr;};
      void deleteModified() { this->modified_ = nullptr;};
      inline string getModified() const { DARABONBA_PTR_GET_DEFAULT(modified_, "") };
      inline SkillTemplates& setModified(string modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


      // skillCounts Field Functions 
      bool hasSkillCounts() const { return this->skillCounts_ != nullptr;};
      void deleteSkillCounts() { this->skillCounts_ = nullptr;};
      inline string getSkillCounts() const { DARABONBA_PTR_GET_DEFAULT(skillCounts_, "") };
      inline SkillTemplates& setSkillCounts(string skillCounts) { DARABONBA_PTR_SET_VALUE(skillCounts_, skillCounts) };


      // skillTemplateDesc Field Functions 
      bool hasSkillTemplateDesc() const { return this->skillTemplateDesc_ != nullptr;};
      void deleteSkillTemplateDesc() { this->skillTemplateDesc_ = nullptr;};
      inline string getSkillTemplateDesc() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateDesc_, "") };
      inline SkillTemplates& setSkillTemplateDesc(string skillTemplateDesc) { DARABONBA_PTR_SET_VALUE(skillTemplateDesc_, skillTemplateDesc) };


      // skillTemplateId Field Functions 
      bool hasSkillTemplateId() const { return this->skillTemplateId_ != nullptr;};
      void deleteSkillTemplateId() { this->skillTemplateId_ = nullptr;};
      inline string getSkillTemplateId() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateId_, "") };
      inline SkillTemplates& setSkillTemplateId(string skillTemplateId) { DARABONBA_PTR_SET_VALUE(skillTemplateId_, skillTemplateId) };


      // skillTemplateName Field Functions 
      bool hasSkillTemplateName() const { return this->skillTemplateName_ != nullptr;};
      void deleteSkillTemplateName() { this->skillTemplateName_ = nullptr;};
      inline string getSkillTemplateName() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateName_, "") };
      inline SkillTemplates& setSkillTemplateName(string skillTemplateName) { DARABONBA_PTR_SET_VALUE(skillTemplateName_, skillTemplateName) };


      // skillTemplateType Field Functions 
      bool hasSkillTemplateType() const { return this->skillTemplateType_ != nullptr;};
      void deleteSkillTemplateType() { this->skillTemplateType_ = nullptr;};
      inline string getSkillTemplateType() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateType_, "") };
      inline SkillTemplates& setSkillTemplateType(string skillTemplateType) { DARABONBA_PTR_SET_VALUE(skillTemplateType_, skillTemplateType) };


      // srcApplicationId Field Functions 
      bool hasSrcApplicationId() const { return this->srcApplicationId_ != nullptr;};
      void deleteSrcApplicationId() { this->srcApplicationId_ = nullptr;};
      inline string getSrcApplicationId() const { DARABONBA_PTR_GET_DEFAULT(srcApplicationId_, "") };
      inline SkillTemplates& setSrcApplicationId(string srcApplicationId) { DARABONBA_PTR_SET_VALUE(srcApplicationId_, srcApplicationId) };


    protected:
      // The time when the skill template was created in UTC.
      shared_ptr<string> created_ {};
      // The rule ID.
      shared_ptr<string> id_ {};
      // The time when the skill template was last modified in UTC.
      shared_ptr<string> modified_ {};
      // The number of skills.
      shared_ptr<string> skillCounts_ {};
      // The skill template description.
      shared_ptr<string> skillTemplateDesc_ {};
      // The skill template ID.
      shared_ptr<string> skillTemplateId_ {};
      // The skill template name.
      shared_ptr<string> skillTemplateName_ {};
      // The skill templatetype. Valid values: 0: system template. 1: user template.
      shared_ptr<string> skillTemplateType_ {};
      // The source application ID.
      shared_ptr<string> srcApplicationId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->skillTemplates_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribePolarClawSkillTemplatesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribePolarClawSkillTemplatesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawSkillTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillTemplates Field Functions 
    bool hasSkillTemplates() const { return this->skillTemplates_ != nullptr;};
    void deleteSkillTemplates() { this->skillTemplates_ = nullptr;};
    inline const vector<DescribePolarClawSkillTemplatesResponseBody::SkillTemplates> & getSkillTemplates() const { DARABONBA_PTR_GET_CONST(skillTemplates_, vector<DescribePolarClawSkillTemplatesResponseBody::SkillTemplates>) };
    inline vector<DescribePolarClawSkillTemplatesResponseBody::SkillTemplates> getSkillTemplates() { DARABONBA_PTR_GET(skillTemplates_, vector<DescribePolarClawSkillTemplatesResponseBody::SkillTemplates>) };
    inline DescribePolarClawSkillTemplatesResponseBody& setSkillTemplates(const vector<DescribePolarClawSkillTemplatesResponseBody::SkillTemplates> & skillTemplates) { DARABONBA_PTR_SET_VALUE(skillTemplates_, skillTemplates) };
    inline DescribePolarClawSkillTemplatesResponseBody& setSkillTemplates(vector<DescribePolarClawSkillTemplatesResponseBody::SkillTemplates> && skillTemplates) { DARABONBA_PTR_SET_RVALUE(skillTemplates_, skillTemplates) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribePolarClawSkillTemplatesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill templates.
    shared_ptr<vector<DescribePolarClawSkillTemplatesResponseBody::SkillTemplates>> skillTemplates_ {};
    // The total number of entries. This parameter is returned only when you query a list.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
