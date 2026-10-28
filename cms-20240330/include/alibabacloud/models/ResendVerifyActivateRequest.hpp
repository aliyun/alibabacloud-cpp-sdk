// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESENDVERIFYACTIVATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESENDVERIFYACTIVATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ResendVerifyActivateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResendVerifyActivateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channelType, channelType_);
    };
    friend void from_json(const Darabonba::Json& j, ResendVerifyActivateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channelType, channelType_);
    };
    ResendVerifyActivateRequest() = default ;
    ResendVerifyActivateRequest(const ResendVerifyActivateRequest &) = default ;
    ResendVerifyActivateRequest(ResendVerifyActivateRequest &&) = default ;
    ResendVerifyActivateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResendVerifyActivateRequest() = default ;
    ResendVerifyActivateRequest& operator=(const ResendVerifyActivateRequest &) = default ;
    ResendVerifyActivateRequest& operator=(ResendVerifyActivateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline ResendVerifyActivateRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


  protected:
    // The channel type.
    shared_ptr<string> channelType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
