// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APP_HPP_
#define ALIBABACLOUD_MODELS_APP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AppCluster.hpp>
#include <vector>
#include <alibabacloud/models/DataSource.hpp>
#include <alibabacloud/models/Domain.hpp>
#include <alibabacloud/models/FirstRank.hpp>
#include <alibabacloud/models/QueryProcessor.hpp>
#include <alibabacloud/models/Quota.hpp>
#include <alibabacloud/models/Schema.hpp>
#include <alibabacloud/models/SecondRank.hpp>
#include <alibabacloud/models/Summary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class App : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const App& obj) { 
      DARABONBA_PTR_TO_JSON(autoSwitch, autoSwitch_);
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(dataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(fetchFields, fetchFields_);
      DARABONBA_PTR_TO_JSON(firstRanks, firstRanks_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
      DARABONBA_PTR_TO_JSON(queryProcessors, queryProcessors_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(realtimeShared, realtimeShared_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(schemas, schemas_);
      DARABONBA_PTR_TO_JSON(secondRanks, secondRanks_);
      DARABONBA_PTR_TO_JSON(summaries, summaries_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, App& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSwitch, autoSwitch_);
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(dataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(fetchFields, fetchFields_);
      DARABONBA_PTR_FROM_JSON(firstRanks, firstRanks_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
      DARABONBA_PTR_FROM_JSON(queryProcessors, queryProcessors_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(realtimeShared, realtimeShared_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(secondRanks, secondRanks_);
      DARABONBA_PTR_FROM_JSON(summaries, summaries_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    App() = default ;
    App(const App &) = default ;
    App(App &&) = default ;
    App(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~App() = default ;
    App& operator=(const App &) = default ;
    App& operator=(App &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSwitch_ == nullptr
        && return this->cluster_ == nullptr && return this->dataSources_ == nullptr && return this->description_ == nullptr && return this->domain_ == nullptr && return this->fetchFields_ == nullptr
        && return this->firstRanks_ == nullptr && return this->networkType_ == nullptr && return this->queryProcessors_ == nullptr && return this->quota_ == nullptr && return this->realtimeShared_ == nullptr
        && return this->schema_ == nullptr && return this->schemas_ == nullptr && return this->secondRanks_ == nullptr && return this->summaries_ == nullptr && return this->type_ == nullptr; };
    // autoSwitch Field Functions 
    bool hasAutoSwitch() const { return this->autoSwitch_ != nullptr;};
    void deleteAutoSwitch() { this->autoSwitch_ = nullptr;};
    inline bool autoSwitch() const { DARABONBA_PTR_GET_DEFAULT(autoSwitch_, false) };
    inline App& setAutoSwitch(bool autoSwitch) { DARABONBA_PTR_SET_VALUE(autoSwitch_, autoSwitch) };


    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const AppCluster & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, AppCluster) };
    inline AppCluster cluster() { DARABONBA_PTR_GET(cluster_, AppCluster) };
    inline App& setCluster(const AppCluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline App& setCluster(AppCluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<DataSource> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<DataSource>) };
    inline vector<DataSource> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<DataSource>) };
    inline App& setDataSources(const vector<DataSource> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline App& setDataSources(vector<DataSource> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline App& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const Domain & domain() const { DARABONBA_PTR_GET_CONST(domain_, Domain) };
    inline Domain domain() { DARABONBA_PTR_GET(domain_, Domain) };
    inline App& setDomain(const Domain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline App& setDomain(Domain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // fetchFields Field Functions 
    bool hasFetchFields() const { return this->fetchFields_ != nullptr;};
    void deleteFetchFields() { this->fetchFields_ = nullptr;};
    inline const vector<string> & fetchFields() const { DARABONBA_PTR_GET_CONST(fetchFields_, vector<string>) };
    inline vector<string> fetchFields() { DARABONBA_PTR_GET(fetchFields_, vector<string>) };
    inline App& setFetchFields(const vector<string> & fetchFields) { DARABONBA_PTR_SET_VALUE(fetchFields_, fetchFields) };
    inline App& setFetchFields(vector<string> && fetchFields) { DARABONBA_PTR_SET_RVALUE(fetchFields_, fetchFields) };


    // firstRanks Field Functions 
    bool hasFirstRanks() const { return this->firstRanks_ != nullptr;};
    void deleteFirstRanks() { this->firstRanks_ = nullptr;};
    inline const vector<FirstRank> & firstRanks() const { DARABONBA_PTR_GET_CONST(firstRanks_, vector<FirstRank>) };
    inline vector<FirstRank> firstRanks() { DARABONBA_PTR_GET(firstRanks_, vector<FirstRank>) };
    inline App& setFirstRanks(const vector<FirstRank> & firstRanks) { DARABONBA_PTR_SET_VALUE(firstRanks_, firstRanks) };
    inline App& setFirstRanks(vector<FirstRank> && firstRanks) { DARABONBA_PTR_SET_RVALUE(firstRanks_, firstRanks) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline App& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // queryProcessors Field Functions 
    bool hasQueryProcessors() const { return this->queryProcessors_ != nullptr;};
    void deleteQueryProcessors() { this->queryProcessors_ = nullptr;};
    inline const vector<QueryProcessor> & queryProcessors() const { DARABONBA_PTR_GET_CONST(queryProcessors_, vector<QueryProcessor>) };
    inline vector<QueryProcessor> queryProcessors() { DARABONBA_PTR_GET(queryProcessors_, vector<QueryProcessor>) };
    inline App& setQueryProcessors(const vector<QueryProcessor> & queryProcessors) { DARABONBA_PTR_SET_VALUE(queryProcessors_, queryProcessors) };
    inline App& setQueryProcessors(vector<QueryProcessor> && queryProcessors) { DARABONBA_PTR_SET_RVALUE(queryProcessors_, queryProcessors) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Quota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Quota) };
    inline Quota quota() { DARABONBA_PTR_GET(quota_, Quota) };
    inline App& setQuota(const Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline App& setQuota(Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // realtimeShared Field Functions 
    bool hasRealtimeShared() const { return this->realtimeShared_ != nullptr;};
    void deleteRealtimeShared() { this->realtimeShared_ = nullptr;};
    inline bool realtimeShared() const { DARABONBA_PTR_GET_DEFAULT(realtimeShared_, false) };
    inline App& setRealtimeShared(bool realtimeShared) { DARABONBA_PTR_SET_VALUE(realtimeShared_, realtimeShared) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Schema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Schema) };
    inline Schema schema() { DARABONBA_PTR_GET(schema_, Schema) };
    inline App& setSchema(const Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline App& setSchema(Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<Schema> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<Schema>) };
    inline vector<Schema> schemas() { DARABONBA_PTR_GET(schemas_, vector<Schema>) };
    inline App& setSchemas(const vector<Schema> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline App& setSchemas(vector<Schema> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // secondRanks Field Functions 
    bool hasSecondRanks() const { return this->secondRanks_ != nullptr;};
    void deleteSecondRanks() { this->secondRanks_ = nullptr;};
    inline const vector<SecondRank> & secondRanks() const { DARABONBA_PTR_GET_CONST(secondRanks_, vector<SecondRank>) };
    inline vector<SecondRank> secondRanks() { DARABONBA_PTR_GET(secondRanks_, vector<SecondRank>) };
    inline App& setSecondRanks(const vector<SecondRank> & secondRanks) { DARABONBA_PTR_SET_VALUE(secondRanks_, secondRanks) };
    inline App& setSecondRanks(vector<SecondRank> && secondRanks) { DARABONBA_PTR_SET_RVALUE(secondRanks_, secondRanks) };


    // summaries Field Functions 
    bool hasSummaries() const { return this->summaries_ != nullptr;};
    void deleteSummaries() { this->summaries_ = nullptr;};
    inline const vector<Summary> & summaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Summary>) };
    inline vector<Summary> summaries() { DARABONBA_PTR_GET(summaries_, vector<Summary>) };
    inline App& setSummaries(const vector<Summary> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
    inline App& setSummaries(vector<Summary> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline App& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> autoSwitch_ = nullptr;
    std::shared_ptr<AppCluster> cluster_ = nullptr;
    std::shared_ptr<vector<DataSource>> dataSources_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Domain> domain_ = nullptr;
    std::shared_ptr<vector<string>> fetchFields_ = nullptr;
    std::shared_ptr<vector<FirstRank>> firstRanks_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<vector<QueryProcessor>> queryProcessors_ = nullptr;
    std::shared_ptr<Quota> quota_ = nullptr;
    std::shared_ptr<bool> realtimeShared_ = nullptr;
    std::shared_ptr<Schema> schema_ = nullptr;
    std::shared_ptr<vector<Schema>> schemas_ = nullptr;
    std::shared_ptr<vector<SecondRank>> secondRanks_ = nullptr;
    std::shared_ptr<vector<Summary>> summaries_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
