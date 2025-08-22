// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UploadRequest() = default ;
    UploadRequest(const UploadRequest &) = default ;
    UploadRequest(UploadRequest &&) = default ;
    UploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadRequest() = default ;
    UploadRequest& operator=(const UploadRequest &) = default ;
    UploadRequest& operator=(UploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edition_ != nullptr
        && this->file_ != nullptr && this->fileName_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->version_ != nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline UploadRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string file() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline UploadRequest& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline UploadRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UploadRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The version of the SourceMap file.
    std::shared_ptr<string> edition_ = nullptr;
    // The string of the SourceMap file.
    std::shared_ptr<string> file_ = nullptr;
    // The name of the SourceMap file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The application ID.
    // 
    // Log on to the **ARMS console**. In the left-side navigation pane, choose **Browser Monitoring** > **Browser Monitoring**. On the Browser Monitoring page, click the name of an application. The URL in the address bar contains the process ID (PID) of the application. The PID is indicated in the pid=xxx format. The PID is usually percent encoded as xxx%40xxx. You must modify this value to remove the percent encoding. For example, if the PID in the URL is eb4zdose6v%409781be0f44d\\*\\*\\*\\*, you must replace %40 with @ to obtain eb4zdose6v@9781be0f44d\\*\\*\\*\\*.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the region to which the SourceMap file is uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // We recommend that you do not specify this parameter.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
