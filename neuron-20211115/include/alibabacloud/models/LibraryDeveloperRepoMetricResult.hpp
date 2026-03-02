// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYDEVELOPERREPOMETRICRESULT_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYDEVELOPERREPOMETRICRESULT_HPP_
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
  class LibraryDeveloperRepoMetricResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibraryDeveloperRepoMetricResult& obj) { 
      DARABONBA_PTR_TO_JSON(developerRepoMetrics, developerRepoMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, LibraryDeveloperRepoMetricResult& obj) { 
      DARABONBA_PTR_FROM_JSON(developerRepoMetrics, developerRepoMetrics_);
    };
    LibraryDeveloperRepoMetricResult() = default ;
    LibraryDeveloperRepoMetricResult(const LibraryDeveloperRepoMetricResult &) = default ;
    LibraryDeveloperRepoMetricResult(LibraryDeveloperRepoMetricResult &&) = default ;
    LibraryDeveloperRepoMetricResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibraryDeveloperRepoMetricResult() = default ;
    LibraryDeveloperRepoMetricResult& operator=(const LibraryDeveloperRepoMetricResult &) = default ;
    LibraryDeveloperRepoMetricResult& operator=(LibraryDeveloperRepoMetricResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->developerRepoMetrics_ == nullptr; };
    // developerRepoMetrics Field Functions 
    bool hasDeveloperRepoMetrics() const { return this->developerRepoMetrics_ != nullptr;};
    void deleteDeveloperRepoMetrics() { this->developerRepoMetrics_ = nullptr;};
    inline const vector<ReposDeveloperGroupMetric> & getDeveloperRepoMetrics() const { DARABONBA_PTR_GET_CONST(developerRepoMetrics_, vector<ReposDeveloperGroupMetric>) };
    inline vector<ReposDeveloperGroupMetric> getDeveloperRepoMetrics() { DARABONBA_PTR_GET(developerRepoMetrics_, vector<ReposDeveloperGroupMetric>) };
    inline LibraryDeveloperRepoMetricResult& setDeveloperRepoMetrics(const vector<ReposDeveloperGroupMetric> & developerRepoMetrics) { DARABONBA_PTR_SET_VALUE(developerRepoMetrics_, developerRepoMetrics) };
    inline LibraryDeveloperRepoMetricResult& setDeveloperRepoMetrics(vector<ReposDeveloperGroupMetric> && developerRepoMetrics) { DARABONBA_PTR_SET_RVALUE(developerRepoMetrics_, developerRepoMetrics) };


  protected:
    shared_ptr<vector<ReposDeveloperGroupMetric>> developerRepoMetrics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
