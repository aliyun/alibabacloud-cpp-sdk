// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUESTQUERYCRITERIA_HPP_
#define ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUESTQUERYCRITERIA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunLibraryChatGenerationRequestQueryCriteriaAnd.hpp>
#include <alibabacloud/models/RunLibraryChatGenerationRequestQueryCriteriaOr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunLibraryChatGenerationRequestQueryCriteria : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLibraryChatGenerationRequestQueryCriteria& obj) { 
      DARABONBA_PTR_TO_JSON(and, and_);
      DARABONBA_PTR_TO_JSON(or, or_);
    };
    friend void from_json(const Darabonba::Json& j, RunLibraryChatGenerationRequestQueryCriteria& obj) { 
      DARABONBA_PTR_FROM_JSON(and, and_);
      DARABONBA_PTR_FROM_JSON(or, or_);
    };
    RunLibraryChatGenerationRequestQueryCriteria() = default ;
    RunLibraryChatGenerationRequestQueryCriteria(const RunLibraryChatGenerationRequestQueryCriteria &) = default ;
    RunLibraryChatGenerationRequestQueryCriteria(RunLibraryChatGenerationRequestQueryCriteria &&) = default ;
    RunLibraryChatGenerationRequestQueryCriteria(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLibraryChatGenerationRequestQueryCriteria() = default ;
    RunLibraryChatGenerationRequestQueryCriteria& operator=(const RunLibraryChatGenerationRequestQueryCriteria &) = default ;
    RunLibraryChatGenerationRequestQueryCriteria& operator=(RunLibraryChatGenerationRequestQueryCriteria &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->and_ == nullptr
        && return this->or_ == nullptr; };
    // and Field Functions 
    bool hasAnd() const { return this->and_ != nullptr;};
    void deleteAnd() { this->and_ = nullptr;};
    inline const vector<Models::RunLibraryChatGenerationRequestQueryCriteriaAnd> & _and() const { DARABONBA_PTR_GET_CONST(and_, vector<Models::RunLibraryChatGenerationRequestQueryCriteriaAnd>) };
    inline vector<Models::RunLibraryChatGenerationRequestQueryCriteriaAnd> _and() { DARABONBA_PTR_GET(and_, vector<Models::RunLibraryChatGenerationRequestQueryCriteriaAnd>) };
    inline RunLibraryChatGenerationRequestQueryCriteria& setAnd(const vector<Models::RunLibraryChatGenerationRequestQueryCriteriaAnd> & _and) { DARABONBA_PTR_SET_VALUE(and_, _and) };
    inline RunLibraryChatGenerationRequestQueryCriteria& setAnd(vector<Models::RunLibraryChatGenerationRequestQueryCriteriaAnd> && _and) { DARABONBA_PTR_SET_RVALUE(and_, _and) };


    // or Field Functions 
    bool hasOr() const { return this->or_ != nullptr;};
    void deleteOr() { this->or_ = nullptr;};
    inline const vector<Models::RunLibraryChatGenerationRequestQueryCriteriaOr> & _or() const { DARABONBA_PTR_GET_CONST(or_, vector<Models::RunLibraryChatGenerationRequestQueryCriteriaOr>) };
    inline vector<Models::RunLibraryChatGenerationRequestQueryCriteriaOr> _or() { DARABONBA_PTR_GET(or_, vector<Models::RunLibraryChatGenerationRequestQueryCriteriaOr>) };
    inline RunLibraryChatGenerationRequestQueryCriteria& setOr(const vector<Models::RunLibraryChatGenerationRequestQueryCriteriaOr> & _or) { DARABONBA_PTR_SET_VALUE(or_, _or) };
    inline RunLibraryChatGenerationRequestQueryCriteria& setOr(vector<Models::RunLibraryChatGenerationRequestQueryCriteriaOr> && _or) { DARABONBA_PTR_SET_RVALUE(or_, _or) };


  protected:
    std::shared_ptr<vector<Models::RunLibraryChatGenerationRequestQueryCriteriaAnd>> and_ = nullptr;
    std::shared_ptr<vector<Models::RunLibraryChatGenerationRequestQueryCriteriaOr>> or_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
