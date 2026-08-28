// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHPLUGINOAUTHCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHPLUGINOAUTHCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class RefreshPluginOAuthCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshPluginOAuthCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshPluginOAuthCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
    };
    RefreshPluginOAuthCodeRequest() = default ;
    RefreshPluginOAuthCodeRequest(const RefreshPluginOAuthCodeRequest &) = default ;
    RefreshPluginOAuthCodeRequest(RefreshPluginOAuthCodeRequest &&) = default ;
    RefreshPluginOAuthCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshPluginOAuthCodeRequest() = default ;
    RefreshPluginOAuthCodeRequest& operator=(const RefreshPluginOAuthCodeRequest &) = default ;
    RefreshPluginOAuthCodeRequest& operator=(RefreshPluginOAuthCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RefreshPluginOAuthCodeRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


  protected:
    shared_ptr<string> code_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
