// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataSourceRequestConfig.hpp>
#include <alibabacloud/models/CreateDataSourceRequestSaroConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(saroConfig, saroConfig_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(saroConfig, saroConfig_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateDataSourceRequest() = default ;
    CreateDataSourceRequest(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest(CreateDataSourceRequest &&) = default ;
    CreateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequest() = default ;
    CreateDataSourceRequest& operator=(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest& operator=(CreateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoBuildIndex_ != nullptr
        && this->config_ != nullptr && this->domain_ != nullptr && this->name_ != nullptr && this->saroConfig_ != nullptr && this->type_ != nullptr
        && this->dryRun_ != nullptr; };
    // autoBuildIndex Field Functions 
    bool hasAutoBuildIndex() const { return this->autoBuildIndex_ != nullptr;};
    void deleteAutoBuildIndex() { this->autoBuildIndex_ = nullptr;};
    inline bool autoBuildIndex() const { DARABONBA_PTR_GET_DEFAULT(autoBuildIndex_, false) };
    inline CreateDataSourceRequest& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const CreateDataSourceRequestConfig & config() const { DARABONBA_PTR_GET_CONST(config_, CreateDataSourceRequestConfig) };
    inline CreateDataSourceRequestConfig config() { DARABONBA_PTR_GET(config_, CreateDataSourceRequestConfig) };
    inline CreateDataSourceRequest& setConfig(const CreateDataSourceRequestConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateDataSourceRequest& setConfig(CreateDataSourceRequestConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateDataSourceRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // saroConfig Field Functions 
    bool hasSaroConfig() const { return this->saroConfig_ != nullptr;};
    void deleteSaroConfig() { this->saroConfig_ = nullptr;};
    inline const CreateDataSourceRequestSaroConfig & saroConfig() const { DARABONBA_PTR_GET_CONST(saroConfig_, CreateDataSourceRequestSaroConfig) };
    inline CreateDataSourceRequestSaroConfig saroConfig() { DARABONBA_PTR_GET(saroConfig_, CreateDataSourceRequestSaroConfig) };
    inline CreateDataSourceRequest& setSaroConfig(const CreateDataSourceRequestSaroConfig & saroConfig) { DARABONBA_PTR_SET_VALUE(saroConfig_, saroConfig) };
    inline CreateDataSourceRequest& setSaroConfig(CreateDataSourceRequestSaroConfig && saroConfig) { DARABONBA_PTR_SET_RVALUE(saroConfig_, saroConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDataSourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDataSourceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // Specifies whether to automatically rebuild the index.
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    // The configuration information.
    std::shared_ptr<CreateDataSourceRequestConfig> config_ = nullptr;
    // The data center in which the data source is deployed.
    std::shared_ptr<string> domain_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The configurations of the SARO data source.
    std::shared_ptr<CreateDataSourceRequestSaroConfig> saroConfig_ = nullptr;
    // The type of the data source. Valid values: odps, oss, and swift.
    std::shared_ptr<string> type_ = nullptr;
    // Specifies whether to perform a dry run. This parameter is only used to check whether the data source is valid. Valid values: true and false.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
