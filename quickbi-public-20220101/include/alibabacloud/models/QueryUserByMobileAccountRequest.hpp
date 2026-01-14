// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERBYMOBILEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERBYMOBILEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserByMobileAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserByMobileAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MobileType, mobileType_);
      DARABONBA_PTR_TO_JSON(MobileUserId, mobileUserId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserByMobileAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MobileType, mobileType_);
      DARABONBA_PTR_FROM_JSON(MobileUserId, mobileUserId_);
    };
    QueryUserByMobileAccountRequest() = default ;
    QueryUserByMobileAccountRequest(const QueryUserByMobileAccountRequest &) = default ;
    QueryUserByMobileAccountRequest(QueryUserByMobileAccountRequest &&) = default ;
    QueryUserByMobileAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserByMobileAccountRequest() = default ;
    QueryUserByMobileAccountRequest& operator=(const QueryUserByMobileAccountRequest &) = default ;
    QueryUserByMobileAccountRequest& operator=(QueryUserByMobileAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobileType_ == nullptr
        && this->mobileUserId_ == nullptr; };
    // mobileType Field Functions 
    bool hasMobileType() const { return this->mobileType_ != nullptr;};
    void deleteMobileType() { this->mobileType_ = nullptr;};
    inline string getMobileType() const { DARABONBA_PTR_GET_DEFAULT(mobileType_, "") };
    inline QueryUserByMobileAccountRequest& setMobileType(string mobileType) { DARABONBA_PTR_SET_VALUE(mobileType_, mobileType) };


    // mobileUserId Field Functions 
    bool hasMobileUserId() const { return this->mobileUserId_ != nullptr;};
    void deleteMobileUserId() { this->mobileUserId_ = nullptr;};
    inline string getMobileUserId() const { DARABONBA_PTR_GET_DEFAULT(mobileUserId_, "") };
    inline QueryUserByMobileAccountRequest& setMobileUserId(string mobileUserId) { DARABONBA_PTR_SET_VALUE(mobileUserId_, mobileUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> mobileType_ {};
    // This parameter is required.
    shared_ptr<string> mobileUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
