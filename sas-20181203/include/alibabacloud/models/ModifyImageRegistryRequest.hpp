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
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(TransPerHour, transPerHour_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyImageRegistryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
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
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->password_ == nullptr && return this->transPerHour_ == nullptr && return this->userName_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyImageRegistryRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyImageRegistryRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // transPerHour Field Functions 
    bool hasTransPerHour() const { return this->transPerHour_ != nullptr;};
    void deleteTransPerHour() { this->transPerHour_ = nullptr;};
    inline int32_t transPerHour() const { DARABONBA_PTR_GET_DEFAULT(transPerHour_, 0) };
    inline ModifyImageRegistryRequest& setTransPerHour(int32_t transPerHour) { DARABONBA_PTR_SET_VALUE(transPerHour_, transPerHour) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModifyImageRegistryRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The ID of the image repository. You can call the listImageRegistry operation to query the ID of the image repository.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The number of images that are scanned per hour.
    std::shared_ptr<int32_t> transPerHour_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
