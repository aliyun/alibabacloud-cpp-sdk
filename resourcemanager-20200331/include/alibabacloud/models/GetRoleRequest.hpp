// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    GetRoleRequest() = default ;
    GetRoleRequest(const GetRoleRequest &) = default ;
    GetRoleRequest(GetRoleRequest &&) = default ;
    GetRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleRequest() = default ;
    GetRoleRequest& operator=(const GetRoleRequest &) = default ;
    GetRoleRequest& operator=(GetRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && return this->roleName_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetRoleRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The language in which you want to return the description of the role. Valid values:
    // 
    // *   en: English
    // *   zh-CN: Chinese
    // *   ja: Japanese
    std::shared_ptr<string> language_ = nullptr;
    // The name of the role.
    // 
    // The name must be 1 to 64 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
