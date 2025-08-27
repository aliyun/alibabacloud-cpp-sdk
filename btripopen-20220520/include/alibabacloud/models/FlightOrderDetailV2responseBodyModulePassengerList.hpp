// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEPASSENGERLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEPASSENGERLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModulePassengerListCredential.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModulePassengerListCredentials.hpp>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModulePassengerListTickets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBodyModulePassengerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBodyModulePassengerList& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(country, country_);
      DARABONBA_PTR_TO_JSON(country_code, countryCode_);
      DARABONBA_PTR_TO_JSON(credential, credential_);
      DARABONBA_PTR_TO_JSON(credentials, credentials_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(en_first_name, enFirstName_);
      DARABONBA_PTR_TO_JSON(en_last_name, enLastName_);
      DARABONBA_PTR_TO_JSON(english_name, englishName_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(is_complete, isComplete_);
      DARABONBA_PTR_TO_JSON(is_frequently, isFrequently_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
      DARABONBA_PTR_TO_JSON(mobile_phone_number, mobilePhoneNumber_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(oneself, oneself_);
      DARABONBA_PTR_TO_JSON(order_name, orderName_);
      DARABONBA_PTR_TO_JSON(out_passenger_id, outPassengerId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(sheng_pi_pinyin, shengPiPinyin_);
      DARABONBA_PTR_TO_JSON(ticket_nos, ticketNos_);
      DARABONBA_PTR_TO_JSON(tickets, tickets_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBodyModulePassengerList& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(country, country_);
      DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
      DARABONBA_PTR_FROM_JSON(credential, credential_);
      DARABONBA_PTR_FROM_JSON(credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(en_first_name, enFirstName_);
      DARABONBA_PTR_FROM_JSON(en_last_name, enLastName_);
      DARABONBA_PTR_FROM_JSON(english_name, englishName_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(is_complete, isComplete_);
      DARABONBA_PTR_FROM_JSON(is_frequently, isFrequently_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
      DARABONBA_PTR_FROM_JSON(mobile_phone_number, mobilePhoneNumber_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(oneself, oneself_);
      DARABONBA_PTR_FROM_JSON(order_name, orderName_);
      DARABONBA_PTR_FROM_JSON(out_passenger_id, outPassengerId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(sheng_pi_pinyin, shengPiPinyin_);
      DARABONBA_PTR_FROM_JSON(ticket_nos, ticketNos_);
      DARABONBA_PTR_FROM_JSON(tickets, tickets_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightOrderDetailV2ResponseBodyModulePassengerList() = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerList(const FlightOrderDetailV2ResponseBodyModulePassengerList &) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerList(FlightOrderDetailV2ResponseBodyModulePassengerList &&) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBodyModulePassengerList() = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerList& operator=(const FlightOrderDetailV2ResponseBodyModulePassengerList &) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerList& operator=(FlightOrderDetailV2ResponseBodyModulePassengerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthday_ != nullptr
        && this->btripUserId_ != nullptr && this->code_ != nullptr && this->country_ != nullptr && this->countryCode_ != nullptr && this->credential_ != nullptr
        && this->credentials_ != nullptr && this->email_ != nullptr && this->enFirstName_ != nullptr && this->enLastName_ != nullptr && this->englishName_ != nullptr
        && this->gender_ != nullptr && this->id_ != nullptr && this->isComplete_ != nullptr && this->isFrequently_ != nullptr && this->memo_ != nullptr
        && this->mobileCountryCode_ != nullptr && this->mobilePhoneNumber_ != nullptr && this->name_ != nullptr && this->oneself_ != nullptr && this->orderName_ != nullptr
        && this->outPassengerId_ != nullptr && this->phone_ != nullptr && this->shengPiPinyin_ != nullptr && this->ticketNos_ != nullptr && this->tickets_ != nullptr
        && this->type_ != nullptr && this->userId_ != nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline const Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredential & credential() const { DARABONBA_PTR_GET_CONST(credential_, Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredential) };
    inline Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredential credential() { DARABONBA_PTR_GET(credential_, Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredential) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setCredential(const Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setCredential(Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredentials> & credentials() const { DARABONBA_PTR_GET_CONST(credentials_, vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredentials>) };
    inline vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredentials> credentials() { DARABONBA_PTR_GET(credentials_, vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredentials>) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setCredentials(const vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredentials> & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setCredentials(vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredentials> && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // enFirstName Field Functions 
    bool hasEnFirstName() const { return this->enFirstName_ != nullptr;};
    void deleteEnFirstName() { this->enFirstName_ = nullptr;};
    inline string enFirstName() const { DARABONBA_PTR_GET_DEFAULT(enFirstName_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setEnFirstName(string enFirstName) { DARABONBA_PTR_SET_VALUE(enFirstName_, enFirstName) };


    // enLastName Field Functions 
    bool hasEnLastName() const { return this->enLastName_ != nullptr;};
    void deleteEnLastName() { this->enLastName_ = nullptr;};
    inline string enLastName() const { DARABONBA_PTR_GET_DEFAULT(enLastName_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setEnLastName(string enLastName) { DARABONBA_PTR_SET_VALUE(enLastName_, enLastName) };


    // englishName Field Functions 
    bool hasEnglishName() const { return this->englishName_ != nullptr;};
    void deleteEnglishName() { this->englishName_ = nullptr;};
    inline string englishName() const { DARABONBA_PTR_GET_DEFAULT(englishName_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setEnglishName(string englishName) { DARABONBA_PTR_SET_VALUE(englishName_, englishName) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline int32_t gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isComplete Field Functions 
    bool hasIsComplete() const { return this->isComplete_ != nullptr;};
    void deleteIsComplete() { this->isComplete_ = nullptr;};
    inline bool isComplete() const { DARABONBA_PTR_GET_DEFAULT(isComplete_, false) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setIsComplete(bool isComplete) { DARABONBA_PTR_SET_VALUE(isComplete_, isComplete) };


    // isFrequently Field Functions 
    bool hasIsFrequently() const { return this->isFrequently_ != nullptr;};
    void deleteIsFrequently() { this->isFrequently_ = nullptr;};
    inline bool isFrequently() const { DARABONBA_PTR_GET_DEFAULT(isFrequently_, false) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setIsFrequently(bool isFrequently) { DARABONBA_PTR_SET_VALUE(isFrequently_, isFrequently) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // mobileCountryCode Field Functions 
    bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
    void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
    inline string mobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


    // mobilePhoneNumber Field Functions 
    bool hasMobilePhoneNumber() const { return this->mobilePhoneNumber_ != nullptr;};
    void deleteMobilePhoneNumber() { this->mobilePhoneNumber_ = nullptr;};
    inline string mobilePhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNumber_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setMobilePhoneNumber(string mobilePhoneNumber) { DARABONBA_PTR_SET_VALUE(mobilePhoneNumber_, mobilePhoneNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oneself Field Functions 
    bool hasOneself() const { return this->oneself_ != nullptr;};
    void deleteOneself() { this->oneself_ = nullptr;};
    inline bool oneself() const { DARABONBA_PTR_GET_DEFAULT(oneself_, false) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setOneself(bool oneself) { DARABONBA_PTR_SET_VALUE(oneself_, oneself) };


    // orderName Field Functions 
    bool hasOrderName() const { return this->orderName_ != nullptr;};
    void deleteOrderName() { this->orderName_ = nullptr;};
    inline string orderName() const { DARABONBA_PTR_GET_DEFAULT(orderName_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setOrderName(string orderName) { DARABONBA_PTR_SET_VALUE(orderName_, orderName) };


    // outPassengerId Field Functions 
    bool hasOutPassengerId() const { return this->outPassengerId_ != nullptr;};
    void deleteOutPassengerId() { this->outPassengerId_ = nullptr;};
    inline string outPassengerId() const { DARABONBA_PTR_GET_DEFAULT(outPassengerId_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setOutPassengerId(string outPassengerId) { DARABONBA_PTR_SET_VALUE(outPassengerId_, outPassengerId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // shengPiPinyin Field Functions 
    bool hasShengPiPinyin() const { return this->shengPiPinyin_ != nullptr;};
    void deleteShengPiPinyin() { this->shengPiPinyin_ = nullptr;};
    inline string shengPiPinyin() const { DARABONBA_PTR_GET_DEFAULT(shengPiPinyin_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setShengPiPinyin(string shengPiPinyin) { DARABONBA_PTR_SET_VALUE(shengPiPinyin_, shengPiPinyin) };


    // ticketNos Field Functions 
    bool hasTicketNos() const { return this->ticketNos_ != nullptr;};
    void deleteTicketNos() { this->ticketNos_ = nullptr;};
    inline const vector<string> & ticketNos() const { DARABONBA_PTR_GET_CONST(ticketNos_, vector<string>) };
    inline vector<string> ticketNos() { DARABONBA_PTR_GET(ticketNos_, vector<string>) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setTicketNos(const vector<string> & ticketNos) { DARABONBA_PTR_SET_VALUE(ticketNos_, ticketNos) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setTicketNos(vector<string> && ticketNos) { DARABONBA_PTR_SET_RVALUE(ticketNos_, ticketNos) };


    // tickets Field Functions 
    bool hasTickets() const { return this->tickets_ != nullptr;};
    void deleteTickets() { this->tickets_ = nullptr;};
    inline const vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTickets> & tickets() const { DARABONBA_PTR_GET_CONST(tickets_, vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTickets>) };
    inline vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTickets> tickets() { DARABONBA_PTR_GET(tickets_, vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTickets>) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setTickets(const vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTickets> & tickets) { DARABONBA_PTR_SET_VALUE(tickets_, tickets) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setTickets(vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTickets> && tickets) { DARABONBA_PTR_SET_RVALUE(tickets_, tickets) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredential> credential_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListCredentials>> credentials_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> enFirstName_ = nullptr;
    std::shared_ptr<string> enLastName_ = nullptr;
    std::shared_ptr<string> englishName_ = nullptr;
    std::shared_ptr<int32_t> gender_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isComplete_ = nullptr;
    std::shared_ptr<bool> isFrequently_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<string> mobileCountryCode_ = nullptr;
    std::shared_ptr<string> mobilePhoneNumber_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> oneself_ = nullptr;
    std::shared_ptr<string> orderName_ = nullptr;
    std::shared_ptr<string> outPassengerId_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> shengPiPinyin_ = nullptr;
    std::shared_ptr<vector<string>> ticketNos_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTickets>> tickets_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
