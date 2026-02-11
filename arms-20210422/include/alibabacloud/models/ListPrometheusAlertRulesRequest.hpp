// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
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
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
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
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->matchExpressions_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPrometheusAlertRulesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // matchExpressions Field Functions 
    bool hasMatchExpressions() const { return this->matchExpressions_ != nullptr;};
    void deleteMatchExpressions() { this->matchExpressions_ = nullptr;};
    inline string getMatchExpressions() const { DARABONBA_PTR_GET_DEFAULT(matchExpressions_, "") };
    inline ListPrometheusAlertRulesRequest& setMatchExpressions(string matchExpressions) { DARABONBA_PTR_SET_VALUE(matchExpressions_, matchExpressions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrometheusAlertRulesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusAlertRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListPrometheusAlertRulesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPrometheusAlertRulesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> matchExpressions_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
