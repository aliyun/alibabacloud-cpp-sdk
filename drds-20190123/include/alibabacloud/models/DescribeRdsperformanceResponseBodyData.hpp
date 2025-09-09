// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSPERFORMANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSPERFORMANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRDSPerformanceResponseBodyDataValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRDSPerformanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRDSPerformanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRDSPerformanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeRDSPerformanceResponseBodyData() = default ;
    DescribeRDSPerformanceResponseBodyData(const DescribeRDSPerformanceResponseBodyData &) = default ;
    DescribeRDSPerformanceResponseBodyData(DescribeRDSPerformanceResponseBodyData &&) = default ;
    DescribeRDSPerformanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRDSPerformanceResponseBodyData() = default ;
    DescribeRDSPerformanceResponseBodyData& operator=(const DescribeRDSPerformanceResponseBodyData &) = default ;
    DescribeRDSPerformanceResponseBodyData& operator=(DescribeRDSPerformanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->nodeName_ != nullptr && this->nodeNum_ != nullptr && this->unit_ != nullptr && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeRDSPerformanceResponseBodyData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeRDSPerformanceResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline int32_t nodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
    inline DescribeRDSPerformanceResponseBodyData& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeRDSPerformanceResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::DescribeRDSPerformanceResponseBodyDataValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::DescribeRDSPerformanceResponseBodyDataValues>) };
    inline vector<Models::DescribeRDSPerformanceResponseBodyDataValues> values() { DARABONBA_PTR_GET(values_, vector<Models::DescribeRDSPerformanceResponseBodyDataValues>) };
    inline DescribeRDSPerformanceResponseBodyData& setValues(const vector<Models::DescribeRDSPerformanceResponseBodyDataValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeRDSPerformanceResponseBodyData& setValues(vector<Models::DescribeRDSPerformanceResponseBodyDataValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the monitoring metric.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the node.
    // 
    // >  This parameter is returned only when the storage type of the database is PolarDB for MySQL. If the storage type of the database is ApsaraDB RDS for MySQL, this parameter is not returned.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The number of nodes.
    std::shared_ptr<int32_t> nodeNum_ = nullptr;
    // The unit of the monitoring metric.
    std::shared_ptr<string> unit_ = nullptr;
    // The details of the monitoring metric data.
    std::shared_ptr<vector<Models::DescribeRDSPerformanceResponseBodyDataValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
