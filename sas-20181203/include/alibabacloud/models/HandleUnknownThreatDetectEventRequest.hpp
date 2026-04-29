// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEUNKNOWNTHREATDETECTEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLEUNKNOWNTHREATDETECTEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class HandleUnknownThreatDetectEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleUnknownThreatDetectEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, HandleUnknownThreatDetectEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    HandleUnknownThreatDetectEventRequest() = default ;
    HandleUnknownThreatDetectEventRequest(const HandleUnknownThreatDetectEventRequest &) = default ;
    HandleUnknownThreatDetectEventRequest(HandleUnknownThreatDetectEventRequest &&) = default ;
    HandleUnknownThreatDetectEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleUnknownThreatDetectEventRequest() = default ;
    HandleUnknownThreatDetectEventRequest& operator=(const HandleUnknownThreatDetectEventRequest &) = default ;
    HandleUnknownThreatDetectEventRequest& operator=(HandleUnknownThreatDetectEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventIdList_ == nullptr
        && this->status_ == nullptr; };
    // eventIdList Field Functions 
    bool hasEventIdList() const { return this->eventIdList_ != nullptr;};
    void deleteEventIdList() { this->eventIdList_ = nullptr;};
    inline const vector<string> & getEventIdList() const { DARABONBA_PTR_GET_CONST(eventIdList_, vector<string>) };
    inline vector<string> getEventIdList() { DARABONBA_PTR_GET(eventIdList_, vector<string>) };
    inline HandleUnknownThreatDetectEventRequest& setEventIdList(const vector<string> & eventIdList) { DARABONBA_PTR_SET_VALUE(eventIdList_, eventIdList) };
    inline HandleUnknownThreatDetectEventRequest& setEventIdList(vector<string> && eventIdList) { DARABONBA_PTR_SET_RVALUE(eventIdList_, eventIdList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline HandleUnknownThreatDetectEventRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<vector<string>> eventIdList_ {};
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
