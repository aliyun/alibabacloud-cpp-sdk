// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIDATAOCRINFO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIDATAOCRINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBodyMediaListAiDataOcrInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaListAiDataOcrInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaListAiDataOcrInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    SearchMediaResponseBodyMediaListAiDataOcrInfo() = default ;
    SearchMediaResponseBodyMediaListAiDataOcrInfo(const SearchMediaResponseBodyMediaListAiDataOcrInfo &) = default ;
    SearchMediaResponseBodyMediaListAiDataOcrInfo(SearchMediaResponseBodyMediaListAiDataOcrInfo &&) = default ;
    SearchMediaResponseBodyMediaListAiDataOcrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaListAiDataOcrInfo() = default ;
    SearchMediaResponseBodyMediaListAiDataOcrInfo& operator=(const SearchMediaResponseBodyMediaListAiDataOcrInfo &) = default ;
    SearchMediaResponseBodyMediaListAiDataOcrInfo& operator=(SearchMediaResponseBodyMediaListAiDataOcrInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->from_ == nullptr && return this->to_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SearchMediaResponseBodyMediaListAiDataOcrInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline double from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
    inline SearchMediaResponseBodyMediaListAiDataOcrInfo& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline double to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
    inline SearchMediaResponseBodyMediaListAiDataOcrInfo& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The text content.
    std::shared_ptr<string> content_ = nullptr;
    // The start time of the subtitle.
    std::shared_ptr<double> from_ = nullptr;
    // The end time of the subtitle.
    std::shared_ptr<double> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
