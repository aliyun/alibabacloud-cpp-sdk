// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONTROLEVENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONTROLEVENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetResourceControlEventShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceControlEventShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceControlEventShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdListShrink_);
    };
    GetResourceControlEventShrinkRequest() = default ;
    GetResourceControlEventShrinkRequest(const GetResourceControlEventShrinkRequest &) = default ;
    GetResourceControlEventShrinkRequest(GetResourceControlEventShrinkRequest &&) = default ;
    GetResourceControlEventShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceControlEventShrinkRequest() = default ;
    GetResourceControlEventShrinkRequest& operator=(const GetResourceControlEventShrinkRequest &) = default ;
    GetResourceControlEventShrinkRequest& operator=(GetResourceControlEventShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && this->eventId_ == nullptr && this->eventIdListShrink_ == nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline GetResourceControlEventShrinkRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline GetResourceControlEventShrinkRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventIdListShrink Field Functions 
    bool hasEventIdListShrink() const { return this->eventIdListShrink_ != nullptr;};
    void deleteEventIdListShrink() { this->eventIdListShrink_ = nullptr;};
    inline string getEventIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(eventIdListShrink_, "") };
    inline GetResourceControlEventShrinkRequest& setEventIdListShrink(string eventIdListShrink) { DARABONBA_PTR_SET_VALUE(eventIdListShrink_, eventIdListShrink) };


  protected:
    shared_ptr<string> aliyunLang_ {};
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    shared_ptr<string> eventIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
