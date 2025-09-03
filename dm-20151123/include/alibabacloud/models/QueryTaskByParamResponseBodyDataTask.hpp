// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKBYPARAMRESPONSEBODYDATATASK_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKBYPARAMRESPONSEBODYDATATASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTaskByParamResponseBodyDataTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskByParamResponseBodyDataTask& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ConfigSetId, configSetId_);
      DARABONBA_PTR_TO_JSON(ConfigSetName, configSetName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
      DARABONBA_PTR_TO_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UtcCreateTime, utcCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskByParamResponseBodyDataTask& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ConfigSetId, configSetId_);
      DARABONBA_PTR_FROM_JSON(ConfigSetName, configSetName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
      DARABONBA_PTR_FROM_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UtcCreateTime, utcCreateTime_);
    };
    QueryTaskByParamResponseBodyDataTask() = default ;
    QueryTaskByParamResponseBodyDataTask(const QueryTaskByParamResponseBodyDataTask &) = default ;
    QueryTaskByParamResponseBodyDataTask(QueryTaskByParamResponseBodyDataTask &&) = default ;
    QueryTaskByParamResponseBodyDataTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskByParamResponseBodyDataTask() = default ;
    QueryTaskByParamResponseBodyDataTask& operator=(const QueryTaskByParamResponseBodyDataTask &) = default ;
    QueryTaskByParamResponseBodyDataTask& operator=(QueryTaskByParamResponseBodyDataTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressType_ != nullptr
        && this->configSetId_ != nullptr && this->configSetName_ != nullptr && this->createTime_ != nullptr && this->ipPoolId_ != nullptr && this->ipPoolName_ != nullptr
        && this->receiversName_ != nullptr && this->requestCount_ != nullptr && this->tagName_ != nullptr && this->taskId_ != nullptr && this->taskStatus_ != nullptr
        && this->templateName_ != nullptr && this->utcCreateTime_ != nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // configSetId Field Functions 
    bool hasConfigSetId() const { return this->configSetId_ != nullptr;};
    void deleteConfigSetId() { this->configSetId_ = nullptr;};
    inline string configSetId() const { DARABONBA_PTR_GET_DEFAULT(configSetId_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setConfigSetId(string configSetId) { DARABONBA_PTR_SET_VALUE(configSetId_, configSetId) };


    // configSetName Field Functions 
    bool hasConfigSetName() const { return this->configSetName_ != nullptr;};
    void deleteConfigSetName() { this->configSetName_ = nullptr;};
    inline string configSetName() const { DARABONBA_PTR_GET_DEFAULT(configSetName_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setConfigSetName(string configSetName) { DARABONBA_PTR_SET_VALUE(configSetName_, configSetName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string ipPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // ipPoolName Field Functions 
    bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
    void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
    inline string ipPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


    // receiversName Field Functions 
    bool hasReceiversName() const { return this->receiversName_ != nullptr;};
    void deleteReceiversName() { this->receiversName_ = nullptr;};
    inline string receiversName() const { DARABONBA_PTR_GET_DEFAULT(receiversName_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setReceiversName(string receiversName) { DARABONBA_PTR_SET_VALUE(receiversName_, receiversName) };


    // requestCount Field Functions 
    bool hasRequestCount() const { return this->requestCount_ != nullptr;};
    void deleteRequestCount() { this->requestCount_ = nullptr;};
    inline string requestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setRequestCount(string requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline QueryTaskByParamResponseBodyDataTask& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // utcCreateTime Field Functions 
    bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
    void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
    inline int64_t utcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
    inline QueryTaskByParamResponseBodyDataTask& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


  protected:
    // Address type, sending address: 1; random address: 0;
    std::shared_ptr<string> addressType_ = nullptr;
    std::shared_ptr<string> configSetId_ = nullptr;
    std::shared_ptr<string> configSetName_ = nullptr;
    // Creation time
    std::shared_ptr<string> createTime_ = nullptr;
    // dedicated IP pool ID.
    std::shared_ptr<string> ipPoolId_ = nullptr;
    // dedicated IP pool name.
    std::shared_ptr<string> ipPoolName_ = nullptr;
    // Receiver\\"s name
    std::shared_ptr<string> receiversName_ = nullptr;
    // Request count
    std::shared_ptr<string> requestCount_ = nullptr;
    // Tag
    std::shared_ptr<string> tagName_ = nullptr;
    // Task ID
    std::shared_ptr<string> taskId_ = nullptr;
    // Task status, sent successfully: 1
    std::shared_ptr<string> taskStatus_ = nullptr;
    // Template name
    std::shared_ptr<string> templateName_ = nullptr;
    // Creation time in UTC format
    std::shared_ptr<int64_t> utcCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
