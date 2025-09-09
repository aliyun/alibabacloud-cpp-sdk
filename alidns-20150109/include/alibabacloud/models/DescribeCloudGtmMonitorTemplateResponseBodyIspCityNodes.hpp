// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMMONITORTEMPLATERESPONSEBODYISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMMONITORTEMPLATERESPONSEBODYISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
    };
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes() = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes(const DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes &) = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes(DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes &&) = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes() = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes& operator=(const DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes &) = default ;
    DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes& operator=(DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ispCityNode_ != nullptr; };
    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<Models::DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode>) };
    inline vector<Models::DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<Models::DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode>) };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes& setIspCityNode(const vector<Models::DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodes& setIspCityNode(vector<Models::DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmMonitorTemplateResponseBodyIspCityNodesIspCityNode>> ispCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
