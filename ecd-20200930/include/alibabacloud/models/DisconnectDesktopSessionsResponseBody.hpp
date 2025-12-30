// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class InvalidSessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InvalidSessions& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      };
      friend void from_json(const Darabonba::Json& j, InvalidSessions& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      };
      InvalidSessions() = default ;
      InvalidSessions(const InvalidSessions &) = default ;
      InvalidSessions(InvalidSessions &&) = default ;
      InvalidSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InvalidSessions() = default ;
      InvalidSessions& operator=(const InvalidSessions &) = default ;
      InvalidSessions& operator=(InvalidSessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->endUserId_ == nullptr; };
      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline InvalidSessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline InvalidSessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    protected:
      // The cloud desktop ID.
      shared_ptr<string> desktopId_ {};
      // The end user ID.
      shared_ptr<string> endUserId_ {};
    };

    virtual bool empty() const override { return this->invalidSessions_ == nullptr
        && this->requestId_ == nullptr; };
    // invalidSessions Field Functions 
    bool hasInvalidSessions() const { return this->invalidSessions_ != nullptr;};
    void deleteInvalidSessions() { this->invalidSessions_ = nullptr;};
    inline const vector<DisconnectDesktopSessionsResponseBody::InvalidSessions> & getInvalidSessions() const { DARABONBA_PTR_GET_CONST(invalidSessions_, vector<DisconnectDesktopSessionsResponseBody::InvalidSessions>) };
    inline vector<DisconnectDesktopSessionsResponseBody::InvalidSessions> getInvalidSessions() { DARABONBA_PTR_GET(invalidSessions_, vector<DisconnectDesktopSessionsResponseBody::InvalidSessions>) };
    inline DisconnectDesktopSessionsResponseBody& setInvalidSessions(const vector<DisconnectDesktopSessionsResponseBody::InvalidSessions> & invalidSessions) { DARABONBA_PTR_SET_VALUE(invalidSessions_, invalidSessions) };
    inline DisconnectDesktopSessionsResponseBody& setInvalidSessions(vector<DisconnectDesktopSessionsResponseBody::InvalidSessions> && invalidSessions) { DARABONBA_PTR_SET_RVALUE(invalidSessions_, invalidSessions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisconnectDesktopSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of invalid sessions.
    shared_ptr<vector<DisconnectDesktopSessionsResponseBody::InvalidSessions>> invalidSessions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
