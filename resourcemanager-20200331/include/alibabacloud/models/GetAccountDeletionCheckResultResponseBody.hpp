// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetAccountDeletionCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDeletionCheckResultInfo, accountDeletionCheckResultInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDeletionCheckResultInfo, accountDeletionCheckResultInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountDeletionCheckResultResponseBody() = default ;
    GetAccountDeletionCheckResultResponseBody(const GetAccountDeletionCheckResultResponseBody &) = default ;
    GetAccountDeletionCheckResultResponseBody(GetAccountDeletionCheckResultResponseBody &&) = default ;
    GetAccountDeletionCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionCheckResultResponseBody() = default ;
    GetAccountDeletionCheckResultResponseBody& operator=(const GetAccountDeletionCheckResultResponseBody &) = default ;
    GetAccountDeletionCheckResultResponseBody& operator=(GetAccountDeletionCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountDeletionCheckResultInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // accountDeletionCheckResultInfo Field Functions 
    bool hasAccountDeletionCheckResultInfo() const { return this->accountDeletionCheckResultInfo_ != nullptr;};
    void deleteAccountDeletionCheckResultInfo() { this->accountDeletionCheckResultInfo_ = nullptr;};
    inline const GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo & accountDeletionCheckResultInfo() const { DARABONBA_PTR_GET_CONST(accountDeletionCheckResultInfo_, GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo) };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo accountDeletionCheckResultInfo() { DARABONBA_PTR_GET(accountDeletionCheckResultInfo_, GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo) };
    inline GetAccountDeletionCheckResultResponseBody& setAccountDeletionCheckResultInfo(const GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo & accountDeletionCheckResultInfo) { DARABONBA_PTR_SET_VALUE(accountDeletionCheckResultInfo_, accountDeletionCheckResultInfo) };
    inline GetAccountDeletionCheckResultResponseBody& setAccountDeletionCheckResultInfo(GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo && accountDeletionCheckResultInfo) { DARABONBA_PTR_SET_RVALUE(accountDeletionCheckResultInfo_, accountDeletionCheckResultInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountDeletionCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of the deletion check for the member.
    std::shared_ptr<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo> accountDeletionCheckResultInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
