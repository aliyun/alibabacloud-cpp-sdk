// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANCILLARYSUGGESTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ANCILLARYSUGGESTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AncillarySuggestResponseBodyDataSegAncillaryMapList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class AncillarySuggestResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AncillarySuggestResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(seg_ancillary_map_list, segAncillaryMapList_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, AncillarySuggestResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(seg_ancillary_map_list, segAncillaryMapList_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    AncillarySuggestResponseBodyData() = default ;
    AncillarySuggestResponseBodyData(const AncillarySuggestResponseBodyData &) = default ;
    AncillarySuggestResponseBodyData(AncillarySuggestResponseBodyData &&) = default ;
    AncillarySuggestResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AncillarySuggestResponseBodyData() = default ;
    AncillarySuggestResponseBodyData& operator=(const AncillarySuggestResponseBodyData &) = default ;
    AncillarySuggestResponseBodyData& operator=(AncillarySuggestResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segAncillaryMapList_ == nullptr
        && return this->solutionId_ == nullptr; };
    // segAncillaryMapList Field Functions 
    bool hasSegAncillaryMapList() const { return this->segAncillaryMapList_ != nullptr;};
    void deleteSegAncillaryMapList() { this->segAncillaryMapList_ = nullptr;};
    inline const vector<Models::AncillarySuggestResponseBodyDataSegAncillaryMapList> & segAncillaryMapList() const { DARABONBA_PTR_GET_CONST(segAncillaryMapList_, vector<Models::AncillarySuggestResponseBodyDataSegAncillaryMapList>) };
    inline vector<Models::AncillarySuggestResponseBodyDataSegAncillaryMapList> segAncillaryMapList() { DARABONBA_PTR_GET(segAncillaryMapList_, vector<Models::AncillarySuggestResponseBodyDataSegAncillaryMapList>) };
    inline AncillarySuggestResponseBodyData& setSegAncillaryMapList(const vector<Models::AncillarySuggestResponseBodyDataSegAncillaryMapList> & segAncillaryMapList) { DARABONBA_PTR_SET_VALUE(segAncillaryMapList_, segAncillaryMapList) };
    inline AncillarySuggestResponseBodyData& setSegAncillaryMapList(vector<Models::AncillarySuggestResponseBodyDataSegAncillaryMapList> && segAncillaryMapList) { DARABONBA_PTR_SET_RVALUE(segAncillaryMapList_, segAncillaryMapList) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline AncillarySuggestResponseBodyData& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // ancillary detail list
    std::shared_ptr<vector<Models::AncillarySuggestResponseBodyDataSegAncillaryMapList>> segAncillaryMapList_ = nullptr;
    // solution_id, equals to solution_id in request
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
