// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAPPLYREQUESTCHANGEDJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAPPLYREQUESTCHANGEDJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeApplyRequestChangedJourneysSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeApplyRequestChangedJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeApplyRequestChangedJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeApplyRequestChangedJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
    };
    ChangeApplyRequestChangedJourneys() = default ;
    ChangeApplyRequestChangedJourneys(const ChangeApplyRequestChangedJourneys &) = default ;
    ChangeApplyRequestChangedJourneys(ChangeApplyRequestChangedJourneys &&) = default ;
    ChangeApplyRequestChangedJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeApplyRequestChangedJourneys() = default ;
    ChangeApplyRequestChangedJourneys& operator=(const ChangeApplyRequestChangedJourneys &) = default ;
    ChangeApplyRequestChangedJourneys& operator=(ChangeApplyRequestChangedJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segmentList_ == nullptr; };
    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::ChangeApplyRequestChangedJourneysSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::ChangeApplyRequestChangedJourneysSegmentList>) };
    inline vector<Models::ChangeApplyRequestChangedJourneysSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::ChangeApplyRequestChangedJourneysSegmentList>) };
    inline ChangeApplyRequestChangedJourneys& setSegmentList(const vector<Models::ChangeApplyRequestChangedJourneysSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline ChangeApplyRequestChangedJourneys& setSegmentList(vector<Models::ChangeApplyRequestChangedJourneysSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


  protected:
    std::shared_ptr<vector<Models::ChangeApplyRequestChangedJourneysSegmentList>> segmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
