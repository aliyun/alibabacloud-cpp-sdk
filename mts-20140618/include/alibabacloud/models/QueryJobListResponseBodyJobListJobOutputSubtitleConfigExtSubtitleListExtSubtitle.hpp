// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGEXTSUBTITLELISTEXTSUBTITLE_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGEXTSUBTITLELISTEXTSUBTITLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitleInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle& obj) { 
      DARABONBA_PTR_TO_JSON(CharEnc, charEnc_);
      DARABONBA_PTR_TO_JSON(FontName, fontName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle& obj) { 
      DARABONBA_PTR_FROM_JSON(CharEnc, charEnc_);
      DARABONBA_PTR_FROM_JSON(FontName, fontName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle() = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle(const QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle &) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle(QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle &&) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle() = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle& operator=(const QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle &) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle& operator=(QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->charEnc_ == nullptr
        && return this->fontName_ == nullptr && return this->input_ == nullptr; };
    // charEnc Field Functions 
    bool hasCharEnc() const { return this->charEnc_ != nullptr;};
    void deleteCharEnc() { this->charEnc_ = nullptr;};
    inline string charEnc() const { DARABONBA_PTR_GET_DEFAULT(charEnc_, "") };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle& setCharEnc(string charEnc) { DARABONBA_PTR_SET_VALUE(charEnc_, charEnc) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitleInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitleInput) };
    inline Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitleInput input() { DARABONBA_PTR_GET(input_, Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitleInput) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle& setInput(const Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitleInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitle& setInput(Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitleInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The character set used by the external caption.
    // 
    // *   Valid values: UTF-8, GBK, BIG5, and auto.
    // *   Default value: **auto**.
    // 
    // >  If the value of CharEnc is auto, the detected character set may not be the actual character set. We recommend that you set this parameter to another value.
    std::shared_ptr<string> charEnc_ = nullptr;
    // The font of the hardcoded captions converted from external captions. Default value: SimSum. For more information, see [Fonts](https://help.aliyun.com/document_detail/59950.html).
    std::shared_ptr<string> fontName_ = nullptr;
    // The input caption file.
    // 
    // *   SRT and ASS files are supported. For more information, see the Input section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    // *   Example: `{"Bucket":"example-bucket","Location":"oss-cn-hangzhou","Object":"example.srt"}`.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleListExtSubtitleInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
