// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEADMINPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEADMINPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateAdminPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAdminPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(esAdminPassword, esAdminPassword_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAdminPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(esAdminPassword, esAdminPassword_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateAdminPasswordRequest() = default ;
    UpdateAdminPasswordRequest(const UpdateAdminPasswordRequest &) = default ;
    UpdateAdminPasswordRequest(UpdateAdminPasswordRequest &&) = default ;
    UpdateAdminPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAdminPasswordRequest() = default ;
    UpdateAdminPasswordRequest& operator=(const UpdateAdminPasswordRequest &) = default ;
    UpdateAdminPasswordRequest& operator=(UpdateAdminPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->esAdminPassword_ == nullptr
        && this->clientToken_ == nullptr; };
    // esAdminPassword Field Functions 
    bool hasEsAdminPassword() const { return this->esAdminPassword_ != nullptr;};
    void deleteEsAdminPassword() { this->esAdminPassword_ = nullptr;};
    inline string getEsAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(esAdminPassword_, "") };
    inline UpdateAdminPasswordRequest& setEsAdminPassword(string esAdminPassword) { DARABONBA_PTR_SET_VALUE(esAdminPassword_, esAdminPassword) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAdminPasswordRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> esAdminPassword_ {};
    // Indicates whether the password was updated. Valid values:
    // 
    // *   true: The call was successful.
    // *   false: The call failed.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
