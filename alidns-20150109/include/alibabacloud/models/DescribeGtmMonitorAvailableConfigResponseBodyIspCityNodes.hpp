// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORAVAILABLECONFIGRESPONSEBODYISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORAVAILABLECONFIGRESPONSEBODYISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
    };
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes() = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes(const DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes &) = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes(DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes &&) = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes() = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes& operator=(const DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes &) = default ;
    DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes& operator=(DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ispCityNode_ == nullptr; };
    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<Models::DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<Models::DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode>) };
    inline vector<Models::DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<Models::DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode>) };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes& setIspCityNode(const vector<Models::DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes& setIspCityNode(vector<Models::DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodesIspCityNode>> ispCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
