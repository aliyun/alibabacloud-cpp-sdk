// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATASENSITIVERESULT_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATASENSITIVERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationPlusResponseBodyDataSensitiveResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationPlusResponseBodyDataSensitiveResult& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(SensitiveData, sensitiveData_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationPlusResponseBodyDataSensitiveResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(SensitiveData, sensitiveData_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
    };
    TextModerationPlusResponseBodyDataSensitiveResult() = default ;
    TextModerationPlusResponseBodyDataSensitiveResult(const TextModerationPlusResponseBodyDataSensitiveResult &) = default ;
    TextModerationPlusResponseBodyDataSensitiveResult(TextModerationPlusResponseBodyDataSensitiveResult &&) = default ;
    TextModerationPlusResponseBodyDataSensitiveResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationPlusResponseBodyDataSensitiveResult() = default ;
    TextModerationPlusResponseBodyDataSensitiveResult& operator=(const TextModerationPlusResponseBodyDataSensitiveResult &) = default ;
    TextModerationPlusResponseBodyDataSensitiveResult& operator=(TextModerationPlusResponseBodyDataSensitiveResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->label_ == nullptr && return this->sensitiveData_ == nullptr && return this->sensitiveLevel_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TextModerationPlusResponseBodyDataSensitiveResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline TextModerationPlusResponseBodyDataSensitiveResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // sensitiveData Field Functions 
    bool hasSensitiveData() const { return this->sensitiveData_ != nullptr;};
    void deleteSensitiveData() { this->sensitiveData_ = nullptr;};
    inline const vector<string> & sensitiveData() const { DARABONBA_PTR_GET_CONST(sensitiveData_, vector<string>) };
    inline vector<string> sensitiveData() { DARABONBA_PTR_GET(sensitiveData_, vector<string>) };
    inline TextModerationPlusResponseBodyDataSensitiveResult& setSensitiveData(const vector<string> & sensitiveData) { DARABONBA_PTR_SET_VALUE(sensitiveData_, sensitiveData) };
    inline TextModerationPlusResponseBodyDataSensitiveResult& setSensitiveData(vector<string> && sensitiveData) { DARABONBA_PTR_SET_RVALUE(sensitiveData_, sensitiveData) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline TextModerationPlusResponseBodyDataSensitiveResult& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


  protected:
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // The label
    std::shared_ptr<string> label_ = nullptr;
    // The sensitive data.
    std::shared_ptr<vector<string>> sensitiveData_ = nullptr;
    // The level of sensitivity data
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
