// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TextTranslateResponseBodyDataUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TextTranslateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(translation, translation_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(translation, translation_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    TextTranslateResponseBodyData() = default ;
    TextTranslateResponseBodyData(const TextTranslateResponseBodyData &) = default ;
    TextTranslateResponseBodyData(TextTranslateResponseBodyData &&) = default ;
    TextTranslateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateResponseBodyData() = default ;
    TextTranslateResponseBodyData& operator=(const TextTranslateResponseBodyData &) = default ;
    TextTranslateResponseBodyData& operator=(TextTranslateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->translation_ == nullptr
        && return this->usage_ == nullptr; };
    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline string translation() const { DARABONBA_PTR_GET_DEFAULT(translation_, "") };
    inline TextTranslateResponseBodyData& setTranslation(string translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::TextTranslateResponseBodyDataUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::TextTranslateResponseBodyDataUsage) };
    inline Models::TextTranslateResponseBodyDataUsage usage() { DARABONBA_PTR_GET(usage_, Models::TextTranslateResponseBodyDataUsage) };
    inline TextTranslateResponseBodyData& setUsage(const Models::TextTranslateResponseBodyDataUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline TextTranslateResponseBodyData& setUsage(Models::TextTranslateResponseBodyDataUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> translation_ = nullptr;
    std::shared_ptr<Models::TextTranslateResponseBodyDataUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
