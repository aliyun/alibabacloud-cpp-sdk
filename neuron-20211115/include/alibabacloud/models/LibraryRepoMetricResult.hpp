// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYREPOMETRICRESULT_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYREPOMETRICRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RepoMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibraryRepoMetricResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibraryRepoMetricResult& obj) { 
      DARABONBA_PTR_TO_JSON(repoMetrics, repoMetrics_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LibraryRepoMetricResult& obj) { 
      DARABONBA_PTR_FROM_JSON(repoMetrics, repoMetrics_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    LibraryRepoMetricResult() = default ;
    LibraryRepoMetricResult(const LibraryRepoMetricResult &) = default ;
    LibraryRepoMetricResult(LibraryRepoMetricResult &&) = default ;
    LibraryRepoMetricResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibraryRepoMetricResult() = default ;
    LibraryRepoMetricResult& operator=(const LibraryRepoMetricResult &) = default ;
    LibraryRepoMetricResult& operator=(LibraryRepoMetricResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->repoMetrics_ == nullptr
        && this->requestId_ == nullptr; };
    // repoMetrics Field Functions 
    bool hasRepoMetrics() const { return this->repoMetrics_ != nullptr;};
    void deleteRepoMetrics() { this->repoMetrics_ = nullptr;};
    inline const vector<RepoMetric> & getRepoMetrics() const { DARABONBA_PTR_GET_CONST(repoMetrics_, vector<RepoMetric>) };
    inline vector<RepoMetric> getRepoMetrics() { DARABONBA_PTR_GET(repoMetrics_, vector<RepoMetric>) };
    inline LibraryRepoMetricResult& setRepoMetrics(const vector<RepoMetric> & repoMetrics) { DARABONBA_PTR_SET_VALUE(repoMetrics_, repoMetrics) };
    inline LibraryRepoMetricResult& setRepoMetrics(vector<RepoMetric> && repoMetrics) { DARABONBA_PTR_SET_RVALUE(repoMetrics_, repoMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LibraryRepoMetricResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<RepoMetric>> repoMetrics_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
