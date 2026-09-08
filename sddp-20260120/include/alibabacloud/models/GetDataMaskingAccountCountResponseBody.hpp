// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAMASKINGACCOUNTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAMASKINGACCOUNTCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class GetDataMaskingAccountCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataMaskingAccountCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountCount, accountCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataMaskingAccountCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountCount, accountCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataMaskingAccountCountResponseBody() = default ;
    GetDataMaskingAccountCountResponseBody(const GetDataMaskingAccountCountResponseBody &) = default ;
    GetDataMaskingAccountCountResponseBody(GetDataMaskingAccountCountResponseBody &&) = default ;
    GetDataMaskingAccountCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataMaskingAccountCountResponseBody() = default ;
    GetDataMaskingAccountCountResponseBody& operator=(const GetDataMaskingAccountCountResponseBody &) = default ;
    GetDataMaskingAccountCountResponseBody& operator=(GetDataMaskingAccountCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountCount& obj) { 
        DARABONBA_PTR_TO_JSON(FullAccessCount, fullAccessCount_);
        DARABONBA_PTR_TO_JSON(NoneAccessCount, noneAccessCount_);
        DARABONBA_PTR_TO_JSON(RestrictedAccessCount, restrictedAccessCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, AccountCount& obj) { 
        DARABONBA_PTR_FROM_JSON(FullAccessCount, fullAccessCount_);
        DARABONBA_PTR_FROM_JSON(NoneAccessCount, noneAccessCount_);
        DARABONBA_PTR_FROM_JSON(RestrictedAccessCount, restrictedAccessCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      AccountCount() = default ;
      AccountCount(const AccountCount &) = default ;
      AccountCount(AccountCount &&) = default ;
      AccountCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountCount() = default ;
      AccountCount& operator=(const AccountCount &) = default ;
      AccountCount& operator=(AccountCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fullAccessCount_ == nullptr
        && this->noneAccessCount_ == nullptr && this->restrictedAccessCount_ == nullptr && this->totalCount_ == nullptr; };
      // fullAccessCount Field Functions 
      bool hasFullAccessCount() const { return this->fullAccessCount_ != nullptr;};
      void deleteFullAccessCount() { this->fullAccessCount_ = nullptr;};
      inline int64_t getFullAccessCount() const { DARABONBA_PTR_GET_DEFAULT(fullAccessCount_, 0L) };
      inline AccountCount& setFullAccessCount(int64_t fullAccessCount) { DARABONBA_PTR_SET_VALUE(fullAccessCount_, fullAccessCount) };


      // noneAccessCount Field Functions 
      bool hasNoneAccessCount() const { return this->noneAccessCount_ != nullptr;};
      void deleteNoneAccessCount() { this->noneAccessCount_ = nullptr;};
      inline int64_t getNoneAccessCount() const { DARABONBA_PTR_GET_DEFAULT(noneAccessCount_, 0L) };
      inline AccountCount& setNoneAccessCount(int64_t noneAccessCount) { DARABONBA_PTR_SET_VALUE(noneAccessCount_, noneAccessCount) };


      // restrictedAccessCount Field Functions 
      bool hasRestrictedAccessCount() const { return this->restrictedAccessCount_ != nullptr;};
      void deleteRestrictedAccessCount() { this->restrictedAccessCount_ = nullptr;};
      inline int64_t getRestrictedAccessCount() const { DARABONBA_PTR_GET_DEFAULT(restrictedAccessCount_, 0L) };
      inline AccountCount& setRestrictedAccessCount(int64_t restrictedAccessCount) { DARABONBA_PTR_SET_VALUE(restrictedAccessCount_, restrictedAccessCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline AccountCount& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int64_t> fullAccessCount_ {};
      shared_ptr<int64_t> noneAccessCount_ {};
      shared_ptr<int64_t> restrictedAccessCount_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accountCount_ == nullptr
        && this->requestId_ == nullptr; };
    // accountCount Field Functions 
    bool hasAccountCount() const { return this->accountCount_ != nullptr;};
    void deleteAccountCount() { this->accountCount_ = nullptr;};
    inline const GetDataMaskingAccountCountResponseBody::AccountCount & getAccountCount() const { DARABONBA_PTR_GET_CONST(accountCount_, GetDataMaskingAccountCountResponseBody::AccountCount) };
    inline GetDataMaskingAccountCountResponseBody::AccountCount getAccountCount() { DARABONBA_PTR_GET(accountCount_, GetDataMaskingAccountCountResponseBody::AccountCount) };
    inline GetDataMaskingAccountCountResponseBody& setAccountCount(const GetDataMaskingAccountCountResponseBody::AccountCount & accountCount) { DARABONBA_PTR_SET_VALUE(accountCount_, accountCount) };
    inline GetDataMaskingAccountCountResponseBody& setAccountCount(GetDataMaskingAccountCountResponseBody::AccountCount && accountCount) { DARABONBA_PTR_SET_RVALUE(accountCount_, accountCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataMaskingAccountCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetDataMaskingAccountCountResponseBody::AccountCount> accountCount_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
