// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADFILEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADFILEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class GenerateUploadFilePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadFilePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadFilePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
    };
    GenerateUploadFilePolicyRequest() = default ;
    GenerateUploadFilePolicyRequest(const GenerateUploadFilePolicyRequest &) = default ;
    GenerateUploadFilePolicyRequest(GenerateUploadFilePolicyRequest &&) = default ;
    GenerateUploadFilePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadFilePolicyRequest() = default ;
    GenerateUploadFilePolicyRequest& operator=(const GenerateUploadFilePolicyRequest &) = default ;
    GenerateUploadFilePolicyRequest& operator=(GenerateUploadFilePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->fileName_ == nullptr && this->fileType_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline GenerateUploadFilePolicyRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GenerateUploadFilePolicyRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GenerateUploadFilePolicyRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


  protected:
    shared_ptr<string> bizType_ {};
    shared_ptr<string> fileName_ {};
    shared_ptr<string> fileType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
