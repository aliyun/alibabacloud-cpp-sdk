// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFILETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFILETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class BatchUpdateFileTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFileTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileInfos, fileInfos_);
      DARABONBA_PTR_TO_JSON(UpdateMode, updateMode_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFileTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileInfos, fileInfos_);
      DARABONBA_PTR_FROM_JSON(UpdateMode, updateMode_);
    };
    BatchUpdateFileTagRequest() = default ;
    BatchUpdateFileTagRequest(const BatchUpdateFileTagRequest &) = default ;
    BatchUpdateFileTagRequest(BatchUpdateFileTagRequest &&) = default ;
    BatchUpdateFileTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFileTagRequest() = default ;
    BatchUpdateFileTagRequest& operator=(const BatchUpdateFileTagRequest &) = default ;
    BatchUpdateFileTagRequest& operator=(BatchUpdateFileTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileInfos& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, FileInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
      };
      FileInfos() = default ;
      FileInfos(const FileInfos &) = default ;
      FileInfos(FileInfos &&) = default ;
      FileInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileInfos() = default ;
      FileInfos& operator=(const FileInfos &) = default ;
      FileInfos& operator=(FileInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->tags_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline FileInfos& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline FileInfos& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline FileInfos& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // This parameter is required.
      shared_ptr<string> fileId_ {};
      // This parameter is required.
      shared_ptr<vector<string>> tags_ {};
    };

    virtual bool empty() const override { return this->fileInfos_ == nullptr
        && this->updateMode_ == nullptr; };
    // fileInfos Field Functions 
    bool hasFileInfos() const { return this->fileInfos_ != nullptr;};
    void deleteFileInfos() { this->fileInfos_ = nullptr;};
    inline const vector<BatchUpdateFileTagRequest::FileInfos> & getFileInfos() const { DARABONBA_PTR_GET_CONST(fileInfos_, vector<BatchUpdateFileTagRequest::FileInfos>) };
    inline vector<BatchUpdateFileTagRequest::FileInfos> getFileInfos() { DARABONBA_PTR_GET(fileInfos_, vector<BatchUpdateFileTagRequest::FileInfos>) };
    inline BatchUpdateFileTagRequest& setFileInfos(const vector<BatchUpdateFileTagRequest::FileInfos> & fileInfos) { DARABONBA_PTR_SET_VALUE(fileInfos_, fileInfos) };
    inline BatchUpdateFileTagRequest& setFileInfos(vector<BatchUpdateFileTagRequest::FileInfos> && fileInfos) { DARABONBA_PTR_SET_RVALUE(fileInfos_, fileInfos) };


    // updateMode Field Functions 
    bool hasUpdateMode() const { return this->updateMode_ != nullptr;};
    void deleteUpdateMode() { this->updateMode_ = nullptr;};
    inline string getUpdateMode() const { DARABONBA_PTR_GET_DEFAULT(updateMode_, "") };
    inline BatchUpdateFileTagRequest& setUpdateMode(string updateMode) { DARABONBA_PTR_SET_VALUE(updateMode_, updateMode) };


  protected:
    // This parameter is required.
    shared_ptr<vector<BatchUpdateFileTagRequest::FileInfos>> fileInfos_ {};
    shared_ptr<string> updateMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
