// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetUploadInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
    };
    GetUploadInfoRequest() = default ;
    GetUploadInfoRequest(const GetUploadInfoRequest &) = default ;
    GetUploadInfoRequest(GetUploadInfoRequest &&) = default ;
    GetUploadInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadInfoRequest() = default ;
    GetUploadInfoRequest& operator=(const GetUploadInfoRequest &) = default ;
    GetUploadInfoRequest& operator=(GetUploadInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->fileType_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetUploadInfoRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetUploadInfoRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


  protected:
    // The ID of the business region where the file is uploaded. If this parameter is not specified, the default OSS region configured for the service is used.
    shared_ptr<string> bizRegionId_ {};
    // The type of the file to upload. Currently, only TASK is supported, which indicates an image task file.
    shared_ptr<string> fileType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
