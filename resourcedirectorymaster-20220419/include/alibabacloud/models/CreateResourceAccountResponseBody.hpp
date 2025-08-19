// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateResourceAccountResponseBodyAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class CreateResourceAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateResourceAccountResponseBody() = default ;
    CreateResourceAccountResponseBody(const CreateResourceAccountResponseBody &) = default ;
    CreateResourceAccountResponseBody(CreateResourceAccountResponseBody &&) = default ;
    CreateResourceAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceAccountResponseBody() = default ;
    CreateResourceAccountResponseBody& operator=(const CreateResourceAccountResponseBody &) = default ;
    CreateResourceAccountResponseBody& operator=(CreateResourceAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->requestId_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const CreateResourceAccountResponseBodyAccount & account() const { DARABONBA_PTR_GET_CONST(account_, CreateResourceAccountResponseBodyAccount) };
    inline CreateResourceAccountResponseBodyAccount account() { DARABONBA_PTR_GET(account_, CreateResourceAccountResponseBodyAccount) };
    inline CreateResourceAccountResponseBody& setAccount(const CreateResourceAccountResponseBodyAccount & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline CreateResourceAccountResponseBody& setAccount(CreateResourceAccountResponseBodyAccount && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the member.
    std::shared_ptr<CreateResourceAccountResponseBodyAccount> account_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
