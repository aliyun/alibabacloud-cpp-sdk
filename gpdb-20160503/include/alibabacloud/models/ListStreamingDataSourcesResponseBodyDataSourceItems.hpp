// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINGDATASOURCESRESPONSEBODYDATASOURCEITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINGDATASOURCESRESPONSEBODYDATASOURCEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListStreamingDataSourcesResponseBodyDataSourceItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamingDataSourcesResponseBodyDataSourceItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamingDataSourcesResponseBodyDataSourceItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListStreamingDataSourcesResponseBodyDataSourceItems() = default ;
    ListStreamingDataSourcesResponseBodyDataSourceItems(const ListStreamingDataSourcesResponseBodyDataSourceItems &) = default ;
    ListStreamingDataSourcesResponseBodyDataSourceItems(ListStreamingDataSourcesResponseBodyDataSourceItems &&) = default ;
    ListStreamingDataSourcesResponseBodyDataSourceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamingDataSourcesResponseBodyDataSourceItems() = default ;
    ListStreamingDataSourcesResponseBodyDataSourceItems& operator=(const ListStreamingDataSourcesResponseBodyDataSourceItems &) = default ;
    ListStreamingDataSourcesResponseBodyDataSourceItems& operator=(ListStreamingDataSourcesResponseBodyDataSourceItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSourceConfig_ == nullptr && return this->dataSourceDescription_ == nullptr && return this->dataSourceId_ == nullptr && return this->dataSourceName_ == nullptr && return this->dataSourceType_ == nullptr
        && return this->errorMessage_ == nullptr && return this->modifyTime_ == nullptr && return this->serviceId_ == nullptr && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceConfig Field Functions 
    bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
    void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
    inline string dataSourceConfig() const { DARABONBA_PTR_GET_DEFAULT(dataSourceConfig_, "") };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setDataSourceConfig(string dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string dataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int32_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0) };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setDataSourceId(int32_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int32_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0) };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setServiceId(int32_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStreamingDataSourcesResponseBodyDataSourceItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the data source was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The configurations of the data source.
    std::shared_ptr<string> dataSourceConfig_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> dataSourceDescription_ = nullptr;
    // The data source ID.
    std::shared_ptr<int32_t> dataSourceId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   kafka
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The information about the service status. For example, if the service is in the exception state, the cause of the exception is displayed. If the service is in the running state, this parameter is left empty.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the data source was last modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The service ID.
    std::shared_ptr<int32_t> serviceId_ = nullptr;
    // The status of the service. Valid values:
    // 
    // *   init
    // *   running
    // *   exception
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
