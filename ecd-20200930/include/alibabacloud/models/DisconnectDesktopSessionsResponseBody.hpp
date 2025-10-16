// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisconnectDesktopSessionsResponseBodyInvalidSessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DisconnectDesktopSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisconnectDesktopSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvalidSessions, invalidSessions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisconnectDesktopSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvalidSessions, invalidSessions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisconnectDesktopSessionsResponseBody() = default ;
    DisconnectDesktopSessionsResponseBody(const DisconnectDesktopSessionsResponseBody &) = default ;
    DisconnectDesktopSessionsResponseBody(DisconnectDesktopSessionsResponseBody &&) = default ;
    DisconnectDesktopSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisconnectDesktopSessionsResponseBody() = default ;
    DisconnectDesktopSessionsResponseBody& operator=(const DisconnectDesktopSessionsResponseBody &) = default ;
    DisconnectDesktopSessionsResponseBody& operator=(DisconnectDesktopSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invalidSessions_ == nullptr
        && return this->requestId_ == nullptr; };
    // invalidSessions Field Functions 
    bool hasInvalidSessions() const { return this->invalidSessions_ != nullptr;};
    void deleteInvalidSessions() { this->invalidSessions_ = nullptr;};
    inline const vector<DisconnectDesktopSessionsResponseBodyInvalidSessions> & invalidSessions() const { DARABONBA_PTR_GET_CONST(invalidSessions_, vector<DisconnectDesktopSessionsResponseBodyInvalidSessions>) };
    inline vector<DisconnectDesktopSessionsResponseBodyInvalidSessions> invalidSessions() { DARABONBA_PTR_GET(invalidSessions_, vector<DisconnectDesktopSessionsResponseBodyInvalidSessions>) };
    inline DisconnectDesktopSessionsResponseBody& setInvalidSessions(const vector<DisconnectDesktopSessionsResponseBodyInvalidSessions> & invalidSessions) { DARABONBA_PTR_SET_VALUE(invalidSessions_, invalidSessions) };
    inline DisconnectDesktopSessionsResponseBody& setInvalidSessions(vector<DisconnectDesktopSessionsResponseBodyInvalidSessions> && invalidSessions) { DARABONBA_PTR_SET_RVALUE(invalidSessions_, invalidSessions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisconnectDesktopSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of invalid sessions.
    std::shared_ptr<vector<DisconnectDesktopSessionsResponseBodyInvalidSessions>> invalidSessions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
