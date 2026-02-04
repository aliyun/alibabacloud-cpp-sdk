// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROADCASTAUDIOSBYIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBROADCASTAUDIOSBYIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListBroadcastAudiosByIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBroadcastAudiosByIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(audioIds, audioIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListBroadcastAudiosByIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(audioIds, audioIdsShrink_);
    };
    ListBroadcastAudiosByIdShrinkRequest() = default ;
    ListBroadcastAudiosByIdShrinkRequest(const ListBroadcastAudiosByIdShrinkRequest &) = default ;
    ListBroadcastAudiosByIdShrinkRequest(ListBroadcastAudiosByIdShrinkRequest &&) = default ;
    ListBroadcastAudiosByIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBroadcastAudiosByIdShrinkRequest() = default ;
    ListBroadcastAudiosByIdShrinkRequest& operator=(const ListBroadcastAudiosByIdShrinkRequest &) = default ;
    ListBroadcastAudiosByIdShrinkRequest& operator=(ListBroadcastAudiosByIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioIdsShrink_ == nullptr; };
    // audioIdsShrink Field Functions 
    bool hasAudioIdsShrink() const { return this->audioIdsShrink_ != nullptr;};
    void deleteAudioIdsShrink() { this->audioIdsShrink_ = nullptr;};
    inline string getAudioIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(audioIdsShrink_, "") };
    inline ListBroadcastAudiosByIdShrinkRequest& setAudioIdsShrink(string audioIdsShrink) { DARABONBA_PTR_SET_VALUE(audioIdsShrink_, audioIdsShrink) };


  protected:
    shared_ptr<string> audioIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
