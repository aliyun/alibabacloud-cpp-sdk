// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODYDATAFILEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODYDATAFILEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetImageDetectionTaskResultResponseBodyDataFileInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDetectionTaskResultResponseBodyDataFileInfo& obj) { 
      DARABONBA_PTR_TO_JSON(fileId, fileId_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(fileTraceId, fileTraceId_);
      DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDetectionTaskResultResponseBodyDataFileInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(fileId, fileId_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(fileTraceId, fileTraceId_);
      DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
    };
    GetImageDetectionTaskResultResponseBodyDataFileInfo() = default ;
    GetImageDetectionTaskResultResponseBodyDataFileInfo(const GetImageDetectionTaskResultResponseBodyDataFileInfo &) = default ;
    GetImageDetectionTaskResultResponseBodyDataFileInfo(GetImageDetectionTaskResultResponseBodyDataFileInfo &&) = default ;
    GetImageDetectionTaskResultResponseBodyDataFileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDetectionTaskResultResponseBodyDataFileInfo() = default ;
    GetImageDetectionTaskResultResponseBodyDataFileInfo& operator=(const GetImageDetectionTaskResultResponseBodyDataFileInfo &) = default ;
    GetImageDetectionTaskResultResponseBodyDataFileInfo& operator=(GetImageDetectionTaskResultResponseBodyDataFileInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->fileName_ == nullptr && return this->fileTraceId_ == nullptr && return this->ossKey_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline GetImageDetectionTaskResultResponseBodyDataFileInfo& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetImageDetectionTaskResultResponseBodyDataFileInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileTraceId Field Functions 
    bool hasFileTraceId() const { return this->fileTraceId_ != nullptr;};
    void deleteFileTraceId() { this->fileTraceId_ = nullptr;};
    inline string fileTraceId() const { DARABONBA_PTR_GET_DEFAULT(fileTraceId_, "") };
    inline GetImageDetectionTaskResultResponseBodyDataFileInfo& setFileTraceId(string fileTraceId) { DARABONBA_PTR_SET_VALUE(fileTraceId_, fileTraceId) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline GetImageDetectionTaskResultResponseBodyDataFileInfo& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileTraceId_ = nullptr;
    std::shared_ptr<string> ossKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
