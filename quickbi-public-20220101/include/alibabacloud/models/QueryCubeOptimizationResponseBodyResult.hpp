// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUBEOPTIMIZATIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUBEOPTIMIZATIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryCubeOptimizationResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCubeOptimizationResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AdviceType, adviceType_);
      DARABONBA_PTR_TO_JSON(CubePerformanceDiagnoseModel, cubePerformanceDiagnoseModel_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCubeOptimizationResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AdviceType, adviceType_);
      DARABONBA_PTR_FROM_JSON(CubePerformanceDiagnoseModel, cubePerformanceDiagnoseModel_);
    };
    QueryCubeOptimizationResponseBodyResult() = default ;
    QueryCubeOptimizationResponseBodyResult(const QueryCubeOptimizationResponseBodyResult &) = default ;
    QueryCubeOptimizationResponseBodyResult(QueryCubeOptimizationResponseBodyResult &&) = default ;
    QueryCubeOptimizationResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCubeOptimizationResponseBodyResult() = default ;
    QueryCubeOptimizationResponseBodyResult& operator=(const QueryCubeOptimizationResponseBodyResult &) = default ;
    QueryCubeOptimizationResponseBodyResult& operator=(QueryCubeOptimizationResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adviceType_ != nullptr
        && this->cubePerformanceDiagnoseModel_ != nullptr; };
    // adviceType Field Functions 
    bool hasAdviceType() const { return this->adviceType_ != nullptr;};
    void deleteAdviceType() { this->adviceType_ = nullptr;};
    inline string adviceType() const { DARABONBA_PTR_GET_DEFAULT(adviceType_, "") };
    inline QueryCubeOptimizationResponseBodyResult& setAdviceType(string adviceType) { DARABONBA_PTR_SET_VALUE(adviceType_, adviceType) };


    // cubePerformanceDiagnoseModel Field Functions 
    bool hasCubePerformanceDiagnoseModel() const { return this->cubePerformanceDiagnoseModel_ != nullptr;};
    void deleteCubePerformanceDiagnoseModel() { this->cubePerformanceDiagnoseModel_ = nullptr;};
    inline const Models::QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel & cubePerformanceDiagnoseModel() const { DARABONBA_PTR_GET_CONST(cubePerformanceDiagnoseModel_, Models::QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel) };
    inline Models::QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel cubePerformanceDiagnoseModel() { DARABONBA_PTR_GET(cubePerformanceDiagnoseModel_, Models::QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel) };
    inline QueryCubeOptimizationResponseBodyResult& setCubePerformanceDiagnoseModel(const Models::QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel & cubePerformanceDiagnoseModel) { DARABONBA_PTR_SET_VALUE(cubePerformanceDiagnoseModel_, cubePerformanceDiagnoseModel) };
    inline QueryCubeOptimizationResponseBodyResult& setCubePerformanceDiagnoseModel(Models::QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel && cubePerformanceDiagnoseModel) { DARABONBA_PTR_SET_RVALUE(cubePerformanceDiagnoseModel_, cubePerformanceDiagnoseModel) };


  protected:
    // The type of the suggestion. Valid values:
    // 
    // *   **OPEN_CACHE**: Open cache.
    // *   **OPEN_QUICK_ENGINE**: Open FAST Cache.
    // *   **INCREASE_CACHE_TIME**: Increase the cache time.
    std::shared_ptr<string> adviceType_ = nullptr;
    // The diagnostic information about the dataset.
    std::shared_ptr<Models::QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel> cubePerformanceDiagnoseModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
