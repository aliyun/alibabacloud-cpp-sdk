// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROADCASTVIDEOSBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBROADCASTVIDEOSBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListBroadcastVideosByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBroadcastVideosByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(videoIds, videoIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListBroadcastVideosByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(videoIds, videoIds_);
    };
    ListBroadcastVideosByIdRequest() = default ;
    ListBroadcastVideosByIdRequest(const ListBroadcastVideosByIdRequest &) = default ;
    ListBroadcastVideosByIdRequest(ListBroadcastVideosByIdRequest &&) = default ;
    ListBroadcastVideosByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBroadcastVideosByIdRequest() = default ;
    ListBroadcastVideosByIdRequest& operator=(const ListBroadcastVideosByIdRequest &) = default ;
    ListBroadcastVideosByIdRequest& operator=(ListBroadcastVideosByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoIds_ == nullptr; };
    // videoIds Field Functions 
    bool hasVideoIds() const { return this->videoIds_ != nullptr;};
    void deleteVideoIds() { this->videoIds_ = nullptr;};
    inline const vector<string> & videoIds() const { DARABONBA_PTR_GET_CONST(videoIds_, vector<string>) };
    inline vector<string> videoIds() { DARABONBA_PTR_GET(videoIds_, vector<string>) };
    inline ListBroadcastVideosByIdRequest& setVideoIds(const vector<string> & videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };
    inline ListBroadcastVideosByIdRequest& setVideoIds(vector<string> && videoIds) { DARABONBA_PTR_SET_RVALUE(videoIds_, videoIds) };


  protected:
    std::shared_ptr<vector<string>> videoIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
