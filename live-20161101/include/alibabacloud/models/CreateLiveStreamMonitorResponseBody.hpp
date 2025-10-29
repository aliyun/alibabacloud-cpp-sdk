// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVESTREAMMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVESTREAMMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLiveStreamMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveStreamMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveStreamMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLiveStreamMonitorResponseBody() = default ;
    CreateLiveStreamMonitorResponseBody(const CreateLiveStreamMonitorResponseBody &) = default ;
    CreateLiveStreamMonitorResponseBody(CreateLiveStreamMonitorResponseBody &&) = default ;
    CreateLiveStreamMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveStreamMonitorResponseBody() = default ;
    CreateLiveStreamMonitorResponseBody& operator=(const CreateLiveStreamMonitorResponseBody &) = default ;
    CreateLiveStreamMonitorResponseBody& operator=(CreateLiveStreamMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorId_ == nullptr
        && return this->requestId_ == nullptr; };
    // monitorId Field Functions 
    bool hasMonitorId() const { return this->monitorId_ != nullptr;};
    void deleteMonitorId() { this->monitorId_ = nullptr;};
    inline string monitorId() const { DARABONBA_PTR_GET_DEFAULT(monitorId_, "") };
    inline CreateLiveStreamMonitorResponseBody& setMonitorId(string monitorId) { DARABONBA_PTR_SET_VALUE(monitorId_, monitorId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLiveStreamMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the monitoring session.
    std::shared_ptr<string> monitorId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
