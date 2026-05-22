// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIKEYREQUEST_HPP_
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
  class UpdateApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(auth, auth_);
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(auth, auth_);
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    UpdateApiKeyRequest() = default ;
    UpdateApiKeyRequest(const UpdateApiKeyRequest &) = default ;
    UpdateApiKeyRequest(UpdateApiKeyRequest &&) = default ;
    UpdateApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiKeyRequest() = default ;
    UpdateApiKeyRequest& operator=(const UpdateApiKeyRequest &) = default ;
    UpdateApiKeyRequest& operator=(UpdateApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Auth : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Auth& obj) { 
        DARABONBA_PTR_TO_JSON(accessIps, accessIps_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Auth& obj) { 
        DARABONBA_PTR_FROM_JSON(accessIps, accessIps_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Auth() = default ;
      Auth(const Auth &) = default ;
      Auth(Auth &&) = default ;
      Auth(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Auth() = default ;
      Auth& operator=(const Auth &) = default ;
      Auth& operator=(Auth &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessIps_ == nullptr
        && this->type_ == nullptr; };
      // accessIps Field Functions 
      bool hasAccessIps() const { return this->accessIps_ != nullptr;};
      void deleteAccessIps() { this->accessIps_ = nullptr;};
      inline const vector<string> & getAccessIps() const { DARABONBA_PTR_GET_CONST(accessIps_, vector<string>) };
      inline vector<string> getAccessIps() { DARABONBA_PTR_GET(accessIps_, vector<string>) };
      inline Auth& setAccessIps(const vector<string> & accessIps) { DARABONBA_PTR_SET_VALUE(accessIps_, accessIps) };
      inline Auth& setAccessIps(vector<string> && accessIps) { DARABONBA_PTR_SET_RVALUE(accessIps_, accessIps) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Auth& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<string>> accessIps_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->auth_ == nullptr
        && this->description_ == nullptr; };
    // auth Field Functions 
    bool hasAuth() const { return this->auth_ != nullptr;};
    void deleteAuth() { this->auth_ = nullptr;};
    inline const UpdateApiKeyRequest::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, UpdateApiKeyRequest::Auth) };
    inline UpdateApiKeyRequest::Auth getAuth() { DARABONBA_PTR_GET(auth_, UpdateApiKeyRequest::Auth) };
    inline UpdateApiKeyRequest& setAuth(const UpdateApiKeyRequest::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
    inline UpdateApiKeyRequest& setAuth(UpdateApiKeyRequest::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApiKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    shared_ptr<UpdateApiKeyRequest::Auth> auth_ {};
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
