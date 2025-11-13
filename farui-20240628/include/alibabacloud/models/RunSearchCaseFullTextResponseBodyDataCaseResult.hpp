// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTRESPONSEBODYDATACASERESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTRESPONSEBODYDATACASERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchCaseFullTextResponseBodyDataCaseResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchCaseFullTextResponseBodyDataCaseResult& obj) { 
      DARABONBA_PTR_TO_JSON(caseDomain, caseDomain_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchCaseFullTextResponseBodyDataCaseResult& obj) { 
      DARABONBA_PTR_FROM_JSON(caseDomain, caseDomain_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(similarity, similarity_);
    };
    RunSearchCaseFullTextResponseBodyDataCaseResult() = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResult(const RunSearchCaseFullTextResponseBodyDataCaseResult &) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResult(RunSearchCaseFullTextResponseBodyDataCaseResult &&) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchCaseFullTextResponseBodyDataCaseResult() = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResult& operator=(const RunSearchCaseFullTextResponseBodyDataCaseResult &) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResult& operator=(RunSearchCaseFullTextResponseBodyDataCaseResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caseDomain_ == nullptr
        && return this->mode_ == nullptr && return this->similarity_ == nullptr; };
    // caseDomain Field Functions 
    bool hasCaseDomain() const { return this->caseDomain_ != nullptr;};
    void deleteCaseDomain() { this->caseDomain_ = nullptr;};
    inline const Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain & caseDomain() const { DARABONBA_PTR_GET_CONST(caseDomain_, Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain) };
    inline Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain caseDomain() { DARABONBA_PTR_GET(caseDomain_, Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain) };
    inline RunSearchCaseFullTextResponseBodyDataCaseResult& setCaseDomain(const Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain & caseDomain) { DARABONBA_PTR_SET_VALUE(caseDomain_, caseDomain) };
    inline RunSearchCaseFullTextResponseBodyDataCaseResult& setCaseDomain(Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain && caseDomain) { DARABONBA_PTR_SET_RVALUE(caseDomain_, caseDomain) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResult& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline string similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResult& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    std::shared_ptr<Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain> caseDomain_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
