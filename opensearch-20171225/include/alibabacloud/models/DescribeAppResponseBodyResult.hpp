// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultCluster.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppResponseBodyResultDataSources.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultDomain.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultFirstRanks.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultQueryProcessors.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultQuota.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultSchema.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultSchemas.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultSecondRanks.hpp>
#include <alibabacloud/models/DescribeAppResponseBodyResultSummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeAppResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(autoSwitch, autoSwitch_);
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(dataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(fetchFields, fetchFields_);
      DARABONBA_PTR_TO_JSON(firstRanks, firstRanks_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_ANY_TO_JSON(interpretations, interpretations_);
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
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSwitch, autoSwitch_);
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(dataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(fetchFields, fetchFields_);
      DARABONBA_PTR_FROM_JSON(firstRanks, firstRanks_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_ANY_FROM_JSON(interpretations, interpretations_);
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
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeAppResponseBodyResult() = default ;
    DescribeAppResponseBodyResult(const DescribeAppResponseBodyResult &) = default ;
    DescribeAppResponseBodyResult(DescribeAppResponseBodyResult &&) = default ;
    DescribeAppResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppResponseBodyResult() = default ;
    DescribeAppResponseBodyResult& operator=(const DescribeAppResponseBodyResult &) = default ;
    DescribeAppResponseBodyResult& operator=(DescribeAppResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSwitch_ == nullptr
        && return this->cluster_ == nullptr && return this->clusterName_ == nullptr && return this->dataSources_ == nullptr && return this->description_ == nullptr && return this->domain_ == nullptr
        && return this->fetchFields_ == nullptr && return this->firstRanks_ == nullptr && return this->id_ == nullptr && return this->interpretations_ == nullptr && return this->isCurrent_ == nullptr
        && return this->progressPercent_ == nullptr && return this->prompts_ == nullptr && return this->queryProcessors_ == nullptr && return this->quota_ == nullptr && return this->schema_ == nullptr
        && return this->schemas_ == nullptr && return this->secondRanks_ == nullptr && return this->status_ == nullptr && return this->summaries_ == nullptr && return this->type_ == nullptr; };
    // autoSwitch Field Functions 
    bool hasAutoSwitch() const { return this->autoSwitch_ != nullptr;};
    void deleteAutoSwitch() { this->autoSwitch_ = nullptr;};
    inline bool autoSwitch() const { DARABONBA_PTR_GET_DEFAULT(autoSwitch_, false) };
    inline DescribeAppResponseBodyResult& setAutoSwitch(bool autoSwitch) { DARABONBA_PTR_SET_VALUE(autoSwitch_, autoSwitch) };


    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const Models::DescribeAppResponseBodyResultCluster & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, Models::DescribeAppResponseBodyResultCluster) };
    inline Models::DescribeAppResponseBodyResultCluster cluster() { DARABONBA_PTR_GET(cluster_, Models::DescribeAppResponseBodyResultCluster) };
    inline DescribeAppResponseBodyResult& setCluster(const Models::DescribeAppResponseBodyResultCluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline DescribeAppResponseBodyResult& setCluster(Models::DescribeAppResponseBodyResultCluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeAppResponseBodyResult& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<Models::DescribeAppResponseBodyResultDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<Models::DescribeAppResponseBodyResultDataSources>) };
    inline vector<Models::DescribeAppResponseBodyResultDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<Models::DescribeAppResponseBodyResultDataSources>) };
    inline DescribeAppResponseBodyResult& setDataSources(const vector<Models::DescribeAppResponseBodyResultDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline DescribeAppResponseBodyResult& setDataSources(vector<Models::DescribeAppResponseBodyResultDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAppResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const Models::DescribeAppResponseBodyResultDomain & domain() const { DARABONBA_PTR_GET_CONST(domain_, Models::DescribeAppResponseBodyResultDomain) };
    inline Models::DescribeAppResponseBodyResultDomain domain() { DARABONBA_PTR_GET(domain_, Models::DescribeAppResponseBodyResultDomain) };
    inline DescribeAppResponseBodyResult& setDomain(const Models::DescribeAppResponseBodyResultDomain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline DescribeAppResponseBodyResult& setDomain(Models::DescribeAppResponseBodyResultDomain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // fetchFields Field Functions 
    bool hasFetchFields() const { return this->fetchFields_ != nullptr;};
    void deleteFetchFields() { this->fetchFields_ = nullptr;};
    inline const vector<string> & fetchFields() const { DARABONBA_PTR_GET_CONST(fetchFields_, vector<string>) };
    inline vector<string> fetchFields() { DARABONBA_PTR_GET(fetchFields_, vector<string>) };
    inline DescribeAppResponseBodyResult& setFetchFields(const vector<string> & fetchFields) { DARABONBA_PTR_SET_VALUE(fetchFields_, fetchFields) };
    inline DescribeAppResponseBodyResult& setFetchFields(vector<string> && fetchFields) { DARABONBA_PTR_SET_RVALUE(fetchFields_, fetchFields) };


    // firstRanks Field Functions 
    bool hasFirstRanks() const { return this->firstRanks_ != nullptr;};
    void deleteFirstRanks() { this->firstRanks_ = nullptr;};
    inline const vector<Models::DescribeAppResponseBodyResultFirstRanks> & firstRanks() const { DARABONBA_PTR_GET_CONST(firstRanks_, vector<Models::DescribeAppResponseBodyResultFirstRanks>) };
    inline vector<Models::DescribeAppResponseBodyResultFirstRanks> firstRanks() { DARABONBA_PTR_GET(firstRanks_, vector<Models::DescribeAppResponseBodyResultFirstRanks>) };
    inline DescribeAppResponseBodyResult& setFirstRanks(const vector<Models::DescribeAppResponseBodyResultFirstRanks> & firstRanks) { DARABONBA_PTR_SET_VALUE(firstRanks_, firstRanks) };
    inline DescribeAppResponseBodyResult& setFirstRanks(vector<Models::DescribeAppResponseBodyResultFirstRanks> && firstRanks) { DARABONBA_PTR_SET_RVALUE(firstRanks_, firstRanks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeAppResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interpretations Field Functions 
    bool hasInterpretations() const { return this->interpretations_ != nullptr;};
    void deleteInterpretations() { this->interpretations_ = nullptr;};
    inline     const Darabonba::Json & interpretations() const { DARABONBA_GET(interpretations_) };
    Darabonba::Json & interpretations() { DARABONBA_GET(interpretations_) };
    inline DescribeAppResponseBodyResult& setInterpretations(const Darabonba::Json & interpretations) { DARABONBA_SET_VALUE(interpretations_, interpretations) };
    inline DescribeAppResponseBodyResult& setInterpretations(Darabonba::Json & interpretations) { DARABONBA_SET_RVALUE(interpretations_, interpretations) };


    // isCurrent Field Functions 
    bool hasIsCurrent() const { return this->isCurrent_ != nullptr;};
    void deleteIsCurrent() { this->isCurrent_ = nullptr;};
    inline bool isCurrent() const { DARABONBA_PTR_GET_DEFAULT(isCurrent_, false) };
    inline DescribeAppResponseBodyResult& setIsCurrent(bool isCurrent) { DARABONBA_PTR_SET_VALUE(isCurrent_, isCurrent) };


    // progressPercent Field Functions 
    bool hasProgressPercent() const { return this->progressPercent_ != nullptr;};
    void deleteProgressPercent() { this->progressPercent_ = nullptr;};
    inline int32_t progressPercent() const { DARABONBA_PTR_GET_DEFAULT(progressPercent_, 0) };
    inline DescribeAppResponseBodyResult& setProgressPercent(int32_t progressPercent) { DARABONBA_PTR_SET_VALUE(progressPercent_, progressPercent) };


    // prompts Field Functions 
    bool hasPrompts() const { return this->prompts_ != nullptr;};
    void deletePrompts() { this->prompts_ = nullptr;};
    inline const vector<Darabonba::Json> & prompts() const { DARABONBA_PTR_GET_CONST(prompts_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> prompts() { DARABONBA_PTR_GET(prompts_, vector<Darabonba::Json>) };
    inline DescribeAppResponseBodyResult& setPrompts(const vector<Darabonba::Json> & prompts) { DARABONBA_PTR_SET_VALUE(prompts_, prompts) };
    inline DescribeAppResponseBodyResult& setPrompts(vector<Darabonba::Json> && prompts) { DARABONBA_PTR_SET_RVALUE(prompts_, prompts) };


    // queryProcessors Field Functions 
    bool hasQueryProcessors() const { return this->queryProcessors_ != nullptr;};
    void deleteQueryProcessors() { this->queryProcessors_ = nullptr;};
    inline const vector<Models::DescribeAppResponseBodyResultQueryProcessors> & queryProcessors() const { DARABONBA_PTR_GET_CONST(queryProcessors_, vector<Models::DescribeAppResponseBodyResultQueryProcessors>) };
    inline vector<Models::DescribeAppResponseBodyResultQueryProcessors> queryProcessors() { DARABONBA_PTR_GET(queryProcessors_, vector<Models::DescribeAppResponseBodyResultQueryProcessors>) };
    inline DescribeAppResponseBodyResult& setQueryProcessors(const vector<Models::DescribeAppResponseBodyResultQueryProcessors> & queryProcessors) { DARABONBA_PTR_SET_VALUE(queryProcessors_, queryProcessors) };
    inline DescribeAppResponseBodyResult& setQueryProcessors(vector<Models::DescribeAppResponseBodyResultQueryProcessors> && queryProcessors) { DARABONBA_PTR_SET_RVALUE(queryProcessors_, queryProcessors) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Models::DescribeAppResponseBodyResultQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Models::DescribeAppResponseBodyResultQuota) };
    inline Models::DescribeAppResponseBodyResultQuota quota() { DARABONBA_PTR_GET(quota_, Models::DescribeAppResponseBodyResultQuota) };
    inline DescribeAppResponseBodyResult& setQuota(const Models::DescribeAppResponseBodyResultQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline DescribeAppResponseBodyResult& setQuota(Models::DescribeAppResponseBodyResultQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Models::DescribeAppResponseBodyResultSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Models::DescribeAppResponseBodyResultSchema) };
    inline Models::DescribeAppResponseBodyResultSchema schema() { DARABONBA_PTR_GET(schema_, Models::DescribeAppResponseBodyResultSchema) };
    inline DescribeAppResponseBodyResult& setSchema(const Models::DescribeAppResponseBodyResultSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline DescribeAppResponseBodyResult& setSchema(Models::DescribeAppResponseBodyResultSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<Models::DescribeAppResponseBodyResultSchemas> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<Models::DescribeAppResponseBodyResultSchemas>) };
    inline vector<Models::DescribeAppResponseBodyResultSchemas> schemas() { DARABONBA_PTR_GET(schemas_, vector<Models::DescribeAppResponseBodyResultSchemas>) };
    inline DescribeAppResponseBodyResult& setSchemas(const vector<Models::DescribeAppResponseBodyResultSchemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline DescribeAppResponseBodyResult& setSchemas(vector<Models::DescribeAppResponseBodyResultSchemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // secondRanks Field Functions 
    bool hasSecondRanks() const { return this->secondRanks_ != nullptr;};
    void deleteSecondRanks() { this->secondRanks_ = nullptr;};
    inline const vector<Models::DescribeAppResponseBodyResultSecondRanks> & secondRanks() const { DARABONBA_PTR_GET_CONST(secondRanks_, vector<Models::DescribeAppResponseBodyResultSecondRanks>) };
    inline vector<Models::DescribeAppResponseBodyResultSecondRanks> secondRanks() { DARABONBA_PTR_GET(secondRanks_, vector<Models::DescribeAppResponseBodyResultSecondRanks>) };
    inline DescribeAppResponseBodyResult& setSecondRanks(const vector<Models::DescribeAppResponseBodyResultSecondRanks> & secondRanks) { DARABONBA_PTR_SET_VALUE(secondRanks_, secondRanks) };
    inline DescribeAppResponseBodyResult& setSecondRanks(vector<Models::DescribeAppResponseBodyResultSecondRanks> && secondRanks) { DARABONBA_PTR_SET_RVALUE(secondRanks_, secondRanks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAppResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summaries Field Functions 
    bool hasSummaries() const { return this->summaries_ != nullptr;};
    void deleteSummaries() { this->summaries_ = nullptr;};
    inline const vector<Models::DescribeAppResponseBodyResultSummaries> & summaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Models::DescribeAppResponseBodyResultSummaries>) };
    inline vector<Models::DescribeAppResponseBodyResultSummaries> summaries() { DARABONBA_PTR_GET(summaries_, vector<Models::DescribeAppResponseBodyResultSummaries>) };
    inline DescribeAppResponseBodyResult& setSummaries(const vector<Models::DescribeAppResponseBodyResultSummaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
    inline DescribeAppResponseBodyResult& setSummaries(vector<Models::DescribeAppResponseBodyResultSummaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAppResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the version is automatically switched to an online version.
    std::shared_ptr<bool> autoSwitch_ = nullptr;
    // The capability opening configurations.
    std::shared_ptr<Models::DescribeAppResponseBodyResultCluster> cluster_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The configurations of the data sources.
    std::shared_ptr<vector<Models::DescribeAppResponseBodyResultDataSources>> dataSources_ = nullptr;
    // The description of the version.
    std::shared_ptr<string> description_ = nullptr;
    // The industry type. Valid values:
    // 
    // *   GENERAL
    // *   ECOMMERCE
    // *   IT_CONTENT
    std::shared_ptr<Models::DescribeAppResponseBodyResultDomain> domain_ = nullptr;
    // The default display fields.
    std::shared_ptr<vector<string>> fetchFields_ = nullptr;
    // The configurations of rough sort.
    std::shared_ptr<vector<Models::DescribeAppResponseBodyResultFirstRanks>> firstRanks_ = nullptr;
    // The version ID.
    std::shared_ptr<string> id_ = nullptr;
    // The industry model module.
    Darabonba::Json interpretations_ = nullptr;
    // Indices whether the version is an online version.
    std::shared_ptr<bool> isCurrent_ = nullptr;
    // The progress of data import, in percentage. For example, a value of 83 indicates 83%.
    std::shared_ptr<int32_t> progressPercent_ = nullptr;
    // The prompt configurations.
    std::shared_ptr<vector<Darabonba::Json>> prompts_ = nullptr;
    // The query intent understanding configurations.
    std::shared_ptr<vector<Models::DescribeAppResponseBodyResultQueryProcessors>> queryProcessors_ = nullptr;
    // The quota information.
    std::shared_ptr<Models::DescribeAppResponseBodyResultQuota> quota_ = nullptr;
    // The schema of the application.
    std::shared_ptr<Models::DescribeAppResponseBodyResultSchema> schema_ = nullptr;
    // The multi-table schema.
    std::shared_ptr<vector<Models::DescribeAppResponseBodyResultSchemas>> schemas_ = nullptr;
    // The configurations of fine sort.
    std::shared_ptr<vector<Models::DescribeAppResponseBodyResultSecondRanks>> secondRanks_ = nullptr;
    // The status of the version. Valid values:
    // 
    // *   ok: The version is normal.
    // *   stopped: The version is suspended.
    // *   frozen: The version is frozen.
    // *   initializing: The version is being initialized.
    // *   unavailable: The version is invalid.
    // *   data_waiting: Data is to be initialized.
    // *   data_preparing: Data is being initialized.
    std::shared_ptr<string> status_ = nullptr;
    // The summary configurations of search results.
    std::shared_ptr<vector<Models::DescribeAppResponseBodyResultSummaries>> summaries_ = nullptr;
    // The edition type. Valid values:
    // 
    // *   standard: a standard edition application.
    // *   advance: an advanced edition application of an old version. New versions are not supported for this edition.
    // *   enhanced: an advanced edition application of a new version.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
