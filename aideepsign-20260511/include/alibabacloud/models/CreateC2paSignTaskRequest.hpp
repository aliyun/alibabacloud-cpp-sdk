// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEC2PASIGNTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEC2PASIGNTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateC2paSignTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateC2paSignTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateC2paSignTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    CreateC2paSignTaskRequest() = default ;
    CreateC2paSignTaskRequest(const CreateC2paSignTaskRequest &) = default ;
    CreateC2paSignTaskRequest(CreateC2paSignTaskRequest &&) = default ;
    CreateC2paSignTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateC2paSignTaskRequest() = default ;
    CreateC2paSignTaskRequest& operator=(const CreateC2paSignTaskRequest &) = default ;
    CreateC2paSignTaskRequest& operator=(CreateC2paSignTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUrl_ == nullptr
        && this->softwareAgent_ == nullptr && this->sourceType_ == nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateC2paSignTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // softwareAgent Field Functions 
    bool hasSoftwareAgent() const { return this->softwareAgent_ != nullptr;};
    void deleteSoftwareAgent() { this->softwareAgent_ = nullptr;};
    inline string getSoftwareAgent() const { DARABONBA_PTR_GET_DEFAULT(softwareAgent_, "") };
    inline CreateC2paSignTaskRequest& setSoftwareAgent(string softwareAgent) { DARABONBA_PTR_SET_VALUE(softwareAgent_, softwareAgent) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateC2paSignTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The absolute HTTP or HTTPS URL of the file to be signed. The URL can be up to 4,096 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    // Not supported in the current version.
    shared_ptr<string> softwareAgent_ {};
    // Not supported in the current version.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
