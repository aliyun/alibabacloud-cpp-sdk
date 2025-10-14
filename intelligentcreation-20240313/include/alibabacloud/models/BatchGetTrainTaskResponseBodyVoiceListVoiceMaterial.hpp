// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETTRAINTASKRESPONSEBODYVOICELISTVOICEMATERIAL_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETTRAINTASKRESPONSEBODYVOICELISTVOICEMATERIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial& obj) { 
      DARABONBA_PTR_TO_JSON(voiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_TO_JSON(voiceUrl, voiceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial& obj) { 
      DARABONBA_PTR_FROM_JSON(voiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_FROM_JSON(voiceUrl, voiceUrl_);
    };
    BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial() = default ;
    BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial(const BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial &) = default ;
    BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial(BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial &&) = default ;
    BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial() = default ;
    BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial& operator=(const BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial &) = default ;
    BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial& operator=(BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->voiceId_ == nullptr
        && return this->voiceLanguage_ == nullptr && return this->voiceUrl_ == nullptr; };
    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline int64_t voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, 0L) };
    inline BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial& setVoiceId(int64_t voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceLanguage Field Functions 
    bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
    void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
    inline string voiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


    // voiceUrl Field Functions 
    bool hasVoiceUrl() const { return this->voiceUrl_ != nullptr;};
    void deleteVoiceUrl() { this->voiceUrl_ = nullptr;};
    inline string voiceUrl() const { DARABONBA_PTR_GET_DEFAULT(voiceUrl_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial& setVoiceUrl(string voiceUrl) { DARABONBA_PTR_SET_VALUE(voiceUrl_, voiceUrl) };


  protected:
    std::shared_ptr<int64_t> voiceId_ = nullptr;
    std::shared_ptr<string> voiceLanguage_ = nullptr;
    std::shared_ptr<string> voiceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
