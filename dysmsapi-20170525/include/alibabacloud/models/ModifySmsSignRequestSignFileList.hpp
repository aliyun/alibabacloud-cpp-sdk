// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSMSSIGNREQUESTSIGNFILELIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSMSSIGNREQUESTSIGNFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class ModifySmsSignRequestSignFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySmsSignRequestSignFileList& obj) { 
      DARABONBA_PTR_TO_JSON(FileContents, fileContents_);
      DARABONBA_PTR_TO_JSON(FileSuffix, fileSuffix_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySmsSignRequestSignFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileContents, fileContents_);
      DARABONBA_PTR_FROM_JSON(FileSuffix, fileSuffix_);
    };
    ModifySmsSignRequestSignFileList() = default ;
    ModifySmsSignRequestSignFileList(const ModifySmsSignRequestSignFileList &) = default ;
    ModifySmsSignRequestSignFileList(ModifySmsSignRequestSignFileList &&) = default ;
    ModifySmsSignRequestSignFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySmsSignRequestSignFileList() = default ;
    ModifySmsSignRequestSignFileList& operator=(const ModifySmsSignRequestSignFileList &) = default ;
    ModifySmsSignRequestSignFileList& operator=(ModifySmsSignRequestSignFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileContents_ == nullptr
        && return this->fileSuffix_ == nullptr; };
    // fileContents Field Functions 
    bool hasFileContents() const { return this->fileContents_ != nullptr;};
    void deleteFileContents() { this->fileContents_ = nullptr;};
    inline string fileContents() const { DARABONBA_PTR_GET_DEFAULT(fileContents_, "") };
    inline ModifySmsSignRequestSignFileList& setFileContents(string fileContents) { DARABONBA_PTR_SET_VALUE(fileContents_, fileContents) };


    // fileSuffix Field Functions 
    bool hasFileSuffix() const { return this->fileSuffix_ != nullptr;};
    void deleteFileSuffix() { this->fileSuffix_ = nullptr;};
    inline string fileSuffix() const { DARABONBA_PTR_GET_DEFAULT(fileSuffix_, "") };
    inline ModifySmsSignRequestSignFileList& setFileSuffix(string fileSuffix) { DARABONBA_PTR_SET_VALUE(fileSuffix_, fileSuffix) };


  protected:
    // The base64-encoded string of the signed files. The size of the image cannot exceed 2 MB.
    // 
    // In some scenarios, documents are required to prove your identity. For more information, see [Signature specifications](https://help.aliyun.com/document_detail/108076.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> fileContents_ = nullptr;
    // The format of the documents. You can upload multiple images. JPG, PNG, GIF, and JPEG are supported.
    // 
    // In some scenarios, documents are required to prove your identity. For more information, see [Signature specifications](https://help.aliyun.com/document_detail/108076.html).
    // 
    // > If the signature is used for other purposes or the signature source is an enterprise or public institution, you must upload some documents and an authorization letter. For more information, see [Documents](https://help.aliyun.com/document_detail/108076.html) and [Letter of authorization](https://help.aliyun.com/document_detail/56741.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSuffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
