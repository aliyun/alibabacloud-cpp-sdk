// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERANKRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RERANKRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RerankResponseBodyResultsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class RerankResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerankResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, RerankResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    RerankResponseBodyResults() = default ;
    RerankResponseBodyResults(const RerankResponseBodyResults &) = default ;
    RerankResponseBodyResults(RerankResponseBodyResults &&) = default ;
    RerankResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerankResponseBodyResults() = default ;
    RerankResponseBodyResults& operator=(const RerankResponseBodyResults &) = default ;
    RerankResponseBodyResults& operator=(RerankResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->results_ != nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::RerankResponseBodyResultsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::RerankResponseBodyResultsResults>) };
    inline vector<Models::RerankResponseBodyResultsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::RerankResponseBodyResultsResults>) };
    inline RerankResponseBodyResults& setResults(const vector<Models::RerankResponseBodyResultsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RerankResponseBodyResults& setResults(vector<Models::RerankResponseBodyResultsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<vector<Models::RerankResponseBodyResultsResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
