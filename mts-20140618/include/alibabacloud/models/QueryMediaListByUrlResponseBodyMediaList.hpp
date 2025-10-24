// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMedia.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
    };
    QueryMediaListByURLResponseBodyMediaList() = default ;
    QueryMediaListByURLResponseBodyMediaList(const QueryMediaListByURLResponseBodyMediaList &) = default ;
    QueryMediaListByURLResponseBodyMediaList(QueryMediaListByURLResponseBodyMediaList &&) = default ;
    QueryMediaListByURLResponseBodyMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaList() = default ;
    QueryMediaListByURLResponseBodyMediaList& operator=(const QueryMediaListByURLResponseBodyMediaList &) = default ;
    QueryMediaListByURLResponseBodyMediaList& operator=(QueryMediaListByURLResponseBodyMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline const vector<Models::QueryMediaListByURLResponseBodyMediaListMedia> & media() const { DARABONBA_PTR_GET_CONST(media_, vector<Models::QueryMediaListByURLResponseBodyMediaListMedia>) };
    inline vector<Models::QueryMediaListByURLResponseBodyMediaListMedia> media() { DARABONBA_PTR_GET(media_, vector<Models::QueryMediaListByURLResponseBodyMediaListMedia>) };
    inline QueryMediaListByURLResponseBodyMediaList& setMedia(const vector<Models::QueryMediaListByURLResponseBodyMediaListMedia> & media) { DARABONBA_PTR_SET_VALUE(media_, media) };
    inline QueryMediaListByURLResponseBodyMediaList& setMedia(vector<Models::QueryMediaListByURLResponseBodyMediaListMedia> && media) { DARABONBA_PTR_SET_RVALUE(media_, media) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListByURLResponseBodyMediaListMedia>> media_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
