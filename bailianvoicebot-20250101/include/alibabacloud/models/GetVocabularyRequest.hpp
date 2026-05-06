// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVOCABULARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVOCABULARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class GetVocabularyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVocabularyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVocabularyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
    };
    GetVocabularyRequest() = default ;
    GetVocabularyRequest(const GetVocabularyRequest &) = default ;
    GetVocabularyRequest(GetVocabularyRequest &&) = default ;
    GetVocabularyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVocabularyRequest() = default ;
    GetVocabularyRequest& operator=(const GetVocabularyRequest &) = default ;
    GetVocabularyRequest& operator=(GetVocabularyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->vocabularyId_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline GetVocabularyRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline GetVocabularyRequest& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


  protected:
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> vocabularyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
