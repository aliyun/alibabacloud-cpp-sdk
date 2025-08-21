// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetSecurityPreferenceResponseBodySecurityPreference.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetSecurityPreferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityPreferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPreference, securityPreference_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityPreferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPreference, securityPreference_);
    };
    SetSecurityPreferenceResponseBody() = default ;
    SetSecurityPreferenceResponseBody(const SetSecurityPreferenceResponseBody &) = default ;
    SetSecurityPreferenceResponseBody(SetSecurityPreferenceResponseBody &&) = default ;
    SetSecurityPreferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityPreferenceResponseBody() = default ;
    SetSecurityPreferenceResponseBody& operator=(const SetSecurityPreferenceResponseBody &) = default ;
    SetSecurityPreferenceResponseBody& operator=(SetSecurityPreferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityPreference_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetSecurityPreferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPreference Field Functions 
    bool hasSecurityPreference() const { return this->securityPreference_ != nullptr;};
    void deleteSecurityPreference() { this->securityPreference_ = nullptr;};
    inline const SetSecurityPreferenceResponseBodySecurityPreference & securityPreference() const { DARABONBA_PTR_GET_CONST(securityPreference_, SetSecurityPreferenceResponseBodySecurityPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference securityPreference() { DARABONBA_PTR_GET(securityPreference_, SetSecurityPreferenceResponseBodySecurityPreference) };
    inline SetSecurityPreferenceResponseBody& setSecurityPreference(const SetSecurityPreferenceResponseBodySecurityPreference & securityPreference) { DARABONBA_PTR_SET_VALUE(securityPreference_, securityPreference) };
    inline SetSecurityPreferenceResponseBody& setSecurityPreference(SetSecurityPreferenceResponseBodySecurityPreference && securityPreference) { DARABONBA_PTR_SET_RVALUE(securityPreference_, securityPreference) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of security preferences.
    std::shared_ptr<SetSecurityPreferenceResponseBodySecurityPreference> securityPreference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
