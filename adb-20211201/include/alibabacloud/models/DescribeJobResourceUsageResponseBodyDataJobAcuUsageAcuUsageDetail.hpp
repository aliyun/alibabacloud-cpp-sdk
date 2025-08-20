// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESOURCEUSAGERESPONSEBODYDATAJOBACUUSAGEACUUSAGEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESOURCEUSAGERESPONSEBODYDATAJOBACUUSAGEACUUSAGEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticAcuNumber, elasticAcuNumber_);
      DARABONBA_PTR_TO_JSON(ReservedAcuNumber, reservedAcuNumber_);
      DARABONBA_PTR_TO_JSON(SpotAcuNumber, spotAcuNumber_);
      DARABONBA_PTR_TO_JSON(SpotAcuPercentage, spotAcuPercentage_);
      DARABONBA_PTR_TO_JSON(TotalAcuNumber, totalAcuNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticAcuNumber, elasticAcuNumber_);
      DARABONBA_PTR_FROM_JSON(ReservedAcuNumber, reservedAcuNumber_);
      DARABONBA_PTR_FROM_JSON(SpotAcuNumber, spotAcuNumber_);
      DARABONBA_PTR_FROM_JSON(SpotAcuPercentage, spotAcuPercentage_);
      DARABONBA_PTR_FROM_JSON(TotalAcuNumber, totalAcuNumber_);
    };
    DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail() = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail(const DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail &) = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail(DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail &&) = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail() = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& operator=(const DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail &) = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& operator=(DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticAcuNumber_ != nullptr
        && this->reservedAcuNumber_ != nullptr && this->spotAcuNumber_ != nullptr && this->spotAcuPercentage_ != nullptr && this->totalAcuNumber_ != nullptr; };
    // elasticAcuNumber Field Functions 
    bool hasElasticAcuNumber() const { return this->elasticAcuNumber_ != nullptr;};
    void deleteElasticAcuNumber() { this->elasticAcuNumber_ = nullptr;};
    inline float elasticAcuNumber() const { DARABONBA_PTR_GET_DEFAULT(elasticAcuNumber_, 0.0) };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& setElasticAcuNumber(float elasticAcuNumber) { DARABONBA_PTR_SET_VALUE(elasticAcuNumber_, elasticAcuNumber) };


    // reservedAcuNumber Field Functions 
    bool hasReservedAcuNumber() const { return this->reservedAcuNumber_ != nullptr;};
    void deleteReservedAcuNumber() { this->reservedAcuNumber_ = nullptr;};
    inline float reservedAcuNumber() const { DARABONBA_PTR_GET_DEFAULT(reservedAcuNumber_, 0.0) };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& setReservedAcuNumber(float reservedAcuNumber) { DARABONBA_PTR_SET_VALUE(reservedAcuNumber_, reservedAcuNumber) };


    // spotAcuNumber Field Functions 
    bool hasSpotAcuNumber() const { return this->spotAcuNumber_ != nullptr;};
    void deleteSpotAcuNumber() { this->spotAcuNumber_ = nullptr;};
    inline float spotAcuNumber() const { DARABONBA_PTR_GET_DEFAULT(spotAcuNumber_, 0.0) };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& setSpotAcuNumber(float spotAcuNumber) { DARABONBA_PTR_SET_VALUE(spotAcuNumber_, spotAcuNumber) };


    // spotAcuPercentage Field Functions 
    bool hasSpotAcuPercentage() const { return this->spotAcuPercentage_ != nullptr;};
    void deleteSpotAcuPercentage() { this->spotAcuPercentage_ = nullptr;};
    inline float spotAcuPercentage() const { DARABONBA_PTR_GET_DEFAULT(spotAcuPercentage_, 0.0) };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& setSpotAcuPercentage(float spotAcuPercentage) { DARABONBA_PTR_SET_VALUE(spotAcuPercentage_, spotAcuPercentage) };


    // totalAcuNumber Field Functions 
    bool hasTotalAcuNumber() const { return this->totalAcuNumber_ != nullptr;};
    void deleteTotalAcuNumber() { this->totalAcuNumber_ = nullptr;};
    inline float totalAcuNumber() const { DARABONBA_PTR_GET_DEFAULT(totalAcuNumber_, 0.0) };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail& setTotalAcuNumber(float totalAcuNumber) { DARABONBA_PTR_SET_VALUE(totalAcuNumber_, totalAcuNumber) };


  protected:
    // The number of ACUs for the elastic resources.
    std::shared_ptr<float> elasticAcuNumber_ = nullptr;
    // The number of ACUs for the reserved resources.
    std::shared_ptr<float> reservedAcuNumber_ = nullptr;
    // The number of spot ACUs.
    std::shared_ptr<float> spotAcuNumber_ = nullptr;
    // The percent of spot ACUs.
    std::shared_ptr<float> spotAcuPercentage_ = nullptr;
    // The total number of ACUs.
    std::shared_ptr<float> totalAcuNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
