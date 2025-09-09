// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORTEMPLATESRESPONSEBODYTEMPLATESTEMPLATEISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORTEMPLATESRESPONSEBODYTEMPLATESTEMPLATEISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodesIspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
    };
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes() = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes(const ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes &) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes(ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes &&) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes() = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes& operator=(const ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes &) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes& operator=(ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ispCityNode_ != nullptr; };
    // ispCityNode Field Functions 
    bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
    void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
    inline const vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodesIspCityNode> & ispCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodesIspCityNode>) };
    inline vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodesIspCityNode> ispCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodesIspCityNode>) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes& setIspCityNode(const vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodesIspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodes& setIspCityNode(vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodesIspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplateIspCityNodesIspCityNode>> ispCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
