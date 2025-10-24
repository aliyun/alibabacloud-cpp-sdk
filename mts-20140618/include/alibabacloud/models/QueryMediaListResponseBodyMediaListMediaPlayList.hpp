// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAPLAYLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAPLAYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaPlayListPlay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaPlayList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaPlayList& obj) { 
      DARABONBA_PTR_TO_JSON(Play, play_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaPlayList& obj) { 
      DARABONBA_PTR_FROM_JSON(Play, play_);
    };
    QueryMediaListResponseBodyMediaListMediaPlayList() = default ;
    QueryMediaListResponseBodyMediaListMediaPlayList(const QueryMediaListResponseBodyMediaListMediaPlayList &) = default ;
    QueryMediaListResponseBodyMediaListMediaPlayList(QueryMediaListResponseBodyMediaListMediaPlayList &&) = default ;
    QueryMediaListResponseBodyMediaListMediaPlayList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaPlayList() = default ;
    QueryMediaListResponseBodyMediaListMediaPlayList& operator=(const QueryMediaListResponseBodyMediaListMediaPlayList &) = default ;
    QueryMediaListResponseBodyMediaListMediaPlayList& operator=(QueryMediaListResponseBodyMediaListMediaPlayList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->play_ == nullptr; };
    // play Field Functions 
    bool hasPlay() const { return this->play_ != nullptr;};
    void deletePlay() { this->play_ = nullptr;};
    inline const vector<Models::QueryMediaListResponseBodyMediaListMediaPlayListPlay> & play() const { DARABONBA_PTR_GET_CONST(play_, vector<Models::QueryMediaListResponseBodyMediaListMediaPlayListPlay>) };
    inline vector<Models::QueryMediaListResponseBodyMediaListMediaPlayListPlay> play() { DARABONBA_PTR_GET(play_, vector<Models::QueryMediaListResponseBodyMediaListMediaPlayListPlay>) };
    inline QueryMediaListResponseBodyMediaListMediaPlayList& setPlay(const vector<Models::QueryMediaListResponseBodyMediaListMediaPlayListPlay> & play) { DARABONBA_PTR_SET_VALUE(play_, play) };
    inline QueryMediaListResponseBodyMediaListMediaPlayList& setPlay(vector<Models::QueryMediaListResponseBodyMediaListMediaPlayListPlay> && play) { DARABONBA_PTR_SET_RVALUE(play_, play) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListResponseBodyMediaListMediaPlayListPlay>> play_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
