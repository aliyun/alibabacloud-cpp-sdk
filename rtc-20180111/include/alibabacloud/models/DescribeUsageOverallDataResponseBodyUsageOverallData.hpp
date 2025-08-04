// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEOVERALLDATARESPONSEBODYUSAGEOVERALLDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEOVERALLDATARESPONSEBODYUSAGEOVERALLDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsageOverallDataResponseBodyUsageOverallDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageOverallDataResponseBodyUsageOverallData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageOverallDataResponseBodyUsageOverallData& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageOverallDataResponseBodyUsageOverallData& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeUsageOverallDataResponseBodyUsageOverallData() = default ;
    DescribeUsageOverallDataResponseBodyUsageOverallData(const DescribeUsageOverallDataResponseBodyUsageOverallData &) = default ;
    DescribeUsageOverallDataResponseBodyUsageOverallData(DescribeUsageOverallDataResponseBodyUsageOverallData &&) = default ;
    DescribeUsageOverallDataResponseBodyUsageOverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageOverallDataResponseBodyUsageOverallData() = default ;
    DescribeUsageOverallDataResponseBodyUsageOverallData& operator=(const DescribeUsageOverallDataResponseBodyUsageOverallData &) = default ;
    DescribeUsageOverallDataResponseBodyUsageOverallData& operator=(DescribeUsageOverallDataResponseBodyUsageOverallData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr
        && this->type_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeUsageOverallDataResponseBodyUsageOverallDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeUsageOverallDataResponseBodyUsageOverallDataNodes>) };
    inline vector<Models::DescribeUsageOverallDataResponseBodyUsageOverallDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeUsageOverallDataResponseBodyUsageOverallDataNodes>) };
    inline DescribeUsageOverallDataResponseBodyUsageOverallData& setNodes(const vector<Models::DescribeUsageOverallDataResponseBodyUsageOverallDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeUsageOverallDataResponseBodyUsageOverallData& setNodes(vector<Models::DescribeUsageOverallDataResponseBodyUsageOverallDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeUsageOverallDataResponseBodyUsageOverallData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::DescribeUsageOverallDataResponseBodyUsageOverallDataNodes>> nodes_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
