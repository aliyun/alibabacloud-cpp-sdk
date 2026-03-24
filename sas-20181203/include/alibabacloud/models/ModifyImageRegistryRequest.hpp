// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIMAGEREGISTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIMAGEREGISTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyImageRegistryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyImageRegistryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_TO_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImageRegistryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegistryHostIp, registryHostIp_);
      DARABONBA_PTR_FROM_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ModifyImageRegistryRequest() = default ;
    ModifyImageRegistryRequest(const ModifyImageRegistryRequest &) = default ;
    ModifyImageRegistryRequest(ModifyImageRegistryRequest &&) = default ;
    ModifyImageRegistryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyImageRegistryRequest() = default ;
    ModifyImageRegistryRequest& operator=(const ModifyImageRegistryRequest &) = default ;
    ModifyImageRegistryRequest& operator=(ModifyImageRegistryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->id_ == nullptr && this->password_ == nullptr && this->port_ == nullptr && this->registryHostIp_ == nullptr && this->transPerHour_ == nullptr
        && this->userName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyImageRegistryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyImageRegistryRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyImageRegistryRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyImageRegistryRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // registryHostIp Field Functions 
    bool hasRegistryHostIp() const { return this->registryHostIp_ != nullptr;};
    void deleteRegistryHostIp() { this->registryHostIp_ = nullptr;};
    inline string getRegistryHostIp() const { DARABONBA_PTR_GET_DEFAULT(registryHostIp_, "") };
    inline ModifyImageRegistryRequest& setRegistryHostIp(string registryHostIp) { DARABONBA_PTR_SET_VALUE(registryHostIp_, registryHostIp) };


    // transPerHour Field Functions 
    bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
    void deleteTransPerHour() { this->transPerHour_ = nullptr;};
    inline int32_t getTransPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
    inline ModifyImageRegistryRequest& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModifyImageRegistryRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> domainName_ {};
    // The ID of the image repository. You can call the listImageRegistry operation to query the ID of the image repository.
    shared_ptr<int64_t> id_ {};
    // The password.
    shared_ptr<string> password_ {};
    shared_ptr<int32_t> port_ {};
    shared_ptr<string> registryHostIp_ {};
    // The number of images that are scanned per hour.
    shared_ptr<int32_t> transPerHour_ {};
    // The username.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
