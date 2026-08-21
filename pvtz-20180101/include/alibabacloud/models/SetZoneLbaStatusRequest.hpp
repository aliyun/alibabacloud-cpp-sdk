// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETZONELBASTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETZONELBASTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class SetZoneLbaStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetZoneLbaStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Open, open_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, SetZoneLbaStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Open, open_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    SetZoneLbaStatusRequest() = default ;
    SetZoneLbaStatusRequest(const SetZoneLbaStatusRequest &) = default ;
    SetZoneLbaStatusRequest(SetZoneLbaStatusRequest &&) = default ;
    SetZoneLbaStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetZoneLbaStatusRequest() = default ;
    SetZoneLbaStatusRequest& operator=(const SetZoneLbaStatusRequest &) = default ;
    SetZoneLbaStatusRequest& operator=(SetZoneLbaStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->lang_ == nullptr && this->line_ == nullptr && this->open_ == nullptr && this->rr_ == nullptr && this->type_ == nullptr
        && this->userClientIp_ == nullptr && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetZoneLbaStatusRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetZoneLbaStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline SetZoneLbaStatusRequest& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // open Field Functions 
    bool hasOpen() const { return this->open_ != nullptr;};
    void deleteOpen() { this->open_ = nullptr;};
    inline bool getOpen() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
    inline SetZoneLbaStatusRequest& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline SetZoneLbaStatusRequest& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SetZoneLbaStatusRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SetZoneLbaStatusRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline SetZoneLbaStatusRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see How to ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The resolution line.
    // 
    // This parameter is required.
    shared_ptr<string> line_ {};
    // Specifies whether to enable the weight configuration. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    // 
    // This parameter is required.
    shared_ptr<bool> open_ {};
    // The hostname record.
    // 
    // This parameter is required.
    shared_ptr<string> rr_ {};
    // The DNS record type. Currently, only **A** and **AAAA** record types support the weight toggle.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The IP address of the user.
    shared_ptr<string> userClientIp_ {};
    // Zone ID。
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
