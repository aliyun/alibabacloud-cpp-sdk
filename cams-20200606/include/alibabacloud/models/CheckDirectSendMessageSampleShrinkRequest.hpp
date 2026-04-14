// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDIRECTSENDMESSAGESAMPLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDIRECTSENDMESSAGESAMPLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CheckDirectSendMessageSampleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDirectSendMessageSampleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(Interactive, interactiveShrink_);
      DARABONBA_PTR_TO_JSON(Text, textShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDirectSendMessageSampleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(Interactive, interactiveShrink_);
      DARABONBA_PTR_FROM_JSON(Text, textShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CheckDirectSendMessageSampleShrinkRequest() = default ;
    CheckDirectSendMessageSampleShrinkRequest(const CheckDirectSendMessageSampleShrinkRequest &) = default ;
    CheckDirectSendMessageSampleShrinkRequest(CheckDirectSendMessageSampleShrinkRequest &&) = default ;
    CheckDirectSendMessageSampleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDirectSendMessageSampleShrinkRequest() = default ;
    CheckDirectSendMessageSampleShrinkRequest& operator=(const CheckDirectSendMessageSampleShrinkRequest &) = default ;
    CheckDirectSendMessageSampleShrinkRequest& operator=(CheckDirectSendMessageSampleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->interactiveShrink_ == nullptr && this->textShrink_ == nullptr && this->type_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline CheckDirectSendMessageSampleShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // interactiveShrink Field Functions 
    bool hasInteractiveShrink() const { return this->interactiveShrink_ != nullptr;};
    void deleteInteractiveShrink() { this->interactiveShrink_ = nullptr;};
    inline string getInteractiveShrink() const { DARABONBA_PTR_GET_DEFAULT(interactiveShrink_, "") };
    inline CheckDirectSendMessageSampleShrinkRequest& setInteractiveShrink(string interactiveShrink) { DARABONBA_PTR_SET_VALUE(interactiveShrink_, interactiveShrink) };


    // textShrink Field Functions 
    bool hasTextShrink() const { return this->textShrink_ != nullptr;};
    void deleteTextShrink() { this->textShrink_ = nullptr;};
    inline string getTextShrink() const { DARABONBA_PTR_GET_DEFAULT(textShrink_, "") };
    inline CheckDirectSendMessageSampleShrinkRequest& setTextShrink(string textShrink) { DARABONBA_PTR_SET_VALUE(textShrink_, textShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckDirectSendMessageSampleShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<string> interactiveShrink_ {};
    shared_ptr<string> textShrink_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
