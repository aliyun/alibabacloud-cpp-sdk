// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APP_HPP_
#define ALIBABACLOUD_MODELS_APP_HPP_
#include <darabonba/Core.hpp>
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
    class Cluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
        DARABONBA_PTR_TO_JSON(maxQueryClauseLength, maxQueryClauseLength_);
        DARABONBA_PTR_TO_JSON(maxTimeoutMS, maxTimeoutMS_);
      };
      friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
        DARABONBA_PTR_FROM_JSON(maxQueryClauseLength, maxQueryClauseLength_);
        DARABONBA_PTR_FROM_JSON(maxTimeoutMS, maxTimeoutMS_);
      };
      Cluster() = default ;
      Cluster(const Cluster &) = default ;
      Cluster(Cluster &&) = default ;
      Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cluster() = default ;
      Cluster& operator=(const Cluster &) = default ;
      Cluster& operator=(Cluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxQueryClauseLength_ == nullptr
        && this->maxTimeoutMS_ == nullptr; };
      // maxQueryClauseLength Field Functions 
      bool hasMaxQueryClauseLength() const { return this->maxQueryClauseLength_ != nullptr;};
      void deleteMaxQueryClauseLength() { this->maxQueryClauseLength_ = nullptr;};
      inline int32_t getMaxQueryClauseLength() const { DARABONBA_PTR_GET_DEFAULT(maxQueryClauseLength_, 0) };
      inline Cluster& setMaxQueryClauseLength(int32_t maxQueryClauseLength) { DARABONBA_PTR_SET_VALUE(maxQueryClauseLength_, maxQueryClauseLength) };


      // maxTimeoutMS Field Functions 
      bool hasMaxTimeoutMS() const { return this->maxTimeoutMS_ != nullptr;};
      void deleteMaxTimeoutMS() { this->maxTimeoutMS_ = nullptr;};
      inline int32_t getMaxTimeoutMS() const { DARABONBA_PTR_GET_DEFAULT(maxTimeoutMS_, 0) };
      inline Cluster& setMaxTimeoutMS(int32_t maxTimeoutMS) { DARABONBA_PTR_SET_VALUE(maxTimeoutMS_, maxTimeoutMS) };


    protected:
      shared_ptr<int32_t> maxQueryClauseLength_ {};
      shared_ptr<int32_t> maxTimeoutMS_ {};
    };

    virtual bool empty() const override { return this->autoSwitch_ == nullptr
        && this->cluster_ == nullptr && this->dataSources_ == nullptr && this->description_ == nullptr && this->domain_ == nullptr && this->fetchFields_ == nullptr
        && this->firstRanks_ == nullptr && this->networkType_ == nullptr && this->queryProcessors_ == nullptr && this->quota_ == nullptr && this->realtimeShared_ == nullptr
        && this->schema_ == nullptr && this->schemas_ == nullptr && this->secondRanks_ == nullptr && this->summaries_ == nullptr && this->type_ == nullptr; };
    // autoSwitch Field Functions 
    bool hasAutoSwitch() const { return this->autoSwitch_ != nullptr;};
    void deleteAutoSwitch() { this->autoSwitch_ = nullptr;};
    inline bool getAutoSwitch() const { DARABONBA_PTR_GET_DEFAULT(autoSwitch_, false) };
    inline App& setAutoSwitch(bool autoSwitch) { DARABONBA_PTR_SET_VALUE(autoSwitch_, autoSwitch) };


    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const App::Cluster & getCluster() const { DARABONBA_PTR_GET_CONST(cluster_, App::Cluster) };
    inline App::Cluster getCluster() { DARABONBA_PTR_GET(cluster_, App::Cluster) };
    inline App& setCluster(const App::Cluster & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline App& setCluster(App::Cluster && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<DataSource> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<DataSource>) };
    inline vector<DataSource> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<DataSource>) };
    inline App& setDataSources(const vector<DataSource> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline App& setDataSources(vector<DataSource> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline App& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const Domain & getDomain() const { DARABONBA_PTR_GET_CONST(domain_, Domain) };
    inline Domain getDomain() { DARABONBA_PTR_GET(domain_, Domain) };
    inline App& setDomain(const Domain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline App& setDomain(Domain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // fetchFields Field Functions 
    bool hasFetchFields() const { return this->fetchFields_ != nullptr;};
    void deleteFetchFields() { this->fetchFields_ = nullptr;};
    inline const vector<string> & getFetchFields() const { DARABONBA_PTR_GET_CONST(fetchFields_, vector<string>) };
    inline vector<string> getFetchFields() { DARABONBA_PTR_GET(fetchFields_, vector<string>) };
    inline App& setFetchFields(const vector<string> & fetchFields) { DARABONBA_PTR_SET_VALUE(fetchFields_, fetchFields) };
    inline App& setFetchFields(vector<string> && fetchFields) { DARABONBA_PTR_SET_RVALUE(fetchFields_, fetchFields) };


    // firstRanks Field Functions 
    bool hasFirstRanks() const { return this->firstRanks_ != nullptr;};
    void deleteFirstRanks() { this->firstRanks_ = nullptr;};
    inline const vector<FirstRank> & getFirstRanks() const { DARABONBA_PTR_GET_CONST(firstRanks_, vector<FirstRank>) };
    inline vector<FirstRank> getFirstRanks() { DARABONBA_PTR_GET(firstRanks_, vector<FirstRank>) };
    inline App& setFirstRanks(const vector<FirstRank> & firstRanks) { DARABONBA_PTR_SET_VALUE(firstRanks_, firstRanks) };
    inline App& setFirstRanks(vector<FirstRank> && firstRanks) { DARABONBA_PTR_SET_RVALUE(firstRanks_, firstRanks) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline App& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // queryProcessors Field Functions 
    bool hasQueryProcessors() const { return this->queryProcessors_ != nullptr;};
    void deleteQueryProcessors() { this->queryProcessors_ = nullptr;};
    inline const vector<QueryProcessor> & getQueryProcessors() const { DARABONBA_PTR_GET_CONST(queryProcessors_, vector<QueryProcessor>) };
    inline vector<QueryProcessor> getQueryProcessors() { DARABONBA_PTR_GET(queryProcessors_, vector<QueryProcessor>) };
    inline App& setQueryProcessors(const vector<QueryProcessor> & queryProcessors) { DARABONBA_PTR_SET_VALUE(queryProcessors_, queryProcessors) };
    inline App& setQueryProcessors(vector<QueryProcessor> && queryProcessors) { DARABONBA_PTR_SET_RVALUE(queryProcessors_, queryProcessors) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Quota) };
    inline Quota getQuota() { DARABONBA_PTR_GET(quota_, Quota) };
    inline App& setQuota(const Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline App& setQuota(Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // realtimeShared Field Functions 
    bool hasRealtimeShared() const { return this->realtimeShared_ != nullptr;};
    void deleteRealtimeShared() { this->realtimeShared_ = nullptr;};
    inline bool getRealtimeShared() const { DARABONBA_PTR_GET_DEFAULT(realtimeShared_, false) };
    inline App& setRealtimeShared(bool realtimeShared) { DARABONBA_PTR_SET_VALUE(realtimeShared_, realtimeShared) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Schema & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, Schema) };
    inline Schema getSchema() { DARABONBA_PTR_GET(schema_, Schema) };
    inline App& setSchema(const Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline App& setSchema(Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<Schema> & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<Schema>) };
    inline vector<Schema> getSchemas() { DARABONBA_PTR_GET(schemas_, vector<Schema>) };
    inline App& setSchemas(const vector<Schema> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline App& setSchemas(vector<Schema> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // secondRanks Field Functions 
    bool hasSecondRanks() const { return this->secondRanks_ != nullptr;};
    void deleteSecondRanks() { this->secondRanks_ = nullptr;};
    inline const vector<SecondRank> & getSecondRanks() const { DARABONBA_PTR_GET_CONST(secondRanks_, vector<SecondRank>) };
    inline vector<SecondRank> getSecondRanks() { DARABONBA_PTR_GET(secondRanks_, vector<SecondRank>) };
    inline App& setSecondRanks(const vector<SecondRank> & secondRanks) { DARABONBA_PTR_SET_VALUE(secondRanks_, secondRanks) };
    inline App& setSecondRanks(vector<SecondRank> && secondRanks) { DARABONBA_PTR_SET_RVALUE(secondRanks_, secondRanks) };


    // summaries Field Functions 
    bool hasSummaries() const { return this->summaries_ != nullptr;};
    void deleteSummaries() { this->summaries_ = nullptr;};
    inline const vector<Summary> & getSummaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Summary>) };
    inline vector<Summary> getSummaries() { DARABONBA_PTR_GET(summaries_, vector<Summary>) };
    inline App& setSummaries(const vector<Summary> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
    inline App& setSummaries(vector<Summary> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline App& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> autoSwitch_ {};
    shared_ptr<App::Cluster> cluster_ {};
    shared_ptr<vector<DataSource>> dataSources_ {};
    shared_ptr<string> description_ {};
    shared_ptr<Domain> domain_ {};
    shared_ptr<vector<string>> fetchFields_ {};
    shared_ptr<vector<FirstRank>> firstRanks_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<vector<QueryProcessor>> queryProcessors_ {};
    shared_ptr<Quota> quota_ {};
    shared_ptr<bool> realtimeShared_ {};
    shared_ptr<Schema> schema_ {};
    shared_ptr<vector<Schema>> schemas_ {};
    shared_ptr<vector<SecondRank>> secondRanks_ {};
    shared_ptr<vector<Summary>> summaries_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
