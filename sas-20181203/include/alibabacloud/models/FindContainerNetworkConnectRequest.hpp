// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FindContainerNetworkConnectRequestDstNode.hpp>
#include <alibabacloud/models/FindContainerNetworkConnectRequestSrcNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FindContainerNetworkConnectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstNode, dstNode_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrcNode, srcNode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaType, criteriaType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstNode, dstNode_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrcNode, srcNode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    FindContainerNetworkConnectRequest() = default ;
    FindContainerNetworkConnectRequest(const FindContainerNetworkConnectRequest &) = default ;
    FindContainerNetworkConnectRequest(FindContainerNetworkConnectRequest &&) = default ;
    FindContainerNetworkConnectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectRequest() = default ;
    FindContainerNetworkConnectRequest& operator=(const FindContainerNetworkConnectRequest &) = default ;
    FindContainerNetworkConnectRequest& operator=(FindContainerNetworkConnectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteriaType_ == nullptr
        && return this->currentPage_ == nullptr && return this->dstNode_ == nullptr && return this->endTime_ == nullptr && return this->pageSize_ == nullptr && return this->srcNode_ == nullptr
        && return this->startTime_ == nullptr; };
    // criteriaType Field Functions 
    bool hasCriteriaType() const { return this->criteriaType_ != nullptr;};
    void deleteCriteriaType() { this->criteriaType_ = nullptr;};
    inline string criteriaType() const { DARABONBA_PTR_GET_DEFAULT(criteriaType_, "") };
    inline FindContainerNetworkConnectRequest& setCriteriaType(string criteriaType) { DARABONBA_PTR_SET_VALUE(criteriaType_, criteriaType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline FindContainerNetworkConnectRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstNode Field Functions 
    bool hasDstNode() const { return this->dstNode_ != nullptr;};
    void deleteDstNode() { this->dstNode_ = nullptr;};
    inline const FindContainerNetworkConnectRequestDstNode & dstNode() const { DARABONBA_PTR_GET_CONST(dstNode_, FindContainerNetworkConnectRequestDstNode) };
    inline FindContainerNetworkConnectRequestDstNode dstNode() { DARABONBA_PTR_GET(dstNode_, FindContainerNetworkConnectRequestDstNode) };
    inline FindContainerNetworkConnectRequest& setDstNode(const FindContainerNetworkConnectRequestDstNode & dstNode) { DARABONBA_PTR_SET_VALUE(dstNode_, dstNode) };
    inline FindContainerNetworkConnectRequest& setDstNode(FindContainerNetworkConnectRequestDstNode && dstNode) { DARABONBA_PTR_SET_RVALUE(dstNode_, dstNode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline FindContainerNetworkConnectRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline FindContainerNetworkConnectRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcNode Field Functions 
    bool hasSrcNode() const { return this->srcNode_ != nullptr;};
    void deleteSrcNode() { this->srcNode_ = nullptr;};
    inline const FindContainerNetworkConnectRequestSrcNode & srcNode() const { DARABONBA_PTR_GET_CONST(srcNode_, FindContainerNetworkConnectRequestSrcNode) };
    inline FindContainerNetworkConnectRequestSrcNode srcNode() { DARABONBA_PTR_GET(srcNode_, FindContainerNetworkConnectRequestSrcNode) };
    inline FindContainerNetworkConnectRequest& setSrcNode(const FindContainerNetworkConnectRequestSrcNode & srcNode) { DARABONBA_PTR_SET_VALUE(srcNode_, srcNode) };
    inline FindContainerNetworkConnectRequest& setSrcNode(FindContainerNetworkConnectRequestSrcNode && srcNode) { DARABONBA_PTR_SET_RVALUE(srcNode_, srcNode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline FindContainerNetworkConnectRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The type of the information that you want to query. Valid values:
    // 
    // *   **EDGE**: connection information
    std::shared_ptr<string> criteriaType_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The information about the destination node.
    std::shared_ptr<FindContainerNetworkConnectRequestDstNode> dstNode_ = nullptr;
    // The end time of the network connection.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The information about the source node.
    std::shared_ptr<FindContainerNetworkConnectRequestSrcNode> srcNode_ = nullptr;
    // The start time of the network connection.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
