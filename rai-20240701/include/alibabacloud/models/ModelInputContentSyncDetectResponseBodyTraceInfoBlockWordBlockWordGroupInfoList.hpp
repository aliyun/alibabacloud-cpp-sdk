// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOBLOCKWORDBLOCKWORDGROUPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_MODELINPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOBLOCKWORDBLOCKWORDGROUPINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(BlockWordList, blockWordList_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockWordList, blockWordList_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList() = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList(const ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList &) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList(ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList &&) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList() = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& operator=(const ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList &) = default ;
    ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& operator=(ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockWordList_ == nullptr
        && return this->groupName_ == nullptr; };
    // blockWordList Field Functions 
    bool hasBlockWordList() const { return this->blockWordList_ != nullptr;};
    void deleteBlockWordList() { this->blockWordList_ = nullptr;};
    inline const vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> & blockWordList() const { DARABONBA_PTR_GET_CONST(blockWordList_, vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>) };
    inline vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> blockWordList() { DARABONBA_PTR_GET(blockWordList_, vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& setBlockWordList(const vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> & blockWordList) { DARABONBA_PTR_SET_VALUE(blockWordList_, blockWordList) };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& setBlockWordList(vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> && blockWordList) { DARABONBA_PTR_SET_RVALUE(blockWordList_, blockWordList) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // List of keyword detection results
    std::shared_ptr<vector<Models::ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>> blockWordList_ = nullptr;
    // Keyword group name
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
