// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMQUERYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TERMQUERYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TermQueryResponseBodyDataTerms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TermQueryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TermQueryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(failCount, failCount_);
      DARABONBA_PTR_TO_JSON(terms, terms_);
    };
    friend void from_json(const Darabonba::Json& j, TermQueryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(failCount, failCount_);
      DARABONBA_PTR_FROM_JSON(terms, terms_);
    };
    TermQueryResponseBodyData() = default ;
    TermQueryResponseBodyData(const TermQueryResponseBodyData &) = default ;
    TermQueryResponseBodyData(TermQueryResponseBodyData &&) = default ;
    TermQueryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TermQueryResponseBodyData() = default ;
    TermQueryResponseBodyData& operator=(const TermQueryResponseBodyData &) = default ;
    TermQueryResponseBodyData& operator=(TermQueryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failCount_ == nullptr
        && return this->terms_ == nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int64_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0L) };
    inline TermQueryResponseBodyData& setFailCount(int64_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // terms Field Functions 
    bool hasTerms() const { return this->terms_ != nullptr;};
    void deleteTerms() { this->terms_ = nullptr;};
    inline const vector<Models::TermQueryResponseBodyDataTerms> & terms() const { DARABONBA_PTR_GET_CONST(terms_, vector<Models::TermQueryResponseBodyDataTerms>) };
    inline vector<Models::TermQueryResponseBodyDataTerms> terms() { DARABONBA_PTR_GET(terms_, vector<Models::TermQueryResponseBodyDataTerms>) };
    inline TermQueryResponseBodyData& setTerms(const vector<Models::TermQueryResponseBodyDataTerms> & terms) { DARABONBA_PTR_SET_VALUE(terms_, terms) };
    inline TermQueryResponseBodyData& setTerms(vector<Models::TermQueryResponseBodyDataTerms> && terms) { DARABONBA_PTR_SET_RVALUE(terms_, terms) };


  protected:
    std::shared_ptr<int64_t> failCount_ = nullptr;
    std::shared_ptr<vector<Models::TermQueryResponseBodyDataTerms>> terms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
