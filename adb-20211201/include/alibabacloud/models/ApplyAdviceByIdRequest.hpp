// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYADVICEBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYADVICEBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ApplyAdviceByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyAdviceByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdviceDate, adviceDate_);
      DARABONBA_PTR_TO_JSON(AdviceId, adviceId_);
      DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
      DARABONBA_PTR_TO_JSON(BuildImmediately, buildImmediately_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyAdviceByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdviceDate, adviceDate_);
      DARABONBA_PTR_FROM_JSON(AdviceId, adviceId_);
      DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
      DARABONBA_PTR_FROM_JSON(BuildImmediately, buildImmediately_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ApplyAdviceByIdRequest() = default ;
    ApplyAdviceByIdRequest(const ApplyAdviceByIdRequest &) = default ;
    ApplyAdviceByIdRequest(ApplyAdviceByIdRequest &&) = default ;
    ApplyAdviceByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyAdviceByIdRequest() = default ;
    ApplyAdviceByIdRequest& operator=(const ApplyAdviceByIdRequest &) = default ;
    ApplyAdviceByIdRequest& operator=(ApplyAdviceByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adviceDate_ != nullptr
        && this->adviceId_ != nullptr && this->applyType_ != nullptr && this->buildImmediately_ != nullptr && this->DBClusterId_ != nullptr && this->regionId_ != nullptr; };
    // adviceDate Field Functions 
    bool hasAdviceDate() const { return this->adviceDate_ != nullptr;};
    void deleteAdviceDate() { this->adviceDate_ = nullptr;};
    inline int64_t adviceDate() const { DARABONBA_PTR_GET_DEFAULT(adviceDate_, 0L) };
    inline ApplyAdviceByIdRequest& setAdviceDate(int64_t adviceDate) { DARABONBA_PTR_SET_VALUE(adviceDate_, adviceDate) };


    // adviceId Field Functions 
    bool hasAdviceId() const { return this->adviceId_ != nullptr;};
    void deleteAdviceId() { this->adviceId_ = nullptr;};
    inline string adviceId() const { DARABONBA_PTR_GET_DEFAULT(adviceId_, "") };
    inline ApplyAdviceByIdRequest& setAdviceId(string adviceId) { DARABONBA_PTR_SET_VALUE(adviceId_, adviceId) };


    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string applyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline ApplyAdviceByIdRequest& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // buildImmediately Field Functions 
    bool hasBuildImmediately() const { return this->buildImmediately_ != nullptr;};
    void deleteBuildImmediately() { this->buildImmediately_ = nullptr;};
    inline bool buildImmediately() const { DARABONBA_PTR_GET_DEFAULT(buildImmediately_, false) };
    inline ApplyAdviceByIdRequest& setBuildImmediately(bool buildImmediately) { DARABONBA_PTR_SET_VALUE(buildImmediately_, buildImmediately) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ApplyAdviceByIdRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApplyAdviceByIdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The date on which you want to apply the suggestion. Format: yyyyMMdd.
    std::shared_ptr<int64_t> adviceDate_ = nullptr;
    // The suggestion ID.
    std::shared_ptr<string> adviceId_ = nullptr;
    std::shared_ptr<string> applyType_ = nullptr;
    std::shared_ptr<bool> buildImmediately_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
