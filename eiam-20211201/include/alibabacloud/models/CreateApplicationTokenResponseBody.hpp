// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApplicationTokenResponseBodyApplicationTokens.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTokens, applicationTokens_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTokens, applicationTokens_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationTokenResponseBody() = default ;
    CreateApplicationTokenResponseBody(const CreateApplicationTokenResponseBody &) = default ;
    CreateApplicationTokenResponseBody(CreateApplicationTokenResponseBody &&) = default ;
    CreateApplicationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationTokenResponseBody() = default ;
    CreateApplicationTokenResponseBody& operator=(const CreateApplicationTokenResponseBody &) = default ;
    CreateApplicationTokenResponseBody& operator=(CreateApplicationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationTokens_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationTokens Field Functions 
    bool hasApplicationTokens() const { return this->applicationTokens_ != nullptr;};
    void deleteApplicationTokens() { this->applicationTokens_ = nullptr;};
    inline const CreateApplicationTokenResponseBodyApplicationTokens & applicationTokens() const { DARABONBA_PTR_GET_CONST(applicationTokens_, CreateApplicationTokenResponseBodyApplicationTokens) };
    inline CreateApplicationTokenResponseBodyApplicationTokens applicationTokens() { DARABONBA_PTR_GET(applicationTokens_, CreateApplicationTokenResponseBodyApplicationTokens) };
    inline CreateApplicationTokenResponseBody& setApplicationTokens(const CreateApplicationTokenResponseBodyApplicationTokens & applicationTokens) { DARABONBA_PTR_SET_VALUE(applicationTokens_, applicationTokens) };
    inline CreateApplicationTokenResponseBody& setApplicationTokens(CreateApplicationTokenResponseBodyApplicationTokens && applicationTokens) { DARABONBA_PTR_SET_RVALUE(applicationTokens_, applicationTokens) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateApplicationTokenResponseBodyApplicationTokens> applicationTokens_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
