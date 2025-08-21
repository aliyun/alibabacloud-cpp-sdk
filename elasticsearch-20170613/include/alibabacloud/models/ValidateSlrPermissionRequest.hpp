// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESLRPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESLRPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ValidateSlrPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateSlrPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(rolename, rolename_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateSlrPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(rolename, rolename_);
    };
    ValidateSlrPermissionRequest() = default ;
    ValidateSlrPermissionRequest(const ValidateSlrPermissionRequest &) = default ;
    ValidateSlrPermissionRequest(ValidateSlrPermissionRequest &&) = default ;
    ValidateSlrPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateSlrPermissionRequest() = default ;
    ValidateSlrPermissionRequest& operator=(const ValidateSlrPermissionRequest &) = default ;
    ValidateSlrPermissionRequest& operator=(ValidateSlrPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->rolename_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ValidateSlrPermissionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // rolename Field Functions 
    bool hasRolename() const { return this->rolename_ != nullptr;};
    void deleteRolename() { this->rolename_ = nullptr;};
    inline string rolename() const { DARABONBA_PTR_GET_DEFAULT(rolename_, "") };
    inline ValidateSlrPermissionRequest& setRolename(string rolename) { DARABONBA_PTR_SET_VALUE(rolename_, rolename) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rolename_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
