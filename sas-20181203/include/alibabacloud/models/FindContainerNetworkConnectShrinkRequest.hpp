// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FindContainerNetworkConnectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstNode, dstNodeShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrcNode, srcNodeShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstNode, dstNodeShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrcNode, srcNodeShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    FindContainerNetworkConnectShrinkRequest() = default ;
    FindContainerNetworkConnectShrinkRequest(const FindContainerNetworkConnectShrinkRequest &) = default ;
    FindContainerNetworkConnectShrinkRequest(FindContainerNetworkConnectShrinkRequest &&) = default ;
    FindContainerNetworkConnectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectShrinkRequest() = default ;
    FindContainerNetworkConnectShrinkRequest& operator=(const FindContainerNetworkConnectShrinkRequest &) = default ;
    FindContainerNetworkConnectShrinkRequest& operator=(FindContainerNetworkConnectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteriaType_ == nullptr
        && return this->currentPage_ == nullptr && return this->dstNodeShrink_ == nullptr && return this->endTime_ == nullptr && return this->pageSize_ == nullptr && return this->srcNodeShrink_ == nullptr
        && return this->startTime_ == nullptr; };
    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string criteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline FindContainerNetworkConnectShrinkRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline FindContainerNetworkConnectShrinkRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstNodeShrink Field Functions 
    bool hasDstNodeShrink() const { return this->dstNodeShrink_ != nullptr;};
    void deleteDstNodeShrink() { this->dstNodeShrink_ = nullptr;};
    inline string dstNodeShrink() const { DARABONBA_PTR_GET_DEFAULT(dstNodeShrink_, "") };
    inline FindContainerNetworkConnectShrinkRequest& setDstNodeShrink(string dstNodeShrink) { DARABONBA_PTR_SET_VALUE(dstNodeShrink_, dstNodeShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline FindContainerNetworkConnectShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline FindContainerNetworkConnectShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcNodeShrink Field Functions 
    bool hasSrcNodeShrink() const { return this->srcNodeShrink_ != nullptr;};
    void deleteSrcNodeShrink() { this->srcNodeShrink_ = nullptr;};
    inline string srcNodeShrink() const { DARABONBA_PTR_GET_DEFAULT(srcNodeShrink_, "") };
    inline FindContainerNetworkConnectShrinkRequest& setSrcNodeShrink(string srcNodeShrink) { DARABONBA_PTR_SET_VALUE(srcNodeShrink_, srcNodeShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline FindContainerNetworkConnectShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The type of the information that you want to query. Valid values:
    // 
    // *   **EDGE**: connection information
    std::shared_ptr<string> criteriaType_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The information about the destination node.
    std::shared_ptr<string> dstNodeShrink_ = nullptr;
    // The end time of the network connection.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The information about the source node.
    std::shared_ptr<string> srcNodeShrink_ = nullptr;
    // The start time of the network connection.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
