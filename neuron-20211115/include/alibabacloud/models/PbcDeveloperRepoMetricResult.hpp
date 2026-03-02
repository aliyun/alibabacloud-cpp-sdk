// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCDEVELOPERREPOMETRICRESULT_HPP_
#define ALIBABACLOUD_MODELS_PBCDEVELOPERREPOMETRICRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReposDeveloperGroupMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcDeveloperRepoMetricResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcDeveloperRepoMetricResult& obj) { 
      DARABONBA_PTR_TO_JSON(developerRepoMetrics, developerRepoMetrics_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcDeveloperRepoMetricResult& obj) { 
      DARABONBA_PTR_FROM_JSON(developerRepoMetrics, developerRepoMetrics_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PbcDeveloperRepoMetricResult() = default ;
    PbcDeveloperRepoMetricResult(const PbcDeveloperRepoMetricResult &) = default ;
    PbcDeveloperRepoMetricResult(PbcDeveloperRepoMetricResult &&) = default ;
    PbcDeveloperRepoMetricResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcDeveloperRepoMetricResult() = default ;
    PbcDeveloperRepoMetricResult& operator=(const PbcDeveloperRepoMetricResult &) = default ;
    PbcDeveloperRepoMetricResult& operator=(PbcDeveloperRepoMetricResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->developerRepoMetrics_ == nullptr
        && this->requestId_ == nullptr; };
    // developerRepoMetrics Field Functions 
    bool hasDeveloperRepoMetrics() const { return this->developerRepoMetrics_ != nullptr;};
    void deleteDeveloperRepoMetrics() { this->developerRepoMetrics_ = nullptr;};
    inline const vector<ReposDeveloperGroupMetric> & getDeveloperRepoMetrics() const { DARABONBA_PTR_GET_CONST(developerRepoMetrics_, vector<ReposDeveloperGroupMetric>) };
    inline vector<ReposDeveloperGroupMetric> getDeveloperRepoMetrics() { DARABONBA_PTR_GET(developerRepoMetrics_, vector<ReposDeveloperGroupMetric>) };
    inline PbcDeveloperRepoMetricResult& setDeveloperRepoMetrics(const vector<ReposDeveloperGroupMetric> & developerRepoMetrics) { DARABONBA_PTR_SET_VALUE(developerRepoMetrics_, developerRepoMetrics) };
    inline PbcDeveloperRepoMetricResult& setDeveloperRepoMetrics(vector<ReposDeveloperGroupMetric> && developerRepoMetrics) { DARABONBA_PTR_SET_RVALUE(developerRepoMetrics_, developerRepoMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcDeveloperRepoMetricResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ReposDeveloperGroupMetric>> developerRepoMetrics_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
