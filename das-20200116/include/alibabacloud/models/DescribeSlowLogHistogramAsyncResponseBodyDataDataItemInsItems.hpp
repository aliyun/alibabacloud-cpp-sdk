// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODYDATADATAITEMINSITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODYDATADATAITEMINSITEMS_HPP_
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
  class DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(InsId, insId_);
      DARABONBA_PTR_TO_JSON(InsRole, insRole_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(InsId, insId_);
      DARABONBA_PTR_FROM_JSON(InsRole, insRole_);
    };
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems() = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems(const DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems &) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems(DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems &&) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems() = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems& operator=(const DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems &) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems& operator=(DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->insId_ != nullptr && this->insRole_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline const vector<int64_t> & count() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
    inline vector<int64_t> count() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


    // insId Field Functions 
    bool hasInsId() const { return this->insId_ != nullptr;};
    void deleteInsId() { this->insId_ = nullptr;};
    inline string insId() const { DARABONBA_PTR_GET_DEFAULT(insId_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems& setInsId(string insId) { DARABONBA_PTR_SET_VALUE(insId_, insId) };


    // insRole Field Functions 
    bool hasInsRole() const { return this->insRole_ != nullptr;};
    void deleteInsRole() { this->insRole_ = nullptr;};
    inline string insRole() const { DARABONBA_PTR_GET_DEFAULT(insRole_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataDataItemInsItems& setInsRole(string insRole) { DARABONBA_PTR_SET_VALUE(insRole_, insRole) };


  protected:
    std::shared_ptr<vector<int64_t>> count_ = nullptr;
    std::shared_ptr<string> insId_ = nullptr;
    std::shared_ptr<string> insRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
