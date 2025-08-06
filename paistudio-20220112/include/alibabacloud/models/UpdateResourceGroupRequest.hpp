// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UpdateResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Unbind, unbind_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Unbind, unbind_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
    };
    UpdateResourceGroupRequest() = default ;
    UpdateResourceGroupRequest(const UpdateResourceGroupRequest &) = default ;
    UpdateResourceGroupRequest(UpdateResourceGroupRequest &&) = default ;
    UpdateResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceGroupRequest() = default ;
    UpdateResourceGroupRequest& operator=(const UpdateResourceGroupRequest &) = default ;
    UpdateResourceGroupRequest& operator=(UpdateResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->unbind_ != nullptr && this->userVpc_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateResourceGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResourceGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // unbind Field Functions 
    bool hasUnbind() const { return this->unbind_ != nullptr;};
    void deleteUnbind() { this->unbind_ = nullptr;};
    inline bool unbind() const { DARABONBA_PTR_GET_DEFAULT(unbind_, false) };
    inline UpdateResourceGroupRequest& setUnbind(bool unbind) { DARABONBA_PTR_SET_VALUE(unbind_, unbind) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
    inline UserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
    inline UpdateResourceGroupRequest& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline UpdateResourceGroupRequest& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> unbind_ = nullptr;
    std::shared_ptr<UserVpc> userVpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
