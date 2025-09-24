// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListModelVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ListModelVersionsRequest() = default ;
    ListModelVersionsRequest(const ListModelVersionsRequest &) = default ;
    ListModelVersionsRequest(ListModelVersionsRequest &&) = default ;
    ListModelVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelVersionsRequest() = default ;
    ListModelVersionsRequest& operator=(const ListModelVersionsRequest &) = default ;
    ListModelVersionsRequest& operator=(ListModelVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalStatus_ != nullptr
        && this->formatType_ != nullptr && this->frameworkType_ != nullptr && this->label_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->sortBy_ != nullptr && this->sourceId_ != nullptr && this->sourceType_ != nullptr && this->versionName_ != nullptr; };
    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string approvalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline ListModelVersionsRequest& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string formatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline ListModelVersionsRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string frameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline ListModelVersionsRequest& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListModelVersionsRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListModelVersionsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelVersionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelVersionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListModelVersionsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListModelVersionsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListModelVersionsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListModelVersionsRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The approval status based on which the model versions are queried. Valid values:
    // 
    // *   Pending
    // *   Approved
    // *   Rejected
    std::shared_ptr<string> approvalStatus_ = nullptr;
    // The model format used to filter model versions. Valid values:
    // 
    // *   OfflineModel
    // *   SavedModel
    // *   Keras H5
    // *   Frozen Pb
    // *   Caffe Prototxt
    // *   TorchScript
    // *   XGBoost
    // *   PMML
    // *   AlinkModel
    // *   ONNX
    std::shared_ptr<string> formatType_ = nullptr;
    // The framework used to filter model versions.
    // 
    // *   Pytorch -XGBoost
    // *   Keras
    // *   Caffe
    // *   Alink
    // *   Xflow
    // *   TensorFlow
    std::shared_ptr<string> frameworkType_ = nullptr;
    // The label. Model versions whose label key or label value contains a specific label are filtered.
    std::shared_ptr<string> label_ = nullptr;
    // The order in which the entries are sorted by the specific field on the returned page. Default value: ASC.
    // 
    // *   ASC
    // *   DESC
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The field used to sort the results. The GmtCreateTime field is used for sorting.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The source ID.
    // 
    // *   If the source type is Custom, this field is not limited.
    // *   If the source type is PAIFlow or TrainingService, the format is:
    // 
    // <!---->
    // 
    //     region=<region_id>,workspaceId=<workspace_id>,kind=<kind>,id=<id>
    // 
    // Take note of the following parameters:
    // 
    // *   region is the region ID.
    // *   workspaceId is the ID of the workspace.
    // *   kind is the type. Valid values: PipelineRun (PAIFlow) and ServiceJob (training service).
    // *   id is a unique identifier.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The source type used to filter model versions. Valid values:
    // 
    // *   Custom (default)
    // *   PAIFlow
    // *   TrainingService
    std::shared_ptr<string> sourceType_ = nullptr;
    // The model version used to filter model versions.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
