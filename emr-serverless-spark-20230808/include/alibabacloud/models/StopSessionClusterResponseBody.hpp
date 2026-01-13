// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPSESSIONCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPSESSIONCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StopSessionClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopSessionClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionClusterId, sessionClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, StopSessionClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionClusterId, sessionClusterId_);
    };
    StopSessionClusterResponseBody() = default ;
    StopSessionClusterResponseBody(const StopSessionClusterResponseBody &) = default ;
    StopSessionClusterResponseBody(StopSessionClusterResponseBody &&) = default ;
    StopSessionClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopSessionClusterResponseBody() = default ;
    StopSessionClusterResponseBody& operator=(const StopSessionClusterResponseBody &) = default ;
    StopSessionClusterResponseBody& operator=(StopSessionClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sessionClusterId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopSessionClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionClusterId Field Functions 
    bool hasSessionClusterId() const { return this->sessionClusterId_ != nullptr;};
    void deleteSessionClusterId() { this->sessionClusterId_ = nullptr;};
    inline string getSessionClusterId() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterId_, "") };
    inline StopSessionClusterResponseBody& setSessionClusterId(string sessionClusterId) { DARABONBA_PTR_SET_VALUE(sessionClusterId_, sessionClusterId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session ID.
    shared_ptr<string> sessionClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
