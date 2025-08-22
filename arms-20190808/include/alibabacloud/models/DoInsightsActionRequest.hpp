// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOINSIGHTSACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOINSIGHTSACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DoInsightsActionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DoInsightsActionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DoInsightsActionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DoInsightsActionRequest() = default ;
    DoInsightsActionRequest(const DoInsightsActionRequest &) = default ;
    DoInsightsActionRequest(DoInsightsActionRequest &&) = default ;
    DoInsightsActionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DoInsightsActionRequest() = default ;
    DoInsightsActionRequest& operator=(const DoInsightsActionRequest &) = default ;
    DoInsightsActionRequest& operator=(DoInsightsActionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->module_ != nullptr && this->regionId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DoInsightsActionRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DoInsightsActionRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DoInsightsActionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The query parameters. Different module types correspond to different query parameters.
    // 
    // *   QueryTopo
    // 
    // <!---->
    // 
    //     {
    //         "regionId": string,  # The region ID.
    //         "startTime": string, #. The start time. Format: yyyy-MM-dd HH:mm:ss.
    //         "endTime": string, # The end time. Format: yyyy-MM-dd HH:mm:ss.
    //         "edgeFilter": { # The edge filter condition.
    //             "includeTypes": [enum], # The edge types to be included.
    //             "excludeTypes": [enum], # The edge types to be excluded.
    //             "fromNodeFilter": { # The source node filter condition.
    //                 "includeEntityTypes": [enum] # The entity types to be included.
    //                 "excludeEntityTypes": [enum] #The entity types to be excluded.
    //             },
    //             "toNodeFilter": {  #The target node filter condition.
    //                 "includeEntityTypes": [enum] # The entity types to be included.
    //                 "excludeEntityTypes": [enum] #The entity types to be excluded.
    //             }
    //         },
    //         "includeIsolatedNodes": boolean, #Specifies whether to include isolated nodes.
    //         "isolatedNodeFilter": { # The isolated node filter condition.
    //             "includeEntityTypes": [enum] # The entity types to be included.
    //             "excludeEntityTypes": [enum] #The entity types to be excluded.
    //          },
    //         "queryMetrics": boolean, # Specifies whether to query RED metrics along with metrics.
    //         "timeoutSecs": int, # The timeout period of metric query.
    //     	"redOption": { # The metric query option.
    //     		"skipRt": boolean,  # Specifies whether to skip querying the response time.
    //     		"skipCount": boolean, # Specifies whether to skip querying the number of requests.
    //     		"skipError": boolean # Specifies whether to skip querying the number of errors.
    //     	}
    //     }
    // 
    // *   QueryTopoRed
    // 
    // <!---->
    // 
    //     {
    //         "regionId": string,  # The region ID.
    //         "startTime": string, #. The start time. Format: yyyy-MM-dd HH:mm:ss.
    //         "endTime": string,   # The end time. Format: yyyy-MM-dd HH:mm:ss.
    //         "edgeIds": [string]  # The edge ID to be queried.
    //         "nodeIds": [string]  # The node ID to be queried.
    //         "redOption": { # The metric query option.
    //             "skipRt": boolean,  # Specifies whether to skip querying the response time.
    //             "skipRt": boolean,  # Specifies whether to skip querying the number of requests.
    //             "skipError": boolean # Specifies whether to skip querying the number of errors.
    //         }
    //     }
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The module type.
    // 
    // *   QueryTopo
    // 
    //     Queries topologies. A topology consists of edges and nodes, where each edge has a corresponding type and each node corresponds to an entity, which also has its type. By setting filter parameters such as the type of edges, the type of nodes, and the query time range, you can filter out the required topology data.
    // 
    // *   QueryTopoRed
    // 
    //     Queries topology RED metrics (number of requests, duration, number of errors). When querying a topology with the metric query option enabled, it might not be possible to retrieve all metric data due to the topology being too large. This module allows users to actively query for metric data of specified nodes and edges.
    // 
    // Note: The aforementioned modules are currently in a canary release phase and are not enabled by default. If you need to enable them, please contact the ARMS on-duty number.
    // 
    // Valid values:
    // 
    // *   QueryTopoRed
    // *   QueryTopo
    // 
    // This parameter is required.
    std::shared_ptr<string> module_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
