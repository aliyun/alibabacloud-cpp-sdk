// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKACCOUNTDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKACCOUNTDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class CheckAccountDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAccountDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAccountDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
    };
    CheckAccountDeleteRequest() = default ;
    CheckAccountDeleteRequest(const CheckAccountDeleteRequest &) = default ;
    CheckAccountDeleteRequest(CheckAccountDeleteRequest &&) = default ;
    CheckAccountDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAccountDeleteRequest() = default ;
    CheckAccountDeleteRequest& operator=(const CheckAccountDeleteRequest &) = default ;
    CheckAccountDeleteRequest& operator=(CheckAccountDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CheckAccountDeleteRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    // The Alibaba Cloud account ID of the member that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
