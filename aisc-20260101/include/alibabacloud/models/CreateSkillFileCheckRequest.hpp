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
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillFileCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
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
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
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
        && this->fileName_ == nullptr; };
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


    protected:
      shared_ptr<string> downloadUrl_ {};
      shared_ptr<string> fileName_ {};
    };

    virtual bool empty() const override { return this->files_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<CreateSkillFileCheckRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<CreateSkillFileCheckRequest::Files>) };
    inline vector<CreateSkillFileCheckRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<CreateSkillFileCheckRequest::Files>) };
    inline CreateSkillFileCheckRequest& setFiles(const vector<CreateSkillFileCheckRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline CreateSkillFileCheckRequest& setFiles(vector<CreateSkillFileCheckRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


  protected:
    shared_ptr<vector<CreateSkillFileCheckRequest::Files>> files_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
