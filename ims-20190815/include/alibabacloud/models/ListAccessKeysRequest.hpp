// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAccessKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    ListAccessKeysRequest() = default ;
    ListAccessKeysRequest(const ListAccessKeysRequest &) = default ;
    ListAccessKeysRequest(ListAccessKeysRequest &&) = default ;
    ListAccessKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessKeysRequest() = default ;
    ListAccessKeysRequest& operator=(const ListAccessKeysRequest &) = default ;
    ListAccessKeysRequest& operator=(ListAccessKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userPrincipalName_ != nullptr; };
    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline ListAccessKeysRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The logon name of the RAM user.
    // 
    // If this parameter is empty, the AccessKey pairs of the current user are queried.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
