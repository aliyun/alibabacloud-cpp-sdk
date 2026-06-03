// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    UpdateConnectorRequest() = default ;
    UpdateConnectorRequest(const UpdateConnectorRequest &) = default ;
    UpdateConnectorRequest(UpdateConnectorRequest &&) = default ;
    UpdateConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectorRequest() = default ;
    UpdateConnectorRequest& operator=(const UpdateConnectorRequest &) = default ;
    UpdateConnectorRequest& operator=(UpdateConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorName_ == nullptr
        && this->description_ == nullptr; };
    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline UpdateConnectorRequest& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConnectorRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // This parameter is required.
    shared_ptr<string> connectorName_ {};
    // This parameter is required.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
