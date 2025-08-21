// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGSHISTOGRAMITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGSHISTOGRAMITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem(const DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem(DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem &&) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem& operator=(const DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem& operator=(DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->nodeId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline const vector<int64_t> & count() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
    inline vector<int64_t> count() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    std::shared_ptr<vector<int64_t>> count_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
