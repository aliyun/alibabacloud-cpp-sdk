// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTREQUESTFILTERCONDITION_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTREQUESTFILTERCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchCaseFullTextRequestFilterCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchCaseFullTextRequestFilterCondition& obj) { 
      DARABONBA_PTR_TO_JSON(caseNo, caseNo_);
      DARABONBA_PTR_TO_JSON(caseTitle, caseTitle_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchCaseFullTextRequestFilterCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(caseNo, caseNo_);
      DARABONBA_PTR_FROM_JSON(caseTitle, caseTitle_);
    };
    RunSearchCaseFullTextRequestFilterCondition() = default ;
    RunSearchCaseFullTextRequestFilterCondition(const RunSearchCaseFullTextRequestFilterCondition &) = default ;
    RunSearchCaseFullTextRequestFilterCondition(RunSearchCaseFullTextRequestFilterCondition &&) = default ;
    RunSearchCaseFullTextRequestFilterCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchCaseFullTextRequestFilterCondition() = default ;
    RunSearchCaseFullTextRequestFilterCondition& operator=(const RunSearchCaseFullTextRequestFilterCondition &) = default ;
    RunSearchCaseFullTextRequestFilterCondition& operator=(RunSearchCaseFullTextRequestFilterCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caseNo_ == nullptr
        && return this->caseTitle_ == nullptr; };
    // caseNo Field Functions 
    bool hasCaseNo() const { return this->caseNo_ != nullptr;};
    void deleteCaseNo() { this->caseNo_ = nullptr;};
    inline string caseNo() const { DARABONBA_PTR_GET_DEFAULT(caseNo_, "") };
    inline RunSearchCaseFullTextRequestFilterCondition& setCaseNo(string caseNo) { DARABONBA_PTR_SET_VALUE(caseNo_, caseNo) };


    // caseTitle Field Functions 
    bool hasCaseTitle() const { return this->caseTitle_ != nullptr;};
    void deleteCaseTitle() { this->caseTitle_ = nullptr;};
    inline string caseTitle() const { DARABONBA_PTR_GET_DEFAULT(caseTitle_, "") };
    inline RunSearchCaseFullTextRequestFilterCondition& setCaseTitle(string caseTitle) { DARABONBA_PTR_SET_VALUE(caseTitle_, caseTitle) };


  protected:
    std::shared_ptr<string> caseNo_ = nullptr;
    std::shared_ptr<string> caseTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
