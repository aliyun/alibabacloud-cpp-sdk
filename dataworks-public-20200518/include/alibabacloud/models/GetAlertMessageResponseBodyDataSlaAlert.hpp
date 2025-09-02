// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTMESSAGERESPONSEBODYDATASLAALERT_HPP_
#define ALIBABACLOUD_MODELS_GETALERTMESSAGERESPONSEBODYDATASLAALERT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetAlertMessageResponseBodyDataSlaAlert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertMessageResponseBodyDataSlaAlert& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineOwner, baselineOwner_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertMessageResponseBodyDataSlaAlert& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineOwner, baselineOwner_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetAlertMessageResponseBodyDataSlaAlert() = default ;
    GetAlertMessageResponseBodyDataSlaAlert(const GetAlertMessageResponseBodyDataSlaAlert &) = default ;
    GetAlertMessageResponseBodyDataSlaAlert(GetAlertMessageResponseBodyDataSlaAlert &&) = default ;
    GetAlertMessageResponseBodyDataSlaAlert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertMessageResponseBodyDataSlaAlert() = default ;
    GetAlertMessageResponseBodyDataSlaAlert& operator=(const GetAlertMessageResponseBodyDataSlaAlert &) = default ;
    GetAlertMessageResponseBodyDataSlaAlert& operator=(GetAlertMessageResponseBodyDataSlaAlert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->baselineName_ != nullptr && this->baselineOwner_ != nullptr && this->bizdate_ != nullptr && this->inGroupId_ != nullptr && this->projectId_ != nullptr
        && this->status_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetAlertMessageResponseBodyDataSlaAlert& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline GetAlertMessageResponseBodyDataSlaAlert& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineOwner Field Functions 
    bool hasBaselineOwner() const { return this->baselineOwner_ != nullptr;};
    void deleteBaselineOwner() { this->baselineOwner_ = nullptr;};
    inline string baselineOwner() const { DARABONBA_PTR_GET_DEFAULT(baselineOwner_, "") };
    inline GetAlertMessageResponseBodyDataSlaAlert& setBaselineOwner(string baselineOwner) { DARABONBA_PTR_SET_VALUE(baselineOwner_, baselineOwner) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline GetAlertMessageResponseBodyDataSlaAlert& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // inGroupId Field Functions 
    bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
    void deleteInGroupId() { this->inGroupId_ = nullptr;};
    inline int32_t inGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
    inline GetAlertMessageResponseBodyDataSlaAlert& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetAlertMessageResponseBodyDataSlaAlert& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAlertMessageResponseBodyDataSlaAlert& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> baselineOwner_ = nullptr;
    // The data timestamp of the baseline instance.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The ID of the cycle of the baseline instance. Valid values of the ID of an hour-level cycle: [1,24]. The ID of a day-level cycle is 1.
    std::shared_ptr<int32_t> inGroupId_ = nullptr;
    // The ID of the workspace to which the baseline belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The status of the baseline. Valid values:
    // 
    // *   ERROR
    // *   SAFE
    // *   DANGEROUS
    // *   OVER
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
