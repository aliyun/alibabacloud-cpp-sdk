// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHostAccountResponseBodyHostAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccount, hostAccount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccount, hostAccount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHostAccountResponseBody() = default ;
    GetHostAccountResponseBody(const GetHostAccountResponseBody &) = default ;
    GetHostAccountResponseBody(GetHostAccountResponseBody &&) = default ;
    GetHostAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostAccountResponseBody() = default ;
    GetHostAccountResponseBody& operator=(const GetHostAccountResponseBody &) = default ;
    GetHostAccountResponseBody& operator=(GetHostAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostAccount_ != nullptr
        && this->requestId_ != nullptr; };
    // hostAccount Field Functions 
    bool hasHostAccount() const { return this->hostAccount_ != nullptr;};
    void deleteHostAccount() { this->hostAccount_ = nullptr;};
    inline const GetHostAccountResponseBodyHostAccount & hostAccount() const { DARABONBA_PTR_GET_CONST(hostAccount_, GetHostAccountResponseBodyHostAccount) };
    inline GetHostAccountResponseBodyHostAccount hostAccount() { DARABONBA_PTR_GET(hostAccount_, GetHostAccountResponseBodyHostAccount) };
    inline GetHostAccountResponseBody& setHostAccount(const GetHostAccountResponseBodyHostAccount & hostAccount) { DARABONBA_PTR_SET_VALUE(hostAccount_, hostAccount) };
    inline GetHostAccountResponseBody& setHostAccount(GetHostAccountResponseBodyHostAccount && hostAccount) { DARABONBA_PTR_SET_RVALUE(hostAccount_, hostAccount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the host account that was queried.
    std::shared_ptr<GetHostAccountResponseBodyHostAccount> hostAccount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
