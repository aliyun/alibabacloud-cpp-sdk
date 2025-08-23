// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTHOTTOPICSUMMARIESIMAGES_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTHOTTOPICSUMMARIESIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages& obj) { 
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages& obj) { 
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages() = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages(const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages(RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages &&) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages() = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages& operator=(const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages& operator=(RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->url_ != nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
