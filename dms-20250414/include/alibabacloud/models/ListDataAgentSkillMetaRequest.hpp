// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTSKILLMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTSKILLMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataAgentSkillMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentSkillMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SkillFrom, skillFrom_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentSkillMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SkillFrom, skillFrom_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDataAgentSkillMetaRequest() = default ;
    ListDataAgentSkillMetaRequest(const ListDataAgentSkillMetaRequest &) = default ;
    ListDataAgentSkillMetaRequest(ListDataAgentSkillMetaRequest &&) = default ;
    ListDataAgentSkillMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentSkillMetaRequest() = default ;
    ListDataAgentSkillMetaRequest& operator=(const ListDataAgentSkillMetaRequest &) = default ;
    ListDataAgentSkillMetaRequest& operator=(ListDataAgentSkillMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->searchKey_ == nullptr && this->skillFrom_ == nullptr && this->skillId_ == nullptr && this->skillName_ == nullptr
        && this->workspaceId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAgentSkillMetaRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAgentSkillMetaRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListDataAgentSkillMetaRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // skillFrom Field Functions 
    bool hasSkillFrom() const { return this->skillFrom_ != nullptr;};
    void deleteSkillFrom() { this->skillFrom_ = nullptr;};
    inline string getSkillFrom() const { DARABONBA_PTR_GET_DEFAULT(skillFrom_, "") };
    inline ListDataAgentSkillMetaRequest& setSkillFrom(string skillFrom) { DARABONBA_PTR_SET_VALUE(skillFrom_, skillFrom) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline ListDataAgentSkillMetaRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline ListDataAgentSkillMetaRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDataAgentSkillMetaRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The page number, starting from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The keyword for fuzzy match.
    shared_ptr<string> searchKey_ {};
    // The source of the skill. Valid values:
    // 
    // - User: a skill uploaded by the user.
    // - Agent: a skill derived from Agent analysis.
    shared_ptr<string> skillFrom_ {};
    // The skill ID.
    shared_ptr<string> skillId_ {};
    // The skill name.
    shared_ptr<string> skillName_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
