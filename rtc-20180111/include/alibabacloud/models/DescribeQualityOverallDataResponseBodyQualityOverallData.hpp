// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYOVERALLDATARESPONSEBODYQUALITYOVERALLDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYOVERALLDATARESPONSEBODYQUALITYOVERALLDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeQualityOverallDataResponseBodyQualityOverallDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQualityOverallDataResponseBodyQualityOverallData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityOverallDataResponseBodyQualityOverallData& obj) { 
      DARABONBA_PTR_TO_JSON(Average, average_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityOverallDataResponseBodyQualityOverallData& obj) { 
      DARABONBA_PTR_FROM_JSON(Average, average_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeQualityOverallDataResponseBodyQualityOverallData() = default ;
    DescribeQualityOverallDataResponseBodyQualityOverallData(const DescribeQualityOverallDataResponseBodyQualityOverallData &) = default ;
    DescribeQualityOverallDataResponseBodyQualityOverallData(DescribeQualityOverallDataResponseBodyQualityOverallData &&) = default ;
    DescribeQualityOverallDataResponseBodyQualityOverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityOverallDataResponseBodyQualityOverallData() = default ;
    DescribeQualityOverallDataResponseBodyQualityOverallData& operator=(const DescribeQualityOverallDataResponseBodyQualityOverallData &) = default ;
    DescribeQualityOverallDataResponseBodyQualityOverallData& operator=(DescribeQualityOverallDataResponseBodyQualityOverallData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->average_ == nullptr
        && return this->nodes_ == nullptr && return this->type_ == nullptr; };
    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline string average() const { DARABONBA_PTR_GET_DEFAULT(average_, "") };
    inline DescribeQualityOverallDataResponseBodyQualityOverallData& setAverage(string average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeQualityOverallDataResponseBodyQualityOverallDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeQualityOverallDataResponseBodyQualityOverallDataNodes>) };
    inline vector<Models::DescribeQualityOverallDataResponseBodyQualityOverallDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeQualityOverallDataResponseBodyQualityOverallDataNodes>) };
    inline DescribeQualityOverallDataResponseBodyQualityOverallData& setNodes(const vector<Models::DescribeQualityOverallDataResponseBodyQualityOverallDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeQualityOverallDataResponseBodyQualityOverallData& setNodes(vector<Models::DescribeQualityOverallDataResponseBodyQualityOverallDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeQualityOverallDataResponseBodyQualityOverallData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> average_ = nullptr;
    std::shared_ptr<vector<Models::DescribeQualityOverallDataResponseBodyQualityOverallDataNodes>> nodes_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
