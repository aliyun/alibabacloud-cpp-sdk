// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONNECTORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONNECTORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddConnectorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddConnectorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_TO_JSON(ConnectorType, connectorType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileConnectorConfig, fileConnectorConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddConnectorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_FROM_JSON(ConnectorType, connectorType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileConnectorConfig, fileConnectorConfigShrink_);
    };
    AddConnectorShrinkRequest() = default ;
    AddConnectorShrinkRequest(const AddConnectorShrinkRequest &) = default ;
    AddConnectorShrinkRequest(AddConnectorShrinkRequest &&) = default ;
    AddConnectorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddConnectorShrinkRequest() = default ;
    AddConnectorShrinkRequest& operator=(const AddConnectorShrinkRequest &) = default ;
    AddConnectorShrinkRequest& operator=(AddConnectorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorName_ == nullptr
        && this->connectorType_ == nullptr && this->description_ == nullptr && this->fileConnectorConfigShrink_ == nullptr; };
    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline AddConnectorShrinkRequest& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


    // connectorType Field Functions 
    bool hasConnectorType() const { return this->connectorType_ != nullptr;};
    void deleteConnectorType() { this->connectorType_ = nullptr;};
    inline string getConnectorType() const { DARABONBA_PTR_GET_DEFAULT(connectorType_, "") };
    inline AddConnectorShrinkRequest& setConnectorType(string connectorType) { DARABONBA_PTR_SET_VALUE(connectorType_, connectorType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddConnectorShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileConnectorConfigShrink Field Functions 
    bool hasFileConnectorConfigShrink() const { return this->fileConnectorConfigShrink_ != nullptr;};
    void deleteFileConnectorConfigShrink() { this->fileConnectorConfigShrink_ = nullptr;};
    inline string getFileConnectorConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(fileConnectorConfigShrink_, "") };
    inline AddConnectorShrinkRequest& setFileConnectorConfigShrink(string fileConnectorConfigShrink) { DARABONBA_PTR_SET_VALUE(fileConnectorConfigShrink_, fileConnectorConfigShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> connectorName_ {};
    // This parameter is required.
    shared_ptr<string> connectorType_ {};
    // This parameter is required.
    shared_ptr<string> description_ {};
    shared_ptr<string> fileConnectorConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
