// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppRequestCluster.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppRequestDataSources.hpp>
#include <alibabacloud/models/CreateAppRequestDomain.hpp>
#include <alibabacloud/models/CreateAppRequestFirstRanks.hpp>
#include <alibabacloud/models/CreateAppRequestQueryProcessors.hpp>
#include <alibabacloud/models/CreateAppRequestSchema.hpp>
#include <alibabacloud/models/CreateAppRequestSchemas.hpp>
#include <alibabacloud/models/CreateAppRequestSecondRanks.hpp>
#include <alibabacloud/models/CreateAppRequestSummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoSwitch, autoSwitch_);
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(configItems, configItems_);
      DARABONBA_PTR_TO_JSON(dataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(fetchFields, fetchFields_);
      DARABONBA_PTR_TO_JSON(firstRanks, firstRanks_);
      DARABONBA_PTR_TO_JSON(interpretations, interpretations_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
      DARABONBA_PTR_TO_JSON(prompts, prompts_);
      DARABONBA_PTR_TO_JSON(queryProcessors, queryProcessors_);
      DARABONBA_PTR_TO_JSON(realtimeShared, realtimeShared_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(schemas, schemas_);
      DARABONBA_PTR_TO_JSON(secondRanks, secondRanks_);
      DARABONBA_PTR_TO_JSON(summaries, summaries_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSwitch, autoSwitch_);
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(configItems, configItems_);
      DARABONBA_PTR_FROM_JSON(dataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(fetchFields, fetchFields_);
      DARABONBA_PTR_FROM_JSON(firstRanks, firstRanks_);
      DARABONBA_PTR_FROM_JSON(interpretations, interpretations_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
      DARABONBA_PTR_FROM_JSON(prompts, prompts_);
      DARABONBA_PTR_FROM_JSON(queryProcessors, queryProcessors_);
      DARABONBA_PTR_FROM_JSON(realtimeShared, realtimeShared_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(secondRanks, secondRanks_);
      DARABONBA_PTR_FROM_JSON(summaries, summaries_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateAppRequest() = default ;
    CreateAppRequest(const CreateAppRequest &) = default ;
    CreateAppRequest(CreateAppRequest &&) = default ;
    CreateAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequest() = default ;
    CreateAppRequest& operator=(const CreateAppRequest &) = default ;
    CreateAppRequest& operator=(CreateAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSwitch_ == nullptr
        && return this->cluster_ == nullptr && return this->configItems_ == nullptr && return this->dataSources_ == nullptr && return this->description_ == nullptr && return this->domain_ == nullptr
        && return this->fetchFields_ == nullptr && return this->firstRanks_ == nullptr && return this->interpretations_ == nullptr && return this->networkType_ == nullptr && return this->prompts_ == nullptr
        && return this->queryProcessors_ == nullptr && return this->realtimeShared_ == nullptr && return this->schema_ == nullptr && return this->schemas_ == nullptr && return this->secondRanks_ == nullptr
        && return this->summaries_ == nullptr && return this->dryRun_ == nullptr; };
    // autoSwitch Field Functions 
    bool hasAutoSwitch() const { return this->autoSwitch_ != nullptr;};
    void deleteAutoSwitch() { this->autoSwitch_ = nullptr;};
    inline bool autoSwitch() const { DARABONBA_PTR_GET_DEFAULT(autoSwitch_, false) };
    inline CreateAppRequest& setAutoSwitch(bool autoSwitch) { DARABONBA_PTR_SET_VALUE(autoSwitch_, autoSwitch) };


    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const CreateAppRequestCluster & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, CreateAppRequestCluster) };
    inline CreateAppRequestCluster cluster() { DARABONBA_PTR_GET(cluster_, CreateAppRequestCluster) };
    inline CreateAppRequest& setCluster(const CreateAppRequestCluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline CreateAppRequest& setCluster(CreateAppRequestCluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // configItems Field Functions 
    bool hasConfigItems() const { return this->configItems_ != nullptr;};
    void deleteConfigItems() { this->configItems_ = nullptr;};
    inline const vector<Darabonba::Json> & configItems() const { DARABONBA_PTR_GET_CONST(configItems_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> configItems() { DARABONBA_PTR_GET(configItems_, vector<Darabonba::Json>) };
    inline CreateAppRequest& setConfigItems(const vector<Darabonba::Json> & configItems) { DARABONBA_PTR_SET_VALUE(configItems_, configItems) };
    inline CreateAppRequest& setConfigItems(vector<Darabonba::Json> && configItems) { DARABONBA_PTR_SET_RVALUE(configItems_, configItems) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<CreateAppRequestDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<CreateAppRequestDataSources>) };
    inline vector<CreateAppRequestDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<CreateAppRequestDataSources>) };
    inline CreateAppRequest& setDataSources(const vector<CreateAppRequestDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline CreateAppRequest& setDataSources(vector<CreateAppRequestDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const CreateAppRequestDomain & domain() const { DARABONBA_PTR_GET_CONST(domain_, CreateAppRequestDomain) };
    inline CreateAppRequestDomain domain() { DARABONBA_PTR_GET(domain_, CreateAppRequestDomain) };
    inline CreateAppRequest& setDomain(const CreateAppRequestDomain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline CreateAppRequest& setDomain(CreateAppRequestDomain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // fetchFields Field Functions 
    bool hasFetchFields() const { return this->fetchFields_ != nullptr;};
    void deleteFetchFields() { this->fetchFields_ = nullptr;};
    inline const vector<string> & fetchFields() const { DARABONBA_PTR_GET_CONST(fetchFields_, vector<string>) };
    inline vector<string> fetchFields() { DARABONBA_PTR_GET(fetchFields_, vector<string>) };
    inline CreateAppRequest& setFetchFields(const vector<string> & fetchFields) { DARABONBA_PTR_SET_VALUE(fetchFields_, fetchFields) };
    inline CreateAppRequest& setFetchFields(vector<string> && fetchFields) { DARABONBA_PTR_SET_RVALUE(fetchFields_, fetchFields) };


    // firstRanks Field Functions 
    bool hasFirstRanks() const { return this->firstRanks_ != nullptr;};
    void deleteFirstRanks() { this->firstRanks_ = nullptr;};
    inline const vector<CreateAppRequestFirstRanks> & firstRanks() const { DARABONBA_PTR_GET_CONST(firstRanks_, vector<CreateAppRequestFirstRanks>) };
    inline vector<CreateAppRequestFirstRanks> firstRanks() { DARABONBA_PTR_GET(firstRanks_, vector<CreateAppRequestFirstRanks>) };
    inline CreateAppRequest& setFirstRanks(const vector<CreateAppRequestFirstRanks> & firstRanks) { DARABONBA_PTR_SET_VALUE(firstRanks_, firstRanks) };
    inline CreateAppRequest& setFirstRanks(vector<CreateAppRequestFirstRanks> && firstRanks) { DARABONBA_PTR_SET_RVALUE(firstRanks_, firstRanks) };


    // interpretations Field Functions 
    bool hasInterpretations() const { return this->interpretations_ != nullptr;};
    void deleteInterpretations() { this->interpretations_ = nullptr;};
    inline const vector<Darabonba::Json> & interpretations() const { DARABONBA_PTR_GET_CONST(interpretations_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> interpretations() { DARABONBA_PTR_GET(interpretations_, vector<Darabonba::Json>) };
    inline CreateAppRequest& setInterpretations(const vector<Darabonba::Json> & interpretations) { DARABONBA_PTR_SET_VALUE(interpretations_, interpretations) };
    inline CreateAppRequest& setInterpretations(vector<Darabonba::Json> && interpretations) { DARABONBA_PTR_SET_RVALUE(interpretations_, interpretations) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateAppRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<Darabonba::Json> & prompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> prompts() { DARABONBA_PTR_GET(prompts_, vector<Darabonba::Json>) };
    inline CreateAppRequest& setPrompts(const vector<Darabonba::Json> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline CreateAppRequest& setPrompts(vector<Darabonba::Json> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // queryProcessors Field Functions 
    bool hasQueryProcessors() const { return this->queryProcessors_ != nullptr;};
    void deleteQueryProcessors() { this->queryProcessors_ = nullptr;};
    inline const vector<CreateAppRequestQueryProcessors> & queryProcessors() const { DARABONBA_PTR_GET_CONST(queryProcessors_, vector<CreateAppRequestQueryProcessors>) };
    inline vector<CreateAppRequestQueryProcessors> queryProcessors() { DARABONBA_PTR_GET(queryProcessors_, vector<CreateAppRequestQueryProcessors>) };
    inline CreateAppRequest& setQueryProcessors(const vector<CreateAppRequestQueryProcessors> & queryProcessors) { DARABONBA_PTR_SET_VALUE(queryProcessors_, queryProcessors) };
    inline CreateAppRequest& setQueryProcessors(vector<CreateAppRequestQueryProcessors> && queryProcessors) { DARABONBA_PTR_SET_RVALUE(queryProcessors_, queryProcessors) };


    // realtimeShared Field Functions 
    bool hasRealtimeShared() const { return this->realtimeShared_ != nullptr;};
    void deleteRealtimeShared() { this->realtimeShared_ = nullptr;};
    inline bool realtimeShared() const { DARABONBA_PTR_GET_DEFAULT(realtimeShared_, false) };
    inline CreateAppRequest& setRealtimeShared(bool realtimeShared) { DARABONBA_PTR_SET_VALUE(realtimeShared_, realtimeShared) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const CreateAppRequestSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, CreateAppRequestSchema) };
    inline CreateAppRequestSchema schema() { DARABONBA_PTR_GET(schema_, CreateAppRequestSchema) };
    inline CreateAppRequest& setSchema(const CreateAppRequestSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline CreateAppRequest& setSchema(CreateAppRequestSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<CreateAppRequestSchemas> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<CreateAppRequestSchemas>) };
    inline vector<CreateAppRequestSchemas> schemas() { DARABONBA_PTR_GET(schemas_, vector<CreateAppRequestSchemas>) };
    inline CreateAppRequest& setSchemas(const vector<CreateAppRequestSchemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline CreateAppRequest& setSchemas(vector<CreateAppRequestSchemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // secondRanks Field Functions 
    bool hasSecondRanks() const { return this->secondRanks_ != nullptr;};
    void deleteSecondRanks() { this->secondRanks_ = nullptr;};
    inline const vector<CreateAppRequestSecondRanks> & secondRanks() const { DARABONBA_PTR_GET_CONST(secondRanks_, vector<CreateAppRequestSecondRanks>) };
    inline vector<CreateAppRequestSecondRanks> secondRanks() { DARABONBA_PTR_GET(secondRanks_, vector<CreateAppRequestSecondRanks>) };
    inline CreateAppRequest& setSecondRanks(const vector<CreateAppRequestSecondRanks> & secondRanks) { DARABONBA_PTR_SET_VALUE(secondRanks_, secondRanks) };
    inline CreateAppRequest& setSecondRanks(vector<CreateAppRequestSecondRanks> && secondRanks) { DARABONBA_PTR_SET_RVALUE(secondRanks_, secondRanks) };


    // summaries Field Functions 
    bool hasSummaries() const { return this->summaries_ != nullptr;};
    void deleteSummaries() { this->summaries_ = nullptr;};
    inline const vector<CreateAppRequestSummaries> & summaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<CreateAppRequestSummaries>) };
    inline vector<CreateAppRequestSummaries> summaries() { DARABONBA_PTR_GET(summaries_, vector<CreateAppRequestSummaries>) };
    inline CreateAppRequest& setSummaries(const vector<CreateAppRequestSummaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
    inline CreateAppRequest& setSummaries(vector<CreateAppRequestSummaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAppRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // Specifies whether to automatically switch the created version to an online version. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoSwitch_ = nullptr;
    // The capability opening configurations.
    std::shared_ptr<CreateAppRequestCluster> cluster_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> configItems_ = nullptr;
    // The configurations of data sources.
    std::shared_ptr<vector<CreateAppRequestDataSources>> dataSources_ = nullptr;
    // The version description.
    std::shared_ptr<string> description_ = nullptr;
    // The industry model module.
    std::shared_ptr<CreateAppRequestDomain> domain_ = nullptr;
    // The default display fields.
    std::shared_ptr<vector<string>> fetchFields_ = nullptr;
    // The configurations of rough sort.
    std::shared_ptr<vector<CreateAppRequestFirstRanks>> firstRanks_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> interpretations_ = nullptr;
    // The zone identifier. Valid values:
    // 
    // *   vpc
    // *   oxs
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> prompts_ = nullptr;
    // The query intent understanding configurations.
    std::shared_ptr<vector<CreateAppRequestQueryProcessors>> queryProcessors_ = nullptr;
    std::shared_ptr<bool> realtimeShared_ = nullptr;
    // The single-table schema.
    std::shared_ptr<CreateAppRequestSchema> schema_ = nullptr;
    // The multi-table schema.
    std::shared_ptr<vector<CreateAppRequestSchemas>> schemas_ = nullptr;
    // The configurations of fine sort.
    std::shared_ptr<vector<CreateAppRequestSecondRanks>> secondRanks_ = nullptr;
    // The summary configurations of search results.
    std::shared_ptr<vector<CreateAppRequestSummaries>> summaries_ = nullptr;
    // Specifies whether to perform a dry run. This parameter is only used to check whether the data source is valid. Valid values: true and false.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
