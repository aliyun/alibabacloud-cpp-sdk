// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTINTERVENEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTINTERVENEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ImportInterveneFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportInterveneFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ImportInterveneFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    ImportInterveneFileRequest() = default ;
    ImportInterveneFileRequest(const ImportInterveneFileRequest &) = default ;
    ImportInterveneFileRequest(ImportInterveneFileRequest &&) = default ;
    ImportInterveneFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportInterveneFileRequest() = default ;
    ImportInterveneFileRequest& operator=(const ImportInterveneFileRequest &) = default ;
    ImportInterveneFileRequest& operator=(ImportInterveneFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->docName_ != nullptr && this->fileKey_ != nullptr && this->fileUrl_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ImportInterveneFileRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline ImportInterveneFileRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline ImportInterveneFileRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline ImportInterveneFileRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
