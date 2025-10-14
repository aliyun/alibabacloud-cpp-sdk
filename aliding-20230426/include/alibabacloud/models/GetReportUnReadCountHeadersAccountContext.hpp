// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTUNREADCOUNTHEADERSACCOUNTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTUNREADCOUNTHEADERSACCOUNTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportUnReadCountHeadersAccountContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportUnReadCountHeadersAccountContext& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportUnReadCountHeadersAccountContext& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
    };
    GetReportUnReadCountHeadersAccountContext() = default ;
    GetReportUnReadCountHeadersAccountContext(const GetReportUnReadCountHeadersAccountContext &) = default ;
    GetReportUnReadCountHeadersAccountContext(GetReportUnReadCountHeadersAccountContext &&) = default ;
    GetReportUnReadCountHeadersAccountContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportUnReadCountHeadersAccountContext() = default ;
    GetReportUnReadCountHeadersAccountContext& operator=(const GetReportUnReadCountHeadersAccountContext &) = default ;
    GetReportUnReadCountHeadersAccountContext& operator=(GetReportUnReadCountHeadersAccountContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetReportUnReadCountHeadersAccountContext& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
