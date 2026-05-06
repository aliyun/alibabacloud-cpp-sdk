// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTVOCABULARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTVOCABULARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class ImportVocabularyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportVocabularyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
    };
    friend void from_json(const Darabonba::Json& j, ImportVocabularyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
    };
    ImportVocabularyRequest() = default ;
    ImportVocabularyRequest(const ImportVocabularyRequest &) = default ;
    ImportVocabularyRequest(ImportVocabularyRequest &&) = default ;
    ImportVocabularyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportVocabularyRequest() = default ;
    ImportVocabularyRequest& operator=(const ImportVocabularyRequest &) = default ;
    ImportVocabularyRequest& operator=(ImportVocabularyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->fileKey_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline ImportVocabularyRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline ImportVocabularyRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


  protected:
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> fileKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
