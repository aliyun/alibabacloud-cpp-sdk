// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILEUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILEUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteFileUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFileUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFileUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
    };
    DeleteFileUploadRequest() = default ;
    DeleteFileUploadRequest(const DeleteFileUploadRequest &) = default ;
    DeleteFileUploadRequest(DeleteFileUploadRequest &&) = default ;
    DeleteFileUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFileUploadRequest() = default ;
    DeleteFileUploadRequest& operator=(const DeleteFileUploadRequest &) = default ;
    DeleteFileUploadRequest& operator=(DeleteFileUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callFrom_ == nullptr
        && this->dmsUnit_ == nullptr && this->fileId_ == nullptr; };
    // callFrom Field Functions 
    bool hasCallFrom() const { return this->callFrom_ != nullptr;};
    void deleteCallFrom() { this->callFrom_ = nullptr;};
    inline string getCallFrom() const { DARABONBA_PTR_GET_DEFAULT(callFrom_, "") };
    inline DeleteFileUploadRequest& setCallFrom(string callFrom) { DARABONBA_PTR_SET_VALUE(callFrom_, callFrom) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline DeleteFileUploadRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline DeleteFileUploadRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


  protected:
    shared_ptr<string> callFrom_ {};
    shared_ptr<string> dmsUnit_ {};
    // This parameter is required.
    shared_ptr<string> fileId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
