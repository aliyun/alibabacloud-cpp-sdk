// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOBJECTSCANEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOBJECTSCANEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetObjectScanEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetObjectScanEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, GetObjectScanEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    GetObjectScanEventRequest() = default ;
    GetObjectScanEventRequest(const GetObjectScanEventRequest &) = default ;
    GetObjectScanEventRequest(GetObjectScanEventRequest &&) = default ;
    GetObjectScanEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetObjectScanEventRequest() = default ;
    GetObjectScanEventRequest& operator=(const GetObjectScanEventRequest &) = default ;
    GetObjectScanEventRequest& operator=(GetObjectScanEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventId_ != nullptr
        && this->lang_ != nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline GetObjectScanEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetObjectScanEventRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the alert event.
    std::shared_ptr<string> eventId_ = nullptr;
    // The language of the content in the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
