// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRINCIPALACTION_HPP_
#define ALIBABACLOUD_MODELS_PRINCIPALACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class PrincipalAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrincipalAction& obj) { 
      DARABONBA_PTR_TO_JSON(actionArn, actionArn_);
      DARABONBA_PTR_TO_JSON(principalArn, principalArn_);
    };
    friend void from_json(const Darabonba::Json& j, PrincipalAction& obj) { 
      DARABONBA_PTR_FROM_JSON(actionArn, actionArn_);
      DARABONBA_PTR_FROM_JSON(principalArn, principalArn_);
    };
    PrincipalAction() = default ;
    PrincipalAction(const PrincipalAction &) = default ;
    PrincipalAction(PrincipalAction &&) = default ;
    PrincipalAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrincipalAction() = default ;
    PrincipalAction& operator=(const PrincipalAction &) = default ;
    PrincipalAction& operator=(PrincipalAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionArn_ != nullptr
        && this->principalArn_ != nullptr; };
    // actionArn Field Functions 
    bool hasActionArn() const { return this->actionArn_ != nullptr;};
    void deleteActionArn() { this->actionArn_ = nullptr;};
    inline string actionArn() const { DARABONBA_PTR_GET_DEFAULT(actionArn_, "") };
    inline PrincipalAction& setActionArn(string actionArn) { DARABONBA_PTR_SET_VALUE(actionArn_, actionArn) };


    // principalArn Field Functions 
    bool hasPrincipalArn() const { return this->principalArn_ != nullptr;};
    void deletePrincipalArn() { this->principalArn_ = nullptr;};
    inline string principalArn() const { DARABONBA_PTR_GET_DEFAULT(principalArn_, "") };
    inline PrincipalAction& setPrincipalArn(string principalArn) { DARABONBA_PTR_SET_VALUE(principalArn_, principalArn) };


  protected:
    std::shared_ptr<string> actionArn_ = nullptr;
    std::shared_ptr<string> principalArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
