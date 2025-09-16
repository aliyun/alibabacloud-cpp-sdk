// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableResponseBodyResultDataSourceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableResponseBodyResultDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBodyResultDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBodyResultDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetTableResponseBodyResultDataSource() = default ;
    GetTableResponseBodyResultDataSource(const GetTableResponseBodyResultDataSource &) = default ;
    GetTableResponseBodyResultDataSource(GetTableResponseBodyResultDataSource &&) = default ;
    GetTableResponseBodyResultDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBodyResultDataSource() = default ;
    GetTableResponseBodyResultDataSource& operator=(const GetTableResponseBodyResultDataSource &) = default ;
    GetTableResponseBodyResultDataSource& operator=(GetTableResponseBodyResultDataSource &&) = default ;
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
    inline GetTableResponseBodyResultDataSource& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::GetTableResponseBodyResultDataSourceConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::GetTableResponseBodyResultDataSourceConfig) };
    inline Models::GetTableResponseBodyResultDataSourceConfig config() { DARABONBA_PTR_GET(config_, Models::GetTableResponseBodyResultDataSourceConfig) };
    inline GetTableResponseBodyResultDataSource& setConfig(const Models::GetTableResponseBodyResultDataSourceConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetTableResponseBodyResultDataSource& setConfig(Models::GetTableResponseBodyResultDataSourceConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dataTimeSec Field Functions 
    bool hasDataTimeSec() const { return this->dataTimeSec_ != nullptr;};
    void deleteDataTimeSec() { this->dataTimeSec_ = nullptr;};
    inline int32_t dataTimeSec() const { DARABONBA_PTR_GET_DEFAULT(dataTimeSec_, 0) };
    inline GetTableResponseBodyResultDataSource& setDataTimeSec(int32_t dataTimeSec) { DARABONBA_PTR_SET_VALUE(dataTimeSec_, dataTimeSec) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTableResponseBodyResultDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    std::shared_ptr<Models::GetTableResponseBodyResultDataSourceConfig> config_ = nullptr;
    std::shared_ptr<int32_t> dataTimeSec_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
