// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTDEFINITIONASYNCHRONOUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTDEFINITIONASYNCHRONOUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ImportDefinitionAsynchronousRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportDefinitionAsynchronousRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(ImportType, importType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, ImportDefinitionAsynchronousRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(ImportType, importType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    ImportDefinitionAsynchronousRequest() = default ;
    ImportDefinitionAsynchronousRequest(const ImportDefinitionAsynchronousRequest &) = default ;
    ImportDefinitionAsynchronousRequest(ImportDefinitionAsynchronousRequest &&) = default ;
    ImportDefinitionAsynchronousRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportDefinitionAsynchronousRequest() = default ;
    ImportDefinitionAsynchronousRequest& operator=(const ImportDefinitionAsynchronousRequest &) = default ;
    ImportDefinitionAsynchronousRequest& operator=(ImportDefinitionAsynchronousRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->importType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->ossUrl_ == nullptr && return this->vhostName_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline ImportDefinitionAsynchronousRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // importType Field Functions 
    bool hasImportType() const { return this->importType_ != nullptr;};
    void deleteImportType() { this->importType_ = nullptr;};
    inline int32_t importType() const { DARABONBA_PTR_GET_DEFAULT(importType_, 0) };
    inline ImportDefinitionAsynchronousRequest& setImportType(int32_t importType) { DARABONBA_PTR_SET_VALUE(importType_, importType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportDefinitionAsynchronousRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ImportDefinitionAsynchronousRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline ImportDefinitionAsynchronousRequest& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline ImportDefinitionAsynchronousRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> importType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossUrl_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
