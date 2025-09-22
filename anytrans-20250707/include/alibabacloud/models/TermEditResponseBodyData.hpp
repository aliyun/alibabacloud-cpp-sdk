// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMEDITRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TERMEDITRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TermEditResponseBodyDataTerms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TermEditResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TermEditResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(failCount, failCount_);
      DARABONBA_PTR_TO_JSON(terms, terms_);
    };
    friend void from_json(const Darabonba::Json& j, TermEditResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(failCount, failCount_);
      DARABONBA_PTR_FROM_JSON(terms, terms_);
    };
    TermEditResponseBodyData() = default ;
    TermEditResponseBodyData(const TermEditResponseBodyData &) = default ;
    TermEditResponseBodyData(TermEditResponseBodyData &&) = default ;
    TermEditResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TermEditResponseBodyData() = default ;
    TermEditResponseBodyData& operator=(const TermEditResponseBodyData &) = default ;
    TermEditResponseBodyData& operator=(TermEditResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failCount_ != nullptr
        && this->terms_ != nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int64_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0L) };
    inline TermEditResponseBodyData& setFailCount(int64_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // terms Field Functions 
    bool hasTerms() const { return this->terms_ != nullptr;};
    void deleteTerms() { this->terms_ = nullptr;};
    inline const vector<Models::TermEditResponseBodyDataTerms> & terms() const { DARABONBA_PTR_GET_CONST(terms_, vector<Models::TermEditResponseBodyDataTerms>) };
    inline vector<Models::TermEditResponseBodyDataTerms> terms() { DARABONBA_PTR_GET(terms_, vector<Models::TermEditResponseBodyDataTerms>) };
    inline TermEditResponseBodyData& setTerms(const vector<Models::TermEditResponseBodyDataTerms> & terms) { DARABONBA_PTR_SET_VALUE(terms_, terms) };
    inline TermEditResponseBodyData& setTerms(vector<Models::TermEditResponseBodyDataTerms> && terms) { DARABONBA_PTR_SET_RVALUE(terms_, terms) };


  protected:
    std::shared_ptr<int64_t> failCount_ = nullptr;
    std::shared_ptr<vector<Models::TermEditResponseBodyDataTerms>> terms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
