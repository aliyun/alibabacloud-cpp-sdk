// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTPROFILEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTPROFILEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class CreateAccountProfileInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountProfileInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountJson, accountJson_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountProfileInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountJson, accountJson_);
    };
    CreateAccountProfileInfoRequest() = default ;
    CreateAccountProfileInfoRequest(const CreateAccountProfileInfoRequest &) = default ;
    CreateAccountProfileInfoRequest(CreateAccountProfileInfoRequest &&) = default ;
    CreateAccountProfileInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountProfileInfoRequest() = default ;
    CreateAccountProfileInfoRequest& operator=(const CreateAccountProfileInfoRequest &) = default ;
    CreateAccountProfileInfoRequest& operator=(CreateAccountProfileInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountJson_ == nullptr; };
    // accountJson Field Functions 
    bool hasAccountJson() const { return this->accountJson_ != nullptr;};
    void deleteAccountJson() { this->accountJson_ = nullptr;};
    inline string getAccountJson() const { DARABONBA_PTR_GET_DEFAULT(accountJson_, "") };
    inline CreateAccountProfileInfoRequest& setAccountJson(string accountJson) { DARABONBA_PTR_SET_VALUE(accountJson_, accountJson) };


  protected:
    shared_ptr<string> accountJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
