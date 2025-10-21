// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListModelInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_TO_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_TO_JSON(IsSupportContentSafe, isSupportContentSafe_);
      DARABONBA_PTR_TO_JSON(IsSupportPromptAttack, isSupportPromptAttack_);
      DARABONBA_PTR_TO_JSON(IsSupportSensitiveTopic, isSupportSensitiveTopic_);
      DARABONBA_PTR_TO_JSON(ModelSource, modelSource_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_FROM_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_FROM_JSON(IsSupportContentSafe, isSupportContentSafe_);
      DARABONBA_PTR_FROM_JSON(IsSupportPromptAttack, isSupportPromptAttack_);
      DARABONBA_PTR_FROM_JSON(IsSupportSensitiveTopic, isSupportSensitiveTopic_);
      DARABONBA_PTR_FROM_JSON(ModelSource, modelSource_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListModelInstanceRequest() = default ;
    ListModelInstanceRequest(const ListModelInstanceRequest &) = default ;
    ListModelInstanceRequest(ListModelInstanceRequest &&) = default ;
    ListModelInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelInstanceRequest() = default ;
    ListModelInstanceRequest& operator=(const ListModelInstanceRequest &) = default ;
    ListModelInstanceRequest& operator=(ListModelInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->easServiceName_ == nullptr
        && return this->isSidecarPolicy_ == nullptr && return this->isSupportContentSafe_ == nullptr && return this->isSupportPromptAttack_ == nullptr && return this->isSupportSensitiveTopic_ == nullptr && return this->modelSource_ == nullptr
        && return this->order_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->sortBy_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // easServiceName Field Functions 
    bool hasEasServiceName() const { return this->easServiceName_ != nullptr;};
    void deleteEasServiceName() { this->easServiceName_ = nullptr;};
    inline string easServiceName() const { DARABONBA_PTR_GET_DEFAULT(easServiceName_, "") };
    inline ListModelInstanceRequest& setEasServiceName(string easServiceName) { DARABONBA_PTR_SET_VALUE(easServiceName_, easServiceName) };


    // isSidecarPolicy Field Functions 
    bool hasIsSidecarPolicy() const { return this->isSidecarPolicy_ != nullptr;};
    void deleteIsSidecarPolicy() { this->isSidecarPolicy_ = nullptr;};
    inline int32_t isSidecarPolicy() const { DARABONBA_PTR_GET_DEFAULT(isSidecarPolicy_, 0) };
    inline ListModelInstanceRequest& setIsSidecarPolicy(int32_t isSidecarPolicy) { DARABONBA_PTR_SET_VALUE(isSidecarPolicy_, isSidecarPolicy) };


    // isSupportContentSafe Field Functions 
    bool hasIsSupportContentSafe() const { return this->isSupportContentSafe_ != nullptr;};
    void deleteIsSupportContentSafe() { this->isSupportContentSafe_ = nullptr;};
    inline int32_t isSupportContentSafe() const { DARABONBA_PTR_GET_DEFAULT(isSupportContentSafe_, 0) };
    inline ListModelInstanceRequest& setIsSupportContentSafe(int32_t isSupportContentSafe) { DARABONBA_PTR_SET_VALUE(isSupportContentSafe_, isSupportContentSafe) };


    // isSupportPromptAttack Field Functions 
    bool hasIsSupportPromptAttack() const { return this->isSupportPromptAttack_ != nullptr;};
    void deleteIsSupportPromptAttack() { this->isSupportPromptAttack_ = nullptr;};
    inline int32_t isSupportPromptAttack() const { DARABONBA_PTR_GET_DEFAULT(isSupportPromptAttack_, 0) };
    inline ListModelInstanceRequest& setIsSupportPromptAttack(int32_t isSupportPromptAttack) { DARABONBA_PTR_SET_VALUE(isSupportPromptAttack_, isSupportPromptAttack) };


    // isSupportSensitiveTopic Field Functions 
    bool hasIsSupportSensitiveTopic() const { return this->isSupportSensitiveTopic_ != nullptr;};
    void deleteIsSupportSensitiveTopic() { this->isSupportSensitiveTopic_ = nullptr;};
    inline int32_t isSupportSensitiveTopic() const { DARABONBA_PTR_GET_DEFAULT(isSupportSensitiveTopic_, 0) };
    inline ListModelInstanceRequest& setIsSupportSensitiveTopic(int32_t isSupportSensitiveTopic) { DARABONBA_PTR_SET_VALUE(isSupportSensitiveTopic_, isSupportSensitiveTopic) };


    // modelSource Field Functions 
    bool hasModelSource() const { return this->modelSource_ != nullptr;};
    void deleteModelSource() { this->modelSource_ = nullptr;};
    inline string modelSource() const { DARABONBA_PTR_GET_DEFAULT(modelSource_, "") };
    inline ListModelInstanceRequest& setModelSource(string modelSource) { DARABONBA_PTR_SET_VALUE(modelSource_, modelSource) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListModelInstanceRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelInstanceRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelInstanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListModelInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListModelInstanceRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline ListModelInstanceRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> easServiceName_ = nullptr;
    std::shared_ptr<int32_t> isSidecarPolicy_ = nullptr;
    std::shared_ptr<int32_t> isSupportContentSafe_ = nullptr;
    std::shared_ptr<int32_t> isSupportPromptAttack_ = nullptr;
    std::shared_ptr<int32_t> isSupportSensitiveTopic_ = nullptr;
    std::shared_ptr<string> modelSource_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
