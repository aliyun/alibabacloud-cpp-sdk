// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTROWSBEFOREHEADERSACCOUNTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_INSERTROWSBEFOREHEADERSACCOUNTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertRowsBeforeHeadersAccountContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertRowsBeforeHeadersAccountContext& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertRowsBeforeHeadersAccountContext& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
    };
    InsertRowsBeforeHeadersAccountContext() = default ;
    InsertRowsBeforeHeadersAccountContext(const InsertRowsBeforeHeadersAccountContext &) = default ;
    InsertRowsBeforeHeadersAccountContext(InsertRowsBeforeHeadersAccountContext &&) = default ;
    InsertRowsBeforeHeadersAccountContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertRowsBeforeHeadersAccountContext() = default ;
    InsertRowsBeforeHeadersAccountContext& operator=(const InsertRowsBeforeHeadersAccountContext &) = default ;
    InsertRowsBeforeHeadersAccountContext& operator=(InsertRowsBeforeHeadersAccountContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline InsertRowsBeforeHeadersAccountContext& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
