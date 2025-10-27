// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMONITORACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMONITORACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteMonitorAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMonitorAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMonitorAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
    };
    DeleteMonitorAccountRequest() = default ;
    DeleteMonitorAccountRequest(const DeleteMonitorAccountRequest &) = default ;
    DeleteMonitorAccountRequest(DeleteMonitorAccountRequest &&) = default ;
    DeleteMonitorAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMonitorAccountRequest() = default ;
    DeleteMonitorAccountRequest& operator=(const DeleteMonitorAccountRequest &) = default ;
    DeleteMonitorAccountRequest& operator=(DeleteMonitorAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeleteMonitorAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    // The ID of the member that you want to delete.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the IDs of the members in the Security Center console.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
