// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATAIMAGES_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATAIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastResponseBodyDataDataImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastResponseBodyDataDataImages& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastResponseBodyDataDataImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetHotTopicBroadcastResponseBodyDataDataImages() = default ;
    GetHotTopicBroadcastResponseBodyDataDataImages(const GetHotTopicBroadcastResponseBodyDataDataImages &) = default ;
    GetHotTopicBroadcastResponseBodyDataDataImages(GetHotTopicBroadcastResponseBodyDataDataImages &&) = default ;
    GetHotTopicBroadcastResponseBodyDataDataImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastResponseBodyDataDataImages() = default ;
    GetHotTopicBroadcastResponseBodyDataDataImages& operator=(const GetHotTopicBroadcastResponseBodyDataDataImages &) = default ;
    GetHotTopicBroadcastResponseBodyDataDataImages& operator=(GetHotTopicBroadcastResponseBodyDataDataImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->url_ != nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataImages& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
