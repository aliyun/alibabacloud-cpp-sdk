// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENPLANKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENPLANKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class CreateTokenPlanKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenPlanKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenPlanKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    CreateTokenPlanKeyRequest() = default ;
    CreateTokenPlanKeyRequest(const CreateTokenPlanKeyRequest &) = default ;
    CreateTokenPlanKeyRequest(CreateTokenPlanKeyRequest &&) = default ;
    CreateTokenPlanKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenPlanKeyRequest() = default ;
    CreateTokenPlanKeyRequest& operator=(const CreateTokenPlanKeyRequest &) = default ;
    CreateTokenPlanKeyRequest& operator=(CreateTokenPlanKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->description_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateTokenPlanKeyRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTokenPlanKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The account ID.
    // 
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    // The description of the key.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
