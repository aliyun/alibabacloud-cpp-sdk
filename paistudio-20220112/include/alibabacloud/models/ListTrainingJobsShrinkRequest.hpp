// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsTempAlgo, isTempAlgo_);
      DARABONBA_PTR_TO_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrainingJobId, trainingJobId_);
      DARABONBA_PTR_TO_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsTempAlgo, isTempAlgo_);
      DARABONBA_PTR_FROM_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrainingJobId, trainingJobId_);
      DARABONBA_PTR_FROM_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListTrainingJobsShrinkRequest() = default ;
    ListTrainingJobsShrinkRequest(const ListTrainingJobsShrinkRequest &) = default ;
    ListTrainingJobsShrinkRequest(ListTrainingJobsShrinkRequest &&) = default ;
    ListTrainingJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsShrinkRequest() = default ;
    ListTrainingJobsShrinkRequest& operator=(const ListTrainingJobsShrinkRequest &) = default ;
    ListTrainingJobsShrinkRequest& operator=(ListTrainingJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmName_ == nullptr
        && this->algorithmProvider_ == nullptr && this->endTime_ == nullptr && this->isTempAlgo_ == nullptr && this->labelsShrink_ == nullptr && this->order_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->trainingJobId_ == nullptr && this->trainingJobName_ == nullptr && this->workspaceId_ == nullptr; };
    // algorithmName Field Functions 
    bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
    void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
    inline string getAlgorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
    inline ListTrainingJobsShrinkRequest& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


    // algorithmProvider Field Functions 
    bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
    void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
    inline string getAlgorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
    inline ListTrainingJobsShrinkRequest& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTrainingJobsShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isTempAlgo Field Functions 
    bool hasIsTempAlgo() const { return this->isTempAlgo_ != nullptr;};
    void deleteIsTempAlgo() { this->isTempAlgo_ = nullptr;};
    inline bool getIsTempAlgo() const { DARABONBA_PTR_GET_DEFAULT(isTempAlgo_, false) };
    inline ListTrainingJobsShrinkRequest& setIsTempAlgo(bool isTempAlgo) { DARABONBA_PTR_SET_VALUE(isTempAlgo_, isTempAlgo) };


    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string getLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline ListTrainingJobsShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTrainingJobsShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListTrainingJobsShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTrainingJobsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTrainingJobsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTrainingJobsShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTrainingJobsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trainingJobId Field Functions 
    bool hasTrainingJobId() const { return this->trainingJobId_ != nullptr;};
    void deleteTrainingJobId() { this->trainingJobId_ = nullptr;};
    inline string getTrainingJobId() const { DARABONBA_PTR_GET_DEFAULT(trainingJobId_, "") };
    inline ListTrainingJobsShrinkRequest& setTrainingJobId(string trainingJobId) { DARABONBA_PTR_SET_VALUE(trainingJobId_, trainingJobId) };


    // trainingJobName Field Functions 
    bool hasTrainingJobName() const { return this->trainingJobName_ != nullptr;};
    void deleteTrainingJobName() { this->trainingJobName_ = nullptr;};
    inline string getTrainingJobName() const { DARABONBA_PTR_GET_DEFAULT(trainingJobName_, "") };
    inline ListTrainingJobsShrinkRequest& setTrainingJobName(string trainingJobName) { DARABONBA_PTR_SET_VALUE(trainingJobName_, trainingJobName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListTrainingJobsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> algorithmName_ {};
    shared_ptr<string> algorithmProvider_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<bool> isTempAlgo_ {};
    shared_ptr<string> labelsShrink_ {};
    shared_ptr<string> order_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> trainingJobId_ {};
    shared_ptr<string> trainingJobName_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
