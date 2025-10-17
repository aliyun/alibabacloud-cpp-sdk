// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODYMETRICDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODYMETRICDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChannelOverallDataResponseBodyMetricDatasNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelOverallDataResponseBodyMetricDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelOverallDataResponseBodyMetricDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelOverallDataResponseBodyMetricDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeChannelOverallDataResponseBodyMetricDatas() = default ;
    DescribeChannelOverallDataResponseBodyMetricDatas(const DescribeChannelOverallDataResponseBodyMetricDatas &) = default ;
    DescribeChannelOverallDataResponseBodyMetricDatas(DescribeChannelOverallDataResponseBodyMetricDatas &&) = default ;
    DescribeChannelOverallDataResponseBodyMetricDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelOverallDataResponseBodyMetricDatas() = default ;
    DescribeChannelOverallDataResponseBodyMetricDatas& operator=(const DescribeChannelOverallDataResponseBodyMetricDatas &) = default ;
    DescribeChannelOverallDataResponseBodyMetricDatas& operator=(DescribeChannelOverallDataResponseBodyMetricDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodes_ == nullptr
        && return this->type_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeChannelOverallDataResponseBodyMetricDatasNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeChannelOverallDataResponseBodyMetricDatasNodes>) };
    inline vector<Models::DescribeChannelOverallDataResponseBodyMetricDatasNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeChannelOverallDataResponseBodyMetricDatasNodes>) };
    inline DescribeChannelOverallDataResponseBodyMetricDatas& setNodes(const vector<Models::DescribeChannelOverallDataResponseBodyMetricDatasNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeChannelOverallDataResponseBodyMetricDatas& setNodes(vector<Models::DescribeChannelOverallDataResponseBodyMetricDatasNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeChannelOverallDataResponseBodyMetricDatas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::DescribeChannelOverallDataResponseBodyMetricDatasNodes>> nodes_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
