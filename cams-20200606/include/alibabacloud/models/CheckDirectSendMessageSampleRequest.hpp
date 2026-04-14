// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDIRECTSENDMESSAGESAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDIRECTSENDMESSAGESAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CheckDirectSendMessageSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDirectSendMessageSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_ANY_TO_JSON(Interactive, interactive_);
      DARABONBA_ANY_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDirectSendMessageSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_ANY_FROM_JSON(Interactive, interactive_);
      DARABONBA_ANY_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CheckDirectSendMessageSampleRequest() = default ;
    CheckDirectSendMessageSampleRequest(const CheckDirectSendMessageSampleRequest &) = default ;
    CheckDirectSendMessageSampleRequest(CheckDirectSendMessageSampleRequest &&) = default ;
    CheckDirectSendMessageSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDirectSendMessageSampleRequest() = default ;
    CheckDirectSendMessageSampleRequest& operator=(const CheckDirectSendMessageSampleRequest &) = default ;
    CheckDirectSendMessageSampleRequest& operator=(CheckDirectSendMessageSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->interactive_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline CheckDirectSendMessageSampleRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // interactive Field Functions 
    bool hasInteractive() const { return this->interactive_ != nullptr;};
    void deleteInteractive() { this->interactive_ = nullptr;};
    inline     const Darabonba::Json & getInteractive() const { DARABONBA_GET(interactive_) };
    Darabonba::Json & getInteractive() { DARABONBA_GET(interactive_) };
    inline CheckDirectSendMessageSampleRequest& setInteractive(const Darabonba::Json & interactive) { DARABONBA_SET_VALUE(interactive_, interactive) };
    inline CheckDirectSendMessageSampleRequest& setInteractive(Darabonba::Json && interactive) { DARABONBA_SET_RVALUE(interactive_, interactive) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline     const Darabonba::Json & getText() const { DARABONBA_GET(text_) };
    Darabonba::Json & getText() { DARABONBA_GET(text_) };
    inline CheckDirectSendMessageSampleRequest& setText(const Darabonba::Json & text) { DARABONBA_SET_VALUE(text_, text) };
    inline CheckDirectSendMessageSampleRequest& setText(Darabonba::Json && text) { DARABONBA_SET_RVALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckDirectSendMessageSampleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    Darabonba::Json interactive_ {};
    Darabonba::Json text_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
