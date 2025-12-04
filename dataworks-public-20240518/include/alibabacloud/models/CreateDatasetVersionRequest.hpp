// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDatasetVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateDatasetVersionRequest() = default ;
    CreateDatasetVersionRequest(const CreateDatasetVersionRequest &) = default ;
    CreateDatasetVersionRequest(CreateDatasetVersionRequest &&) = default ;
    CreateDatasetVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetVersionRequest() = default ;
    CreateDatasetVersionRequest& operator=(const CreateDatasetVersionRequest &) = default ;
    CreateDatasetVersionRequest& operator=(CreateDatasetVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->datasetId_ == nullptr && return this->importInfo_ == nullptr && return this->mountPath_ == nullptr && return this->url_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDatasetVersionRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline CreateDatasetVersionRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // importInfo Field Functions 
    bool hasImportInfo() const { return this->importInfo_ != nullptr;};
    void deleteImportInfo() { this->importInfo_ = nullptr;};
    inline const map<string, string> & importInfo() const { DARABONBA_PTR_GET_CONST(importInfo_, map<string, string>) };
    inline map<string, string> importInfo() { DARABONBA_PTR_GET(importInfo_, map<string, string>) };
    inline CreateDatasetVersionRequest& setImportInfo(const map<string, string> & importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };
    inline CreateDatasetVersionRequest& setImportInfo(map<string, string> && importInfo) { DARABONBA_PTR_SET_RVALUE(importInfo_, importInfo) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateDatasetVersionRequest& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateDatasetVersionRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<map<string, string>> importInfo_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
