// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSMSSIGNREQUESTSIGNFILELIST_HPP_
#define ALIBABACLOUD_MODELS_ADDSMSSIGNREQUESTSIGNFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class AddSmsSignRequestSignFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSmsSignRequestSignFileList& obj) { 
      DARABONBA_PTR_TO_JSON(FileContents, fileContents_);
      DARABONBA_PTR_TO_JSON(FileSuffix, fileSuffix_);
    };
    friend void from_json(const Darabonba::Json& j, AddSmsSignRequestSignFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileContents, fileContents_);
      DARABONBA_PTR_FROM_JSON(FileSuffix, fileSuffix_);
    };
    AddSmsSignRequestSignFileList() = default ;
    AddSmsSignRequestSignFileList(const AddSmsSignRequestSignFileList &) = default ;
    AddSmsSignRequestSignFileList(AddSmsSignRequestSignFileList &&) = default ;
    AddSmsSignRequestSignFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSmsSignRequestSignFileList() = default ;
    AddSmsSignRequestSignFileList& operator=(const AddSmsSignRequestSignFileList &) = default ;
    AddSmsSignRequestSignFileList& operator=(AddSmsSignRequestSignFileList &&) = default ;
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
    inline AddSmsSignRequestSignFileList& setFileContents(string fileContents) { DARABONBA_PTR_SET_VALUE(fileContents_, fileContents) };


    // fileSuffix Field Functions 
    bool hasFileSuffix() const { return this->fileSuffix_ != nullptr;};
    void deleteFileSuffix() { this->fileSuffix_ = nullptr;};
    inline string fileSuffix() const { DARABONBA_PTR_GET_DEFAULT(fileSuffix_, "") };
    inline AddSmsSignRequestSignFileList& setFileSuffix(string fileSuffix) { DARABONBA_PTR_SET_VALUE(fileSuffix_, fileSuffix) };


  protected:
    // The Base64-encoded string of the qualification document. An image cannot exceed 2 MB in size. In some scenarios, you must upload supporting documents to apply for signatures. For more information, see [SMS signature specifications](https://help.aliyun.com/document_detail/108076.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> fileContents_ = nullptr;
    // The format of the qualification document. You can upload multiple images. Images in JPG, PNG, GIF, or JPEG format are supported.
    // 
    // In some scenarios, you must upload supporting documents to apply for signatures. For more information, see [SMS signature specifications](https://help.aliyun.com/document_detail/108076.html).
    // 
    // > If you apply for a signature for other users or if the signature source is the name of an enterprise or public institution, you must upload a certificate and a letter of authorization. For more information, see [Certificate](https://help.aliyun.com/document_detail/108076.html) and [Letter of authorization](https://help.aliyun.com/document_detail/56741.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSuffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
