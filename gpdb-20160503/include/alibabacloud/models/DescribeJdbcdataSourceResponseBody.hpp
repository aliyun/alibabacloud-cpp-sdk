// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJDBCDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJDBCDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeJDBCDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJDBCDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(ExternalDataServiceId, externalDataServiceId_);
      DARABONBA_PTR_TO_JSON(JDBCConnectionString, JDBCConnectionString_);
      DARABONBA_PTR_TO_JSON(JDBCPassword, JDBCPassword_);
      DARABONBA_PTR_TO_JSON(JDBCUserName, JDBCUserName_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJDBCDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(ExternalDataServiceId, externalDataServiceId_);
      DARABONBA_PTR_FROM_JSON(JDBCConnectionString, JDBCConnectionString_);
      DARABONBA_PTR_FROM_JSON(JDBCPassword, JDBCPassword_);
      DARABONBA_PTR_FROM_JSON(JDBCUserName, JDBCUserName_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
    };
    DescribeJDBCDataSourceResponseBody() = default ;
    DescribeJDBCDataSourceResponseBody(const DescribeJDBCDataSourceResponseBody &) = default ;
    DescribeJDBCDataSourceResponseBody(DescribeJDBCDataSourceResponseBody &&) = default ;
    DescribeJDBCDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJDBCDataSourceResponseBody() = default ;
    DescribeJDBCDataSourceResponseBody& operator=(const DescribeJDBCDataSourceResponseBody &) = default ;
    DescribeJDBCDataSourceResponseBody& operator=(DescribeJDBCDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->dataSourceDescription_ != nullptr && this->dataSourceId_ != nullptr && this->dataSourceName_ != nullptr && this->dataSourceStatus_ != nullptr && this->dataSourceType_ != nullptr
        && this->externalDataServiceId_ != nullptr && this->JDBCConnectionString_ != nullptr && this->JDBCPassword_ != nullptr && this->JDBCUserName_ != nullptr && this->modifyTime_ != nullptr
        && this->requestId_ != nullptr && this->statusMessage_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeJDBCDataSourceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string dataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceStatus Field Functions 
    bool hasDataSourceStatus() const { return this->dataSourceStatus_ != nullptr;};
    void deleteDataSourceStatus() { this->dataSourceStatus_ = nullptr;};
    inline string dataSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStatus_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceStatus(string dataSourceStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStatus_, dataSourceStatus) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // externalDataServiceId Field Functions 
    bool hasExternalDataServiceId() const { return this->externalDataServiceId_ != nullptr;};
    void deleteExternalDataServiceId() { this->externalDataServiceId_ = nullptr;};
    inline string externalDataServiceId() const { DARABONBA_PTR_GET_DEFAULT(externalDataServiceId_, "") };
    inline DescribeJDBCDataSourceResponseBody& setExternalDataServiceId(string externalDataServiceId) { DARABONBA_PTR_SET_VALUE(externalDataServiceId_, externalDataServiceId) };


    // JDBCConnectionString Field Functions 
    bool hasJDBCConnectionString() const { return this->JDBCConnectionString_ != nullptr;};
    void deleteJDBCConnectionString() { this->JDBCConnectionString_ = nullptr;};
    inline string JDBCConnectionString() const { DARABONBA_PTR_GET_DEFAULT(JDBCConnectionString_, "") };
    inline DescribeJDBCDataSourceResponseBody& setJDBCConnectionString(string JDBCConnectionString) { DARABONBA_PTR_SET_VALUE(JDBCConnectionString_, JDBCConnectionString) };


    // JDBCPassword Field Functions 
    bool hasJDBCPassword() const { return this->JDBCPassword_ != nullptr;};
    void deleteJDBCPassword() { this->JDBCPassword_ = nullptr;};
    inline string JDBCPassword() const { DARABONBA_PTR_GET_DEFAULT(JDBCPassword_, "") };
    inline DescribeJDBCDataSourceResponseBody& setJDBCPassword(string JDBCPassword) { DARABONBA_PTR_SET_VALUE(JDBCPassword_, JDBCPassword) };


    // JDBCUserName Field Functions 
    bool hasJDBCUserName() const { return this->JDBCUserName_ != nullptr;};
    void deleteJDBCUserName() { this->JDBCUserName_ = nullptr;};
    inline string JDBCUserName() const { DARABONBA_PTR_GET_DEFAULT(JDBCUserName_, "") };
    inline DescribeJDBCDataSourceResponseBody& setJDBCUserName(string JDBCUserName) { DARABONBA_PTR_SET_VALUE(JDBCUserName_, JDBCUserName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeJDBCDataSourceResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJDBCDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribeJDBCDataSourceResponseBody& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    // The time when the service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the service. The description can be up to 256 characters in length.
    std::shared_ptr<string> dataSourceDescription_ = nullptr;
    // The data source ID.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // The name of data soruce
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The status of the service. Valid values:
    // 
    // *   Init
    // *   Running
    // *   Exception
    std::shared_ptr<string> dataSourceStatus_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The id of the external data service
    std::shared_ptr<string> externalDataServiceId_ = nullptr;
    // The JDBC connection string.
    std::shared_ptr<string> JDBCConnectionString_ = nullptr;
    // The password of the database account.
    std::shared_ptr<string> JDBCPassword_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> JDBCUserName_ = nullptr;
    // The time when the data source was last modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The message of the status
    std::shared_ptr<string> statusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
