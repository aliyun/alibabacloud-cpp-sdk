// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELINPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOBLOCKWORDBLOCKWORDGROUPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELINPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOBLOCKWORDBLOCKWORDGROUPINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWordList, blockWordList_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWordList, blockWordList_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList() = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList(const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList &) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList(GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList &&) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList() = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList& operator=(const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList &) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList& operator=(GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWordList_ == nullptr
        && return this->groupName_ == nullptr; };
    // blockWordList Field Functions 
    bool hasBlockWordList() const { return this->blockWordList_ != nullptr;};
    void deleteBlockWordList() { this->blockWordList_ = nullptr;};
    inline const vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> & blockWordList() const { DARABONBA_PTR_GET_CONST(blockWordList_, vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>) };
    inline vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> blockWordList() { DARABONBA_PTR_GET(blockWordList_, vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList& setBlockWordList(const vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> & blockWordList) { DARABONBA_PTR_SET_VALUE(blockWordList_, blockWordList) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList& setBlockWordList(vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> && blockWordList) { DARABONBA_PTR_SET_RVALUE(blockWordList_, blockWordList) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // Keyword detection result object list
    std::shared_ptr<vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>> blockWordList_ = nullptr;
    // Keyword group name
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
