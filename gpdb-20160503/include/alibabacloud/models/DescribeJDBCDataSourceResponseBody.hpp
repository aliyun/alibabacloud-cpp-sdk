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
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSourceDescription_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceStatus_ == nullptr && this->dataSourceType_ == nullptr
        && this->externalDataServiceId_ == nullptr && this->JDBCConnectionString_ == nullptr && this->JDBCPassword_ == nullptr && this->JDBCUserName_ == nullptr && this->modifyTime_ == nullptr
        && this->requestId_ == nullptr && this->statusMessage_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeJDBCDataSourceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string getDataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceStatus Field Functions 
    bool hasDataSourceStatus() const { return this->dataSourceStatus_ != nullptr;};
    void deleteDataSourceStatus() { this->dataSourceStatus_ = nullptr;};
    inline string getDataSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStatus_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceStatus(string dataSourceStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStatus_, dataSourceStatus) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline DescribeJDBCDataSourceResponseBody& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // externalDataServiceId Field Functions 
    bool hasExternalDataServiceId() const { return this->externalDataServiceId_ != nullptr;};
    void deleteExternalDataServiceId() { this->externalDataServiceId_ = nullptr;};
    inline string getExternalDataServiceId() const { DARABONBA_PTR_GET_DEFAULT(externalDataServiceId_, "") };
    inline DescribeJDBCDataSourceResponseBody& setExternalDataServiceId(string externalDataServiceId) { DARABONBA_PTR_SET_VALUE(externalDataServiceId_, externalDataServiceId) };


    // JDBCConnectionString Field Functions 
    bool hasJDBCConnectionString() const { return this->JDBCConnectionString_ != nullptr;};
    void deleteJDBCConnectionString() { this->JDBCConnectionString_ = nullptr;};
    inline string getJDBCConnectionString() const { DARABONBA_PTR_GET_DEFAULT(JDBCConnectionString_, "") };
    inline DescribeJDBCDataSourceResponseBody& setJDBCConnectionString(string JDBCConnectionString) { DARABONBA_PTR_SET_VALUE(JDBCConnectionString_, JDBCConnectionString) };


    // JDBCPassword Field Functions 
    bool hasJDBCPassword() const { return this->JDBCPassword_ != nullptr;};
    void deleteJDBCPassword() { this->JDBCPassword_ = nullptr;};
    inline string getJDBCPassword() const { DARABONBA_PTR_GET_DEFAULT(JDBCPassword_, "") };
    inline DescribeJDBCDataSourceResponseBody& setJDBCPassword(string JDBCPassword) { DARABONBA_PTR_SET_VALUE(JDBCPassword_, JDBCPassword) };


    // JDBCUserName Field Functions 
    bool hasJDBCUserName() const { return this->JDBCUserName_ != nullptr;};
    void deleteJDBCUserName() { this->JDBCUserName_ = nullptr;};
    inline string getJDBCUserName() const { DARABONBA_PTR_GET_DEFAULT(JDBCUserName_, "") };
    inline DescribeJDBCDataSourceResponseBody& setJDBCUserName(string JDBCUserName) { DARABONBA_PTR_SET_VALUE(JDBCUserName_, JDBCUserName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeJDBCDataSourceResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJDBCDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribeJDBCDataSourceResponseBody& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    // The time when the service was created.
    shared_ptr<string> createTime_ {};
    // The description of the service. The description can be up to 256 characters in length.
    shared_ptr<string> dataSourceDescription_ {};
    // The data source ID.
    shared_ptr<string> dataSourceId_ {};
    // The name of data soruce
    shared_ptr<string> dataSourceName_ {};
    // The status of the service. Valid values:
    // 
    // *   Init
    // *   Running
    // *   Exception
    shared_ptr<string> dataSourceStatus_ {};
    // The type of the data source.
    shared_ptr<string> dataSourceType_ {};
    // The id of the external data service
    shared_ptr<string> externalDataServiceId_ {};
    // The JDBC connection string.
    shared_ptr<string> JDBCConnectionString_ {};
    // The password of the database account.
    shared_ptr<string> JDBCPassword_ {};
    // The name of the database account.
    shared_ptr<string> JDBCUserName_ {};
    // The time when the data source was last modified.
    shared_ptr<string> modifyTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The message of the status
    shared_ptr<string> statusMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
