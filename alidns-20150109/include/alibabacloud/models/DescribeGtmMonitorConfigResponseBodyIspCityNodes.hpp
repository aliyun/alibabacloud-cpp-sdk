// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORCONFIGRESPONSEBODYISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORCONFIGRESPONSEBODYISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmMonitorConfigResponseBodyIspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmMonitorConfigResponseBodyIspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmMonitorConfigResponseBodyIspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
    };
    DescribeGtmMonitorConfigResponseBodyIspCityNodes() = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodes(const DescribeGtmMonitorConfigResponseBodyIspCityNodes &) = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodes(DescribeGtmMonitorConfigResponseBodyIspCityNodes &&) = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmMonitorConfigResponseBodyIspCityNodes() = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodes& operator=(const DescribeGtmMonitorConfigResponseBodyIspCityNodes &) = default ;
    DescribeGtmMonitorConfigResponseBodyIspCityNodes& operator=(DescribeGtmMonitorConfigResponseBodyIspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ispCityNode_ != nullptr; };
    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<Models::DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<Models::DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode>) };
    inline vector<Models::DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<Models::DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode>) };
    inline DescribeGtmMonitorConfigResponseBodyIspCityNodes& setIspCityNode(const vector<Models::DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline DescribeGtmMonitorConfigResponseBodyIspCityNodes& setIspCityNode(vector<Models::DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmMonitorConfigResponseBodyIspCityNodesIspCityNode>> ispCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
