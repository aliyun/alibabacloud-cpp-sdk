// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSecurityPreferenceResponseBodySecurityPreference.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSecurityPreferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityPreferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPreference, securityPreference_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityPreferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPreference, securityPreference_);
    };
    GetSecurityPreferenceResponseBody() = default ;
    GetSecurityPreferenceResponseBody(const GetSecurityPreferenceResponseBody &) = default ;
    GetSecurityPreferenceResponseBody(GetSecurityPreferenceResponseBody &&) = default ;
    GetSecurityPreferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityPreferenceResponseBody() = default ;
    GetSecurityPreferenceResponseBody& operator=(const GetSecurityPreferenceResponseBody &) = default ;
    GetSecurityPreferenceResponseBody& operator=(GetSecurityPreferenceResponseBody &&) = default ;
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
    inline GetSecurityPreferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPreference Field Functions 
    bool hasSecurityPreference() const { return this->securityPreference_ != nullptr;};
    void deleteSecurityPreference() { this->securityPreference_ = nullptr;};
    inline const GetSecurityPreferenceResponseBodySecurityPreference & securityPreference() const { DARABONBA_PTR_GET_CONST(securityPreference_, GetSecurityPreferenceResponseBodySecurityPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference securityPreference() { DARABONBA_PTR_GET(securityPreference_, GetSecurityPreferenceResponseBodySecurityPreference) };
    inline GetSecurityPreferenceResponseBody& setSecurityPreference(const GetSecurityPreferenceResponseBodySecurityPreference & securityPreference) { DARABONBA_PTR_SET_VALUE(securityPreference_, securityPreference) };
    inline GetSecurityPreferenceResponseBody& setSecurityPreference(GetSecurityPreferenceResponseBodySecurityPreference && securityPreference) { DARABONBA_PTR_SET_RVALUE(securityPreference_, securityPreference) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of security preferences.
    std::shared_ptr<GetSecurityPreferenceResponseBodySecurityPreference> securityPreference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
