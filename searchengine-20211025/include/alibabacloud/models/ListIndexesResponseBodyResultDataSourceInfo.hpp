// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYRESULTDATASOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYRESULTDATASOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIndexesResponseBodyResultDataSourceInfoConfig.hpp>
#include <alibabacloud/models/ListIndexesResponseBodyResultDataSourceInfoSaroConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListIndexesResponseBodyResultDataSourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesResponseBodyResultDataSourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(processPartitionCount, processPartitionCount_);
      DARABONBA_PTR_TO_JSON(saroConfig, saroConfig_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesResponseBodyResultDataSourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(processPartitionCount, processPartitionCount_);
      DARABONBA_PTR_FROM_JSON(saroConfig, saroConfig_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListIndexesResponseBodyResultDataSourceInfo() = default ;
    ListIndexesResponseBodyResultDataSourceInfo(const ListIndexesResponseBodyResultDataSourceInfo &) = default ;
    ListIndexesResponseBodyResultDataSourceInfo(ListIndexesResponseBodyResultDataSourceInfo &&) = default ;
    ListIndexesResponseBodyResultDataSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesResponseBodyResultDataSourceInfo() = default ;
    ListIndexesResponseBodyResultDataSourceInfo& operator=(const ListIndexesResponseBodyResultDataSourceInfo &) = default ;
    ListIndexesResponseBodyResultDataSourceInfo& operator=(ListIndexesResponseBodyResultDataSourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoBuildIndex_ != nullptr
        && this->config_ != nullptr && this->domain_ != nullptr && this->name_ != nullptr && this->processPartitionCount_ != nullptr && this->saroConfig_ != nullptr
        && this->type_ != nullptr; };
    // autoBuildIndex Field Functions 
    bool hasAutoBuildIndex() const { return this->autoBuildIndex_ != nullptr;};
    void deleteAutoBuildIndex() { this->autoBuildIndex_ = nullptr;};
    inline bool autoBuildIndex() const { DARABONBA_PTR_GET_DEFAULT(autoBuildIndex_, false) };
    inline ListIndexesResponseBodyResultDataSourceInfo& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::ListIndexesResponseBodyResultDataSourceInfoConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::ListIndexesResponseBodyResultDataSourceInfoConfig) };
    inline Models::ListIndexesResponseBodyResultDataSourceInfoConfig config() { DARABONBA_PTR_GET(config_, Models::ListIndexesResponseBodyResultDataSourceInfoConfig) };
    inline ListIndexesResponseBodyResultDataSourceInfo& setConfig(const Models::ListIndexesResponseBodyResultDataSourceInfoConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListIndexesResponseBodyResultDataSourceInfo& setConfig(Models::ListIndexesResponseBodyResultDataSourceInfoConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListIndexesResponseBodyResultDataSourceInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIndexesResponseBodyResultDataSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processPartitionCount Field Functions 
    bool hasProcessPartitionCount() const { return this->processPartitionCount_ != nullptr;};
    void deleteProcessPartitionCount() { this->processPartitionCount_ = nullptr;};
    inline int32_t processPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(processPartitionCount_, 0) };
    inline ListIndexesResponseBodyResultDataSourceInfo& setProcessPartitionCount(int32_t processPartitionCount) { DARABONBA_PTR_SET_VALUE(processPartitionCount_, processPartitionCount) };


    // saroConfig Field Functions 
    bool hasSaroConfig() const { return this->saroConfig_ != nullptr;};
    void deleteSaroConfig() { this->saroConfig_ = nullptr;};
    inline const Models::ListIndexesResponseBodyResultDataSourceInfoSaroConfig & saroConfig() const { DARABONBA_PTR_GET_CONST(saroConfig_, Models::ListIndexesResponseBodyResultDataSourceInfoSaroConfig) };
    inline Models::ListIndexesResponseBodyResultDataSourceInfoSaroConfig saroConfig() { DARABONBA_PTR_GET(saroConfig_, Models::ListIndexesResponseBodyResultDataSourceInfoSaroConfig) };
    inline ListIndexesResponseBodyResultDataSourceInfo& setSaroConfig(const Models::ListIndexesResponseBodyResultDataSourceInfoSaroConfig & saroConfig) { DARABONBA_PTR_SET_VALUE(saroConfig_, saroConfig) };
    inline ListIndexesResponseBodyResultDataSourceInfo& setSaroConfig(Models::ListIndexesResponseBodyResultDataSourceInfoSaroConfig && saroConfig) { DARABONBA_PTR_SET_RVALUE(saroConfig_, saroConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListIndexesResponseBodyResultDataSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the automatic full indexing feature is enabled.
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    // The configuration of MaxCompute data sources.
    std::shared_ptr<Models::ListIndexesResponseBodyResultDataSourceInfoConfig> config_ = nullptr;
    // The data center in which the data source is deployed.
    std::shared_ptr<string> domain_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The number of resources used for data update.
    std::shared_ptr<int32_t> processPartitionCount_ = nullptr;
    // The configurations of the SARO data source.
    std::shared_ptr<Models::ListIndexesResponseBodyResultDataSourceInfoSaroConfig> saroConfig_ = nullptr;
    // The type of the data source. Valid values: odps, swift, saro, oss, and unKnow.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
