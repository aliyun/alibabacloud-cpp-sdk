// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODYDATAFLOWINFODATAFLOWAUTOREFRESH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODYDATAFLOWINFODATAFLOWAUTOREFRESH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRefresh, autoRefresh_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRefresh, autoRefresh_);
    };
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh() = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh(const DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh &) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh(DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh &&) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh() = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh& operator=(const DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh &) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh& operator=(DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRefresh_ == nullptr; };
    // autoRefresh Field Functions 
    bool hasAutoRefresh() const { return this->autoRefresh_ != nullptr;};
    void deleteAutoRefresh() { this->autoRefresh_ = nullptr;};
    inline const vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh> & autoRefresh() const { DARABONBA_PTR_GET_CONST(autoRefresh_, vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh>) };
    inline vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh> autoRefresh() { DARABONBA_PTR_GET(autoRefresh_, vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh>) };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh& setAutoRefresh(const vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh> & autoRefresh) { DARABONBA_PTR_SET_VALUE(autoRefresh_, autoRefresh) };
    inline DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefresh& setAutoRefresh(vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh> && autoRefresh) { DARABONBA_PTR_SET_RVALUE(autoRefresh_, autoRefresh) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlowAutoRefreshAutoRefresh>> autoRefresh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
