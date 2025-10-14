// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVALUATEANDIMPORTTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVALUATEANDIMPORTTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeEvaluateAndImportTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEvaluateAndImportTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlinkDstDb, slinkDstDb_);
      DARABONBA_PTR_TO_JSON(SlinkDstResId, slinkDstResId_);
      DARABONBA_PTR_TO_JSON(SlinkDstUserName, slinkDstUserName_);
      DARABONBA_PTR_TO_JSON(SlinkSrcDb, slinkSrcDb_);
      DARABONBA_PTR_TO_JSON(SlinkSrcResId, slinkSrcResId_);
      DARABONBA_PTR_TO_JSON(SlinkSrcResType, slinkSrcResType_);
      DARABONBA_PTR_TO_JSON(SlinkSrcUserName, slinkSrcUserName_);
      DARABONBA_PTR_TO_JSON(SlinkStage, slinkStage_);
      DARABONBA_PTR_TO_JSON(SlinkStatus, slinkStatus_);
      DARABONBA_PTR_TO_JSON(SlinkTaskDesc, slinkTaskDesc_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_TO_JSON(SlinkType, slinkType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEvaluateAndImportTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlinkDstDb, slinkDstDb_);
      DARABONBA_PTR_FROM_JSON(SlinkDstResId, slinkDstResId_);
      DARABONBA_PTR_FROM_JSON(SlinkDstUserName, slinkDstUserName_);
      DARABONBA_PTR_FROM_JSON(SlinkSrcDb, slinkSrcDb_);
      DARABONBA_PTR_FROM_JSON(SlinkSrcResId, slinkSrcResId_);
      DARABONBA_PTR_FROM_JSON(SlinkSrcResType, slinkSrcResType_);
      DARABONBA_PTR_FROM_JSON(SlinkSrcUserName, slinkSrcUserName_);
      DARABONBA_PTR_FROM_JSON(SlinkStage, slinkStage_);
      DARABONBA_PTR_FROM_JSON(SlinkStatus, slinkStatus_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskDesc, slinkTaskDesc_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_FROM_JSON(SlinkType, slinkType_);
    };
    DescribeEvaluateAndImportTasksResponseBodyData() = default ;
    DescribeEvaluateAndImportTasksResponseBodyData(const DescribeEvaluateAndImportTasksResponseBodyData &) = default ;
    DescribeEvaluateAndImportTasksResponseBodyData(DescribeEvaluateAndImportTasksResponseBodyData &&) = default ;
    DescribeEvaluateAndImportTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEvaluateAndImportTasksResponseBodyData() = default ;
    DescribeEvaluateAndImportTasksResponseBodyData& operator=(const DescribeEvaluateAndImportTasksResponseBodyData &) = default ;
    DescribeEvaluateAndImportTasksResponseBodyData& operator=(DescribeEvaluateAndImportTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bid_ == nullptr
        && return this->creator_ == nullptr && return this->deleted_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->regionId_ == nullptr && return this->slinkDstDb_ == nullptr && return this->slinkDstResId_ == nullptr && return this->slinkDstUserName_ == nullptr && return this->slinkSrcDb_ == nullptr
        && return this->slinkSrcResId_ == nullptr && return this->slinkSrcResType_ == nullptr && return this->slinkSrcUserName_ == nullptr && return this->slinkStage_ == nullptr && return this->slinkStatus_ == nullptr
        && return this->slinkTaskDesc_ == nullptr && return this->slinkTaskId_ == nullptr && return this->slinkType_ == nullptr; };
    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slinkDstDb Field Functions 
    bool hasSlinkDstDb() const { return this->slinkDstDb_ != nullptr;};
    void deleteSlinkDstDb() { this->slinkDstDb_ = nullptr;};
    inline string slinkDstDb() const { DARABONBA_PTR_GET_DEFAULT(slinkDstDb_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkDstDb(string slinkDstDb) { DARABONBA_PTR_SET_VALUE(slinkDstDb_, slinkDstDb) };


    // slinkDstResId Field Functions 
    bool hasSlinkDstResId() const { return this->slinkDstResId_ != nullptr;};
    void deleteSlinkDstResId() { this->slinkDstResId_ = nullptr;};
    inline string slinkDstResId() const { DARABONBA_PTR_GET_DEFAULT(slinkDstResId_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkDstResId(string slinkDstResId) { DARABONBA_PTR_SET_VALUE(slinkDstResId_, slinkDstResId) };


    // slinkDstUserName Field Functions 
    bool hasSlinkDstUserName() const { return this->slinkDstUserName_ != nullptr;};
    void deleteSlinkDstUserName() { this->slinkDstUserName_ = nullptr;};
    inline string slinkDstUserName() const { DARABONBA_PTR_GET_DEFAULT(slinkDstUserName_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkDstUserName(string slinkDstUserName) { DARABONBA_PTR_SET_VALUE(slinkDstUserName_, slinkDstUserName) };


    // slinkSrcDb Field Functions 
    bool hasSlinkSrcDb() const { return this->slinkSrcDb_ != nullptr;};
    void deleteSlinkSrcDb() { this->slinkSrcDb_ = nullptr;};
    inline string slinkSrcDb() const { DARABONBA_PTR_GET_DEFAULT(slinkSrcDb_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkSrcDb(string slinkSrcDb) { DARABONBA_PTR_SET_VALUE(slinkSrcDb_, slinkSrcDb) };


    // slinkSrcResId Field Functions 
    bool hasSlinkSrcResId() const { return this->slinkSrcResId_ != nullptr;};
    void deleteSlinkSrcResId() { this->slinkSrcResId_ = nullptr;};
    inline string slinkSrcResId() const { DARABONBA_PTR_GET_DEFAULT(slinkSrcResId_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkSrcResId(string slinkSrcResId) { DARABONBA_PTR_SET_VALUE(slinkSrcResId_, slinkSrcResId) };


    // slinkSrcResType Field Functions 
    bool hasSlinkSrcResType() const { return this->slinkSrcResType_ != nullptr;};
    void deleteSlinkSrcResType() { this->slinkSrcResType_ = nullptr;};
    inline string slinkSrcResType() const { DARABONBA_PTR_GET_DEFAULT(slinkSrcResType_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkSrcResType(string slinkSrcResType) { DARABONBA_PTR_SET_VALUE(slinkSrcResType_, slinkSrcResType) };


    // slinkSrcUserName Field Functions 
    bool hasSlinkSrcUserName() const { return this->slinkSrcUserName_ != nullptr;};
    void deleteSlinkSrcUserName() { this->slinkSrcUserName_ = nullptr;};
    inline string slinkSrcUserName() const { DARABONBA_PTR_GET_DEFAULT(slinkSrcUserName_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkSrcUserName(string slinkSrcUserName) { DARABONBA_PTR_SET_VALUE(slinkSrcUserName_, slinkSrcUserName) };


    // slinkStage Field Functions 
    bool hasSlinkStage() const { return this->slinkStage_ != nullptr;};
    void deleteSlinkStage() { this->slinkStage_ = nullptr;};
    inline string slinkStage() const { DARABONBA_PTR_GET_DEFAULT(slinkStage_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkStage(string slinkStage) { DARABONBA_PTR_SET_VALUE(slinkStage_, slinkStage) };


    // slinkStatus Field Functions 
    bool hasSlinkStatus() const { return this->slinkStatus_ != nullptr;};
    void deleteSlinkStatus() { this->slinkStatus_ = nullptr;};
    inline string slinkStatus() const { DARABONBA_PTR_GET_DEFAULT(slinkStatus_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkStatus(string slinkStatus) { DARABONBA_PTR_SET_VALUE(slinkStatus_, slinkStatus) };


    // slinkTaskDesc Field Functions 
    bool hasSlinkTaskDesc() const { return this->slinkTaskDesc_ != nullptr;};
    void deleteSlinkTaskDesc() { this->slinkTaskDesc_ = nullptr;};
    inline string slinkTaskDesc() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskDesc_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkTaskDesc(string slinkTaskDesc) { DARABONBA_PTR_SET_VALUE(slinkTaskDesc_, slinkTaskDesc) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string slinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


    // slinkType Field Functions 
    bool hasSlinkType() const { return this->slinkType_ != nullptr;};
    void deleteSlinkType() { this->slinkType_ = nullptr;};
    inline string slinkType() const { DARABONBA_PTR_GET_DEFAULT(slinkType_, "") };
    inline DescribeEvaluateAndImportTasksResponseBodyData& setSlinkType(string slinkType) { DARABONBA_PTR_SET_VALUE(slinkType_, slinkType) };


  protected:
    std::shared_ptr<string> bid_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<bool> deleted_ = nullptr;
    std::shared_ptr<int64_t> gmtCreated_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> slinkDstDb_ = nullptr;
    std::shared_ptr<string> slinkDstResId_ = nullptr;
    std::shared_ptr<string> slinkDstUserName_ = nullptr;
    std::shared_ptr<string> slinkSrcDb_ = nullptr;
    std::shared_ptr<string> slinkSrcResId_ = nullptr;
    std::shared_ptr<string> slinkSrcResType_ = nullptr;
    std::shared_ptr<string> slinkSrcUserName_ = nullptr;
    std::shared_ptr<string> slinkStage_ = nullptr;
    std::shared_ptr<string> slinkStatus_ = nullptr;
    std::shared_ptr<string> slinkTaskDesc_ = nullptr;
    std::shared_ptr<string> slinkTaskId_ = nullptr;
    std::shared_ptr<string> slinkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
