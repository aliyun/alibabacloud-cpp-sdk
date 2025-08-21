// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESBYACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESBYACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDevicesByAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicesByAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicesByAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
    };
    QueryDevicesByAccountRequest() = default ;
    QueryDevicesByAccountRequest(const QueryDevicesByAccountRequest &) = default ;
    QueryDevicesByAccountRequest(QueryDevicesByAccountRequest &&) = default ;
    QueryDevicesByAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicesByAccountRequest() = default ;
    QueryDevicesByAccountRequest& operator=(const QueryDevicesByAccountRequest &) = default ;
    QueryDevicesByAccountRequest& operator=(QueryDevicesByAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->appKey_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline QueryDevicesByAccountRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline QueryDevicesByAccountRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> account_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
