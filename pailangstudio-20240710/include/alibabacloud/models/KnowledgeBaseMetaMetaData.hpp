// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEMETAMETADATA_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEMETAMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseMetaMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseMetaMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(FileMetaId, fileMetaId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUri, fileUri_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseMetaMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileMetaId, fileMetaId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUri, fileUri_);
    };
    KnowledgeBaseMetaMetaData() = default ;
    KnowledgeBaseMetaMetaData(const KnowledgeBaseMetaMetaData &) = default ;
    KnowledgeBaseMetaMetaData(KnowledgeBaseMetaMetaData &&) = default ;
    KnowledgeBaseMetaMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseMetaMetaData() = default ;
    KnowledgeBaseMetaMetaData& operator=(const KnowledgeBaseMetaMetaData &) = default ;
    KnowledgeBaseMetaMetaData& operator=(KnowledgeBaseMetaMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileMetaId_ == nullptr
        && return this->fileName_ == nullptr && return this->fileUri_ == nullptr; };
    // fileMetaId Field Functions 
    bool hasFileMetaId() const { return this->fileMetaId_ != nullptr;};
    void deleteFileMetaId() { this->fileMetaId_ = nullptr;};
    inline string fileMetaId() const { DARABONBA_PTR_GET_DEFAULT(fileMetaId_, "") };
    inline KnowledgeBaseMetaMetaData& setFileMetaId(string fileMetaId) { DARABONBA_PTR_SET_VALUE(fileMetaId_, fileMetaId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline KnowledgeBaseMetaMetaData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUri Field Functions 
    bool hasFileUri() const { return this->fileUri_ != nullptr;};
    void deleteFileUri() { this->fileUri_ = nullptr;};
    inline string fileUri() const { DARABONBA_PTR_GET_DEFAULT(fileUri_, "") };
    inline KnowledgeBaseMetaMetaData& setFileUri(string fileUri) { DARABONBA_PTR_SET_VALUE(fileUri_, fileUri) };


  protected:
    std::shared_ptr<string> fileMetaId_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileUri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
