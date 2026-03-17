// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(aiLogContextJson, aiLogContextJson_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(aiLogContextJson, aiLogContextJson_);
    };
    GetAssistantCapabilityHeaders() = default ;
    GetAssistantCapabilityHeaders(const GetAssistantCapabilityHeaders &) = default ;
    GetAssistantCapabilityHeaders(GetAssistantCapabilityHeaders &&) = default ;
    GetAssistantCapabilityHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityHeaders() = default ;
    GetAssistantCapabilityHeaders& operator=(const GetAssistantCapabilityHeaders &) = default ;
    GetAssistantCapabilityHeaders& operator=(GetAssistantCapabilityHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->accountId_ == nullptr && this->aiLogContextJson_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline GetAssistantCapabilityHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetAssistantCapabilityHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetAssistantCapabilityHeaders& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // aiLogContextJson Field Functions 
    bool hasAiLogContextJson() const { return this->aiLogContextJson_ != nullptr;};
    void deleteAiLogContextJson() { this->aiLogContextJson_ = nullptr;};
    inline string getAiLogContextJson() const { DARABONBA_PTR_GET_DEFAULT(aiLogContextJson_, "") };
    inline GetAssistantCapabilityHeaders& setAiLogContextJson(string aiLogContextJson) { DARABONBA_PTR_SET_VALUE(aiLogContextJson_, aiLogContextJson) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    shared_ptr<string> accountId_ {};
    shared_ptr<string> aiLogContextJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
