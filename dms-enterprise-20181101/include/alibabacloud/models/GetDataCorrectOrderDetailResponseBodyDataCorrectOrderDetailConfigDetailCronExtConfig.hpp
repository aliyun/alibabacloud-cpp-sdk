// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILCONFIGDETAILCRONEXTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILCONFIGDETAILCRONEXTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentClearTaskCount, currentClearTaskCount_);
      DARABONBA_PTR_TO_JSON(OptimizeTableAfterEveryClearTimes, optimizeTableAfterEveryClearTimes_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentClearTaskCount, currentClearTaskCount_);
      DARABONBA_PTR_FROM_JSON(OptimizeTableAfterEveryClearTimes, optimizeTableAfterEveryClearTimes_);
    };
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig &&) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig& operator=(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig& operator=(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentClearTaskCount_ != nullptr
        && this->optimizeTableAfterEveryClearTimes_ != nullptr; };
    // currentClearTaskCount Field Functions 
    bool hasCurrentClearTaskCount() const { return this->currentClearTaskCount_ != nullptr;};
    void deleteCurrentClearTaskCount() { this->currentClearTaskCount_ = nullptr;};
    inline int32_t currentClearTaskCount() const { DARABONBA_PTR_GET_DEFAULT(currentClearTaskCount_, 0) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig& setCurrentClearTaskCount(int32_t currentClearTaskCount) { DARABONBA_PTR_SET_VALUE(currentClearTaskCount_, currentClearTaskCount) };


    // optimizeTableAfterEveryClearTimes Field Functions 
    bool hasOptimizeTableAfterEveryClearTimes() const { return this->optimizeTableAfterEveryClearTimes_ != nullptr;};
    void deleteOptimizeTableAfterEveryClearTimes() { this->optimizeTableAfterEveryClearTimes_ = nullptr;};
    inline int32_t optimizeTableAfterEveryClearTimes() const { DARABONBA_PTR_GET_DEFAULT(optimizeTableAfterEveryClearTimes_, 0) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig& setOptimizeTableAfterEveryClearTimes(int32_t optimizeTableAfterEveryClearTimes) { DARABONBA_PTR_SET_VALUE(optimizeTableAfterEveryClearTimes_, optimizeTableAfterEveryClearTimes) };


  protected:
    // The number of times defragmentation is performed. This parameter is valid only if the value of OptimizeTableAfterEveryClearTimes is greater than 0.
    std::shared_ptr<int32_t> currentClearTaskCount_ = nullptr;
    // Indicates whether the Periodically Optimize Table feature is enabled. Valid values:
    // 
    // *   **0** (default): The feature is disabled.
    // *   **A value greater than 0**: The feature is enabled. The value indicates the number of cleanups after which the system performs defragmentation.
    std::shared_ptr<int32_t> optimizeTableAfterEveryClearTimes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
