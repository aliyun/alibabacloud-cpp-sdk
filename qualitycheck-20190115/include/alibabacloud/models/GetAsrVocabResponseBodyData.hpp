// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASRVOCABRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETASRVOCABRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAsrVocabResponseBodyDataWords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetAsrVocabResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsrVocabResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AsrVersion, asrVersion_);
      DARABONBA_PTR_TO_JSON(ModelCustomizationId, modelCustomizationId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Words, words_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsrVocabResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrVersion, asrVersion_);
      DARABONBA_PTR_FROM_JSON(ModelCustomizationId, modelCustomizationId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Words, words_);
    };
    GetAsrVocabResponseBodyData() = default ;
    GetAsrVocabResponseBodyData(const GetAsrVocabResponseBodyData &) = default ;
    GetAsrVocabResponseBodyData(GetAsrVocabResponseBodyData &&) = default ;
    GetAsrVocabResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsrVocabResponseBodyData() = default ;
    GetAsrVocabResponseBodyData& operator=(const GetAsrVocabResponseBodyData &) = default ;
    GetAsrVocabResponseBodyData& operator=(GetAsrVocabResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrVersion_ != nullptr
        && this->modelCustomizationId_ != nullptr && this->name_ != nullptr && this->words_ != nullptr; };
    // asrVersion Field Functions 
    bool hasAsrVersion() const { return this->asrVersion_ != nullptr;};
    void deleteAsrVersion() { this->asrVersion_ = nullptr;};
    inline int32_t asrVersion() const { DARABONBA_PTR_GET_DEFAULT(asrVersion_, 0) };
    inline GetAsrVocabResponseBodyData& setAsrVersion(int32_t asrVersion) { DARABONBA_PTR_SET_VALUE(asrVersion_, asrVersion) };


    // modelCustomizationId Field Functions 
    bool hasModelCustomizationId() const { return this->modelCustomizationId_ != nullptr;};
    void deleteModelCustomizationId() { this->modelCustomizationId_ = nullptr;};
    inline string modelCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomizationId_, "") };
    inline GetAsrVocabResponseBodyData& setModelCustomizationId(string modelCustomizationId) { DARABONBA_PTR_SET_VALUE(modelCustomizationId_, modelCustomizationId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAsrVocabResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline const Models::GetAsrVocabResponseBodyDataWords & words() const { DARABONBA_PTR_GET_CONST(words_, Models::GetAsrVocabResponseBodyDataWords) };
    inline Models::GetAsrVocabResponseBodyDataWords words() { DARABONBA_PTR_GET(words_, Models::GetAsrVocabResponseBodyDataWords) };
    inline GetAsrVocabResponseBodyData& setWords(const Models::GetAsrVocabResponseBodyDataWords & words) { DARABONBA_PTR_SET_VALUE(words_, words) };
    inline GetAsrVocabResponseBodyData& setWords(Models::GetAsrVocabResponseBodyDataWords && words) { DARABONBA_PTR_SET_RVALUE(words_, words) };


  protected:
    std::shared_ptr<int32_t> asrVersion_ = nullptr;
    std::shared_ptr<string> modelCustomizationId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetAsrVocabResponseBodyDataWords> words_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
