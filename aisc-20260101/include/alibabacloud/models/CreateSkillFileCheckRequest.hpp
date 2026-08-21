// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLFILECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLFILECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class CreateSkillFileCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillFileCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillFileCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    CreateSkillFileCheckRequest() = default ;
    CreateSkillFileCheckRequest(const CreateSkillFileCheckRequest &) = default ;
    CreateSkillFileCheckRequest(CreateSkillFileCheckRequest &&) = default ;
    CreateSkillFileCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillFileCheckRequest() = default ;
    CreateSkillFileCheckRequest& operator=(const CreateSkillFileCheckRequest &) = default ;
    CreateSkillFileCheckRequest& operator=(CreateSkillFileCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(UploadKey, uploadKey_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(UploadKey, uploadKey_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->fileName_ == nullptr && this->uploadKey_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Files& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Files& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // uploadKey Field Functions 
      bool hasUploadKey() const { return this->uploadKey_ != nullptr;};
      void deleteUploadKey() { this->uploadKey_ = nullptr;};
      inline string getUploadKey() const { DARABONBA_PTR_GET_DEFAULT(uploadKey_, "") };
      inline Files& setUploadKey(string uploadKey) { DARABONBA_PTR_SET_VALUE(uploadKey_, uploadKey) };


    protected:
      // The public URL for downloading the file. The downloaded file must be a compressed package in tar.gz or zip format.
      shared_ptr<string> downloadUrl_ {};
      // The file name. If not specified, the file name is parsed from DownloadUrl.
      shared_ptr<string> fileName_ {};
      // The tenant-isolated OSS temporary object key returned by GenerateSkillOssUploadCredential. Specify either this parameter or DownloadUrl.
      shared_ptr<string> uploadKey_ {};
    };

    virtual bool empty() const override { return this->files_ == nullptr
        && this->source_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<CreateSkillFileCheckRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<CreateSkillFileCheckRequest::Files>) };
    inline vector<CreateSkillFileCheckRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<CreateSkillFileCheckRequest::Files>) };
    inline CreateSkillFileCheckRequest& setFiles(const vector<CreateSkillFileCheckRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline CreateSkillFileCheckRequest& setFiles(vector<CreateSkillFileCheckRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateSkillFileCheckRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The file information.
    shared_ptr<vector<CreateSkillFileCheckRequest::Files>> files_ {};
    // The upload source. If left empty, the default value is user_upload. Use sec_ops_agent for the security operations agent.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
