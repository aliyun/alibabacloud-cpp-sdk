// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSPARKAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSPARKAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SubmitSparkAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSparkAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentSource, agentSource_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(TemplateFileId, templateFileId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSparkAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentSource, agentSource_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(TemplateFileId, templateFileId_);
    };
    SubmitSparkAppRequest() = default ;
    SubmitSparkAppRequest(const SubmitSparkAppRequest &) = default ;
    SubmitSparkAppRequest(SubmitSparkAppRequest &&) = default ;
    SubmitSparkAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSparkAppRequest() = default ;
    SubmitSparkAppRequest& operator=(const SubmitSparkAppRequest &) = default ;
    SubmitSparkAppRequest& operator=(SubmitSparkAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentSource_ != nullptr
        && this->agentVersion_ != nullptr && this->appName_ != nullptr && this->appType_ != nullptr && this->DBClusterId_ != nullptr && this->data_ != nullptr
        && this->resourceGroupName_ != nullptr && this->templateFileId_ != nullptr; };
    // agentSource Field Functions 
    bool hasAgentSource() const { return this->agentSource_ != nullptr;};
    void deleteAgentSource() { this->agentSource_ = nullptr;};
    inline string agentSource() const { DARABONBA_PTR_GET_DEFAULT(agentSource_, "") };
    inline SubmitSparkAppRequest& setAgentSource(string agentSource) { DARABONBA_PTR_SET_VALUE(agentSource_, agentSource) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline SubmitSparkAppRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SubmitSparkAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SubmitSparkAppRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline SubmitSparkAppRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SubmitSparkAppRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline SubmitSparkAppRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // templateFileId Field Functions 
    bool hasTemplateFileId() const { return this->templateFileId_ != nullptr;};
    void deleteTemplateFileId() { this->templateFileId_ = nullptr;};
    inline int64_t templateFileId() const { DARABONBA_PTR_GET_DEFAULT(templateFileId_, 0L) };
    inline SubmitSparkAppRequest& setTemplateFileId(int64_t templateFileId) { DARABONBA_PTR_SET_VALUE(templateFileId_, templateFileId) };


  protected:
    // The type of the client. The value can be up to 64 characters in length.
    std::shared_ptr<string> agentSource_ = nullptr;
    // The version of the client. The value can be up to 64 characters in length.
    std::shared_ptr<string> agentVersion_ = nullptr;
    // The name of the application. The value can be up to 64 characters in length.
    std::shared_ptr<string> appName_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   **SQL**
    // *   **STREAMING**
    // *   **BATCH** (default)
    std::shared_ptr<string> appType_ = nullptr;
    // The ID of the Enterprise Edition, Basic Edition, or Data Lakehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The data of the application template.
    // 
    // > For information about the application template configuration, see [Spark application configuration guide](https://help.aliyun.com/document_detail/452402.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The name of the job resource group.
    // 
    // >  You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/612410.html) operation to query the name of a resource group within a cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The ID of the application template.
    // 
    // > You can call the [GetSparkTemplateFullTree](https://help.aliyun.com/document_detail/456205.html) operation to query the application template ID.
    std::shared_ptr<int64_t> templateFileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
