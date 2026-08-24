// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVIRUSFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVIRUSFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeleteVirusFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVirusFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVirusFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
    };
    DeleteVirusFileRequest() = default ;
    DeleteVirusFileRequest(const DeleteVirusFileRequest &) = default ;
    DeleteVirusFileRequest(DeleteVirusFileRequest &&) = default ;
    DeleteVirusFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVirusFileRequest() = default ;
    DeleteVirusFileRequest& operator=(const DeleteVirusFileRequest &) = default ;
    DeleteVirusFileRequest& operator=(DeleteVirusFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devTag_ == nullptr
        && this->fileMd5_ == nullptr && this->filePath_ == nullptr; };
    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline DeleteVirusFileRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // fileMd5 Field Functions 
    bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
    void deleteFileMd5() { this->fileMd5_ = nullptr;};
    inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
    inline DeleteVirusFileRequest& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline DeleteVirusFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


  protected:
    // The unique identifier of the user\\"s endpoint device where the virus file is located. The value can be up to 64 characters in length. You can obtain the value from the following operation:
    // - [ListVirusFileStatuses](~~ListVirusFileStatuses~~): lists virus file statuses.
    // 
    // This parameter is required.
    shared_ptr<string> devTag_ {};
    // The MD5 value of the virus file. The value must be a 32-character hexadecimal string. You can obtain the value from the following operation:
    // - [ListVirusFileStatuses](~~ListVirusFileStatuses~~): lists virus file statuses.
    // 
    // This parameter is required.
    shared_ptr<string> fileMd5_ {};
    // The full path of the virus file on the user\\"s endpoint device. Only records with a handling action of Fail can be deleted. You can obtain the value from the following operation:
    // - [ListVirusFileStatuses](~~ListVirusFileStatuses~~): lists virus file statuses.
    // 
    // This parameter is required.
    shared_ptr<string> filePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
