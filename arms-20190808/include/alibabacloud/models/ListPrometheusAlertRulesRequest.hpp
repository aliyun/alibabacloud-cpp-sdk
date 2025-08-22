// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusAlertRulesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusAlertRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusAlertRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListPrometheusAlertRulesRequest() = default ;
    ListPrometheusAlertRulesRequest(const ListPrometheusAlertRulesRequest &) = default ;
    ListPrometheusAlertRulesRequest(ListPrometheusAlertRulesRequest &&) = default ;
    ListPrometheusAlertRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusAlertRulesRequest() = default ;
    ListPrometheusAlertRulesRequest& operator=(const ListPrometheusAlertRulesRequest &) = default ;
    ListPrometheusAlertRulesRequest& operator=(ListPrometheusAlertRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->matchExpressions_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->type_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPrometheusAlertRulesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // matchExpressions Field Functions 
    bool hasMatchExpressions() const { return this->matchExpressions_ != nullptr;};
    void deleteMatchExpressions() { this->matchExpressions_ = nullptr;};
    inline string matchExpressions() const { DARABONBA_PTR_GET_DEFAULT(matchExpressions_, "") };
    inline ListPrometheusAlertRulesRequest& setMatchExpressions(string matchExpressions) { DARABONBA_PTR_SET_VALUE(matchExpressions_, matchExpressions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrometheusAlertRulesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusAlertRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListPrometheusAlertRulesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListPrometheusAlertRulesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListPrometheusAlertRulesRequestTags>) };
    inline vector<ListPrometheusAlertRulesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListPrometheusAlertRulesRequestTags>) };
    inline ListPrometheusAlertRulesRequest& setTags(const vector<ListPrometheusAlertRulesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrometheusAlertRulesRequest& setTags(vector<ListPrometheusAlertRulesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPrometheusAlertRulesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The tag match conditions that are described in a JSON string. For more information about this parameter, see the **Additional description of the MatchExpressions parameter** section.
    std::shared_ptr<string> matchExpressions_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether the alert rule is enabled. Valid values:
    // 
    // - 1: enables the alert rule.
    // - 0: disables the alert rule.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListPrometheusAlertRulesRequestTags>> tags_ = nullptr;
    // The type of the alert rule.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
