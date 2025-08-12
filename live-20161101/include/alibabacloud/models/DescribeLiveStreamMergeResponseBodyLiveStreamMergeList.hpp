// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMERGERESPONSEBODYLIVESTREAMMERGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMERGERESPONSEBODYLIVESTREAMMERGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMergeResponseBodyLiveStreamMergeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMergeResponseBodyLiveStreamMergeList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamMerge, liveStreamMerge_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMergeResponseBodyLiveStreamMergeList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamMerge, liveStreamMerge_);
    };
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeList() = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeList(const DescribeLiveStreamMergeResponseBodyLiveStreamMergeList &) = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeList(DescribeLiveStreamMergeResponseBodyLiveStreamMergeList &&) = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMergeResponseBodyLiveStreamMergeList() = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeList& operator=(const DescribeLiveStreamMergeResponseBodyLiveStreamMergeList &) = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeList& operator=(DescribeLiveStreamMergeResponseBodyLiveStreamMergeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamMerge_ != nullptr; };
    // liveStreamMerge Field Functions 
    bool hasLiveStreamMerge() const { return this->liveStreamMerge_ != nullptr;};
    void deleteLiveStreamMerge() { this->liveStreamMerge_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge> & liveStreamMerge() const { DARABONBA_PTR_GET_CONST(liveStreamMerge_, vector<Models::DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge>) };
    inline vector<Models::DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge> liveStreamMerge() { DARABONBA_PTR_GET(liveStreamMerge_, vector<Models::DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge>) };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeList& setLiveStreamMerge(const vector<Models::DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge> & liveStreamMerge) { DARABONBA_PTR_SET_VALUE(liveStreamMerge_, liveStreamMerge) };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeList& setLiveStreamMerge(vector<Models::DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge> && liveStreamMerge) { DARABONBA_PTR_SET_RVALUE(liveStreamMerge_, liveStreamMerge) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge>> liveStreamMerge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
