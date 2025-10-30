// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENROLLACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENROLLACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class EnrollAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrollAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnrollAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnrollAccountResponseBody() = default ;
    EnrollAccountResponseBody(const EnrollAccountResponseBody &) = default ;
    EnrollAccountResponseBody(EnrollAccountResponseBody &&) = default ;
    EnrollAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrollAccountResponseBody() = default ;
    EnrollAccountResponseBody& operator=(const EnrollAccountResponseBody &) = default ;
    EnrollAccountResponseBody& operator=(EnrollAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountUid_ == nullptr
        && return this->requestId_ == nullptr; };
    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t accountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline EnrollAccountResponseBody& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnrollAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The account ID.
    std::shared_ptr<int64_t> accountUid_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
