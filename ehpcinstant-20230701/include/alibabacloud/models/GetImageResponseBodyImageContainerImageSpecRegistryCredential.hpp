// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGECONTAINERIMAGESPECREGISTRYCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGECONTAINERIMAGESPECREGISTRYCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageResponseBodyImageContainerImageSpecRegistryCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBodyImageContainerImageSpecRegistryCredential& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBodyImageContainerImageSpecRegistryCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GetImageResponseBodyImageContainerImageSpecRegistryCredential() = default ;
    GetImageResponseBodyImageContainerImageSpecRegistryCredential(const GetImageResponseBodyImageContainerImageSpecRegistryCredential &) = default ;
    GetImageResponseBodyImageContainerImageSpecRegistryCredential(GetImageResponseBodyImageContainerImageSpecRegistryCredential &&) = default ;
    GetImageResponseBodyImageContainerImageSpecRegistryCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBodyImageContainerImageSpecRegistryCredential() = default ;
    GetImageResponseBodyImageContainerImageSpecRegistryCredential& operator=(const GetImageResponseBodyImageContainerImageSpecRegistryCredential &) = default ;
    GetImageResponseBodyImageContainerImageSpecRegistryCredential& operator=(GetImageResponseBodyImageContainerImageSpecRegistryCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->password_ != nullptr
        && this->server_ != nullptr && this->userName_ != nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetImageResponseBodyImageContainerImageSpecRegistryCredential& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline GetImageResponseBodyImageContainerImageSpecRegistryCredential& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetImageResponseBodyImageContainerImageSpecRegistryCredential& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> server_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
