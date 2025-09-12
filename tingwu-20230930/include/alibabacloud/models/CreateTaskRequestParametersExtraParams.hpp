// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSEXTRAPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSEXTRAPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersExtraParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersExtraParams& obj) { 
      DARABONBA_PTR_TO_JSON(DomainEducationEnabled, domainEducationEnabled_);
      DARABONBA_PTR_TO_JSON(FullTextSummaryFormat, fullTextSummaryFormat_);
      DARABONBA_PTR_TO_JSON(MaxKeywords, maxKeywords_);
      DARABONBA_PTR_TO_JSON(NfixEnabled, nfixEnabled_);
      DARABONBA_PTR_TO_JSON(OcrAuxiliaryEnabled, ocrAuxiliaryEnabled_);
      DARABONBA_PTR_TO_JSON(TranslateLlmSceneEnabled, translateLlmSceneEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersExtraParams& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainEducationEnabled, domainEducationEnabled_);
      DARABONBA_PTR_FROM_JSON(FullTextSummaryFormat, fullTextSummaryFormat_);
      DARABONBA_PTR_FROM_JSON(MaxKeywords, maxKeywords_);
      DARABONBA_PTR_FROM_JSON(NfixEnabled, nfixEnabled_);
      DARABONBA_PTR_FROM_JSON(OcrAuxiliaryEnabled, ocrAuxiliaryEnabled_);
      DARABONBA_PTR_FROM_JSON(TranslateLlmSceneEnabled, translateLlmSceneEnabled_);
    };
    CreateTaskRequestParametersExtraParams() = default ;
    CreateTaskRequestParametersExtraParams(const CreateTaskRequestParametersExtraParams &) = default ;
    CreateTaskRequestParametersExtraParams(CreateTaskRequestParametersExtraParams &&) = default ;
    CreateTaskRequestParametersExtraParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersExtraParams() = default ;
    CreateTaskRequestParametersExtraParams& operator=(const CreateTaskRequestParametersExtraParams &) = default ;
    CreateTaskRequestParametersExtraParams& operator=(CreateTaskRequestParametersExtraParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainEducationEnabled_ != nullptr
        && this->fullTextSummaryFormat_ != nullptr && this->maxKeywords_ != nullptr && this->nfixEnabled_ != nullptr && this->ocrAuxiliaryEnabled_ != nullptr && this->translateLlmSceneEnabled_ != nullptr; };
    // domainEducationEnabled Field Functions 
    bool hasDomainEducationEnabled() const { return this->domainEducationEnabled_ != nullptr;};
    void deleteDomainEducationEnabled() { this->domainEducationEnabled_ = nullptr;};
    inline bool domainEducationEnabled() const { DARABONBA_PTR_GET_DEFAULT(domainEducationEnabled_, false) };
    inline CreateTaskRequestParametersExtraParams& setDomainEducationEnabled(bool domainEducationEnabled) { DARABONBA_PTR_SET_VALUE(domainEducationEnabled_, domainEducationEnabled) };


    // fullTextSummaryFormat Field Functions 
    bool hasFullTextSummaryFormat() const { return this->fullTextSummaryFormat_ != nullptr;};
    void deleteFullTextSummaryFormat() { this->fullTextSummaryFormat_ = nullptr;};
    inline string fullTextSummaryFormat() const { DARABONBA_PTR_GET_DEFAULT(fullTextSummaryFormat_, "") };
    inline CreateTaskRequestParametersExtraParams& setFullTextSummaryFormat(string fullTextSummaryFormat) { DARABONBA_PTR_SET_VALUE(fullTextSummaryFormat_, fullTextSummaryFormat) };


    // maxKeywords Field Functions 
    bool hasMaxKeywords() const { return this->maxKeywords_ != nullptr;};
    void deleteMaxKeywords() { this->maxKeywords_ = nullptr;};
    inline int32_t maxKeywords() const { DARABONBA_PTR_GET_DEFAULT(maxKeywords_, 0) };
    inline CreateTaskRequestParametersExtraParams& setMaxKeywords(int32_t maxKeywords) { DARABONBA_PTR_SET_VALUE(maxKeywords_, maxKeywords) };


    // nfixEnabled Field Functions 
    bool hasNfixEnabled() const { return this->nfixEnabled_ != nullptr;};
    void deleteNfixEnabled() { this->nfixEnabled_ = nullptr;};
    inline bool nfixEnabled() const { DARABONBA_PTR_GET_DEFAULT(nfixEnabled_, false) };
    inline CreateTaskRequestParametersExtraParams& setNfixEnabled(bool nfixEnabled) { DARABONBA_PTR_SET_VALUE(nfixEnabled_, nfixEnabled) };


    // ocrAuxiliaryEnabled Field Functions 
    bool hasOcrAuxiliaryEnabled() const { return this->ocrAuxiliaryEnabled_ != nullptr;};
    void deleteOcrAuxiliaryEnabled() { this->ocrAuxiliaryEnabled_ = nullptr;};
    inline bool ocrAuxiliaryEnabled() const { DARABONBA_PTR_GET_DEFAULT(ocrAuxiliaryEnabled_, false) };
    inline CreateTaskRequestParametersExtraParams& setOcrAuxiliaryEnabled(bool ocrAuxiliaryEnabled) { DARABONBA_PTR_SET_VALUE(ocrAuxiliaryEnabled_, ocrAuxiliaryEnabled) };


    // translateLlmSceneEnabled Field Functions 
    bool hasTranslateLlmSceneEnabled() const { return this->translateLlmSceneEnabled_ != nullptr;};
    void deleteTranslateLlmSceneEnabled() { this->translateLlmSceneEnabled_ = nullptr;};
    inline bool translateLlmSceneEnabled() const { DARABONBA_PTR_GET_DEFAULT(translateLlmSceneEnabled_, false) };
    inline CreateTaskRequestParametersExtraParams& setTranslateLlmSceneEnabled(bool translateLlmSceneEnabled) { DARABONBA_PTR_SET_VALUE(translateLlmSceneEnabled_, translateLlmSceneEnabled) };


  protected:
    std::shared_ptr<bool> domainEducationEnabled_ = nullptr;
    std::shared_ptr<string> fullTextSummaryFormat_ = nullptr;
    std::shared_ptr<int32_t> maxKeywords_ = nullptr;
    std::shared_ptr<bool> nfixEnabled_ = nullptr;
    std::shared_ptr<bool> ocrAuxiliaryEnabled_ = nullptr;
    std::shared_ptr<bool> translateLlmSceneEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
