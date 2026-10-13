// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEOIDCCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLEOIDCCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HandleOidcCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleOidcCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, HandleOidcCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    HandleOidcCallbackRequest() = default ;
    HandleOidcCallbackRequest(const HandleOidcCallbackRequest &) = default ;
    HandleOidcCallbackRequest(HandleOidcCallbackRequest &&) = default ;
    HandleOidcCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleOidcCallbackRequest() = default ;
    HandleOidcCallbackRequest& operator=(const HandleOidcCallbackRequest &) = default ;
    HandleOidcCallbackRequest& operator=(HandleOidcCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->state_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HandleOidcCallbackRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline HandleOidcCallbackRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The code parameter carried in the OIDC callback request.
    shared_ptr<string> code_ {};
    // The state parameter carried in the OIDC callback request.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
