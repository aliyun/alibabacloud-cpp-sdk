// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADFILEPOLICYFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADFILEPOLICYFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class GenerateUploadFilePolicyForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadFilePolicyForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadFilePolicyForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
    };
    GenerateUploadFilePolicyForPartnerRequest() = default ;
    GenerateUploadFilePolicyForPartnerRequest(const GenerateUploadFilePolicyForPartnerRequest &) = default ;
    GenerateUploadFilePolicyForPartnerRequest(GenerateUploadFilePolicyForPartnerRequest &&) = default ;
    GenerateUploadFilePolicyForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadFilePolicyForPartnerRequest() = default ;
    GenerateUploadFilePolicyForPartnerRequest& operator=(const GenerateUploadFilePolicyForPartnerRequest &) = default ;
    GenerateUploadFilePolicyForPartnerRequest& operator=(GenerateUploadFilePolicyForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->fileName_ == nullptr && return this->fileType_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline GenerateUploadFilePolicyForPartnerRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GenerateUploadFilePolicyForPartnerRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GenerateUploadFilePolicyForPartnerRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
