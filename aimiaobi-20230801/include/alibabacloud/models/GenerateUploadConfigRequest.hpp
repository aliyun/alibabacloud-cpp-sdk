// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateUploadConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(ParentDir, parentDir_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(ParentDir, parentDir_);
    };
    GenerateUploadConfigRequest() = default ;
    GenerateUploadConfigRequest(const GenerateUploadConfigRequest &) = default ;
    GenerateUploadConfigRequest(GenerateUploadConfigRequest &&) = default ;
    GenerateUploadConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadConfigRequest() = default ;
    GenerateUploadConfigRequest& operator=(const GenerateUploadConfigRequest &) = default ;
    GenerateUploadConfigRequest& operator=(GenerateUploadConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->fileName_ == nullptr && return this->parentDir_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateUploadConfigRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GenerateUploadConfigRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // parentDir Field Functions 
    bool hasParentDir() const { return this->parentDir_ != nullptr;};
    void deleteParentDir() { this->parentDir_ = nullptr;};
    inline string parentDir() const { DARABONBA_PTR_GET_DEFAULT(parentDir_, "") };
    inline GenerateUploadConfigRequest& setParentDir(string parentDir) { DARABONBA_PTR_SET_VALUE(parentDir_, parentDir) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parentDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
