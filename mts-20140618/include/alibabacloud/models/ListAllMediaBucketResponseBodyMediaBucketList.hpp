// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLMEDIABUCKETRESPONSEBODYMEDIABUCKETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLMEDIABUCKETRESPONSEBODYMEDIABUCKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllMediaBucketResponseBodyMediaBucketListMediaBucket.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListAllMediaBucketResponseBodyMediaBucketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllMediaBucketResponseBodyMediaBucketList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaBucket, mediaBucket_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllMediaBucketResponseBodyMediaBucketList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaBucket, mediaBucket_);
    };
    ListAllMediaBucketResponseBodyMediaBucketList() = default ;
    ListAllMediaBucketResponseBodyMediaBucketList(const ListAllMediaBucketResponseBodyMediaBucketList &) = default ;
    ListAllMediaBucketResponseBodyMediaBucketList(ListAllMediaBucketResponseBodyMediaBucketList &&) = default ;
    ListAllMediaBucketResponseBodyMediaBucketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllMediaBucketResponseBodyMediaBucketList() = default ;
    ListAllMediaBucketResponseBodyMediaBucketList& operator=(const ListAllMediaBucketResponseBodyMediaBucketList &) = default ;
    ListAllMediaBucketResponseBodyMediaBucketList& operator=(ListAllMediaBucketResponseBodyMediaBucketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaBucket_ == nullptr; };
    // mediaBucket Field Functions 
    bool hasMediaBucket() const { return this->mediaBucket_ != nullptr;};
    void deleteMediaBucket() { this->mediaBucket_ = nullptr;};
    inline const vector<Models::ListAllMediaBucketResponseBodyMediaBucketListMediaBucket> & mediaBucket() const { DARABONBA_PTR_GET_CONST(mediaBucket_, vector<Models::ListAllMediaBucketResponseBodyMediaBucketListMediaBucket>) };
    inline vector<Models::ListAllMediaBucketResponseBodyMediaBucketListMediaBucket> mediaBucket() { DARABONBA_PTR_GET(mediaBucket_, vector<Models::ListAllMediaBucketResponseBodyMediaBucketListMediaBucket>) };
    inline ListAllMediaBucketResponseBodyMediaBucketList& setMediaBucket(const vector<Models::ListAllMediaBucketResponseBodyMediaBucketListMediaBucket> & mediaBucket) { DARABONBA_PTR_SET_VALUE(mediaBucket_, mediaBucket) };
    inline ListAllMediaBucketResponseBodyMediaBucketList& setMediaBucket(vector<Models::ListAllMediaBucketResponseBodyMediaBucketListMediaBucket> && mediaBucket) { DARABONBA_PTR_SET_RVALUE(mediaBucket_, mediaBucket) };


  protected:
    std::shared_ptr<vector<Models::ListAllMediaBucketResponseBodyMediaBucketListMediaBucket>> mediaBucket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
