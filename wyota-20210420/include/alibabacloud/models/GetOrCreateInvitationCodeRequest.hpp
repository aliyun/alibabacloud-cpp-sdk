// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORCREATEINVITATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORCREATEINVITATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class GetOrCreateInvitationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrCreateInvitationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireDays, expireDays_);
      DARABONBA_PTR_TO_JSON(ExpireMinutes, expireMinutes_);
      DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrCreateInvitationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireDays, expireDays_);
      DARABONBA_PTR_FROM_JSON(ExpireMinutes, expireMinutes_);
      DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetOrCreateInvitationCodeRequest() = default ;
    GetOrCreateInvitationCodeRequest(const GetOrCreateInvitationCodeRequest &) = default ;
    GetOrCreateInvitationCodeRequest(GetOrCreateInvitationCodeRequest &&) = default ;
    GetOrCreateInvitationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrCreateInvitationCodeRequest() = default ;
    GetOrCreateInvitationCodeRequest& operator=(const GetOrCreateInvitationCodeRequest &) = default ;
    GetOrCreateInvitationCodeRequest& operator=(GetOrCreateInvitationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireDays_ == nullptr
        && this->expireMinutes_ == nullptr && this->terminalGroupId_ == nullptr && this->type_ == nullptr; };
    // expireDays Field Functions 
    bool hasExpireDays() const { return this->expireDays_ != nullptr;};
    void deleteExpireDays() { this->expireDays_ = nullptr;};
    inline int32_t getExpireDays() const { DARABONBA_PTR_GET_DEFAULT(expireDays_, 0) };
    inline GetOrCreateInvitationCodeRequest& setExpireDays(int32_t expireDays) { DARABONBA_PTR_SET_VALUE(expireDays_, expireDays) };


    // expireMinutes Field Functions 
    bool hasExpireMinutes() const { return this->expireMinutes_ != nullptr;};
    void deleteExpireMinutes() { this->expireMinutes_ = nullptr;};
    inline int32_t getExpireMinutes() const { DARABONBA_PTR_GET_DEFAULT(expireMinutes_, 0) };
    inline GetOrCreateInvitationCodeRequest& setExpireMinutes(int32_t expireMinutes) { DARABONBA_PTR_SET_VALUE(expireMinutes_, expireMinutes) };


    // terminalGroupId Field Functions 
    bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
    void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
    inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
    inline GetOrCreateInvitationCodeRequest& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetOrCreateInvitationCodeRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int32_t> expireDays_ {};
    shared_ptr<int32_t> expireMinutes_ {};
    shared_ptr<string> terminalGroupId_ {};
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
