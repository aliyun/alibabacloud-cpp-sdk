// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODYDATADATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODYDATADATAITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogHistogramAsyncResponseBodyDataDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(InsItems, insItems_);
      DARABONBA_PTR_TO_JSON(InsRole, insRole_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(InsItems, insItems_);
      DARABONBA_PTR_FROM_JSON(InsRole, insRole_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItem() = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItem(const DescribeSlowLogHistogramAsyncResponseBodyDataDataItem &) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItem(DescribeSlowLogHistogramAsyncResponseBodyDataDataItem &&) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogHistogramAsyncResponseBodyDataDataItem() = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& operator=(const DescribeSlowLogHistogramAsyncResponseBodyDataDataItem &) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& operator=(DescribeSlowLogHistogramAsyncResponseBodyDataDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->insItems_ == nullptr && return this->insRole_ == nullptr && return this->nodeId_ == nullptr && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline const vector<int64_t> & count() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
    inline vector<int64_t> count() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


    // insItems Field Functions 
    bool hasInsItems() const { return this->insItems_ != nullptr;};
    void deleteInsItems() { this->insItems_ = nullptr;};
    inline const vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems> & insItems() const { DARABONBA_PTR_GET_CONST(insItems_, vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems>) };
    inline vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems> insItems() { DARABONBA_PTR_GET(insItems_, vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& setInsItems(const vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems> & insItems) { DARABONBA_PTR_SET_VALUE(insItems_, insItems) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& setInsItems(vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems> && insItems) { DARABONBA_PTR_SET_RVALUE(insItems_, insItems) };


    // insRole Field Functions 
    bool hasInsRole() const { return this->insRole_ != nullptr;};
    void deleteInsRole() { this->insRole_ = nullptr;};
    inline string insRole() const { DARABONBA_PTR_GET_DEFAULT(insRole_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& setInsRole(string insRole) { DARABONBA_PTR_SET_VALUE(insRole_, insRole) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItem& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<int64_t>> count_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems>> insItems_ = nullptr;
    std::shared_ptr<string> insRole_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
