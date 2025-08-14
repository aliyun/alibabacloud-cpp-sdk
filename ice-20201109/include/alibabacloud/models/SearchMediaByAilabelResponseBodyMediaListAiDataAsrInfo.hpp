// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODYMEDIALISTAIDATAASRINFO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODYMEDIALISTAIDATAASRINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ClipId, clipId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo() = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo(const SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo &) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo(SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo &&) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo() = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& operator=(const SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo &) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& operator=(SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clipId_ != nullptr
        && this->content_ != nullptr && this->from_ != nullptr && this->timestamp_ != nullptr && this->to_ != nullptr; };
    // clipId Field Functions 
    bool hasClipId() const { return this->clipId_ != nullptr;};
    void deleteClipId() { this->clipId_ = nullptr;};
    inline string clipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline double from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline double timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline double to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The ID of the clip.
    std::shared_ptr<string> clipId_ = nullptr;
    // The content of the audio.
    std::shared_ptr<string> content_ = nullptr;
    // The start time of the clip.
    std::shared_ptr<double> from_ = nullptr;
    // The timestamp of the clip.
    std::shared_ptr<double> timestamp_ = nullptr;
    // The end time of the clip.
    std::shared_ptr<double> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
