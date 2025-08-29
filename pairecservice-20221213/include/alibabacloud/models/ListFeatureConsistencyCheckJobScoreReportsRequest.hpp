// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobScoreReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobScoreReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeRequestIds, excludeRequestIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobScoreReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeRequestIds, excludeRequestIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListFeatureConsistencyCheckJobScoreReportsRequest() = default ;
    ListFeatureConsistencyCheckJobScoreReportsRequest(const ListFeatureConsistencyCheckJobScoreReportsRequest &) = default ;
    ListFeatureConsistencyCheckJobScoreReportsRequest(ListFeatureConsistencyCheckJobScoreReportsRequest &&) = default ;
    ListFeatureConsistencyCheckJobScoreReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobScoreReportsRequest() = default ;
    ListFeatureConsistencyCheckJobScoreReportsRequest& operator=(const ListFeatureConsistencyCheckJobScoreReportsRequest &) = default ;
    ListFeatureConsistencyCheckJobScoreReportsRequest& operator=(ListFeatureConsistencyCheckJobScoreReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludeRequestIds_ != nullptr
        && this->instanceId_ != nullptr; };
    // excludeRequestIds Field Functions 
    bool hasExcludeRequestIds() const { return this->excludeRequestIds_ != nullptr;};
    void deleteExcludeRequestIds() { this->excludeRequestIds_ = nullptr;};
    inline const vector<string> & excludeRequestIds() const { DARABONBA_PTR_GET_CONST(excludeRequestIds_, vector<string>) };
    inline vector<string> excludeRequestIds() { DARABONBA_PTR_GET(excludeRequestIds_, vector<string>) };
    inline ListFeatureConsistencyCheckJobScoreReportsRequest& setExcludeRequestIds(const vector<string> & excludeRequestIds) { DARABONBA_PTR_SET_VALUE(excludeRequestIds_, excludeRequestIds) };
    inline ListFeatureConsistencyCheckJobScoreReportsRequest& setExcludeRequestIds(vector<string> && excludeRequestIds) { DARABONBA_PTR_SET_RVALUE(excludeRequestIds_, excludeRequestIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<vector<string>> excludeRequestIds_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
