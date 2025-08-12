// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVESTREAMMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVESTREAMMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveStreamMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveStreamMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveStreamMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartLiveStreamMonitorResponseBody() = default ;
    StartLiveStreamMonitorResponseBody(const StartLiveStreamMonitorResponseBody &) = default ;
    StartLiveStreamMonitorResponseBody(StartLiveStreamMonitorResponseBody &&) = default ;
    StartLiveStreamMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveStreamMonitorResponseBody() = default ;
    StartLiveStreamMonitorResponseBody& operator=(const StartLiveStreamMonitorResponseBody &) = default ;
    StartLiveStreamMonitorResponseBody& operator=(StartLiveStreamMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartLiveStreamMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
