// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class CreateChatSessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatSessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatSessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    CreateChatSessionResponseBodyData() = default ;
    CreateChatSessionResponseBodyData(const CreateChatSessionResponseBodyData &) = default ;
    CreateChatSessionResponseBodyData(CreateChatSessionResponseBodyData &&) = default ;
    CreateChatSessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatSessionResponseBodyData() = default ;
    CreateChatSessionResponseBodyData& operator=(const CreateChatSessionResponseBodyData &) = default ;
    CreateChatSessionResponseBodyData& operator=(CreateChatSessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateChatSessionResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // Q&A session ID, used to record multiple Q&A sessions of the same user.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
