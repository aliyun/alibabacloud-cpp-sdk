// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathEventDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathEventDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathEventDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    GetAttackPathEventDetailRequest() = default ;
    GetAttackPathEventDetailRequest(const GetAttackPathEventDetailRequest &) = default ;
    GetAttackPathEventDetailRequest(GetAttackPathEventDetailRequest &&) = default ;
    GetAttackPathEventDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathEventDetailRequest() = default ;
    GetAttackPathEventDetailRequest& operator=(const GetAttackPathEventDetailRequest &) = default ;
    GetAttackPathEventDetailRequest& operator=(GetAttackPathEventDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && return this->lang_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline GetAttackPathEventDetailRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAttackPathEventDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // Event ID.
    // > You can call [ListAttackPathEvent](~~ListAttackPathEvent~~) to query the event ID.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    // The language type for request and response, default is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
