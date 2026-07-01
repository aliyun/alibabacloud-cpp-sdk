// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRCSSIGNMENUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRCSSIGNMENUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class AddRcsSignMenuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRcsSignMenuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MenuContent, menuContent_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
    };
    friend void from_json(const Darabonba::Json& j, AddRcsSignMenuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MenuContent, menuContent_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
    };
    AddRcsSignMenuRequest() = default ;
    AddRcsSignMenuRequest(const AddRcsSignMenuRequest &) = default ;
    AddRcsSignMenuRequest(AddRcsSignMenuRequest &&) = default ;
    AddRcsSignMenuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRcsSignMenuRequest() = default ;
    AddRcsSignMenuRequest& operator=(const AddRcsSignMenuRequest &) = default ;
    AddRcsSignMenuRequest& operator=(AddRcsSignMenuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->menuContent_ == nullptr
        && this->signName_ == nullptr; };
    // menuContent Field Functions 
    bool hasMenuContent() const { return this->menuContent_ != nullptr;};
    void deleteMenuContent() { this->menuContent_ = nullptr;};
    inline string getMenuContent() const { DARABONBA_PTR_GET_DEFAULT(menuContent_, "") };
    inline AddRcsSignMenuRequest& setMenuContent(string menuContent) { DARABONBA_PTR_SET_VALUE(menuContent_, menuContent) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline AddRcsSignMenuRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


  protected:
    // This parameter is required.
    shared_ptr<string> menuContent_ {};
    // This parameter is required.
    shared_ptr<string> signName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
