// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTABLEREQUESTDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTABLEREQUESTDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyTableRequestDataSourceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyTableRequestDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTableRequestDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataTimeSec, dataTimeSec_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTableRequestDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataTimeSec, dataTimeSec_);
    };
    ModifyTableRequestDataSource() = default ;
    ModifyTableRequestDataSource(const ModifyTableRequestDataSource &) = default ;
    ModifyTableRequestDataSource(ModifyTableRequestDataSource &&) = default ;
    ModifyTableRequestDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTableRequestDataSource() = default ;
    ModifyTableRequestDataSource& operator=(const ModifyTableRequestDataSource &) = default ;
    ModifyTableRequestDataSource& operator=(ModifyTableRequestDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoBuildIndex_ != nullptr
        && this->config_ != nullptr && this->dataTimeSec_ != nullptr; };
    // autoBuildIndex Field Functions 
    bool hasAutoBuildIndex() const { return this->autoBuildIndex_ != nullptr;};
    void deleteAutoBuildIndex() { this->autoBuildIndex_ = nullptr;};
    inline bool autoBuildIndex() const { DARABONBA_PTR_GET_DEFAULT(autoBuildIndex_, false) };
    inline ModifyTableRequestDataSource& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::ModifyTableRequestDataSourceConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::ModifyTableRequestDataSourceConfig) };
    inline Models::ModifyTableRequestDataSourceConfig config() { DARABONBA_PTR_GET(config_, Models::ModifyTableRequestDataSourceConfig) };
    inline ModifyTableRequestDataSource& setConfig(const Models::ModifyTableRequestDataSourceConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ModifyTableRequestDataSource& setConfig(Models::ModifyTableRequestDataSourceConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dataTimeSec Field Functions 
    bool hasDataTimeSec() const { return this->dataTimeSec_ != nullptr;};
    void deleteDataTimeSec() { this->dataTimeSec_ = nullptr;};
    inline int32_t dataTimeSec() const { DARABONBA_PTR_GET_DEFAULT(dataTimeSec_, 0) };
    inline ModifyTableRequestDataSource& setDataTimeSec(int32_t dataTimeSec) { DARABONBA_PTR_SET_VALUE(dataTimeSec_, dataTimeSec) };


  protected:
    // Specifies whether to automatically rebuild the index.
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    // The configurations of the data source.
    std::shared_ptr<Models::ModifyTableRequestDataSourceConfig> config_ = nullptr;
    // The start timestamp from which incremental data is retrieved.
    std::shared_ptr<int32_t> dataTimeSec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
