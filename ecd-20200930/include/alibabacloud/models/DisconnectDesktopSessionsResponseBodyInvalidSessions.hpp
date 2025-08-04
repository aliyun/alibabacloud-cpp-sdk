// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSRESPONSEBODYINVALIDSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSRESPONSEBODYINVALIDSESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DisconnectDesktopSessionsResponseBodyInvalidSessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisconnectDesktopSessionsResponseBodyInvalidSessions& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DisconnectDesktopSessionsResponseBodyInvalidSessions& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
    };
    DisconnectDesktopSessionsResponseBodyInvalidSessions() = default ;
    DisconnectDesktopSessionsResponseBodyInvalidSessions(const DisconnectDesktopSessionsResponseBodyInvalidSessions &) = default ;
    DisconnectDesktopSessionsResponseBodyInvalidSessions(DisconnectDesktopSessionsResponseBodyInvalidSessions &&) = default ;
    DisconnectDesktopSessionsResponseBodyInvalidSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisconnectDesktopSessionsResponseBodyInvalidSessions() = default ;
    DisconnectDesktopSessionsResponseBodyInvalidSessions& operator=(const DisconnectDesktopSessionsResponseBodyInvalidSessions &) = default ;
    DisconnectDesktopSessionsResponseBodyInvalidSessions& operator=(DisconnectDesktopSessionsResponseBodyInvalidSessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopId_ != nullptr
        && this->endUserId_ != nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DisconnectDesktopSessionsResponseBodyInvalidSessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DisconnectDesktopSessionsResponseBodyInvalidSessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


  protected:
    // The cloud desktop ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The end user ID.
    std::shared_ptr<string> endUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
