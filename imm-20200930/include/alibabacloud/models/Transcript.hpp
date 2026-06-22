// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_TRANSCRIPT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Transcript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Transcript& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(SpeakerId, speakerId_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Transcript& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(SpeakerId, speakerId_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    Transcript() = default ;
    Transcript(const Transcript &) = default ;
    Transcript(Transcript &&) = default ;
    Transcript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Transcript() = default ;
    Transcript& operator=(const Transcript &) = default ;
    Transcript& operator=(Transcript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->speakerId_ == nullptr && this->timeRange_ == nullptr && this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline Transcript& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // speakerId Field Functions 
    bool hasSpeakerId() const { return this->speakerId_ != nullptr;};
    void deleteSpeakerId() { this->speakerId_ = nullptr;};
    inline string getSpeakerId() const { DARABONBA_PTR_GET_DEFAULT(speakerId_, "") };
    inline Transcript& setSpeakerId(string speakerId) { DARABONBA_PTR_SET_VALUE(speakerId_, speakerId) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const vector<int64_t> & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, vector<int64_t>) };
    inline vector<int64_t> getTimeRange() { DARABONBA_PTR_GET(timeRange_, vector<int64_t>) };
    inline Transcript& setTimeRange(const vector<int64_t> & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline Transcript& setTimeRange(vector<int64_t> && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Transcript& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> speakerId_ {};
    shared_ptr<vector<int64_t>> timeRange_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
