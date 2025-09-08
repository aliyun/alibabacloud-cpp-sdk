// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATARESULTCUSTOMIZEDHIT_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATARESULTCUSTOMIZEDHIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationPlusResponseBodyDataResultCustomizedHit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationPlusResponseBodyDataResultCustomizedHit& obj) { 
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationPlusResponseBodyDataResultCustomizedHit& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
    };
    TextModerationPlusResponseBodyDataResultCustomizedHit() = default ;
    TextModerationPlusResponseBodyDataResultCustomizedHit(const TextModerationPlusResponseBodyDataResultCustomizedHit &) = default ;
    TextModerationPlusResponseBodyDataResultCustomizedHit(TextModerationPlusResponseBodyDataResultCustomizedHit &&) = default ;
    TextModerationPlusResponseBodyDataResultCustomizedHit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationPlusResponseBodyDataResultCustomizedHit() = default ;
    TextModerationPlusResponseBodyDataResultCustomizedHit& operator=(const TextModerationPlusResponseBodyDataResultCustomizedHit &) = default ;
    TextModerationPlusResponseBodyDataResultCustomizedHit& operator=(TextModerationPlusResponseBodyDataResultCustomizedHit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyWords_ != nullptr
        && this->libName_ != nullptr; };
    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline string keyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
    inline TextModerationPlusResponseBodyDataResultCustomizedHit& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline TextModerationPlusResponseBodyDataResultCustomizedHit& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


  protected:
    // The terms that are hit. Multiple terms are separated by commas (,).
    std::shared_ptr<string> keyWords_ = nullptr;
    // The library name.
    std::shared_ptr<string> libName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
