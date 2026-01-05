// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATEPRINCIPALFROMPORTFOLIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATEPRINCIPALFROMPORTFOLIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class DisassociatePrincipalFromPortfolioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociatePrincipalFromPortfolioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociatePrincipalFromPortfolioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
    };
    DisassociatePrincipalFromPortfolioRequest() = default ;
    DisassociatePrincipalFromPortfolioRequest(const DisassociatePrincipalFromPortfolioRequest &) = default ;
    DisassociatePrincipalFromPortfolioRequest(DisassociatePrincipalFromPortfolioRequest &&) = default ;
    DisassociatePrincipalFromPortfolioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociatePrincipalFromPortfolioRequest() = default ;
    DisassociatePrincipalFromPortfolioRequest& operator=(const DisassociatePrincipalFromPortfolioRequest &) = default ;
    DisassociatePrincipalFromPortfolioRequest& operator=(DisassociatePrincipalFromPortfolioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portfolioId_ == nullptr
        && this->principalId_ == nullptr && this->principalType_ == nullptr; };
    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline DisassociatePrincipalFromPortfolioRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline DisassociatePrincipalFromPortfolioRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline DisassociatePrincipalFromPortfolioRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


  protected:
    // The ID of the product portfolio.
    // 
    // This parameter is required.
    shared_ptr<string> portfolioId_ {};
    // The ID of the RAM entity.
    // 
    // For more information about how to obtain the ID of a RAM user, see [GetUser](https://help.aliyun.com/document_detail/28681.html).
    // 
    // For more information about how to obtain the ID of a RAM role, see [GetRole](https://help.aliyun.com/document_detail/28711.html).
    // 
    // This parameter is required.
    shared_ptr<string> principalId_ {};
    // The type of the Resource Access Management (RAM) entity. Valid values:
    // 
    // *   RamUser: a RAM user
    // *   RamRole: a RAM role
    // 
    // This parameter is required.
    shared_ptr<string> principalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
