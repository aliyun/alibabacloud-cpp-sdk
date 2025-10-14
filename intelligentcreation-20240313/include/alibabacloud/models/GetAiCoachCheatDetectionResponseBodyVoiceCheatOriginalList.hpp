// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODYVOICECHEATORIGINALLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODYVOICECHEATORIGINALLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList& obj) { 
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList& obj) { 
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList() = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList(const GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList &) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList(GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList &&) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList() = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList& operator=(const GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList &) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList& operator=(GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->url_ == nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
