// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyNodeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(dataDuplicateNumber, dataDuplicateNumber_);
      DARABONBA_PTR_TO_JSON(dataFragmentNumber, dataFragmentNumber_);
      DARABONBA_PTR_TO_JSON(flowRatio, flowRatio_);
      DARABONBA_PTR_TO_JSON(minServicePercent, minServicePercent_);
      DARABONBA_PTR_TO_JSON(published, published_);
      DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(dataDuplicateNumber, dataDuplicateNumber_);
      DARABONBA_PTR_FROM_JSON(dataFragmentNumber, dataFragmentNumber_);
      DARABONBA_PTR_FROM_JSON(flowRatio, flowRatio_);
      DARABONBA_PTR_FROM_JSON(minServicePercent, minServicePercent_);
      DARABONBA_PTR_FROM_JSON(published, published_);
      DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModifyNodeConfigRequest() = default ;
    ModifyNodeConfigRequest(const ModifyNodeConfigRequest &) = default ;
    ModifyNodeConfigRequest(ModifyNodeConfigRequest &&) = default ;
    ModifyNodeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodeConfigRequest() = default ;
    ModifyNodeConfigRequest& operator=(const ModifyNodeConfigRequest &) = default ;
    ModifyNodeConfigRequest& operator=(ModifyNodeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->dataDuplicateNumber_ != nullptr && this->dataFragmentNumber_ != nullptr && this->flowRatio_ != nullptr && this->minServicePercent_ != nullptr && this->published_ != nullptr
        && this->clusterName_ != nullptr && this->dataSourceName_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ModifyNodeConfigRequest& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // dataDuplicateNumber Field Functions 
    bool hasDataDuplicateNumber() const { return this->dataDuplicateNumber_ != nullptr;};
    void deleteDataDuplicateNumber() { this->dataDuplicateNumber_ = nullptr;};
    inline int32_t dataDuplicateNumber() const { DARABONBA_PTR_GET_DEFAULT(dataDuplicateNumber_, 0) };
    inline ModifyNodeConfigRequest& setDataDuplicateNumber(int32_t dataDuplicateNumber) { DARABONBA_PTR_SET_VALUE(dataDuplicateNumber_, dataDuplicateNumber) };


    // dataFragmentNumber Field Functions 
    bool hasDataFragmentNumber() const { return this->dataFragmentNumber_ != nullptr;};
    void deleteDataFragmentNumber() { this->dataFragmentNumber_ = nullptr;};
    inline int32_t dataFragmentNumber() const { DARABONBA_PTR_GET_DEFAULT(dataFragmentNumber_, 0) };
    inline ModifyNodeConfigRequest& setDataFragmentNumber(int32_t dataFragmentNumber) { DARABONBA_PTR_SET_VALUE(dataFragmentNumber_, dataFragmentNumber) };


    // flowRatio Field Functions 
    bool hasFlowRatio() const { return this->flowRatio_ != nullptr;};
    void deleteFlowRatio() { this->flowRatio_ = nullptr;};
    inline int32_t flowRatio() const { DARABONBA_PTR_GET_DEFAULT(flowRatio_, 0) };
    inline ModifyNodeConfigRequest& setFlowRatio(int32_t flowRatio) { DARABONBA_PTR_SET_VALUE(flowRatio_, flowRatio) };


    // minServicePercent Field Functions 
    bool hasMinServicePercent() const { return this->minServicePercent_ != nullptr;};
    void deleteMinServicePercent() { this->minServicePercent_ = nullptr;};
    inline int32_t minServicePercent() const { DARABONBA_PTR_GET_DEFAULT(minServicePercent_, 0) };
    inline ModifyNodeConfigRequest& setMinServicePercent(int32_t minServicePercent) { DARABONBA_PTR_SET_VALUE(minServicePercent_, minServicePercent) };


    // published Field Functions 
    bool hasPublished() const { return this->published_ != nullptr;};
    void deletePublished() { this->published_ = nullptr;};
    inline bool published() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
    inline ModifyNodeConfigRequest& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ModifyNodeConfigRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ModifyNodeConfigRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyNodeConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyNodeConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to enable the index.
    std::shared_ptr<bool> active_ = nullptr;
    // The number of data replicas.
    std::shared_ptr<int32_t> dataDuplicateNumber_ = nullptr;
    // The number of data shards.
    std::shared_ptr<int32_t> dataFragmentNumber_ = nullptr;
    // The traffic percentage.
    std::shared_ptr<int32_t> flowRatio_ = nullptr;
    // The minimum service ratio.
    std::shared_ptr<int32_t> minServicePercent_ = nullptr;
    // Specifies whether to mount the cluster.
    std::shared_ptr<bool> published_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The name of the data source. Valid values: -search: search for data. -not_search: do not search for data.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The name of the configuration before the modification.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the algorithm. Valid values:
    // 
    // *   pop: a popularity model.
    // *   cp: a category prediction model.
    // *   hot: a top search model.
    // *   hint: a hint model.
    // *   suggest: a drop-down suggestions model.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
