// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANCILLARYSUGGESTRESPONSEBODYDATASEGANCILLARYMAPLIST_HPP_
#define ALIBABACLOUD_MODELS_ANCILLARYSUGGESTRESPONSEBODYDATASEGANCILLARYMAPLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class AncillarySuggestResponseBodyDataSegAncillaryMapList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AncillarySuggestResponseBodyDataSegAncillaryMapList& obj) { 
      DARABONBA_PTR_TO_JSON(ancillary, ancillary_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, AncillarySuggestResponseBodyDataSegAncillaryMapList& obj) { 
      DARABONBA_PTR_FROM_JSON(ancillary, ancillary_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    AncillarySuggestResponseBodyDataSegAncillaryMapList() = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapList(const AncillarySuggestResponseBodyDataSegAncillaryMapList &) = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapList(AncillarySuggestResponseBodyDataSegAncillaryMapList &&) = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AncillarySuggestResponseBodyDataSegAncillaryMapList() = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapList& operator=(const AncillarySuggestResponseBodyDataSegAncillaryMapList &) = default ;
    AncillarySuggestResponseBodyDataSegAncillaryMapList& operator=(AncillarySuggestResponseBodyDataSegAncillaryMapList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ancillary_ == nullptr
        && return this->segmentIdList_ == nullptr; };
    // ancillary Field Functions 
    bool hasAncillary() const { return this->ancillary_ != nullptr;};
    void deleteAncillary() { this->ancillary_ = nullptr;};
    inline const Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary & ancillary() const { DARABONBA_PTR_GET_CONST(ancillary_, Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary) };
    inline Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary ancillary() { DARABONBA_PTR_GET(ancillary_, Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary) };
    inline AncillarySuggestResponseBodyDataSegAncillaryMapList& setAncillary(const Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary & ancillary) { DARABONBA_PTR_SET_VALUE(ancillary_, ancillary) };
    inline AncillarySuggestResponseBodyDataSegAncillaryMapList& setAncillary(Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary && ancillary) { DARABONBA_PTR_SET_RVALUE(ancillary_, ancillary) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline AncillarySuggestResponseBodyDataSegAncillaryMapList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline AncillarySuggestResponseBodyDataSegAncillaryMapList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // Ancillary product
    std::shared_ptr<Models::AncillarySuggestResponseBodyDataSegAncillaryMapListAncillary> ancillary_ = nullptr;
    // Segment ID list, these segments share the same ancillary
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
