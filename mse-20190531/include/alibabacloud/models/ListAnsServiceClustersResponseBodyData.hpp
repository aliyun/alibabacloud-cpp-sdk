// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSSERVICECLUSTERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANSSERVICECLUSTERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAnsServiceClustersResponseBodyDataAppDetail.hpp>
#include <vector>
#include <alibabacloud/models/ListAnsServiceClustersResponseBodyDataClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAnsServiceClustersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnsServiceClustersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppDetail, appDetail_);
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtectThreshold, protectThreshold_);
      DARABONBA_PTR_TO_JSON(SelectorType, selectorType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnsServiceClustersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDetail, appDetail_);
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtectThreshold, protectThreshold_);
      DARABONBA_PTR_FROM_JSON(SelectorType, selectorType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListAnsServiceClustersResponseBodyData() = default ;
    ListAnsServiceClustersResponseBodyData(const ListAnsServiceClustersResponseBodyData &) = default ;
    ListAnsServiceClustersResponseBodyData(ListAnsServiceClustersResponseBodyData &&) = default ;
    ListAnsServiceClustersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnsServiceClustersResponseBodyData() = default ;
    ListAnsServiceClustersResponseBodyData& operator=(const ListAnsServiceClustersResponseBodyData &) = default ;
    ListAnsServiceClustersResponseBodyData& operator=(ListAnsServiceClustersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appDetail_ != nullptr
        && this->clusters_ != nullptr && this->ephemeral_ != nullptr && this->groupName_ != nullptr && this->metadata_ != nullptr && this->name_ != nullptr
        && this->protectThreshold_ != nullptr && this->selectorType_ != nullptr && this->source_ != nullptr; };
    // appDetail Field Functions 
    bool hasAppDetail() const { return this->appDetail_ != nullptr;};
    void deleteAppDetail() { this->appDetail_ = nullptr;};
    inline const Models::ListAnsServiceClustersResponseBodyDataAppDetail & appDetail() const { DARABONBA_PTR_GET_CONST(appDetail_, Models::ListAnsServiceClustersResponseBodyDataAppDetail) };
    inline Models::ListAnsServiceClustersResponseBodyDataAppDetail appDetail() { DARABONBA_PTR_GET(appDetail_, Models::ListAnsServiceClustersResponseBodyDataAppDetail) };
    inline ListAnsServiceClustersResponseBodyData& setAppDetail(const Models::ListAnsServiceClustersResponseBodyDataAppDetail & appDetail) { DARABONBA_PTR_SET_VALUE(appDetail_, appDetail) };
    inline ListAnsServiceClustersResponseBodyData& setAppDetail(Models::ListAnsServiceClustersResponseBodyDataAppDetail && appDetail) { DARABONBA_PTR_SET_RVALUE(appDetail_, appDetail) };


    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<Models::ListAnsServiceClustersResponseBodyDataClusters> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<Models::ListAnsServiceClustersResponseBodyDataClusters>) };
    inline vector<Models::ListAnsServiceClustersResponseBodyDataClusters> clusters() { DARABONBA_PTR_GET(clusters_, vector<Models::ListAnsServiceClustersResponseBodyDataClusters>) };
    inline ListAnsServiceClustersResponseBodyData& setClusters(const vector<Models::ListAnsServiceClustersResponseBodyDataClusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline ListAnsServiceClustersResponseBodyData& setClusters(vector<Models::ListAnsServiceClustersResponseBodyDataClusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // ephemeral Field Functions 
    bool hasEphemeral() const { return this->ephemeral_ != nullptr;};
    void deleteEphemeral() { this->ephemeral_ = nullptr;};
    inline bool ephemeral() const { DARABONBA_PTR_GET_DEFAULT(ephemeral_, false) };
    inline ListAnsServiceClustersResponseBodyData& setEphemeral(bool ephemeral) { DARABONBA_PTR_SET_VALUE(ephemeral_, ephemeral) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListAnsServiceClustersResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline ListAnsServiceClustersResponseBodyData& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListAnsServiceClustersResponseBodyData& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAnsServiceClustersResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protectThreshold Field Functions 
    bool hasProtectThreshold() const { return this->protectThreshold_ != nullptr;};
    void deleteProtectThreshold() { this->protectThreshold_ = nullptr;};
    inline float protectThreshold() const { DARABONBA_PTR_GET_DEFAULT(protectThreshold_, 0.0) };
    inline ListAnsServiceClustersResponseBodyData& setProtectThreshold(float protectThreshold) { DARABONBA_PTR_SET_VALUE(protectThreshold_, protectThreshold) };


    // selectorType Field Functions 
    bool hasSelectorType() const { return this->selectorType_ != nullptr;};
    void deleteSelectorType() { this->selectorType_ = nullptr;};
    inline string selectorType() const { DARABONBA_PTR_GET_DEFAULT(selectorType_, "") };
    inline ListAnsServiceClustersResponseBodyData& setSelectorType(string selectorType) { DARABONBA_PTR_SET_VALUE(selectorType_, selectorType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListAnsServiceClustersResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The information about the associated application for which Microservices Governance is enabled when the Source parameter is set to governance.
    std::shared_ptr<Models::ListAnsServiceClustersResponseBodyDataAppDetail> appDetail_ = nullptr;
    // The cluster information.
    std::shared_ptr<vector<Models::ListAnsServiceClustersResponseBodyDataClusters>> clusters_ = nullptr;
    // Indicates whether the service is a temporary service. Valid values:
    // 
    // *   `true`: yes
    // *   `false`: no
    std::shared_ptr<bool> ephemeral_ = nullptr;
    // The service group to which the service belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The metadata of the service.
    Darabonba::Json metadata_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The protection threshold.
    std::shared_ptr<float> protectThreshold_ = nullptr;
    // The election mode.
    std::shared_ptr<string> selectorType_ = nullptr;
    // The source type of the service. Valid values:
    // 
    // *   console: The service was registered in the console.
    // *   sdk: The service was registered by using the SDK.
    // *   governance: The service was registered on Microservices Governance.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
