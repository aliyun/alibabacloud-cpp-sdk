// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMedia.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
    };
    QueryMediaListResponseBodyMediaList() = default ;
    QueryMediaListResponseBodyMediaList(const QueryMediaListResponseBodyMediaList &) = default ;
    QueryMediaListResponseBodyMediaList(QueryMediaListResponseBodyMediaList &&) = default ;
    QueryMediaListResponseBodyMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaList() = default ;
    QueryMediaListResponseBodyMediaList& operator=(const QueryMediaListResponseBodyMediaList &) = default ;
    QueryMediaListResponseBodyMediaList& operator=(QueryMediaListResponseBodyMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline const vector<Models::QueryMediaListResponseBodyMediaListMedia> & media() const { DARABONBA_PTR_GET_CONST(media_, vector<Models::QueryMediaListResponseBodyMediaListMedia>) };
    inline vector<Models::QueryMediaListResponseBodyMediaListMedia> media() { DARABONBA_PTR_GET(media_, vector<Models::QueryMediaListResponseBodyMediaListMedia>) };
    inline QueryMediaListResponseBodyMediaList& setMedia(const vector<Models::QueryMediaListResponseBodyMediaListMedia> & media) { DARABONBA_PTR_SET_VALUE(media_, media) };
    inline QueryMediaListResponseBodyMediaList& setMedia(vector<Models::QueryMediaListResponseBodyMediaListMedia> && media) { DARABONBA_PTR_SET_RVALUE(media_, media) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListResponseBodyMediaListMedia>> media_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
