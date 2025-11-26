// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODYDATATAGSUMMARYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODYDATATAGSUMMARYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfoTagSummaryInfoDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo& obj) { 
      DARABONBA_PTR_TO_JSON(TagSummaryInfoDetailList, tagSummaryInfoDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(TagSummaryInfoDetailList, tagSummaryInfoDetailList_);
    };
    GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo() = default ;
    GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo(const GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo &) = default ;
    GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo(GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo &&) = default ;
    GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo() = default ;
    GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo& operator=(const GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo &) = default ;
    GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo& operator=(GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagSummaryInfoDetailList_ == nullptr; };
    // tagSummaryInfoDetailList Field Functions 
    bool hasTagSummaryInfoDetailList() const { return this->tagSummaryInfoDetailList_ != nullptr;};
    void deleteTagSummaryInfoDetailList() { this->tagSummaryInfoDetailList_ = nullptr;};
    inline const vector<Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfoTagSummaryInfoDetailList> & tagSummaryInfoDetailList() const { DARABONBA_PTR_GET_CONST(tagSummaryInfoDetailList_, vector<Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfoTagSummaryInfoDetailList>) };
    inline vector<Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfoTagSummaryInfoDetailList> tagSummaryInfoDetailList() { DARABONBA_PTR_GET(tagSummaryInfoDetailList_, vector<Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfoTagSummaryInfoDetailList>) };
    inline GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo& setTagSummaryInfoDetailList(const vector<Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfoTagSummaryInfoDetailList> & tagSummaryInfoDetailList) { DARABONBA_PTR_SET_VALUE(tagSummaryInfoDetailList_, tagSummaryInfoDetailList) };
    inline GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfo& setTagSummaryInfoDetailList(vector<Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfoTagSummaryInfoDetailList> && tagSummaryInfoDetailList) { DARABONBA_PTR_SET_RVALUE(tagSummaryInfoDetailList_, tagSummaryInfoDetailList) };


  protected:
    std::shared_ptr<vector<Models::GetAnnotationMissionSummaryResponseBodyDataTagSummaryInfoTagSummaryInfoDetailList>> tagSummaryInfoDetailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
