// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMEDITREQUESTEXT_HPP_
#define ALIBABACLOUD_MODELS_TERMEDITREQUESTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TermEditRequestExtTerms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TermEditRequestExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TermEditRequestExt& obj) { 
      DARABONBA_ANY_TO_JSON(paramMap, paramMap_);
      DARABONBA_PTR_TO_JSON(terms, terms_);
    };
    friend void from_json(const Darabonba::Json& j, TermEditRequestExt& obj) { 
      DARABONBA_ANY_FROM_JSON(paramMap, paramMap_);
      DARABONBA_PTR_FROM_JSON(terms, terms_);
    };
    TermEditRequestExt() = default ;
    TermEditRequestExt(const TermEditRequestExt &) = default ;
    TermEditRequestExt(TermEditRequestExt &&) = default ;
    TermEditRequestExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TermEditRequestExt() = default ;
    TermEditRequestExt& operator=(const TermEditRequestExt &) = default ;
    TermEditRequestExt& operator=(TermEditRequestExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramMap_ == nullptr
        && return this->terms_ == nullptr; };
    // paramMap Field Functions 
    bool hasParamMap() const { return this->paramMap_ != nullptr;};
    void deleteParamMap() { this->paramMap_ = nullptr;};
    inline     const Darabonba::Json & paramMap() const { DARABONBA_GET(paramMap_) };
    Darabonba::Json & paramMap() { DARABONBA_GET(paramMap_) };
    inline TermEditRequestExt& setParamMap(const Darabonba::Json & paramMap) { DARABONBA_SET_VALUE(paramMap_, paramMap) };
    inline TermEditRequestExt& setParamMap(Darabonba::Json & paramMap) { DARABONBA_SET_RVALUE(paramMap_, paramMap) };


    // terms Field Functions 
    bool hasTerms() const { return this->terms_ != nullptr;};
    void deleteTerms() { this->terms_ = nullptr;};
    inline const vector<Models::TermEditRequestExtTerms> & terms() const { DARABONBA_PTR_GET_CONST(terms_, vector<Models::TermEditRequestExtTerms>) };
    inline vector<Models::TermEditRequestExtTerms> terms() { DARABONBA_PTR_GET(terms_, vector<Models::TermEditRequestExtTerms>) };
    inline TermEditRequestExt& setTerms(const vector<Models::TermEditRequestExtTerms> & terms) { DARABONBA_PTR_SET_VALUE(terms_, terms) };
    inline TermEditRequestExt& setTerms(vector<Models::TermEditRequestExtTerms> && terms) { DARABONBA_PTR_SET_RVALUE(terms_, terms) };


  protected:
    Darabonba::Json paramMap_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::TermEditRequestExtTerms>> terms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
