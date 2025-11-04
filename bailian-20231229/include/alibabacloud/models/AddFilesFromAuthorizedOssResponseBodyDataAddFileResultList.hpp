// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSRESPONSEBODYDATAADDFILERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSRESPONSEBODYDATAADDFILERESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList() = default ;
    AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList(const AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList &) = default ;
    AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList(AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList &&) = default ;
    AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList() = default ;
    AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList& operator=(const AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList &) = default ;
    AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList& operator=(AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->msg_ == nullptr && return this->ossKey_ == nullptr && return this->status_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AddFilesFromAuthorizedOssResponseBodyDataAddFileResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> ossKey_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
