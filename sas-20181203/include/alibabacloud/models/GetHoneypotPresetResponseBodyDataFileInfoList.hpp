// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTPRESETRESPONSEBODYDATAFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTPRESETRESPONSEBODYDATAFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotPresetResponseBodyDataFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotPresetResponseBodyDataFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotPresetResponseBodyDataFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
    };
    GetHoneypotPresetResponseBodyDataFileInfoList() = default ;
    GetHoneypotPresetResponseBodyDataFileInfoList(const GetHoneypotPresetResponseBodyDataFileInfoList &) = default ;
    GetHoneypotPresetResponseBodyDataFileInfoList(GetHoneypotPresetResponseBodyDataFileInfoList &&) = default ;
    GetHoneypotPresetResponseBodyDataFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotPresetResponseBodyDataFileInfoList() = default ;
    GetHoneypotPresetResponseBodyDataFileInfoList& operator=(const GetHoneypotPresetResponseBodyDataFileInfoList &) = default ;
    GetHoneypotPresetResponseBodyDataFileInfoList& operator=(GetHoneypotPresetResponseBodyDataFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->fileName_ != nullptr && this->ossUrl_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline GetHoneypotPresetResponseBodyDataFileInfoList& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetHoneypotPresetResponseBodyDataFileInfoList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline GetHoneypotPresetResponseBodyDataFileInfoList& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


  protected:
    // The ID of the uploaded file.
    std::shared_ptr<string> fileId_ = nullptr;
    // The name of the uploaded file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The download URL.
    std::shared_ptr<string> ossUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
