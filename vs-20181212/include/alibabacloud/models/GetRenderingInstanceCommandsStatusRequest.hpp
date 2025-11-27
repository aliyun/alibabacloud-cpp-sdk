// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENDERINGINSTANCECOMMANDSSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRENDERINGINSTANCECOMMANDSSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class GetRenderingInstanceCommandsStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRenderingInstanceCommandsStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CmdId, cmdId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRenderingInstanceCommandsStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CmdId, cmdId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    GetRenderingInstanceCommandsStatusRequest() = default ;
    GetRenderingInstanceCommandsStatusRequest(const GetRenderingInstanceCommandsStatusRequest &) = default ;
    GetRenderingInstanceCommandsStatusRequest(GetRenderingInstanceCommandsStatusRequest &&) = default ;
    GetRenderingInstanceCommandsStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRenderingInstanceCommandsStatusRequest() = default ;
    GetRenderingInstanceCommandsStatusRequest& operator=(const GetRenderingInstanceCommandsStatusRequest &) = default ;
    GetRenderingInstanceCommandsStatusRequest& operator=(GetRenderingInstanceCommandsStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmdId_ == nullptr
        && return this->renderingInstanceId_ == nullptr; };
    // cmdId Field Functions 
    bool hasCmdId() const { return this->cmdId_ != nullptr;};
    void deleteCmdId() { this->cmdId_ = nullptr;};
    inline string cmdId() const { DARABONBA_PTR_GET_DEFAULT(cmdId_, "") };
    inline GetRenderingInstanceCommandsStatusRequest& setCmdId(string cmdId) { DARABONBA_PTR_SET_VALUE(cmdId_, cmdId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline GetRenderingInstanceCommandsStatusRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cmdId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
