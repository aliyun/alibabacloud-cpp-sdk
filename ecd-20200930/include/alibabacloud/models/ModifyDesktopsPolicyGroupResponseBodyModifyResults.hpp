// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPSPOLICYGROUPRESPONSEBODYMODIFYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPSPOLICYGROUPRESPONSEBODYMODIFYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopsPolicyGroupResponseBodyModifyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopsPolicyGroupResponseBodyModifyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopsPolicyGroupResponseBodyModifyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ModifyDesktopsPolicyGroupResponseBodyModifyResults() = default ;
    ModifyDesktopsPolicyGroupResponseBodyModifyResults(const ModifyDesktopsPolicyGroupResponseBodyModifyResults &) = default ;
    ModifyDesktopsPolicyGroupResponseBodyModifyResults(ModifyDesktopsPolicyGroupResponseBodyModifyResults &&) = default ;
    ModifyDesktopsPolicyGroupResponseBodyModifyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopsPolicyGroupResponseBodyModifyResults() = default ;
    ModifyDesktopsPolicyGroupResponseBodyModifyResults& operator=(const ModifyDesktopsPolicyGroupResponseBodyModifyResults &) = default ;
    ModifyDesktopsPolicyGroupResponseBodyModifyResults& operator=(ModifyDesktopsPolicyGroupResponseBodyModifyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->desktopId_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyDesktopsPolicyGroupResponseBodyModifyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ModifyDesktopsPolicyGroupResponseBodyModifyResults& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyDesktopsPolicyGroupResponseBodyModifyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The returned message. If the request was successful, `success` is returned. If the request failed, an error message is returned.
    std::shared_ptr<string> code_ = nullptr;
    // The cloud computer ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The error message returned if the request failed. This parameter is not returned if the value of Code is success.``
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
