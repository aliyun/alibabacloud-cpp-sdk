// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMINATEINSTANCEHEADERSACCOUNTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_TERMINATEINSTANCEHEADERSACCOUNTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class TerminateInstanceHeadersAccountContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TerminateInstanceHeadersAccountContext& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, TerminateInstanceHeadersAccountContext& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
    };
    TerminateInstanceHeadersAccountContext() = default ;
    TerminateInstanceHeadersAccountContext(const TerminateInstanceHeadersAccountContext &) = default ;
    TerminateInstanceHeadersAccountContext(TerminateInstanceHeadersAccountContext &&) = default ;
    TerminateInstanceHeadersAccountContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TerminateInstanceHeadersAccountContext() = default ;
    TerminateInstanceHeadersAccountContext& operator=(const TerminateInstanceHeadersAccountContext &) = default ;
    TerminateInstanceHeadersAccountContext& operator=(TerminateInstanceHeadersAccountContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline TerminateInstanceHeadersAccountContext& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
