// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORCONFIGRESPONSEBODYISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORCONFIGRESPONSEBODYISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmMonitorConfigResponseBodyIspCityNodesIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
    };
    DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes() = default ;
    DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes(const DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes &) = default ;
    DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes(DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes &&) = default ;
    DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes() = default ;
    DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes& operator=(const DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes &) = default ;
    DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes& operator=(DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ispCityNode_ == nullptr; };
    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmMonitorConfigResponseBodyIspCityNodesIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<Models::DescribeDnsGtmMonitorConfigResponseBodyIspCityNodesIspCityNode>) };
    inline vector<Models::DescribeDnsGtmMonitorConfigResponseBodyIspCityNodesIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<Models::DescribeDnsGtmMonitorConfigResponseBodyIspCityNodesIspCityNode>) };
    inline DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes& setIspCityNode(const vector<Models::DescribeDnsGtmMonitorConfigResponseBodyIspCityNodesIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline DescribeDnsGtmMonitorConfigResponseBodyIspCityNodes& setIspCityNode(vector<Models::DescribeDnsGtmMonitorConfigResponseBodyIspCityNodesIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmMonitorConfigResponseBodyIspCityNodesIspCityNode>> ispCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
