// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNAPALSTREAMMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDNAPALSTREAMMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class SendNapalStreamMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNapalStreamMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_TO_JSON(Message, messageShrink_);
      DARABONBA_PTR_TO_JSON(Metadata, metadataShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SendNapalStreamMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configurationShrink_);
      DARABONBA_PTR_FROM_JSON(Message, messageShrink_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadataShrink_);
    };
    SendNapalStreamMessageShrinkRequest() = default ;
    SendNapalStreamMessageShrinkRequest(const SendNapalStreamMessageShrinkRequest &) = default ;
    SendNapalStreamMessageShrinkRequest(SendNapalStreamMessageShrinkRequest &&) = default ;
    SendNapalStreamMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNapalStreamMessageShrinkRequest() = default ;
    SendNapalStreamMessageShrinkRequest& operator=(const SendNapalStreamMessageShrinkRequest &) = default ;
    SendNapalStreamMessageShrinkRequest& operator=(SendNapalStreamMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationShrink_ == nullptr
        && this->messageShrink_ == nullptr && this->metadataShrink_ == nullptr; };
    // configurationShrink Field Functions 
    bool hasConfigurationShrink() const { return this->configurationShrink_ != nullptr;};
    void deleteConfigurationShrink() { this->configurationShrink_ = nullptr;};
    inline string getConfigurationShrink() const { DARABONBA_PTR_GET_DEFAULT(configurationShrink_, "") };
    inline SendNapalStreamMessageShrinkRequest& setConfigurationShrink(string configurationShrink) { DARABONBA_PTR_SET_VALUE(configurationShrink_, configurationShrink) };


    // messageShrink Field Functions 
    bool hasMessageShrink() const { return this->messageShrink_ != nullptr;};
    void deleteMessageShrink() { this->messageShrink_ = nullptr;};
    inline string getMessageShrink() const { DARABONBA_PTR_GET_DEFAULT(messageShrink_, "") };
    inline SendNapalStreamMessageShrinkRequest& setMessageShrink(string messageShrink) { DARABONBA_PTR_SET_VALUE(messageShrink_, messageShrink) };


    // metadataShrink Field Functions 
    bool hasMetadataShrink() const { return this->metadataShrink_ != nullptr;};
    void deleteMetadataShrink() { this->metadataShrink_ = nullptr;};
    inline string getMetadataShrink() const { DARABONBA_PTR_GET_DEFAULT(metadataShrink_, "") };
    inline SendNapalStreamMessageShrinkRequest& setMetadataShrink(string metadataShrink) { DARABONBA_PTR_SET_VALUE(metadataShrink_, metadataShrink) };


  protected:
    // The request configuration object.
    shared_ptr<string> configurationShrink_ {};
    // The message object that contains user input and session context information.
    shared_ptr<string> messageShrink_ {};
    // The additional request information.
    shared_ptr<string> metadataShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
