// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEPRINCIPALWITHPORTFOLIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEPRINCIPALWITHPORTFOLIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class AssociatePrincipalWithPortfolioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociatePrincipalWithPortfolioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_TO_JSON(PrincipalPattern, principalPattern_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
    };
    friend void from_json(const Darabonba::Json& j, AssociatePrincipalWithPortfolioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_FROM_JSON(PrincipalPattern, principalPattern_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
    };
    AssociatePrincipalWithPortfolioRequest() = default ;
    AssociatePrincipalWithPortfolioRequest(const AssociatePrincipalWithPortfolioRequest &) = default ;
    AssociatePrincipalWithPortfolioRequest(AssociatePrincipalWithPortfolioRequest &&) = default ;
    AssociatePrincipalWithPortfolioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociatePrincipalWithPortfolioRequest() = default ;
    AssociatePrincipalWithPortfolioRequest& operator=(const AssociatePrincipalWithPortfolioRequest &) = default ;
    AssociatePrincipalWithPortfolioRequest& operator=(AssociatePrincipalWithPortfolioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portfolioId_ == nullptr
        && this->principalId_ == nullptr && this->principalPattern_ == nullptr && this->principalType_ == nullptr; };
    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline AssociatePrincipalWithPortfolioRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline AssociatePrincipalWithPortfolioRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalPattern Field Functions 
    bool hasPrincipalPattern() const { return this->principalPattern_ != nullptr;};
    void deletePrincipalPattern() { this->principalPattern_ = nullptr;};
    inline string getPrincipalPattern() const { DARABONBA_PTR_GET_DEFAULT(principalPattern_, "") };
    inline AssociatePrincipalWithPortfolioRequest& setPrincipalPattern(string principalPattern) { DARABONBA_PTR_SET_VALUE(principalPattern_, principalPattern) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline AssociatePrincipalWithPortfolioRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


  protected:
    // This parameter is required.
    shared_ptr<string> portfolioId_ {};
    shared_ptr<string> principalId_ {};
    shared_ptr<string> principalPattern_ {};
    // This parameter is required.
    shared_ptr<string> principalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
