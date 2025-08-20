// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHAPPLICATION2CONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHAPPLICATION2CONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DetachApplication2ConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachApplication2ConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachApplication2ConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
    };
    DetachApplication2ConnectorRequest() = default ;
    DetachApplication2ConnectorRequest(const DetachApplication2ConnectorRequest &) = default ;
    DetachApplication2ConnectorRequest(DetachApplication2ConnectorRequest &&) = default ;
    DetachApplication2ConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachApplication2ConnectorRequest() = default ;
    DetachApplication2ConnectorRequest& operator=(const DetachApplication2ConnectorRequest &) = default ;
    DetachApplication2ConnectorRequest& operator=(DetachApplication2ConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationIds_ != nullptr
        && this->connectorId_ != nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline DetachApplication2ConnectorRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline DetachApplication2ConnectorRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string connectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline DetachApplication2ConnectorRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
    // ConnectorID。
    // 
    // This parameter is required.
    std::shared_ptr<string> connectorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
