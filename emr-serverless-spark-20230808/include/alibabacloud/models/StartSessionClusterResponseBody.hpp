// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSESSIONCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTSESSIONCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StartSessionClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSessionClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionClusterId, sessionClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, StartSessionClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionClusterId, sessionClusterId_);
    };
    StartSessionClusterResponseBody() = default ;
    StartSessionClusterResponseBody(const StartSessionClusterResponseBody &) = default ;
    StartSessionClusterResponseBody(StartSessionClusterResponseBody &&) = default ;
    StartSessionClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSessionClusterResponseBody() = default ;
    StartSessionClusterResponseBody& operator=(const StartSessionClusterResponseBody &) = default ;
    StartSessionClusterResponseBody& operator=(StartSessionClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sessionClusterId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartSessionClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionClusterId Field Functions 
    bool hasSessionClusterId() const { return this->sessionClusterId_ != nullptr;};
    void deleteSessionClusterId() { this->sessionClusterId_ = nullptr;};
    inline string sessionClusterId() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterId_, "") };
    inline StartSessionClusterResponseBody& setSessionClusterId(string sessionClusterId) { DARABONBA_PTR_SET_VALUE(sessionClusterId_, sessionClusterId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> sessionClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
