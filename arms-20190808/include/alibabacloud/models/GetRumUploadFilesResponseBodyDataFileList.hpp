// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMUPLOADFILESRESPONSEBODYDATAFILELIST_HPP_
#define ALIBABACLOUD_MODELS_GETRUMUPLOADFILESRESPONSEBODYDATAFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumUploadFilesResponseBodyDataFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumUploadFilesResponseBodyDataFileList& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_ANY_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumUploadFilesResponseBodyDataFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_ANY_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    GetRumUploadFilesResponseBodyDataFileList() = default ;
    GetRumUploadFilesResponseBodyDataFileList(const GetRumUploadFilesResponseBodyDataFileList &) = default ;
    GetRumUploadFilesResponseBodyDataFileList(GetRumUploadFilesResponseBodyDataFileList &&) = default ;
    GetRumUploadFilesResponseBodyDataFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumUploadFilesResponseBodyDataFileList() = default ;
    GetRumUploadFilesResponseBodyDataFileList& operator=(const GetRumUploadFilesResponseBodyDataFileList &) = default ;
    GetRumUploadFilesResponseBodyDataFileList& operator=(GetRumUploadFilesResponseBodyDataFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->lastModifiedTime_ != nullptr && this->size_ != nullptr && this->uuid_ != nullptr && this->versionId_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetRumUploadFilesResponseBodyDataFileList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline     const Darabonba::Json & lastModifiedTime() const { DARABONBA_GET(lastModifiedTime_) };
    Darabonba::Json & lastModifiedTime() { DARABONBA_GET(lastModifiedTime_) };
    inline GetRumUploadFilesResponseBodyDataFileList& setLastModifiedTime(const Darabonba::Json & lastModifiedTime) { DARABONBA_SET_VALUE(lastModifiedTime_, lastModifiedTime) };
    inline GetRumUploadFilesResponseBodyDataFileList& setLastModifiedTime(Darabonba::Json & lastModifiedTime) { DARABONBA_SET_RVALUE(lastModifiedTime_, lastModifiedTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline GetRumUploadFilesResponseBodyDataFileList& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetRumUploadFilesResponseBodyDataFileList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetRumUploadFilesResponseBodyDataFileList& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    Darabonba::Json lastModifiedTime_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
