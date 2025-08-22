// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERVIEWMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERVIEWMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UserViewMetric.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetUserViewMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserViewMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(UserMetrics, userMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserViewMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(UserMetrics, userMetrics_);
    };
    GetUserViewMetricsResponseBody() = default ;
    GetUserViewMetricsResponseBody(const GetUserViewMetricsResponseBody &) = default ;
    GetUserViewMetricsResponseBody(GetUserViewMetricsResponseBody &&) = default ;
    GetUserViewMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserViewMetricsResponseBody() = default ;
    GetUserViewMetricsResponseBody& operator=(const GetUserViewMetricsResponseBody &) = default ;
    GetUserViewMetricsResponseBody& operator=(GetUserViewMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupId_ != nullptr
        && this->summary_ != nullptr && this->total_ != nullptr && this->userMetrics_ != nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetUserViewMetricsResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const UserViewMetric & summary() const { DARABONBA_PTR_GET_CONST(summary_, UserViewMetric) };
    inline UserViewMetric summary() { DARABONBA_PTR_GET(summary_, UserViewMetric) };
    inline GetUserViewMetricsResponseBody& setSummary(const UserViewMetric & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline GetUserViewMetricsResponseBody& setSummary(UserViewMetric && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetUserViewMetricsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // userMetrics Field Functions 
    bool hasUserMetrics() const { return this->userMetrics_ != nullptr;};
    void deleteUserMetrics() { this->userMetrics_ = nullptr;};
    inline const vector<UserViewMetric> & userMetrics() const { DARABONBA_PTR_GET_CONST(userMetrics_, vector<UserViewMetric>) };
    inline vector<UserViewMetric> userMetrics() { DARABONBA_PTR_GET(userMetrics_, vector<UserViewMetric>) };
    inline GetUserViewMetricsResponseBody& setUserMetrics(const vector<UserViewMetric> & userMetrics) { DARABONBA_PTR_SET_VALUE(userMetrics_, userMetrics) };
    inline GetUserViewMetricsResponseBody& setUserMetrics(vector<UserViewMetric> && userMetrics) { DARABONBA_PTR_SET_RVALUE(userMetrics_, userMetrics) };


  protected:
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<UserViewMetric> summary_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<vector<UserViewMetric>> userMetrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
