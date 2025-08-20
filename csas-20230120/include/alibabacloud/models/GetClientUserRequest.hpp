// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetClientUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetClientUserRequest() = default ;
    GetClientUserRequest(const GetClientUserRequest &) = default ;
    GetClientUserRequest(GetClientUserRequest &&) = default ;
    GetClientUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientUserRequest() = default ;
    GetClientUserRequest& operator=(const GetClientUserRequest &) = default ;
    GetClientUserRequest& operator=(GetClientUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->idpConfigId_ != nullptr
        && this->username_ != nullptr; };
    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline GetClientUserRequest& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetClientUserRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> idpConfigId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
