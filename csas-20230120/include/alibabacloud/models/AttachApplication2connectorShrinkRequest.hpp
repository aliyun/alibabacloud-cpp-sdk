// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAPPLICATION2CONNECTORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAPPLICATION2CONNECTORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class AttachApplication2ConnectorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachApplication2ConnectorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIdsShrink_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachApplication2ConnectorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
    };
    AttachApplication2ConnectorShrinkRequest() = default ;
    AttachApplication2ConnectorShrinkRequest(const AttachApplication2ConnectorShrinkRequest &) = default ;
    AttachApplication2ConnectorShrinkRequest(AttachApplication2ConnectorShrinkRequest &&) = default ;
    AttachApplication2ConnectorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachApplication2ConnectorShrinkRequest() = default ;
    AttachApplication2ConnectorShrinkRequest& operator=(const AttachApplication2ConnectorShrinkRequest &) = default ;
    AttachApplication2ConnectorShrinkRequest& operator=(AttachApplication2ConnectorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationIdsShrink_ != nullptr
        && this->connectorId_ != nullptr; };
    // applicationIdsShrink Field Functions 
    bool hasApplicationIdsShrink() const { return this->applicationIdsShrink_ != nullptr;};
    void deleteApplicationIdsShrink() { this->applicationIdsShrink_ = nullptr;};
    inline string applicationIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(applicationIdsShrink_, "") };
    inline AttachApplication2ConnectorShrinkRequest& setApplicationIdsShrink(string applicationIdsShrink) { DARABONBA_PTR_SET_VALUE(applicationIdsShrink_, applicationIdsShrink) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string connectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline AttachApplication2ConnectorShrinkRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationIdsShrink_ = nullptr;
    // ConnectorID。
    // 
    // This parameter is required.
    std::shared_ptr<string> connectorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
