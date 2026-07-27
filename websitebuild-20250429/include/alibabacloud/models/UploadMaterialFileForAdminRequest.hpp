// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMATERIALFILEFORADMINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMATERIALFILEFORADMINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UploadMaterialFileForAdminRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMaterialFileForAdminRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BelongId, belongId_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMaterialFileForAdminRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongId, belongId_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UploadMaterialFileForAdminRequest() = default ;
    UploadMaterialFileForAdminRequest(const UploadMaterialFileForAdminRequest &) = default ;
    UploadMaterialFileForAdminRequest(UploadMaterialFileForAdminRequest &&) = default ;
    UploadMaterialFileForAdminRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMaterialFileForAdminRequest() = default ;
    UploadMaterialFileForAdminRequest& operator=(const UploadMaterialFileForAdminRequest &) = default ;
    UploadMaterialFileForAdminRequest& operator=(UploadMaterialFileForAdminRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongId_ == nullptr
        && this->bizId_ == nullptr && this->fileUrl_ == nullptr && this->name_ == nullptr; };
    // belongId Field Functions 
    bool hasBelongId() const { return this->belongId_ != nullptr;};
    void deleteBelongId() { this->belongId_ = nullptr;};
    inline string getBelongId() const { DARABONBA_PTR_GET_DEFAULT(belongId_, "") };
    inline UploadMaterialFileForAdminRequest& setBelongId(string belongId) { DARABONBA_PTR_SET_VALUE(belongId_, belongId) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UploadMaterialFileForAdminRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UploadMaterialFileForAdminRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UploadMaterialFileForAdminRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the owner.
    shared_ptr<string> belongId_ {};
    // The business instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // The file URL.
    // 
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    // The file name.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
