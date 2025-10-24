// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOBSNAPSHOTCONFIGTIMEARRAY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOBSNAPSHOTCONFIGTIMEARRAY_HPP_
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
  class SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray& obj) { 
      DARABONBA_PTR_TO_JSON(TimePointList, timePointList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray& obj) { 
      DARABONBA_PTR_FROM_JSON(TimePointList, timePointList_);
    };
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray() = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray(const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray &) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray(SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray &&) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray() = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray& operator=(const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray &) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray& operator=(SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray &&) = default ;
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
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray& setTimePointList(const vector<int64_t> & timePointList) { DARABONBA_PTR_SET_VALUE(timePointList_, timePointList) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray& setTimePointList(vector<int64_t> && timePointList) { DARABONBA_PTR_SET_RVALUE(timePointList_, timePointList) };


  protected:
    std::shared_ptr<vector<int64_t>> timePointList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
