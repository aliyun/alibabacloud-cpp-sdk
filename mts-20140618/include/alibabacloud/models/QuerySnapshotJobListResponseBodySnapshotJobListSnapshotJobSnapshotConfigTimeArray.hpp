// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLISTSNAPSHOTJOBSNAPSHOTCONFIGTIMEARRAY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLISTSNAPSHOTJOBSNAPSHOTCONFIGTIMEARRAY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray& obj) { 
      DARABONBA_PTR_TO_JSON(TimePointList, timePointList_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray& obj) { 
      DARABONBA_PTR_FROM_JSON(TimePointList, timePointList_);
    };
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray(const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray(QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray &&) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray& operator=(const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray& operator=(QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timePointList_ == nullptr; };
    // timePointList Field Functions 
    bool hasTimePointList() const { return this->timePointList_ != nullptr;};
    void deleteTimePointList() { this->timePointList_ = nullptr;};
    inline const vector<int64_t> & timePointList() const { DARABONBA_PTR_GET_CONST(timePointList_, vector<int64_t>) };
    inline vector<int64_t> timePointList() { DARABONBA_PTR_GET(timePointList_, vector<int64_t>) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray& setTimePointList(const vector<int64_t> & timePointList) { DARABONBA_PTR_SET_VALUE(timePointList_, timePointList) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray& setTimePointList(vector<int64_t> && timePointList) { DARABONBA_PTR_SET_RVALUE(timePointList_, timePointList) };


  protected:
    std::shared_ptr<vector<int64_t>> timePointList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
