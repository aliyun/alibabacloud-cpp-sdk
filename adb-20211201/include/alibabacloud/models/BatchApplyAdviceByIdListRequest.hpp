// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHAPPLYADVICEBYIDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHAPPLYADVICEBYIDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class BatchApplyAdviceByIdListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchApplyAdviceByIdListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdviceDate, adviceDate_);
      DARABONBA_PTR_TO_JSON(AdviceIdList, adviceIdList_);
      DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
      DARABONBA_PTR_TO_JSON(BuildImmediately, buildImmediately_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchApplyAdviceByIdListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdviceDate, adviceDate_);
      DARABONBA_PTR_FROM_JSON(AdviceIdList, adviceIdList_);
      DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
      DARABONBA_PTR_FROM_JSON(BuildImmediately, buildImmediately_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    BatchApplyAdviceByIdListRequest() = default ;
    BatchApplyAdviceByIdListRequest(const BatchApplyAdviceByIdListRequest &) = default ;
    BatchApplyAdviceByIdListRequest(BatchApplyAdviceByIdListRequest &&) = default ;
    BatchApplyAdviceByIdListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchApplyAdviceByIdListRequest() = default ;
    BatchApplyAdviceByIdListRequest& operator=(const BatchApplyAdviceByIdListRequest &) = default ;
    BatchApplyAdviceByIdListRequest& operator=(BatchApplyAdviceByIdListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adviceDate_ == nullptr
        && this->adviceIdList_ == nullptr && this->applyType_ == nullptr && this->buildImmediately_ == nullptr && this->DBClusterId_ == nullptr && this->regionId_ == nullptr; };
    // adviceDate Field Functions 
    bool hasAdviceDate() const { return this->adviceDate_ != nullptr;};
    void deleteAdviceDate() { this->adviceDate_ = nullptr;};
    inline int64_t getAdviceDate() const { DARABONBA_PTR_GET_DEFAULT(adviceDate_, 0L) };
    inline BatchApplyAdviceByIdListRequest& setAdviceDate(int64_t adviceDate) { DARABONBA_PTR_SET_VALUE(adviceDate_, adviceDate) };


    // adviceIdList Field Functions 
    bool hasAdviceIdList() const { return this->adviceIdList_ != nullptr;};
    void deleteAdviceIdList() { this->adviceIdList_ = nullptr;};
    inline string getAdviceIdList() const { DARABONBA_PTR_GET_DEFAULT(adviceIdList_, "") };
    inline BatchApplyAdviceByIdListRequest& setAdviceIdList(string adviceIdList) { DARABONBA_PTR_SET_VALUE(adviceIdList_, adviceIdList) };


    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline BatchApplyAdviceByIdListRequest& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // buildImmediately Field Functions 
    bool hasBuildImmediately() const { return this->buildImmediately_ != nullptr;};
    void deleteBuildImmediately() { this->buildImmediately_ = nullptr;};
    inline bool getBuildImmediately() const { DARABONBA_PTR_GET_DEFAULT(buildImmediately_, false) };
    inline BatchApplyAdviceByIdListRequest& setBuildImmediately(bool buildImmediately) { DARABONBA_PTR_SET_VALUE(buildImmediately_, buildImmediately) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline BatchApplyAdviceByIdListRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchApplyAdviceByIdListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The date on which you want to apply the suggestion. Format: yyyyMMdd.
    shared_ptr<int64_t> adviceDate_ {};
    // The IDs of the suggestions that you want to apply. Separate multiple IDs with commas (,).
    shared_ptr<string> adviceIdList_ {};
    shared_ptr<string> applyType_ {};
    shared_ptr<bool> buildImmediately_ {};
    // The cluster ID.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the information about all AnalyticDB for MySQL clusters within a region, including cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
