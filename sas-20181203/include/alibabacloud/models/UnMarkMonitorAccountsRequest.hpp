// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNMARKMONITORACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNMARKMONITORACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UnMarkMonitorAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnMarkMonitorAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
    };
    friend void from_json(const Darabonba::Json& j, UnMarkMonitorAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
    };
    UnMarkMonitorAccountsRequest() = default ;
    UnMarkMonitorAccountsRequest(const UnMarkMonitorAccountsRequest &) = default ;
    UnMarkMonitorAccountsRequest(UnMarkMonitorAccountsRequest &&) = default ;
    UnMarkMonitorAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnMarkMonitorAccountsRequest() = default ;
    UnMarkMonitorAccountsRequest& operator=(const UnMarkMonitorAccountsRequest &) = default ;
    UnMarkMonitorAccountsRequest& operator=(UnMarkMonitorAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIds_ != nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline string accountIds() const { DARABONBA_PTR_GET_DEFAULT(accountIds_, "") };
    inline UnMarkMonitorAccountsRequest& setAccountIds(string accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };


  protected:
    // The IDs of the members.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
