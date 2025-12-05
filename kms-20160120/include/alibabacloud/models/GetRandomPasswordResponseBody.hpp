// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANDOMPASSWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRANDOMPASSWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetRandomPasswordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRandomPasswordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RandomPassword, randomPassword_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRandomPasswordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RandomPassword, randomPassword_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRandomPasswordResponseBody() = default ;
    GetRandomPasswordResponseBody(const GetRandomPasswordResponseBody &) = default ;
    GetRandomPasswordResponseBody(GetRandomPasswordResponseBody &&) = default ;
    GetRandomPasswordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRandomPasswordResponseBody() = default ;
    GetRandomPasswordResponseBody& operator=(const GetRandomPasswordResponseBody &) = default ;
    GetRandomPasswordResponseBody& operator=(GetRandomPasswordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->randomPassword_ == nullptr
        && return this->requestId_ == nullptr; };
    // randomPassword Field Functions 
    bool hasRandomPassword() const { return this->randomPassword_ != nullptr;};
    void deleteRandomPassword() { this->randomPassword_ = nullptr;};
    inline string randomPassword() const { DARABONBA_PTR_GET_DEFAULT(randomPassword_, "") };
    inline GetRandomPasswordResponseBody& setRandomPassword(string randomPassword) { DARABONBA_PTR_SET_VALUE(randomPassword_, randomPassword) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRandomPasswordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The generated random password.
    std::shared_ptr<string> randomPassword_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
