// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOBLOCKWORDBLOCKWORDGROUPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOBLOCKWORDBLOCKWORDGROUPINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWordList, blockWordList_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWordList, blockWordList_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList(const ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList(ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList &&) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& operator=(const ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& operator=(ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWordList_ == nullptr
        && return this->groupName_ == nullptr; };
    // blockWordList Field Functions 
    bool hasBlockWordList() const { return this->blockWordList_ != nullptr;};
    void deleteBlockWordList() { this->blockWordList_ = nullptr;};
    inline const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> & blockWordList() const { DARABONBA_PTR_GET_CONST(blockWordList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>) };
    inline vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> blockWordList() { DARABONBA_PTR_GET(blockWordList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& setBlockWordList(const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> & blockWordList) { DARABONBA_PTR_SET_VALUE(blockWordList_, blockWordList) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& setBlockWordList(vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> && blockWordList) { DARABONBA_PTR_SET_RVALUE(blockWordList_, blockWordList) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // List of keyword detection result objects
    std::shared_ptr<vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>> blockWordList_ = nullptr;
    // Keyword group name
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
