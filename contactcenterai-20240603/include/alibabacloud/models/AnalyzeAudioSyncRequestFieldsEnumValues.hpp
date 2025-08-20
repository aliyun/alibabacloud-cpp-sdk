// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEAUDIOSYNCREQUESTFIELDSENUMVALUES_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEAUDIOSYNCREQUESTFIELDSENUMVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeAudioSyncRequestFieldsEnumValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeAudioSyncRequestFieldsEnumValues& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(enumValue, enumValue_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeAudioSyncRequestFieldsEnumValues& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(enumValue, enumValue_);
    };
    AnalyzeAudioSyncRequestFieldsEnumValues() = default ;
    AnalyzeAudioSyncRequestFieldsEnumValues(const AnalyzeAudioSyncRequestFieldsEnumValues &) = default ;
    AnalyzeAudioSyncRequestFieldsEnumValues(AnalyzeAudioSyncRequestFieldsEnumValues &&) = default ;
    AnalyzeAudioSyncRequestFieldsEnumValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeAudioSyncRequestFieldsEnumValues() = default ;
    AnalyzeAudioSyncRequestFieldsEnumValues& operator=(const AnalyzeAudioSyncRequestFieldsEnumValues &) = default ;
    AnalyzeAudioSyncRequestFieldsEnumValues& operator=(AnalyzeAudioSyncRequestFieldsEnumValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->enumValue_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline AnalyzeAudioSyncRequestFieldsEnumValues& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // enumValue Field Functions 
    bool hasEnumValue() const { return this->enumValue_ != nullptr;};
    void deleteEnumValue() { this->enumValue_ = nullptr;};
    inline string enumValue() const { DARABONBA_PTR_GET_DEFAULT(enumValue_, "") };
    inline AnalyzeAudioSyncRequestFieldsEnumValues& setEnumValue(string enumValue) { DARABONBA_PTR_SET_VALUE(enumValue_, enumValue) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> enumValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
