// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TotalHoneypotCount, totalHoneypotCount_);
      DARABONBA_PTR_TO_JSON(TotalNodeStatus, totalNodeStatus_);
      DARABONBA_PTR_TO_JSON(TotalProbeCount, totalProbeCount_);
      DARABONBA_PTR_TO_JSON(UsedHoneypotCount, usedHoneypotCount_);
      DARABONBA_PTR_TO_JSON(UsedHostProbeCount, usedHostProbeCount_);
      DARABONBA_PTR_TO_JSON(UsedProbeCount, usedProbeCount_);
      DARABONBA_PTR_TO_JSON(UsedVpcProbeCount, usedVpcProbeCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalHoneypotCount, totalHoneypotCount_);
      DARABONBA_PTR_FROM_JSON(TotalNodeStatus, totalNodeStatus_);
      DARABONBA_PTR_FROM_JSON(TotalProbeCount, totalProbeCount_);
      DARABONBA_PTR_FROM_JSON(UsedHoneypotCount, usedHoneypotCount_);
      DARABONBA_PTR_FROM_JSON(UsedHostProbeCount, usedHostProbeCount_);
      DARABONBA_PTR_FROM_JSON(UsedProbeCount, usedProbeCount_);
      DARABONBA_PTR_FROM_JSON(UsedVpcProbeCount, usedVpcProbeCount_);
    };
    GetHoneypotStatisticsResponseBodyData() = default ;
    GetHoneypotStatisticsResponseBodyData(const GetHoneypotStatisticsResponseBodyData &) = default ;
    GetHoneypotStatisticsResponseBodyData(GetHoneypotStatisticsResponseBodyData &&) = default ;
    GetHoneypotStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotStatisticsResponseBodyData() = default ;
    GetHoneypotStatisticsResponseBodyData& operator=(const GetHoneypotStatisticsResponseBodyData &) = default ;
    GetHoneypotStatisticsResponseBodyData& operator=(GetHoneypotStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->totalHoneypotCount_ != nullptr
        && this->totalNodeStatus_ != nullptr && this->totalProbeCount_ != nullptr && this->usedHoneypotCount_ != nullptr && this->usedHostProbeCount_ != nullptr && this->usedProbeCount_ != nullptr
        && this->usedVpcProbeCount_ != nullptr; };
    // totalHoneypotCount Field Functions 
    bool hasTotalHoneypotCount() const { return this->totalHoneypotCount_ != nullptr;};
    void deleteTotalHoneypotCount() { this->totalHoneypotCount_ = nullptr;};
    inline int32_t totalHoneypotCount() const { DARABONBA_PTR_GET_DEFAULT(totalHoneypotCount_, 0) };
    inline GetHoneypotStatisticsResponseBodyData& setTotalHoneypotCount(int32_t totalHoneypotCount) { DARABONBA_PTR_SET_VALUE(totalHoneypotCount_, totalHoneypotCount) };


    // totalNodeStatus Field Functions 
    bool hasTotalNodeStatus() const { return this->totalNodeStatus_ != nullptr;};
    void deleteTotalNodeStatus() { this->totalNodeStatus_ = nullptr;};
    inline int32_t totalNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(totalNodeStatus_, 0) };
    inline GetHoneypotStatisticsResponseBodyData& setTotalNodeStatus(int32_t totalNodeStatus) { DARABONBA_PTR_SET_VALUE(totalNodeStatus_, totalNodeStatus) };


    // totalProbeCount Field Functions 
    bool hasTotalProbeCount() const { return this->totalProbeCount_ != nullptr;};
    void deleteTotalProbeCount() { this->totalProbeCount_ = nullptr;};
    inline int32_t totalProbeCount() const { DARABONBA_PTR_GET_DEFAULT(totalProbeCount_, 0) };
    inline GetHoneypotStatisticsResponseBodyData& setTotalProbeCount(int32_t totalProbeCount) { DARABONBA_PTR_SET_VALUE(totalProbeCount_, totalProbeCount) };


    // usedHoneypotCount Field Functions 
    bool hasUsedHoneypotCount() const { return this->usedHoneypotCount_ != nullptr;};
    void deleteUsedHoneypotCount() { this->usedHoneypotCount_ = nullptr;};
    inline int32_t usedHoneypotCount() const { DARABONBA_PTR_GET_DEFAULT(usedHoneypotCount_, 0) };
    inline GetHoneypotStatisticsResponseBodyData& setUsedHoneypotCount(int32_t usedHoneypotCount) { DARABONBA_PTR_SET_VALUE(usedHoneypotCount_, usedHoneypotCount) };


    // usedHostProbeCount Field Functions 
    bool hasUsedHostProbeCount() const { return this->usedHostProbeCount_ != nullptr;};
    void deleteUsedHostProbeCount() { this->usedHostProbeCount_ = nullptr;};
    inline int32_t usedHostProbeCount() const { DARABONBA_PTR_GET_DEFAULT(usedHostProbeCount_, 0) };
    inline GetHoneypotStatisticsResponseBodyData& setUsedHostProbeCount(int32_t usedHostProbeCount) { DARABONBA_PTR_SET_VALUE(usedHostProbeCount_, usedHostProbeCount) };


    // usedProbeCount Field Functions 
    bool hasUsedProbeCount() const { return this->usedProbeCount_ != nullptr;};
    void deleteUsedProbeCount() { this->usedProbeCount_ = nullptr;};
    inline int32_t usedProbeCount() const { DARABONBA_PTR_GET_DEFAULT(usedProbeCount_, 0) };
    inline GetHoneypotStatisticsResponseBodyData& setUsedProbeCount(int32_t usedProbeCount) { DARABONBA_PTR_SET_VALUE(usedProbeCount_, usedProbeCount) };


    // usedVpcProbeCount Field Functions 
    bool hasUsedVpcProbeCount() const { return this->usedVpcProbeCount_ != nullptr;};
    void deleteUsedVpcProbeCount() { this->usedVpcProbeCount_ = nullptr;};
    inline int32_t usedVpcProbeCount() const { DARABONBA_PTR_GET_DEFAULT(usedVpcProbeCount_, 0) };
    inline GetHoneypotStatisticsResponseBodyData& setUsedVpcProbeCount(int32_t usedVpcProbeCount) { DARABONBA_PTR_SET_VALUE(usedVpcProbeCount_, usedVpcProbeCount) };


  protected:
    // The total number of honeypots.
    std::shared_ptr<int32_t> totalHoneypotCount_ = nullptr;
    // The health status of the management node. Valid values:
    // 
    // *   1: normal
    // *   2: abnormal
    std::shared_ptr<int32_t> totalNodeStatus_ = nullptr;
    // The total number of authorized probes.
    std::shared_ptr<int32_t> totalProbeCount_ = nullptr;
    // The number of deployed honeypots.
    std::shared_ptr<int32_t> usedHoneypotCount_ = nullptr;
    // The number of deployed host probes.
    std::shared_ptr<int32_t> usedHostProbeCount_ = nullptr;
    // The number of deployed probes.
    std::shared_ptr<int32_t> usedProbeCount_ = nullptr;
    // The number of deployed VPC probes.
    std::shared_ptr<int32_t> usedVpcProbeCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
