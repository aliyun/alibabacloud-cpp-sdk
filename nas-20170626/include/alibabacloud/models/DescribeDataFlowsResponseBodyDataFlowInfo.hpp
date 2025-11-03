// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODYDATAFLOWINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSRESPONSEBODYDATAFLOWINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataFlowsResponseBodyDataFlowInfoDataFlow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowsResponseBodyDataFlowInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowsResponseBodyDataFlowInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataFlow, dataFlow_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowsResponseBodyDataFlowInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataFlow, dataFlow_);
    };
    DescribeDataFlowsResponseBodyDataFlowInfo() = default ;
    DescribeDataFlowsResponseBodyDataFlowInfo(const DescribeDataFlowsResponseBodyDataFlowInfo &) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfo(DescribeDataFlowsResponseBodyDataFlowInfo &&) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowsResponseBodyDataFlowInfo() = default ;
    DescribeDataFlowsResponseBodyDataFlowInfo& operator=(const DescribeDataFlowsResponseBodyDataFlowInfo &) = default ;
    DescribeDataFlowsResponseBodyDataFlowInfo& operator=(DescribeDataFlowsResponseBodyDataFlowInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataFlow_ == nullptr; };
    // dataFlow Field Functions 
    bool hasDataFlow() const { return this->dataFlow_ != nullptr;};
    void deleteDataFlow() { this->dataFlow_ = nullptr;};
    inline const vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlow> & dataFlow() const { DARABONBA_PTR_GET_CONST(dataFlow_, vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlow>) };
    inline vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlow> dataFlow() { DARABONBA_PTR_GET(dataFlow_, vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlow>) };
    inline DescribeDataFlowsResponseBodyDataFlowInfo& setDataFlow(const vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlow> & dataFlow) { DARABONBA_PTR_SET_VALUE(dataFlow_, dataFlow) };
    inline DescribeDataFlowsResponseBodyDataFlowInfo& setDataFlow(vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlow> && dataFlow) { DARABONBA_PTR_SET_RVALUE(dataFlow_, dataFlow) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataFlowsResponseBodyDataFlowInfoDataFlow>> dataFlow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
