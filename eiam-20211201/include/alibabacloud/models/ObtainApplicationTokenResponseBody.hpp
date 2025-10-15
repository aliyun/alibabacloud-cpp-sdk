// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINAPPLICATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OBTAINAPPLICATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ObtainApplicationTokenResponseBodyApplicationToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainApplicationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainApplicationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationToken, applicationToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainApplicationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationToken, applicationToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ObtainApplicationTokenResponseBody() = default ;
    ObtainApplicationTokenResponseBody(const ObtainApplicationTokenResponseBody &) = default ;
    ObtainApplicationTokenResponseBody(ObtainApplicationTokenResponseBody &&) = default ;
    ObtainApplicationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainApplicationTokenResponseBody() = default ;
    ObtainApplicationTokenResponseBody& operator=(const ObtainApplicationTokenResponseBody &) = default ;
    ObtainApplicationTokenResponseBody& operator=(ObtainApplicationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationToken_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationToken Field Functions 
    bool hasApplicationToken() const { return this->applicationToken_ != nullptr;};
    void deleteApplicationToken() { this->applicationToken_ = nullptr;};
    inline const ObtainApplicationTokenResponseBodyApplicationToken & applicationToken() const { DARABONBA_PTR_GET_CONST(applicationToken_, ObtainApplicationTokenResponseBodyApplicationToken) };
    inline ObtainApplicationTokenResponseBodyApplicationToken applicationToken() { DARABONBA_PTR_GET(applicationToken_, ObtainApplicationTokenResponseBodyApplicationToken) };
    inline ObtainApplicationTokenResponseBody& setApplicationToken(const ObtainApplicationTokenResponseBodyApplicationToken & applicationToken) { DARABONBA_PTR_SET_VALUE(applicationToken_, applicationToken) };
    inline ObtainApplicationTokenResponseBody& setApplicationToken(ObtainApplicationTokenResponseBodyApplicationToken && applicationToken) { DARABONBA_PTR_SET_RVALUE(applicationToken_, applicationToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ObtainApplicationTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ObtainApplicationTokenResponseBodyApplicationToken> applicationToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
