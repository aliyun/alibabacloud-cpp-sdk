// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCloudAccountResponseBodyAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateCloudAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudAccountResponseBody() = default ;
    CreateCloudAccountResponseBody(const CreateCloudAccountResponseBody &) = default ;
    CreateCloudAccountResponseBody(CreateCloudAccountResponseBody &&) = default ;
    CreateCloudAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudAccountResponseBody() = default ;
    CreateCloudAccountResponseBody& operator=(const CreateCloudAccountResponseBody &) = default ;
    CreateCloudAccountResponseBody& operator=(CreateCloudAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->requestId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const CreateCloudAccountResponseBodyAccount & account() const { DARABONBA_PTR_GET_CONST(account_, CreateCloudAccountResponseBodyAccount) };
    inline CreateCloudAccountResponseBodyAccount account() { DARABONBA_PTR_GET(account_, CreateCloudAccountResponseBodyAccount) };
    inline CreateCloudAccountResponseBody& setAccount(const CreateCloudAccountResponseBodyAccount & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline CreateCloudAccountResponseBody& setAccount(CreateCloudAccountResponseBodyAccount && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the member account.
    std::shared_ptr<CreateCloudAccountResponseBodyAccount> account_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
