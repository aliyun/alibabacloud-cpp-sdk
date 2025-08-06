// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISPLAYAIAUDITSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISPLAYAIAUDITSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DisplayAIAuditSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisplayAIAuditSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsDisplay, isDisplay_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisplayAIAuditSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDisplay, isDisplay_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisplayAIAuditSwitchResponseBody() = default ;
    DisplayAIAuditSwitchResponseBody(const DisplayAIAuditSwitchResponseBody &) = default ;
    DisplayAIAuditSwitchResponseBody(DisplayAIAuditSwitchResponseBody &&) = default ;
    DisplayAIAuditSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisplayAIAuditSwitchResponseBody() = default ;
    DisplayAIAuditSwitchResponseBody& operator=(const DisplayAIAuditSwitchResponseBody &) = default ;
    DisplayAIAuditSwitchResponseBody& operator=(DisplayAIAuditSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDisplay_ != nullptr
        && this->requestId_ != nullptr; };
    // isDisplay Field Functions 
    bool hasIsDisplay() const { return this->isDisplay_ != nullptr;};
    void deleteIsDisplay() { this->isDisplay_ = nullptr;};
    inline bool isDisplay() const { DARABONBA_PTR_GET_DEFAULT(isDisplay_, false) };
    inline DisplayAIAuditSwitchResponseBody& setIsDisplay(bool isDisplay) { DARABONBA_PTR_SET_VALUE(isDisplay_, isDisplay) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisplayAIAuditSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> isDisplay_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
