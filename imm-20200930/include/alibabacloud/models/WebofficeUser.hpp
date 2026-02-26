// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBOFFICEUSER_HPP_
#define ALIBABACLOUD_MODELS_WEBOFFICEUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class WebofficeUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebofficeUser& obj) { 
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, WebofficeUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    WebofficeUser() = default ;
    WebofficeUser(const WebofficeUser &) = default ;
    WebofficeUser(WebofficeUser &&) = default ;
    WebofficeUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebofficeUser() = default ;
    WebofficeUser& operator=(const WebofficeUser &) = default ;
    WebofficeUser& operator=(WebofficeUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatar_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline WebofficeUser& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline WebofficeUser& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WebofficeUser& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The custom URL of the avatar picture. The avatar picture is displayed on the WebOffice page.
    shared_ptr<string> avatar_ {};
    // The custom user ID. The user ID is displayed on the WebOffice page. A user ID can contain letters and digits and cannot exceed 15 characters in length.
    shared_ptr<string> id_ {};
    // The custom username. The username is displayed on the WebOffice page. The username must meet the following requirements:
    // 
    // *   A username can contain digits, letters, hyphens (-), underscores (_), plus signs (+), forward slashes (/), equal signs (=), and at signs (@).
    // *   A username can contain up to 32 characters.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
