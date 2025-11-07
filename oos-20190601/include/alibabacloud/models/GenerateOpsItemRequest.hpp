// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEOPSITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEOPSITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GenerateOpsItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOpsItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigurationId, configurationId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOpsItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigurationId, configurationId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GenerateOpsItemRequest() = default ;
    GenerateOpsItemRequest(const GenerateOpsItemRequest &) = default ;
    GenerateOpsItemRequest(GenerateOpsItemRequest &&) = default ;
    GenerateOpsItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOpsItemRequest() = default ;
    GenerateOpsItemRequest& operator=(const GenerateOpsItemRequest &) = default ;
    GenerateOpsItemRequest& operator=(GenerateOpsItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->configurationId_ == nullptr && return this->data_ == nullptr && return this->dataSource_ == nullptr && return this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GenerateOpsItemRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configurationId Field Functions 
    bool hasConfigurationId() const { return this->configurationId_ != nullptr;};
    void deleteConfigurationId() { this->configurationId_ = nullptr;};
    inline string configurationId() const { DARABONBA_PTR_GET_DEFAULT(configurationId_, "") };
    inline GenerateOpsItemRequest& setConfigurationId(string configurationId) { DARABONBA_PTR_SET_VALUE(configurationId_, configurationId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GenerateOpsItemRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline GenerateOpsItemRequest& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateOpsItemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The token that is used to ensure the idempotency.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The configuration ID of the O\\&M item.
    std::shared_ptr<string> configurationId_ = nullptr;
    // The source system data.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The data source system.
    std::shared_ptr<string> dataSource_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
