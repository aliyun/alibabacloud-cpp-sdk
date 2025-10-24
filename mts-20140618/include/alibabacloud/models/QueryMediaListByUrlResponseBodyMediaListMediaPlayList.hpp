// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAPLAYLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAPLAYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaPlayListPlay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaPlayList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaPlayList& obj) { 
      DARABONBA_PTR_TO_JSON(Play, play_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaPlayList& obj) { 
      DARABONBA_PTR_FROM_JSON(Play, play_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaPlayList() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaPlayList(const QueryMediaListByURLResponseBodyMediaListMediaPlayList &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaPlayList(QueryMediaListByURLResponseBodyMediaListMediaPlayList &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaPlayList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaPlayList() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaPlayList& operator=(const QueryMediaListByURLResponseBodyMediaListMediaPlayList &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaPlayList& operator=(QueryMediaListByURLResponseBodyMediaListMediaPlayList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->play_ == nullptr; };
    // play Field Functions 
    bool hasPlay() const { return this->play_ != nullptr;};
    void deletePlay() { this->play_ = nullptr;};
    inline const vector<Models::QueryMediaListByURLResponseBodyMediaListMediaPlayListPlay> & play() const { DARABONBA_PTR_GET_CONST(play_, vector<Models::QueryMediaListByURLResponseBodyMediaListMediaPlayListPlay>) };
    inline vector<Models::QueryMediaListByURLResponseBodyMediaListMediaPlayListPlay> play() { DARABONBA_PTR_GET(play_, vector<Models::QueryMediaListByURLResponseBodyMediaListMediaPlayListPlay>) };
    inline QueryMediaListByURLResponseBodyMediaListMediaPlayList& setPlay(const vector<Models::QueryMediaListByURLResponseBodyMediaListMediaPlayListPlay> & play) { DARABONBA_PTR_SET_VALUE(play_, play) };
    inline QueryMediaListByURLResponseBodyMediaListMediaPlayList& setPlay(vector<Models::QueryMediaListByURLResponseBodyMediaListMediaPlayListPlay> && play) { DARABONBA_PTR_SET_RVALUE(play_, play) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListByURLResponseBodyMediaListMediaPlayListPlay>> play_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
