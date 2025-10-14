// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDHEADERS_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/StartCloudRecordHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StartCloudRecordHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    StartCloudRecordHeaders() = default ;
    StartCloudRecordHeaders(const StartCloudRecordHeaders &) = default ;
    StartCloudRecordHeaders(StartCloudRecordHeaders &&) = default ;
    StartCloudRecordHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordHeaders() = default ;
    StartCloudRecordHeaders& operator=(const StartCloudRecordHeaders &) = default ;
    StartCloudRecordHeaders& operator=(StartCloudRecordHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && return this->accountContext_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline StartCloudRecordHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline StartCloudRecordHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const StartCloudRecordHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, StartCloudRecordHeadersAccountContext) };
    inline StartCloudRecordHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, StartCloudRecordHeadersAccountContext) };
    inline StartCloudRecordHeaders& setAccountContext(const StartCloudRecordHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline StartCloudRecordHeaders& setAccountContext(StartCloudRecordHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<StartCloudRecordHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
