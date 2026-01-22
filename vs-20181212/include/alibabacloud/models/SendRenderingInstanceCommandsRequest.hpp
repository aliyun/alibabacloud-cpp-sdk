// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDRENDERINGINSTANCECOMMANDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDRENDERINGINSTANCECOMMANDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class SendRenderingInstanceCommandsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendRenderingInstanceCommandsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, SendRenderingInstanceCommandsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    SendRenderingInstanceCommandsRequest() = default ;
    SendRenderingInstanceCommandsRequest(const SendRenderingInstanceCommandsRequest &) = default ;
    SendRenderingInstanceCommandsRequest(SendRenderingInstanceCommandsRequest &&) = default ;
    SendRenderingInstanceCommandsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendRenderingInstanceCommandsRequest() = default ;
    SendRenderingInstanceCommandsRequest& operator=(const SendRenderingInstanceCommandsRequest &) = default ;
    SendRenderingInstanceCommandsRequest& operator=(SendRenderingInstanceCommandsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commands_ == nullptr
        && this->mode_ == nullptr && this->renderingInstanceId_ == nullptr && this->timeout_ == nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline string getCommands() const { DARABONBA_PTR_GET_DEFAULT(commands_, "") };
    inline SendRenderingInstanceCommandsRequest& setCommands(string commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SendRenderingInstanceCommandsRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline SendRenderingInstanceCommandsRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline SendRenderingInstanceCommandsRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // This parameter is required.
    shared_ptr<string> commands_ {};
    shared_ptr<string> mode_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
