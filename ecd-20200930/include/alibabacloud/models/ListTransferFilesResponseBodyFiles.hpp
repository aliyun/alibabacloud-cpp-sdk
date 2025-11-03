// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSFERFILESRESPONSEBODYFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSFERFILESRESPONSEBODYFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListTransferFilesResponseBodyFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransferFilesResponseBodyFiles& obj) { 
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssFileName, ossFileName_);
      DARABONBA_PTR_TO_JSON(OssFilePath, ossFilePath_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransferFilesResponseBodyFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssFileName, ossFileName_);
      DARABONBA_PTR_FROM_JSON(OssFilePath, ossFilePath_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTransferFilesResponseBodyFiles() = default ;
    ListTransferFilesResponseBodyFiles(const ListTransferFilesResponseBodyFiles &) = default ;
    ListTransferFilesResponseBodyFiles(ListTransferFilesResponseBodyFiles &&) = default ;
    ListTransferFilesResponseBodyFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransferFilesResponseBodyFiles() = default ;
    ListTransferFilesResponseBodyFiles& operator=(const ListTransferFilesResponseBodyFiles &) = default ;
    ListTransferFilesResponseBodyFiles& operator=(ListTransferFilesResponseBodyFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iconUrl_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->ossFileName_ == nullptr && return this->ossFilePath_ == nullptr && return this->size_ == nullptr
        && return this->status_ == nullptr && return this->type_ == nullptr; };
    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline ListTransferFilesResponseBodyFiles& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListTransferFilesResponseBodyFiles& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTransferFilesResponseBodyFiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossFileName Field Functions 
    bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
    void deleteOssFileName() { this->ossFileName_ = nullptr;};
    inline string ossFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
    inline ListTransferFilesResponseBodyFiles& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


    // ossFilePath Field Functions 
    bool hasOssFilePath() const { return this->ossFilePath_ != nullptr;};
    void deleteOssFilePath() { this->ossFilePath_ = nullptr;};
    inline string ossFilePath() const { DARABONBA_PTR_GET_DEFAULT(ossFilePath_, "") };
    inline ListTransferFilesResponseBodyFiles& setOssFilePath(string ossFilePath) { DARABONBA_PTR_SET_VALUE(ossFilePath_, ossFilePath) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ListTransferFilesResponseBodyFiles& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransferFilesResponseBodyFiles& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTransferFilesResponseBodyFiles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The URL of the file icon.
    // 
    // > 
    // 
    // *   For image file types (.png, .jpg, .jpeg, .gif, .webp, and .svg), the URL of the specific image is returned.
    // 
    // *   For other file types, the URL of the default image is returned.
    std::shared_ptr<string> iconUrl_ = nullptr;
    // The file ID.
    std::shared_ptr<string> id_ = nullptr;
    // The file name.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the object stored in OSS.
    // 
    // > 
    // 
    // *   A value is returned for this parameter only when the object is stored in a custom OSS bucket.
    std::shared_ptr<string> ossFileName_ = nullptr;
    // The path of the object in the OSS bucket.
    // 
    // > 
    // 
    // *   A value is returned for this parameter only when the object is stored in a custom OSS bucket.
    std::shared_ptr<string> ossFilePath_ = nullptr;
    // The file size.
    std::shared_ptr<string> size_ = nullptr;
    // The file status.
    // 
    // Valid values:
    // 
    // *   DELETING
    // *   DELETED
    // *   UPLOADED
    std::shared_ptr<string> status_ = nullptr;
    // The file type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
