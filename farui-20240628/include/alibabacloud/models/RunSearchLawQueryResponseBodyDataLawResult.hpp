// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYRESPONSEBODYDATALAWRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHLAWQUERYRESPONSEBODYDATALAWRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchLawQueryResponseBodyDataLawResultLawDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchLawQueryResponseBodyDataLawResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchLawQueryResponseBodyDataLawResult& obj) { 
      DARABONBA_PTR_TO_JSON(lawDomain, lawDomain_);
      DARABONBA_PTR_TO_JSON(similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchLawQueryResponseBodyDataLawResult& obj) { 
      DARABONBA_PTR_FROM_JSON(lawDomain, lawDomain_);
      DARABONBA_PTR_FROM_JSON(similarity, similarity_);
    };
    RunSearchLawQueryResponseBodyDataLawResult() = default ;
    RunSearchLawQueryResponseBodyDataLawResult(const RunSearchLawQueryResponseBodyDataLawResult &) = default ;
    RunSearchLawQueryResponseBodyDataLawResult(RunSearchLawQueryResponseBodyDataLawResult &&) = default ;
    RunSearchLawQueryResponseBodyDataLawResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchLawQueryResponseBodyDataLawResult() = default ;
    RunSearchLawQueryResponseBodyDataLawResult& operator=(const RunSearchLawQueryResponseBodyDataLawResult &) = default ;
    RunSearchLawQueryResponseBodyDataLawResult& operator=(RunSearchLawQueryResponseBodyDataLawResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lawDomain_ == nullptr
        && return this->similarity_ == nullptr; };
    // lawDomain Field Functions 
    bool hasLawDomain() const { return this->lawDomain_ != nullptr;};
    void deleteLawDomain() { this->lawDomain_ = nullptr;};
    inline const Models::RunSearchLawQueryResponseBodyDataLawResultLawDomain & lawDomain() const { DARABONBA_PTR_GET_CONST(lawDomain_, Models::RunSearchLawQueryResponseBodyDataLawResultLawDomain) };
    inline Models::RunSearchLawQueryResponseBodyDataLawResultLawDomain lawDomain() { DARABONBA_PTR_GET(lawDomain_, Models::RunSearchLawQueryResponseBodyDataLawResultLawDomain) };
    inline RunSearchLawQueryResponseBodyDataLawResult& setLawDomain(const Models::RunSearchLawQueryResponseBodyDataLawResultLawDomain & lawDomain) { DARABONBA_PTR_SET_VALUE(lawDomain_, lawDomain) };
    inline RunSearchLawQueryResponseBodyDataLawResult& setLawDomain(Models::RunSearchLawQueryResponseBodyDataLawResultLawDomain && lawDomain) { DARABONBA_PTR_SET_RVALUE(lawDomain_, lawDomain) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline string similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
    inline RunSearchLawQueryResponseBodyDataLawResult& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    std::shared_ptr<Models::RunSearchLawQueryResponseBodyDataLawResultLawDomain> lawDomain_ = nullptr;
    std::shared_ptr<string> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
