// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODYVOICECHEATCOMPARISONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODYVOICECHEATCOMPARISONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList& obj) { 
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList& obj) { 
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList() = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList(const GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList &) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList(GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList &&) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList() = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList& operator=(const GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList &) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList& operator=(GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->time_ == nullptr
        && return this->url_ == nullptr; };
    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
