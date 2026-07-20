// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONTROLEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONTROLEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetResourceControlEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceControlEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdList_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceControlEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdList_);
    };
    GetResourceControlEventRequest() = default ;
    GetResourceControlEventRequest(const GetResourceControlEventRequest &) = default ;
    GetResourceControlEventRequest(GetResourceControlEventRequest &&) = default ;
    GetResourceControlEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceControlEventRequest() = default ;
    GetResourceControlEventRequest& operator=(const GetResourceControlEventRequest &) = default ;
    GetResourceControlEventRequest& operator=(GetResourceControlEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && this->eventId_ == nullptr && this->eventIdList_ == nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline GetResourceControlEventRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline GetResourceControlEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventIdList Field Functions 
    bool hasEventIdList() const { return this->eventIdList_ != nullptr;};
    void deleteEventIdList() { this->eventIdList_ = nullptr;};
    inline const vector<string> & getEventIdList() const { DARABONBA_PTR_GET_CONST(eventIdList_, vector<string>) };
    inline vector<string> getEventIdList() { DARABONBA_PTR_GET(eventIdList_, vector<string>) };
    inline GetResourceControlEventRequest& setEventIdList(const vector<string> & eventIdList) { DARABONBA_PTR_SET_VALUE(eventIdList_, eventIdList) };
    inline GetResourceControlEventRequest& setEventIdList(vector<string> && eventIdList) { DARABONBA_PTR_SET_RVALUE(eventIdList_, eventIdList) };


  protected:
    shared_ptr<string> aliyunLang_ {};
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    shared_ptr<vector<string>> eventIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
