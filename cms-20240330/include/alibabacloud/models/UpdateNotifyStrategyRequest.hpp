// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENOTIFYSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENOTIFYSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotifyStrategyForModify.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateNotifyStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNotifyStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNotifyStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    UpdateNotifyStrategyRequest() = default ;
    UpdateNotifyStrategyRequest(const UpdateNotifyStrategyRequest &) = default ;
    UpdateNotifyStrategyRequest(UpdateNotifyStrategyRequest &&) = default ;
    UpdateNotifyStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNotifyStrategyRequest() = default ;
    UpdateNotifyStrategyRequest& operator=(const UpdateNotifyStrategyRequest &) = default ;
    UpdateNotifyStrategyRequest& operator=(UpdateNotifyStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->workspace_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const NotifyStrategyForModify & body() const { DARABONBA_PTR_GET_CONST(body_, NotifyStrategyForModify) };
    inline NotifyStrategyForModify body() { DARABONBA_PTR_GET(body_, NotifyStrategyForModify) };
    inline UpdateNotifyStrategyRequest& setBody(const NotifyStrategyForModify & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateNotifyStrategyRequest& setBody(NotifyStrategyForModify && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline UpdateNotifyStrategyRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<NotifyStrategyForModify> body_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
