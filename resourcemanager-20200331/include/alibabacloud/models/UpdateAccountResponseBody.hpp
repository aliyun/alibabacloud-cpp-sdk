// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAccountResponseBodyAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateAccountResponseBody() = default ;
    UpdateAccountResponseBody(const UpdateAccountResponseBody &) = default ;
    UpdateAccountResponseBody(UpdateAccountResponseBody &&) = default ;
    UpdateAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountResponseBody() = default ;
    UpdateAccountResponseBody& operator=(const UpdateAccountResponseBody &) = default ;
    UpdateAccountResponseBody& operator=(UpdateAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->requestId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const UpdateAccountResponseBodyAccount & account() const { DARABONBA_PTR_GET_CONST(account_, UpdateAccountResponseBodyAccount) };
    inline UpdateAccountResponseBodyAccount account() { DARABONBA_PTR_GET(account_, UpdateAccountResponseBodyAccount) };
    inline UpdateAccountResponseBody& setAccount(const UpdateAccountResponseBodyAccount & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline UpdateAccountResponseBody& setAccount(UpdateAccountResponseBodyAccount && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the member.
    std::shared_ptr<UpdateAccountResponseBodyAccount> account_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
