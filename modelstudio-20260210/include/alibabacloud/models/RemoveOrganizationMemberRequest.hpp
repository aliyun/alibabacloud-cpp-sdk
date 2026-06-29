// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEORGANIZATIONMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEORGANIZATIONMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class RemoveOrganizationMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
    };
    RemoveOrganizationMemberRequest() = default ;
    RemoveOrganizationMemberRequest(const RemoveOrganizationMemberRequest &) = default ;
    RemoveOrganizationMemberRequest(RemoveOrganizationMemberRequest &&) = default ;
    RemoveOrganizationMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveOrganizationMemberRequest() = default ;
    RemoveOrganizationMemberRequest& operator=(const RemoveOrganizationMemberRequest &) = default ;
    RemoveOrganizationMemberRequest& operator=(RemoveOrganizationMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->locale_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline RemoveOrganizationMemberRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline RemoveOrganizationMemberRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline RemoveOrganizationMemberRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


  protected:
    // The list of member account IDs to be removed.
    shared_ptr<vector<string>> accountIds_ {};
    // The language. Valid values: zh-CN and en-US.
    shared_ptr<string> locale_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
