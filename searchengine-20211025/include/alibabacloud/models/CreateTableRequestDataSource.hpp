// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLEREQUESTDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLEREQUESTDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTableRequestDataSourceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateTableRequestDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTableRequestDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTableRequestDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateTableRequestDataSource() = default ;
    CreateTableRequestDataSource(const CreateTableRequestDataSource &) = default ;
    CreateTableRequestDataSource(CreateTableRequestDataSource &&) = default ;
    CreateTableRequestDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTableRequestDataSource() = default ;
    CreateTableRequestDataSource& operator=(const CreateTableRequestDataSource &) = default ;
    CreateTableRequestDataSource& operator=(CreateTableRequestDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoBuildIndex_ != nullptr
        && this->config_ != nullptr && this->dataTimeSec_ != nullptr && this->type_ != nullptr; };
    // autoBuildIndex Field Functions 
    bool hasAutoBuildIndex() const { return this->autoBuildIndex_ != nullptr;};
    void deleteAutoBuildIndex() { this->autoBuildIndex_ = nullptr;};
    inline bool autoBuildIndex() const { DARABONBA_PTR_GET_DEFAULT(autoBuildIndex_, false) };
    inline CreateTableRequestDataSource& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::CreateTableRequestDataSourceConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::CreateTableRequestDataSourceConfig) };
    inline Models::CreateTableRequestDataSourceConfig config() { DARABONBA_PTR_GET(config_, Models::CreateTableRequestDataSourceConfig) };
    inline CreateTableRequestDataSource& setConfig(const Models::CreateTableRequestDataSourceConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateTableRequestDataSource& setConfig(Models::CreateTableRequestDataSourceConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dataTimeSec Field Functions 
    bool hasDataTimeSec() const { return this->dataTimeSec_ != nullptr;};
    void deleteDataTimeSec() { this->dataTimeSec_ = nullptr;};
    inline int32_t dataTimeSec() const { DARABONBA_PTR_GET_DEFAULT(dataTimeSec_, 0) };
    inline CreateTableRequestDataSource& setDataTimeSec(int32_t dataTimeSec) { DARABONBA_PTR_SET_VALUE(dataTimeSec_, dataTimeSec) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateTableRequestDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to automatically rebuild the index.
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    // The configurations of the data source.
    std::shared_ptr<Models::CreateTableRequestDataSourceConfig> config_ = nullptr;
    // The start timestamp from which incremental data is retrieved.
    std::shared_ptr<int32_t> dataTimeSec_ = nullptr;
    // The data source type. Valid values: odps, swift, and oss.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
