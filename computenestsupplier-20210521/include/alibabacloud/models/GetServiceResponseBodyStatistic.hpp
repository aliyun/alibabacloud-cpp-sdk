// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceResponseBodyStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(AccumulativeInstanceCount, accumulativeInstanceCount_);
      DARABONBA_PTR_TO_JSON(AccumulativePocAmount, accumulativePocAmount_);
      DARABONBA_PTR_TO_JSON(AccumulativeUserCount, accumulativeUserCount_);
      DARABONBA_PTR_TO_JSON(AveragePocAmount, averagePocAmount_);
      DARABONBA_PTR_TO_JSON(AveragePocDuration, averagePocDuration_);
      DARABONBA_PTR_TO_JSON(AveragePocUnitAmount, averagePocUnitAmount_);
      DARABONBA_PTR_TO_JSON(DeployedServiceInstanceCount, deployedServiceInstanceCount_);
      DARABONBA_PTR_TO_JSON(DeployedUserCount, deployedUserCount_);
      DARABONBA_PTR_TO_JSON(SubmittedUsageCount, submittedUsageCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(AccumulativeInstanceCount, accumulativeInstanceCount_);
      DARABONBA_PTR_FROM_JSON(AccumulativePocAmount, accumulativePocAmount_);
      DARABONBA_PTR_FROM_JSON(AccumulativeUserCount, accumulativeUserCount_);
      DARABONBA_PTR_FROM_JSON(AveragePocAmount, averagePocAmount_);
      DARABONBA_PTR_FROM_JSON(AveragePocDuration, averagePocDuration_);
      DARABONBA_PTR_FROM_JSON(AveragePocUnitAmount, averagePocUnitAmount_);
      DARABONBA_PTR_FROM_JSON(DeployedServiceInstanceCount, deployedServiceInstanceCount_);
      DARABONBA_PTR_FROM_JSON(DeployedUserCount, deployedUserCount_);
      DARABONBA_PTR_FROM_JSON(SubmittedUsageCount, submittedUsageCount_);
    };
    GetServiceResponseBodyStatistic() = default ;
    GetServiceResponseBodyStatistic(const GetServiceResponseBodyStatistic &) = default ;
    GetServiceResponseBodyStatistic(GetServiceResponseBodyStatistic &&) = default ;
    GetServiceResponseBodyStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyStatistic() = default ;
    GetServiceResponseBodyStatistic& operator=(const GetServiceResponseBodyStatistic &) = default ;
    GetServiceResponseBodyStatistic& operator=(GetServiceResponseBodyStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accumulativeInstanceCount_ != nullptr
        && this->accumulativePocAmount_ != nullptr && this->accumulativeUserCount_ != nullptr && this->averagePocAmount_ != nullptr && this->averagePocDuration_ != nullptr && this->averagePocUnitAmount_ != nullptr
        && this->deployedServiceInstanceCount_ != nullptr && this->deployedUserCount_ != nullptr && this->submittedUsageCount_ != nullptr; };
    // accumulativeInstanceCount Field Functions 
    bool hasAccumulativeInstanceCount() const { return this->accumulativeInstanceCount_ != nullptr;};
    void deleteAccumulativeInstanceCount() { this->accumulativeInstanceCount_ = nullptr;};
    inline int32_t accumulativeInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(accumulativeInstanceCount_, 0) };
    inline GetServiceResponseBodyStatistic& setAccumulativeInstanceCount(int32_t accumulativeInstanceCount) { DARABONBA_PTR_SET_VALUE(accumulativeInstanceCount_, accumulativeInstanceCount) };


    // accumulativePocAmount Field Functions 
    bool hasAccumulativePocAmount() const { return this->accumulativePocAmount_ != nullptr;};
    void deleteAccumulativePocAmount() { this->accumulativePocAmount_ = nullptr;};
    inline double accumulativePocAmount() const { DARABONBA_PTR_GET_DEFAULT(accumulativePocAmount_, 0.0) };
    inline GetServiceResponseBodyStatistic& setAccumulativePocAmount(double accumulativePocAmount) { DARABONBA_PTR_SET_VALUE(accumulativePocAmount_, accumulativePocAmount) };


    // accumulativeUserCount Field Functions 
    bool hasAccumulativeUserCount() const { return this->accumulativeUserCount_ != nullptr;};
    void deleteAccumulativeUserCount() { this->accumulativeUserCount_ = nullptr;};
    inline int32_t accumulativeUserCount() const { DARABONBA_PTR_GET_DEFAULT(accumulativeUserCount_, 0) };
    inline GetServiceResponseBodyStatistic& setAccumulativeUserCount(int32_t accumulativeUserCount) { DARABONBA_PTR_SET_VALUE(accumulativeUserCount_, accumulativeUserCount) };


    // averagePocAmount Field Functions 
    bool hasAveragePocAmount() const { return this->averagePocAmount_ != nullptr;};
    void deleteAveragePocAmount() { this->averagePocAmount_ = nullptr;};
    inline double averagePocAmount() const { DARABONBA_PTR_GET_DEFAULT(averagePocAmount_, 0.0) };
    inline GetServiceResponseBodyStatistic& setAveragePocAmount(double averagePocAmount) { DARABONBA_PTR_SET_VALUE(averagePocAmount_, averagePocAmount) };


    // averagePocDuration Field Functions 
    bool hasAveragePocDuration() const { return this->averagePocDuration_ != nullptr;};
    void deleteAveragePocDuration() { this->averagePocDuration_ = nullptr;};
    inline double averagePocDuration() const { DARABONBA_PTR_GET_DEFAULT(averagePocDuration_, 0.0) };
    inline GetServiceResponseBodyStatistic& setAveragePocDuration(double averagePocDuration) { DARABONBA_PTR_SET_VALUE(averagePocDuration_, averagePocDuration) };


    // averagePocUnitAmount Field Functions 
    bool hasAveragePocUnitAmount() const { return this->averagePocUnitAmount_ != nullptr;};
    void deleteAveragePocUnitAmount() { this->averagePocUnitAmount_ = nullptr;};
    inline double averagePocUnitAmount() const { DARABONBA_PTR_GET_DEFAULT(averagePocUnitAmount_, 0.0) };
    inline GetServiceResponseBodyStatistic& setAveragePocUnitAmount(double averagePocUnitAmount) { DARABONBA_PTR_SET_VALUE(averagePocUnitAmount_, averagePocUnitAmount) };


    // deployedServiceInstanceCount Field Functions 
    bool hasDeployedServiceInstanceCount() const { return this->deployedServiceInstanceCount_ != nullptr;};
    void deleteDeployedServiceInstanceCount() { this->deployedServiceInstanceCount_ = nullptr;};
    inline int32_t deployedServiceInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(deployedServiceInstanceCount_, 0) };
    inline GetServiceResponseBodyStatistic& setDeployedServiceInstanceCount(int32_t deployedServiceInstanceCount) { DARABONBA_PTR_SET_VALUE(deployedServiceInstanceCount_, deployedServiceInstanceCount) };


    // deployedUserCount Field Functions 
    bool hasDeployedUserCount() const { return this->deployedUserCount_ != nullptr;};
    void deleteDeployedUserCount() { this->deployedUserCount_ = nullptr;};
    inline int32_t deployedUserCount() const { DARABONBA_PTR_GET_DEFAULT(deployedUserCount_, 0) };
    inline GetServiceResponseBodyStatistic& setDeployedUserCount(int32_t deployedUserCount) { DARABONBA_PTR_SET_VALUE(deployedUserCount_, deployedUserCount) };


    // submittedUsageCount Field Functions 
    bool hasSubmittedUsageCount() const { return this->submittedUsageCount_ != nullptr;};
    void deleteSubmittedUsageCount() { this->submittedUsageCount_ = nullptr;};
    inline int32_t submittedUsageCount() const { DARABONBA_PTR_GET_DEFAULT(submittedUsageCount_, 0) };
    inline GetServiceResponseBodyStatistic& setSubmittedUsageCount(int32_t submittedUsageCount) { DARABONBA_PTR_SET_VALUE(submittedUsageCount_, submittedUsageCount) };


  protected:
    // The total number of service instances that belong to the service. The service instances that are deleted are counted.
    std::shared_ptr<int32_t> accumulativeInstanceCount_ = nullptr;
    // The total amount consumed for trial service instances. Unit: CNY.
    std::shared_ptr<double> accumulativePocAmount_ = nullptr;
    // The total number of users who use the service. The historical users are counted.
    std::shared_ptr<int32_t> accumulativeUserCount_ = nullptr;
    // The average amount consumed for trial service instances per instance. Unit: CNY.
    std::shared_ptr<double> averagePocAmount_ = nullptr;
    // The average duration for which trial service instances are in use. Unit: Hour.
    std::shared_ptr<double> averagePocDuration_ = nullptr;
    // The average amount consumed for trial service instances per a period of time. Unit: CNY.
    std::shared_ptr<double> averagePocUnitAmount_ = nullptr;
    // The number of online service instances. It means the number of service instances that are successfully deployed.
    std::shared_ptr<int32_t> deployedServiceInstanceCount_ = nullptr;
    // The number of online users. It means the number of users who successfully deployed the service instances.
    std::shared_ptr<int32_t> deployedUserCount_ = nullptr;
    // The number of service applications that are in the Submitted state.
    std::shared_ptr<int32_t> submittedUsageCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
