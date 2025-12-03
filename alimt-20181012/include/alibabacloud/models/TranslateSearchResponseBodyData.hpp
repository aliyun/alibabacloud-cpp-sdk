// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATESEARCHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATESEARCHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateSearchResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateSearchResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Translated, translated_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateSearchResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Translated, translated_);
    };
    TranslateSearchResponseBodyData() = default ;
    TranslateSearchResponseBodyData(const TranslateSearchResponseBodyData &) = default ;
    TranslateSearchResponseBodyData(TranslateSearchResponseBodyData &&) = default ;
    TranslateSearchResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateSearchResponseBodyData() = default ;
    TranslateSearchResponseBodyData& operator=(const TranslateSearchResponseBodyData &) = default ;
    TranslateSearchResponseBodyData& operator=(TranslateSearchResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->translated_ == nullptr; };
    // translated Field Functions 
    bool hasTranslated() const { return this->translated_ != nullptr;};
    void deleteTranslated() { this->translated_ = nullptr;};
    inline string translated() const { DARABONBA_PTR_GET_DEFAULT(translated_, "") };
    inline TranslateSearchResponseBodyData& setTranslated(string translated) { DARABONBA_PTR_SET_VALUE(translated_, translated) };


  protected:
    std::shared_ptr<string> translated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
