// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONBYCLIENTIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONBYCLIENTIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QuerySessionByClientIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionByClientIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionByClientIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QuerySessionByClientIdResponseBody() = default ;
    QuerySessionByClientIdResponseBody(const QuerySessionByClientIdResponseBody &) = default ;
    QuerySessionByClientIdResponseBody(QuerySessionByClientIdResponseBody &&) = default ;
    QuerySessionByClientIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionByClientIdResponseBody() = default ;
    QuerySessionByClientIdResponseBody& operator=(const QuerySessionByClientIdResponseBody &) = default ;
    QuerySessionByClientIdResponseBody& operator=(QuerySessionByClientIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onlineStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // onlineStatus Field Functions 
    bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
    void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
    inline bool getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, false) };
    inline QuerySessionByClientIdResponseBody& setOnlineStatus(bool onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySessionByClientIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the ApsaraMQ for MQTT client is connected to the ApsaraMQ for MQTT broker. Valid values:
    // 
    // - **true**
    // 
    // - **false**
    shared_ptr<bool> onlineStatus_ {};
    // The request ID. This parameter is a common parameter.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
