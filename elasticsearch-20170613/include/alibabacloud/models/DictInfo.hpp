// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DICTINFO_HPP_
#define ALIBABACLOUD_MODELS_DICTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DictInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DictInfo& obj) { 
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DictInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DictInfo() = default ;
    DictInfo(const DictInfo &) = default ;
    DictInfo(DictInfo &&) = default ;
    DictInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DictInfo() = default ;
    DictInfo& operator=(const DictInfo &) = default ;
    DictInfo& operator=(DictInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->name_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DictInfo& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DictInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DictInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DictInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The size of the dictionary file. Unit: bytes.
    shared_ptr<int64_t> fileSize_ {};
    // The name of the dictionary file. Requirements:
    // 
    // - Main dictionary or stopword list: one word per line, saved as a UTF-8 encoded DIC file. The file name can contain uppercase and lowercase letters, digits, and underscores, and cannot exceed 30 characters in length. Files with duplicate names are not allowed. The main dictionary file and the stopword file cannot share the same name.
    // - Synonym dictionary: one synonym expression per line, saved as a UTF-8 encoded TXT file.
    // - Alibaba dictionary: the file name must be aliws_ext_dict.txt. The file must be in UTF-8 format. Each line contains one word with no leading or trailing whitespace. Use UNIX or Linux line endings, where each line ends with 
    // . If the file is generated on a Windows system, use the dos2unix tool on a Linux machine to process the dictionary file before uploading it.
    shared_ptr<string> name_ {};
    // The source type of the dictionary file. Valid values:
    // 
    // - OSS: Object Storage Service (OSS). Ensure that the OSS bucket has public-read permission.
    // - ORIGIN: open-source Elasticsearch
    // - UPLOAD: uploaded file.
    shared_ptr<string> sourceType_ {};
    // The type of the dictionary file. Valid values:
    // 
    // - STOP: stopword list
    // - MAIN: main dictionary
    // - SYNONYMS: synonym dictionary
    // - ALI_WS: Alibaba dictionary.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
