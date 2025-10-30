// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALDATASOURCESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALDATASOURCESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListExternalDataSourcesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalDataSourcesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_TO_JSON(DataSourceDir, dataSourceDir_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(ExternalDataServiceId, externalDataServiceId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalDataSourcesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_FROM_JSON(DataSourceDir, dataSourceDir_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(ExternalDataServiceId, externalDataServiceId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
    };
    ListExternalDataSourcesResponseBodyItems() = default ;
    ListExternalDataSourcesResponseBodyItems(const ListExternalDataSourcesResponseBodyItems &) = default ;
    ListExternalDataSourcesResponseBodyItems(ListExternalDataSourcesResponseBodyItems &&) = default ;
    ListExternalDataSourcesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalDataSourcesResponseBodyItems() = default ;
    ListExternalDataSourcesResponseBodyItems& operator=(const ListExternalDataSourcesResponseBodyItems &) = default ;
    ListExternalDataSourcesResponseBodyItems& operator=(ListExternalDataSourcesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSourceDescription_ == nullptr && return this->dataSourceDir_ == nullptr && return this->dataSourceId_ == nullptr && return this->dataSourceName_ == nullptr && return this->dataSourceStatus_ == nullptr
        && return this->dataSourceType_ == nullptr && return this->externalDataServiceId_ == nullptr && return this->modifyTime_ == nullptr && return this->statusMessage_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListExternalDataSourcesResponseBodyItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string dataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline ListExternalDataSourcesResponseBodyItems& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceDir Field Functions 
    bool hasDataSourceDir() const { return this->dataSourceDir_ != nullptr;};
    void deleteDataSourceDir() { this->dataSourceDir_ = nullptr;};
    inline string dataSourceDir() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDir_, "") };
    inline ListExternalDataSourcesResponseBodyItems& setDataSourceDir(string dataSourceDir) { DARABONBA_PTR_SET_VALUE(dataSourceDir_, dataSourceDir) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int32_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0) };
    inline ListExternalDataSourcesResponseBodyItems& setDataSourceId(int32_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ListExternalDataSourcesResponseBodyItems& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceStatus Field Functions 
    bool hasDataSourceStatus() const { return this->dataSourceStatus_ != nullptr;};
    void deleteDataSourceStatus() { this->dataSourceStatus_ = nullptr;};
    inline string dataSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStatus_, "") };
    inline ListExternalDataSourcesResponseBodyItems& setDataSourceStatus(string dataSourceStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStatus_, dataSourceStatus) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListExternalDataSourcesResponseBodyItems& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // externalDataServiceId Field Functions 
    bool hasExternalDataServiceId() const { return this->externalDataServiceId_ != nullptr;};
    void deleteExternalDataServiceId() { this->externalDataServiceId_ = nullptr;};
    inline int32_t externalDataServiceId() const { DARABONBA_PTR_GET_DEFAULT(externalDataServiceId_, 0) };
    inline ListExternalDataSourcesResponseBodyItems& setExternalDataServiceId(int32_t externalDataServiceId) { DARABONBA_PTR_SET_VALUE(externalDataServiceId_, externalDataServiceId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListExternalDataSourcesResponseBodyItems& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline ListExternalDataSourcesResponseBodyItems& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    // The time when the service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> dataSourceDescription_ = nullptr;
    // The service directory in which Hadoop-related configuration files are stored.
    std::shared_ptr<string> dataSourceDir_ = nullptr;
    // The service ID.
    std::shared_ptr<int32_t> dataSourceId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The status of the service. Valid values:
    // 
    // *   init
    // *   running
    // *   exception
    std::shared_ptr<string> dataSourceStatus_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The Id of external data service
    std::shared_ptr<int32_t> externalDataServiceId_ = nullptr;
    // The time when the service was last modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The information about the service status. For example, if the service is in the exception state, the cause of the exception is displayed. If the service is in the running state, this parameter is left empty.
    std::shared_ptr<string> statusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
