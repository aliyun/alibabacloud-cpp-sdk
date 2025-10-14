// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUESTDATASOURCESTORES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUESTDATASOURCESTORES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateDataSourceRequestDataSourceStores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequestDataSourceStores& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceStoreId, dataSourceStoreId_);
      DARABONBA_PTR_TO_JSON(DataSourceStoreStatus, dataSourceStoreStatus_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequestDataSourceStores& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceStoreId, dataSourceStoreId_);
      DARABONBA_PTR_FROM_JSON(DataSourceStoreStatus, dataSourceStoreStatus_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CreateDataSourceRequestDataSourceStores() = default ;
    CreateDataSourceRequestDataSourceStores(const CreateDataSourceRequestDataSourceStores &) = default ;
    CreateDataSourceRequestDataSourceStores(CreateDataSourceRequestDataSourceStores &&) = default ;
    CreateDataSourceRequestDataSourceStores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequestDataSourceStores() = default ;
    CreateDataSourceRequestDataSourceStores& operator=(const CreateDataSourceRequestDataSourceStores &) = default ;
    CreateDataSourceRequestDataSourceStores& operator=(CreateDataSourceRequestDataSourceStores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSourceStoreFrom_ == nullptr && return this->dataSourceStoreId_ == nullptr && return this->dataSourceStoreStatus_ == nullptr && return this->logProjectName_ == nullptr && return this->logRegionId_ == nullptr
        && return this->logStoreName_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateDataSourceRequestDataSourceStores& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceStoreFrom Field Functions 
    bool hasDataSourceStoreFrom() const { return this->dataSourceStoreFrom_ != nullptr;};
    void deleteDataSourceStoreFrom() { this->dataSourceStoreFrom_ = nullptr;};
    inline string dataSourceStoreFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreFrom_, "") };
    inline CreateDataSourceRequestDataSourceStores& setDataSourceStoreFrom(string dataSourceStoreFrom) { DARABONBA_PTR_SET_VALUE(dataSourceStoreFrom_, dataSourceStoreFrom) };


    // dataSourceStoreId Field Functions 
    bool hasDataSourceStoreId() const { return this->dataSourceStoreId_ != nullptr;};
    void deleteDataSourceStoreId() { this->dataSourceStoreId_ = nullptr;};
    inline string dataSourceStoreId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreId_, "") };
    inline CreateDataSourceRequestDataSourceStores& setDataSourceStoreId(string dataSourceStoreId) { DARABONBA_PTR_SET_VALUE(dataSourceStoreId_, dataSourceStoreId) };


    // dataSourceStoreStatus Field Functions 
    bool hasDataSourceStoreStatus() const { return this->dataSourceStoreStatus_ != nullptr;};
    void deleteDataSourceStoreStatus() { this->dataSourceStoreStatus_ = nullptr;};
    inline string dataSourceStoreStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreStatus_, "") };
    inline CreateDataSourceRequestDataSourceStores& setDataSourceStoreStatus(string dataSourceStoreStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStoreStatus_, dataSourceStoreStatus) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string logProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline CreateDataSourceRequestDataSourceStores& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline CreateDataSourceRequestDataSourceStores& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline CreateDataSourceRequestDataSourceStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CreateDataSourceRequestDataSourceStores& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> dataSourceStoreFrom_ = nullptr;
    std::shared_ptr<string> dataSourceStoreId_ = nullptr;
    std::shared_ptr<string> dataSourceStoreStatus_ = nullptr;
    std::shared_ptr<string> logProjectName_ = nullptr;
    std::shared_ptr<string> logRegionId_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
