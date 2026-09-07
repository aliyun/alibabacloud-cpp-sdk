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
    virtual bool empty() const override { return this->data_ == nullptr
        && this->module_ == nullptr && this->regionId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DoInsightsActionRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DoInsightsActionRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DoInsightsActionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Query parameters. The query parameters vary depending on the module type.
    // 
    // - QueryTopo
    // ```
    // {
    //     "regionId": string,  #Region ID
    //     "startTime": string, #Start time in the format of yyyy-MM-dd HH:mm:ss
    //     "endTime": string, #End time in the format of yyyy-MM-dd HH:mm:ss
    //     "edgeFilter": { #Edge filter conditions
    //         "includeTypes": [enum], #Edge types to include
    //         "excludeTypes": [enum], #Edge types to exclude
    //         "fromNodeFilter": { #Source node filter conditions
    //             "includeEntityTypes": [enum] #Entity types to include
    //             "excludeEntityTypes": [enum] #Entity types to exclude
    //         },
    //         "toNodeFilter": {  #Target node filter conditions
    //             "includeEntityTypes": [enum] #Entity types to include
    //             "excludeEntityTypes": [enum] #Entity types to exclude
    //         }
    //     },
    //     "includeIsolatedNodes": boolean, #Whether to include isolated nodes
    //     "isolatedNodeFilter": { # Isolated node filter conditions
    //         "includeEntityTypes": [enum] #Entity types to include
    //         "excludeEntityTypes": [enum] #Entity types to exclude
    //      },
    //     "queryMetrics": boolean, # Whether to synchronously query related RED metrics when querying topology
    //     "timeoutSecs": int, # Metrics query timeout in seconds
    // 	"redOption": { #Metrics query control options
    // 		"skipRt": boolean,  # Whether to skip querying RT metrics
    // 		"skipCount": boolean, # Whether to skip querying request count metrics
    // 		"skipError": boolean # Whether to skip querying error count metrics
    // 	}
    // }
    // 
    // ```
    // 
    // - QueryTopoRed
    // 
    // ```
    // {
    //     "regionId": string,  #Region ID
    //     "startTime": string, #Start time in the format of yyyy-MM-dd HH:mm:ss
    //     "endTime": string,   #End time in the format of yyyy-MM-dd HH:mm:ss
    //     "edgeIds": [string]  #Edge IDs to query
    //     "nodeIds": [string]  #Node IDs to query
    //     "redOption": { #Metrics query control options
    //         "skipRt": boolean,  # Whether to skip querying RT metrics
    //         "skipCount": boolean, # Whether to skip querying request count metrics
    //         "skipError": boolean # Whether to skip querying error count metrics
    //     }
    // }
    // 
    // ```
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
    // Module type
    // - QueryTopo 
    //   
    //     Topology query feature. A topology consists of edges and nodes. Each edge has a corresponding type, each node has a corresponding entity, and each entity has its type. By setting the edge type, node type, query time range, and other filter parameters, you can filter out the required topology data.
    // 
    // - QueryTopoRed
    //     
    //     Topology RED metrics (request count, latency, error count) query. When querying a topology with the metrics query option enabled, the topology may be too large to retrieve all metrics data. This feature allows users to actively query metrics data for specified nodes and edges.
    // 
    // 
    // Note: The above features are in canary release and are not enabled by default. To enable them, please contact ARMS on-call support.
    // 
    // This parameter is required.
    shared_ptr<string> module_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
