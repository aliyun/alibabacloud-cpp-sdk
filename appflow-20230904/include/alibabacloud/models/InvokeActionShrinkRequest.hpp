// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEACTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEACTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class InvokeActionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeActionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionId, actionId_);
      DARABONBA_PTR_TO_JSON(ActionVersion, actionVersion_);
      DARABONBA_PTR_TO_JSON(AuthConfig, authConfigShrink_);
      DARABONBA_PTR_TO_JSON(Body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
      DARABONBA_PTR_TO_JSON(Headers, headersShrink_);
      DARABONBA_PTR_TO_JSON(Path, pathShrink_);
      DARABONBA_PTR_TO_JSON(Query, queryShrink_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeActionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionId, actionId_);
      DARABONBA_PTR_FROM_JSON(ActionVersion, actionVersion_);
      DARABONBA_PTR_FROM_JSON(AuthConfig, authConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
      DARABONBA_PTR_FROM_JSON(Headers, headersShrink_);
      DARABONBA_PTR_FROM_JSON(Path, pathShrink_);
      DARABONBA_PTR_FROM_JSON(Query, queryShrink_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    InvokeActionShrinkRequest() = default ;
    InvokeActionShrinkRequest(const InvokeActionShrinkRequest &) = default ;
    InvokeActionShrinkRequest(InvokeActionShrinkRequest &&) = default ;
    InvokeActionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeActionShrinkRequest() = default ;
    InvokeActionShrinkRequest& operator=(const InvokeActionShrinkRequest &) = default ;
    InvokeActionShrinkRequest& operator=(InvokeActionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionId_ == nullptr
        && this->actionVersion_ == nullptr && this->authConfigShrink_ == nullptr && this->bodyShrink_ == nullptr && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr
        && this->headersShrink_ == nullptr && this->pathShrink_ == nullptr && this->queryShrink_ == nullptr && this->stream_ == nullptr; };
    // actionId Field Functions 
    bool hasActionId() const { return this->actionId_ != nullptr;};
    void deleteActionId() { this->actionId_ = nullptr;};
    inline string getActionId() const { DARABONBA_PTR_GET_DEFAULT(actionId_, "") };
    inline InvokeActionShrinkRequest& setActionId(string actionId) { DARABONBA_PTR_SET_VALUE(actionId_, actionId) };


    // actionVersion Field Functions 
    bool hasActionVersion() const { return this->actionVersion_ != nullptr;};
    void deleteActionVersion() { this->actionVersion_ = nullptr;};
    inline string getActionVersion() const { DARABONBA_PTR_GET_DEFAULT(actionVersion_, "") };
    inline InvokeActionShrinkRequest& setActionVersion(string actionVersion) { DARABONBA_PTR_SET_VALUE(actionVersion_, actionVersion) };


    // authConfigShrink Field Functions 
    bool hasAuthConfigShrink() const { return this->authConfigShrink_ != nullptr;};
    void deleteAuthConfigShrink() { this->authConfigShrink_ = nullptr;};
    inline string getAuthConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(authConfigShrink_, "") };
    inline InvokeActionShrinkRequest& setAuthConfigShrink(string authConfigShrink) { DARABONBA_PTR_SET_VALUE(authConfigShrink_, authConfigShrink) };


    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline InvokeActionShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline InvokeActionShrinkRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // connectorVersion Field Functions 
    bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
    void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
    inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
    inline InvokeActionShrinkRequest& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


    // headersShrink Field Functions 
    bool hasHeadersShrink() const { return this->headersShrink_ != nullptr;};
    void deleteHeadersShrink() { this->headersShrink_ = nullptr;};
    inline string getHeadersShrink() const { DARABONBA_PTR_GET_DEFAULT(headersShrink_, "") };
    inline InvokeActionShrinkRequest& setHeadersShrink(string headersShrink) { DARABONBA_PTR_SET_VALUE(headersShrink_, headersShrink) };


    // pathShrink Field Functions 
    bool hasPathShrink() const { return this->pathShrink_ != nullptr;};
    void deletePathShrink() { this->pathShrink_ = nullptr;};
    inline string getPathShrink() const { DARABONBA_PTR_GET_DEFAULT(pathShrink_, "") };
    inline InvokeActionShrinkRequest& setPathShrink(string pathShrink) { DARABONBA_PTR_SET_VALUE(pathShrink_, pathShrink) };


    // queryShrink Field Functions 
    bool hasQueryShrink() const { return this->queryShrink_ != nullptr;};
    void deleteQueryShrink() { this->queryShrink_ = nullptr;};
    inline string getQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(queryShrink_, "") };
    inline InvokeActionShrinkRequest& setQueryShrink(string queryShrink) { DARABONBA_PTR_SET_VALUE(queryShrink_, queryShrink) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline InvokeActionShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // This parameter is required.
    shared_ptr<string> actionId_ {};
    shared_ptr<string> actionVersion_ {};
    shared_ptr<string> authConfigShrink_ {};
    shared_ptr<string> bodyShrink_ {};
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    shared_ptr<string> connectorVersion_ {};
    shared_ptr<string> headersShrink_ {};
    shared_ptr<string> pathShrink_ {};
    shared_ptr<string> queryShrink_ {};
    shared_ptr<bool> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
