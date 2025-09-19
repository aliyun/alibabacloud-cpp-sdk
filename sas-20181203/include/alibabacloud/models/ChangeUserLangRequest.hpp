// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEUSERLANGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEUSERLANGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeUserLangRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeUserLangRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserLang, userLang_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeUserLangRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserLang, userLang_);
    };
    ChangeUserLangRequest() = default ;
    ChangeUserLangRequest(const ChangeUserLangRequest &) = default ;
    ChangeUserLangRequest(ChangeUserLangRequest &&) = default ;
    ChangeUserLangRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeUserLangRequest() = default ;
    ChangeUserLangRequest& operator=(const ChangeUserLangRequest &) = default ;
    ChangeUserLangRequest& operator=(ChangeUserLangRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userLang_ != nullptr; };
    // userLang Field Functions 
    bool hasUserLang() const { return this->userLang_ != nullptr;};
    void deleteUserLang() { this->userLang_ = nullptr;};
    inline string userLang() const { DARABONBA_PTR_GET_DEFAULT(userLang_, "") };
    inline ChangeUserLangRequest& setUserLang(string userLang) { DARABONBA_PTR_SET_VALUE(userLang_, userLang) };


  protected:
    // The new language. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> userLang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
