// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMINDERHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMINDERHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CreateReminderHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReminderHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-acs-aligenie-access-token, xAcsAligenieAccessToken_);
      DARABONBA_PTR_TO_JSON(Authorization, authorization_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReminderHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-acs-aligenie-access-token, xAcsAligenieAccessToken_);
      DARABONBA_PTR_FROM_JSON(Authorization, authorization_);
    };
    CreateReminderHeaders() = default ;
    CreateReminderHeaders(const CreateReminderHeaders &) = default ;
    CreateReminderHeaders(CreateReminderHeaders &&) = default ;
    CreateReminderHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReminderHeaders() = default ;
    CreateReminderHeaders& operator=(const CreateReminderHeaders &) = default ;
    CreateReminderHeaders& operator=(CreateReminderHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonHeaders_ != nullptr
        && this->xAcsAligenieAccessToken_ != nullptr && this->authorization_ != nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline CreateReminderHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline CreateReminderHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xAcsAligenieAccessToken Field Functions 
    bool hasXAcsAligenieAccessToken() const { return this->xAcsAligenieAccessToken_ != nullptr;};
    void deleteXAcsAligenieAccessToken() { this->xAcsAligenieAccessToken_ = nullptr;};
    inline string xAcsAligenieAccessToken() const { DARABONBA_PTR_GET_DEFAULT(xAcsAligenieAccessToken_, "") };
    inline CreateReminderHeaders& setXAcsAligenieAccessToken(string xAcsAligenieAccessToken) { DARABONBA_PTR_SET_VALUE(xAcsAligenieAccessToken_, xAcsAligenieAccessToken) };


    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string authorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline CreateReminderHeaders& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<string> xAcsAligenieAccessToken_ = nullptr;
    std::shared_ptr<string> authorization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
