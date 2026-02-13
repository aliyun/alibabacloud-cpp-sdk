// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateEndTime, createEndTime_);
      DARABONBA_PTR_TO_JSON(CreateStartTime, createStartTime_);
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(IsSaved, isSaved_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateEndTime, createEndTime_);
      DARABONBA_PTR_FROM_JSON(CreateStartTime, createStartTime_);
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(IsSaved, isSaved_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDataAgentSessionRequest() = default ;
    ListDataAgentSessionRequest(const ListDataAgentSessionRequest &) = default ;
    ListDataAgentSessionRequest(ListDataAgentSessionRequest &&) = default ;
    ListDataAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentSessionRequest() = default ;
    ListDataAgentSessionRequest& operator=(const ListDataAgentSessionRequest &) = default ;
    ListDataAgentSessionRequest& operator=(ListDataAgentSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createEndTime_ == nullptr
        && this->createStartTime_ == nullptr && this->customAgentId_ == nullptr && this->DMSUnit_ == nullptr && this->isSaved_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->queryType_ == nullptr && this->title_ == nullptr && this->workspaceId_ == nullptr; };
    // createEndTime Field Functions 
    bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
    void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
    inline int64_t getCreateEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, 0L) };
    inline ListDataAgentSessionRequest& setCreateEndTime(int64_t createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


    // createStartTime Field Functions 
    bool hasCreateStartTime() const { return this->createStartTime_ != nullptr;};
    void deleteCreateStartTime() { this->createStartTime_ = nullptr;};
    inline int64_t getCreateStartTime() const { DARABONBA_PTR_GET_DEFAULT(createStartTime_, 0L) };
    inline ListDataAgentSessionRequest& setCreateStartTime(int64_t createStartTime) { DARABONBA_PTR_SET_VALUE(createStartTime_, createStartTime) };


    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline ListDataAgentSessionRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline ListDataAgentSessionRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // isSaved Field Functions 
    bool hasIsSaved() const { return this->isSaved_ != nullptr;};
    void deleteIsSaved() { this->isSaved_ = nullptr;};
    inline bool getIsSaved() const { DARABONBA_PTR_GET_DEFAULT(isSaved_, false) };
    inline ListDataAgentSessionRequest& setIsSaved(bool isSaved) { DARABONBA_PTR_SET_VALUE(isSaved_, isSaved) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAgentSessionRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAgentSessionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline ListDataAgentSessionRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDataAgentSessionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDataAgentSessionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int64_t> createEndTime_ {};
    shared_ptr<int64_t> createStartTime_ {};
    shared_ptr<string> customAgentId_ {};
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<bool> isSaved_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> queryType_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
