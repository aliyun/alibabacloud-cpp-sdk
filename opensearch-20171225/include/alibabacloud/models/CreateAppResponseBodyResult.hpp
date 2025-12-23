// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultCluster.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppResponseBodyResultDataSources.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultDomain.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultFirstRanks.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultQueryProcessors.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultQuota.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultSchema.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultSchemas.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultSecondRanks.hpp>
#include <alibabacloud/models/CreateAppResponseBodyResultSummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(configItems, configItems_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(dataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(fetchFields, fetchFields_);
      DARABONBA_PTR_TO_JSON(firstRanks, firstRanks_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(interpretations, interpretations_);
      DARABONBA_PTR_TO_JSON(isCurrent, isCurrent_);
      DARABONBA_PTR_TO_JSON(progressPercent, progressPercent_);
      DARABONBA_PTR_TO_JSON(prompts, prompts_);
      DARABONBA_PTR_TO_JSON(queryProcessors, queryProcessors_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(schemas, schemas_);
      DARABONBA_PTR_TO_JSON(secondRanks, secondRanks_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(summaries, summaries_);
      DARABONBA_PTR_TO_JSON(switchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(configItems, configItems_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(dataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(fetchFields, fetchFields_);
      DARABONBA_PTR_FROM_JSON(firstRanks, firstRanks_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(interpretations, interpretations_);
      DARABONBA_PTR_FROM_JSON(isCurrent, isCurrent_);
      DARABONBA_PTR_FROM_JSON(progressPercent, progressPercent_);
      DARABONBA_PTR_FROM_JSON(prompts, prompts_);
      DARABONBA_PTR_FROM_JSON(queryProcessors, queryProcessors_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(secondRanks, secondRanks_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(summaries, summaries_);
      DARABONBA_PTR_FROM_JSON(switchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    CreateAppResponseBodyResult() = default ;
    CreateAppResponseBodyResult(const CreateAppResponseBodyResult &) = default ;
    CreateAppResponseBodyResult(CreateAppResponseBodyResult &&) = default ;
    CreateAppResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResult() = default ;
    CreateAppResponseBodyResult& operator=(const CreateAppResponseBodyResult &) = default ;
    CreateAppResponseBodyResult& operator=(CreateAppResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr
        && return this->clusterName_ == nullptr && return this->configItems_ == nullptr && return this->created_ == nullptr && return this->dataSources_ == nullptr && return this->description_ == nullptr
        && return this->domain_ == nullptr && return this->fetchFields_ == nullptr && return this->firstRanks_ == nullptr && return this->id_ == nullptr && return this->interpretations_ == nullptr
        && return this->isCurrent_ == nullptr && return this->progressPercent_ == nullptr && return this->prompts_ == nullptr && return this->queryProcessors_ == nullptr && return this->quota_ == nullptr
        && return this->schema_ == nullptr && return this->schemas_ == nullptr && return this->secondRanks_ == nullptr && return this->status_ == nullptr && return this->summaries_ == nullptr
        && return this->switchTime_ == nullptr && return this->type_ == nullptr && return this->updated_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const Models::CreateAppResponseBodyResultCluster & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, Models::CreateAppResponseBodyResultCluster) };
    inline Models::CreateAppResponseBodyResultCluster cluster() { DARABONBA_PTR_GET(cluster_, Models::CreateAppResponseBodyResultCluster) };
    inline CreateAppResponseBodyResult& setCluster(const Models::CreateAppResponseBodyResultCluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline CreateAppResponseBodyResult& setCluster(Models::CreateAppResponseBodyResultCluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateAppResponseBodyResult& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // configItems Field Functions 
    bool hasConfigItems() const { return this->configItems_ != nullptr;};
    void deleteConfigItems() { this->configItems_ = nullptr;};
    inline const vector<Darabonba::Json> & configItems() const { DARABONBA_PTR_GET_CONST(configItems_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> configItems() { DARABONBA_PTR_GET(configItems_, vector<Darabonba::Json>) };
    inline CreateAppResponseBodyResult& setConfigItems(const vector<Darabonba::Json> & configItems) { DARABONBA_PTR_SET_VALUE(configItems_, configItems) };
    inline CreateAppResponseBodyResult& setConfigItems(vector<Darabonba::Json> && configItems) { DARABONBA_PTR_SET_RVALUE(configItems_, configItems) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int64_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
    inline CreateAppResponseBodyResult& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<Models::CreateAppResponseBodyResultDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<Models::CreateAppResponseBodyResultDataSources>) };
    inline vector<Models::CreateAppResponseBodyResultDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<Models::CreateAppResponseBodyResultDataSources>) };
    inline CreateAppResponseBodyResult& setDataSources(const vector<Models::CreateAppResponseBodyResultDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline CreateAppResponseBodyResult& setDataSources(vector<Models::CreateAppResponseBodyResultDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const Models::CreateAppResponseBodyResultDomain & domain() const { DARABONBA_PTR_GET_CONST(domain_, Models::CreateAppResponseBodyResultDomain) };
    inline Models::CreateAppResponseBodyResultDomain domain() { DARABONBA_PTR_GET(domain_, Models::CreateAppResponseBodyResultDomain) };
    inline CreateAppResponseBodyResult& setDomain(const Models::CreateAppResponseBodyResultDomain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline CreateAppResponseBodyResult& setDomain(Models::CreateAppResponseBodyResultDomain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // fetchFields Field Functions 
    bool hasFetchFields() const { return this->fetchFields_ != nullptr;};
    void deleteFetchFields() { this->fetchFields_ = nullptr;};
    inline const vector<string> & fetchFields() const { DARABONBA_PTR_GET_CONST(fetchFields_, vector<string>) };
    inline vector<string> fetchFields() { DARABONBA_PTR_GET(fetchFields_, vector<string>) };
    inline CreateAppResponseBodyResult& setFetchFields(const vector<string> & fetchFields) { DARABONBA_PTR_SET_VALUE(fetchFields_, fetchFields) };
    inline CreateAppResponseBodyResult& setFetchFields(vector<string> && fetchFields) { DARABONBA_PTR_SET_RVALUE(fetchFields_, fetchFields) };


    // firstRanks Field Functions 
    bool hasFirstRanks() const { return this->firstRanks_ != nullptr;};
    void deleteFirstRanks() { this->firstRanks_ = nullptr;};
    inline const vector<Models::CreateAppResponseBodyResultFirstRanks> & firstRanks() const { DARABONBA_PTR_GET_CONST(firstRanks_, vector<Models::CreateAppResponseBodyResultFirstRanks>) };
    inline vector<Models::CreateAppResponseBodyResultFirstRanks> firstRanks() { DARABONBA_PTR_GET(firstRanks_, vector<Models::CreateAppResponseBodyResultFirstRanks>) };
    inline CreateAppResponseBodyResult& setFirstRanks(const vector<Models::CreateAppResponseBodyResultFirstRanks> & firstRanks) { DARABONBA_PTR_SET_VALUE(firstRanks_, firstRanks) };
    inline CreateAppResponseBodyResult& setFirstRanks(vector<Models::CreateAppResponseBodyResultFirstRanks> && firstRanks) { DARABONBA_PTR_SET_RVALUE(firstRanks_, firstRanks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateAppResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interpretations Field Functions 
    bool hasInterpretations() const { return this->interpretations_ != nullptr;};
    void deleteInterpretations() { this->interpretations_ = nullptr;};
    inline const vector<Darabonba::Json> & interpretations() const { DARABONBA_PTR_GET_CONST(interpretations_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> interpretations() { DARABONBA_PTR_GET(interpretations_, vector<Darabonba::Json>) };
    inline CreateAppResponseBodyResult& setInterpretations(const vector<Darabonba::Json> & interpretations) { DARABONBA_PTR_SET_VALUE(interpretations_, interpretations) };
    inline CreateAppResponseBodyResult& setInterpretations(vector<Darabonba::Json> && interpretations) { DARABONBA_PTR_SET_RVALUE(interpretations_, interpretations) };


    // isCurrent Field Functions 
    bool hasIsCurrent() const { return this->isCurrent_ != nullptr;};
    void deleteIsCurrent() { this->isCurrent_ = nullptr;};
    inline bool isCurrent() const { DARABONBA_PTR_GET_DEFAULT(isCurrent_, false) };
    inline CreateAppResponseBodyResult& setIsCurrent(bool isCurrent) { DARABONBA_PTR_SET_VALUE(isCurrent_, isCurrent) };


    // progressPercent Field Functions 
    bool hasProgressPercent() const { return this->progressPercent_ != nullptr;};
    void deleteProgressPercent() { this->progressPercent_ = nullptr;};
    inline int32_t progressPercent() const { DARABONBA_PTR_GET_DEFAULT(progressPercent_, 0) };
    inline CreateAppResponseBodyResult& setProgressPercent(int32_t progressPercent) { DARABONBA_PTR_SET_VALUE(progressPercent_, progressPercent) };


    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<Darabonba::Json> & prompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> prompts() { DARABONBA_PTR_GET(prompts_, vector<Darabonba::Json>) };
    inline CreateAppResponseBodyResult& setPrompts(const vector<Darabonba::Json> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline CreateAppResponseBodyResult& setPrompts(vector<Darabonba::Json> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // queryProcessors Field Functions 
    bool hasQueryProcessors() const { return this->queryProcessors_ != nullptr;};
    void deleteQueryProcessors() { this->queryProcessors_ = nullptr;};
    inline const vector<Models::CreateAppResponseBodyResultQueryProcessors> & queryProcessors() const { DARABONBA_PTR_GET_CONST(queryProcessors_, vector<Models::CreateAppResponseBodyResultQueryProcessors>) };
    inline vector<Models::CreateAppResponseBodyResultQueryProcessors> queryProcessors() { DARABONBA_PTR_GET(queryProcessors_, vector<Models::CreateAppResponseBodyResultQueryProcessors>) };
    inline CreateAppResponseBodyResult& setQueryProcessors(const vector<Models::CreateAppResponseBodyResultQueryProcessors> & queryProcessors) { DARABONBA_PTR_SET_VALUE(queryProcessors_, queryProcessors) };
    inline CreateAppResponseBodyResult& setQueryProcessors(vector<Models::CreateAppResponseBodyResultQueryProcessors> && queryProcessors) { DARABONBA_PTR_SET_RVALUE(queryProcessors_, queryProcessors) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Models::CreateAppResponseBodyResultQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Models::CreateAppResponseBodyResultQuota) };
    inline Models::CreateAppResponseBodyResultQuota quota() { DARABONBA_PTR_GET(quota_, Models::CreateAppResponseBodyResultQuota) };
    inline CreateAppResponseBodyResult& setQuota(const Models::CreateAppResponseBodyResultQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline CreateAppResponseBodyResult& setQuota(Models::CreateAppResponseBodyResultQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Models::CreateAppResponseBodyResultSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Models::CreateAppResponseBodyResultSchema) };
    inline Models::CreateAppResponseBodyResultSchema schema() { DARABONBA_PTR_GET(schema_, Models::CreateAppResponseBodyResultSchema) };
    inline CreateAppResponseBodyResult& setSchema(const Models::CreateAppResponseBodyResultSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline CreateAppResponseBodyResult& setSchema(Models::CreateAppResponseBodyResultSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<Models::CreateAppResponseBodyResultSchemas> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<Models::CreateAppResponseBodyResultSchemas>) };
    inline vector<Models::CreateAppResponseBodyResultSchemas> schemas() { DARABONBA_PTR_GET(schemas_, vector<Models::CreateAppResponseBodyResultSchemas>) };
    inline CreateAppResponseBodyResult& setSchemas(const vector<Models::CreateAppResponseBodyResultSchemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline CreateAppResponseBodyResult& setSchemas(vector<Models::CreateAppResponseBodyResultSchemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // secondRanks Field Functions 
    bool hasSecondRanks() const { return this->secondRanks_ != nullptr;};
    void deleteSecondRanks() { this->secondRanks_ = nullptr;};
    inline const vector<Models::CreateAppResponseBodyResultSecondRanks> & secondRanks() const { DARABONBA_PTR_GET_CONST(secondRanks_, vector<Models::CreateAppResponseBodyResultSecondRanks>) };
    inline vector<Models::CreateAppResponseBodyResultSecondRanks> secondRanks() { DARABONBA_PTR_GET(secondRanks_, vector<Models::CreateAppResponseBodyResultSecondRanks>) };
    inline CreateAppResponseBodyResult& setSecondRanks(const vector<Models::CreateAppResponseBodyResultSecondRanks> & secondRanks) { DARABONBA_PTR_SET_VALUE(secondRanks_, secondRanks) };
    inline CreateAppResponseBodyResult& setSecondRanks(vector<Models::CreateAppResponseBodyResultSecondRanks> && secondRanks) { DARABONBA_PTR_SET_RVALUE(secondRanks_, secondRanks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateAppResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summaries Field Functions 
    bool hasSummaries() const { return this->summaries_ != nullptr;};
    void deleteSummaries() { this->summaries_ = nullptr;};
    inline const vector<Models::CreateAppResponseBodyResultSummaries> & summaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Models::CreateAppResponseBodyResultSummaries>) };
    inline vector<Models::CreateAppResponseBodyResultSummaries> summaries() { DARABONBA_PTR_GET(summaries_, vector<Models::CreateAppResponseBodyResultSummaries>) };
    inline CreateAppResponseBodyResult& setSummaries(const vector<Models::CreateAppResponseBodyResultSummaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
    inline CreateAppResponseBodyResult& setSummaries(vector<Models::CreateAppResponseBodyResultSummaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline int64_t switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, 0L) };
    inline CreateAppResponseBodyResult& setSwitchTime(int64_t switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAppResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int64_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0L) };
    inline CreateAppResponseBodyResult& setUpdated(int64_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The capability opening configurations.
    std::shared_ptr<Models::CreateAppResponseBodyResultCluster> cluster_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> configItems_ = nullptr;
    std::shared_ptr<int64_t> created_ = nullptr;
    // The configurations of the data sources.
    std::shared_ptr<vector<Models::CreateAppResponseBodyResultDataSources>> dataSources_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The industry model module.
    std::shared_ptr<Models::CreateAppResponseBodyResultDomain> domain_ = nullptr;
    // The default display fields.
    std::shared_ptr<vector<string>> fetchFields_ = nullptr;
    // The configurations of rough sort.
    std::shared_ptr<vector<Models::CreateAppResponseBodyResultFirstRanks>> firstRanks_ = nullptr;
    // The application ID.
    std::shared_ptr<string> id_ = nullptr;
    // The descriptions of the LLM table fields.
    std::shared_ptr<vector<Darabonba::Json>> interpretations_ = nullptr;
    // Indicates whether the version is an online version.
    std::shared_ptr<bool> isCurrent_ = nullptr;
    // The percentage for the data import progress.
    std::shared_ptr<int32_t> progressPercent_ = nullptr;
    // The prompt configurations
    std::shared_ptr<vector<Darabonba::Json>> prompts_ = nullptr;
    // The query intent understanding configurations.
    std::shared_ptr<vector<Models::CreateAppResponseBodyResultQueryProcessors>> queryProcessors_ = nullptr;
    // The quota.
    std::shared_ptr<Models::CreateAppResponseBodyResultQuota> quota_ = nullptr;
    // The single-table schema.
    std::shared_ptr<Models::CreateAppResponseBodyResultSchema> schema_ = nullptr;
    // The multi-table schema.
    std::shared_ptr<vector<Models::CreateAppResponseBodyResultSchemas>> schemas_ = nullptr;
    // The configurations of fine sort.
    std::shared_ptr<vector<Models::CreateAppResponseBodyResultSecondRanks>> secondRanks_ = nullptr;
    // The status of the application. Valid values:
    // 
    // *   OK
    // *   STOPPED
    // *   FROZEN
    // *   INITIALIZING
    // *   UNAVAILABLE
    // *   DATA_WAITING
    // *   DATA_PREPARING
    std::shared_ptr<string> status_ = nullptr;
    // The summary configurations of search results.
    std::shared_ptr<vector<Models::CreateAppResponseBodyResultSummaries>> summaries_ = nullptr;
    std::shared_ptr<int64_t> switchTime_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   standard
    // *   enhanced
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
