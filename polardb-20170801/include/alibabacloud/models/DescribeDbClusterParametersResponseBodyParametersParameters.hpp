// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODYPARAMETERSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPARAMETERSRESPONSEBODYPARAMETERSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterParametersResponseBodyParametersParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterParametersResponseBodyParametersParameters& obj) { 
      DARABONBA_PTR_TO_JSON(IsEqual, isEqual_);
      DARABONBA_PTR_TO_JSON(IsInstancePolarDBKey, isInstancePolarDBKey_);
      DARABONBA_PTR_TO_JSON(IsInstanceRdsKey, isInstanceRdsKey_);
      DARABONBA_PTR_TO_JSON(IsPolarDBKey, isPolarDBKey_);
      DARABONBA_PTR_TO_JSON(IsRdsKey, isRdsKey_);
      DARABONBA_PTR_TO_JSON(distParameterDescription, distParameterDescription_);
      DARABONBA_PTR_TO_JSON(distParameterName, distParameterName_);
      DARABONBA_PTR_TO_JSON(distParameterOptional, distParameterOptional_);
      DARABONBA_PTR_TO_JSON(distParameterValue, distParameterValue_);
      DARABONBA_PTR_TO_JSON(rdsParameterDescription, rdsParameterDescription_);
      DARABONBA_PTR_TO_JSON(rdsParameterName, rdsParameterName_);
      DARABONBA_PTR_TO_JSON(rdsParameterOptional, rdsParameterOptional_);
      DARABONBA_PTR_TO_JSON(rdsParameterValue, rdsParameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterParametersResponseBodyParametersParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(IsEqual, isEqual_);
      DARABONBA_PTR_FROM_JSON(IsInstancePolarDBKey, isInstancePolarDBKey_);
      DARABONBA_PTR_FROM_JSON(IsInstanceRdsKey, isInstanceRdsKey_);
      DARABONBA_PTR_FROM_JSON(IsPolarDBKey, isPolarDBKey_);
      DARABONBA_PTR_FROM_JSON(IsRdsKey, isRdsKey_);
      DARABONBA_PTR_FROM_JSON(distParameterDescription, distParameterDescription_);
      DARABONBA_PTR_FROM_JSON(distParameterName, distParameterName_);
      DARABONBA_PTR_FROM_JSON(distParameterOptional, distParameterOptional_);
      DARABONBA_PTR_FROM_JSON(distParameterValue, distParameterValue_);
      DARABONBA_PTR_FROM_JSON(rdsParameterDescription, rdsParameterDescription_);
      DARABONBA_PTR_FROM_JSON(rdsParameterName, rdsParameterName_);
      DARABONBA_PTR_FROM_JSON(rdsParameterOptional, rdsParameterOptional_);
      DARABONBA_PTR_FROM_JSON(rdsParameterValue, rdsParameterValue_);
    };
    DescribeDBClusterParametersResponseBodyParametersParameters() = default ;
    DescribeDBClusterParametersResponseBodyParametersParameters(const DescribeDBClusterParametersResponseBodyParametersParameters &) = default ;
    DescribeDBClusterParametersResponseBodyParametersParameters(DescribeDBClusterParametersResponseBodyParametersParameters &&) = default ;
    DescribeDBClusterParametersResponseBodyParametersParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterParametersResponseBodyParametersParameters() = default ;
    DescribeDBClusterParametersResponseBodyParametersParameters& operator=(const DescribeDBClusterParametersResponseBodyParametersParameters &) = default ;
    DescribeDBClusterParametersResponseBodyParametersParameters& operator=(DescribeDBClusterParametersResponseBodyParametersParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isEqual_ == nullptr
        && return this->isInstancePolarDBKey_ == nullptr && return this->isInstanceRdsKey_ == nullptr && return this->isPolarDBKey_ == nullptr && return this->isRdsKey_ == nullptr && return this->distParameterDescription_ == nullptr
        && return this->distParameterName_ == nullptr && return this->distParameterOptional_ == nullptr && return this->distParameterValue_ == nullptr && return this->rdsParameterDescription_ == nullptr && return this->rdsParameterName_ == nullptr
        && return this->rdsParameterOptional_ == nullptr && return this->rdsParameterValue_ == nullptr; };
    // isEqual Field Functions 
    bool hasIsEqual() const { return this->isEqual_ != nullptr;};
    void deleteIsEqual() { this->isEqual_ = nullptr;};
    inline string isEqual() const { DARABONBA_PTR_GET_DEFAULT(isEqual_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setIsEqual(string isEqual) { DARABONBA_PTR_SET_VALUE(isEqual_, isEqual) };


    // isInstancePolarDBKey Field Functions 
    bool hasIsInstancePolarDBKey() const { return this->isInstancePolarDBKey_ != nullptr;};
    void deleteIsInstancePolarDBKey() { this->isInstancePolarDBKey_ = nullptr;};
    inline string isInstancePolarDBKey() const { DARABONBA_PTR_GET_DEFAULT(isInstancePolarDBKey_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setIsInstancePolarDBKey(string isInstancePolarDBKey) { DARABONBA_PTR_SET_VALUE(isInstancePolarDBKey_, isInstancePolarDBKey) };


    // isInstanceRdsKey Field Functions 
    bool hasIsInstanceRdsKey() const { return this->isInstanceRdsKey_ != nullptr;};
    void deleteIsInstanceRdsKey() { this->isInstanceRdsKey_ = nullptr;};
    inline string isInstanceRdsKey() const { DARABONBA_PTR_GET_DEFAULT(isInstanceRdsKey_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setIsInstanceRdsKey(string isInstanceRdsKey) { DARABONBA_PTR_SET_VALUE(isInstanceRdsKey_, isInstanceRdsKey) };


    // isPolarDBKey Field Functions 
    bool hasIsPolarDBKey() const { return this->isPolarDBKey_ != nullptr;};
    void deleteIsPolarDBKey() { this->isPolarDBKey_ = nullptr;};
    inline string isPolarDBKey() const { DARABONBA_PTR_GET_DEFAULT(isPolarDBKey_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setIsPolarDBKey(string isPolarDBKey) { DARABONBA_PTR_SET_VALUE(isPolarDBKey_, isPolarDBKey) };


    // isRdsKey Field Functions 
    bool hasIsRdsKey() const { return this->isRdsKey_ != nullptr;};
    void deleteIsRdsKey() { this->isRdsKey_ = nullptr;};
    inline string isRdsKey() const { DARABONBA_PTR_GET_DEFAULT(isRdsKey_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setIsRdsKey(string isRdsKey) { DARABONBA_PTR_SET_VALUE(isRdsKey_, isRdsKey) };


    // distParameterDescription Field Functions 
    bool hasDistParameterDescription() const { return this->distParameterDescription_ != nullptr;};
    void deleteDistParameterDescription() { this->distParameterDescription_ = nullptr;};
    inline string distParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(distParameterDescription_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setDistParameterDescription(string distParameterDescription) { DARABONBA_PTR_SET_VALUE(distParameterDescription_, distParameterDescription) };


    // distParameterName Field Functions 
    bool hasDistParameterName() const { return this->distParameterName_ != nullptr;};
    void deleteDistParameterName() { this->distParameterName_ = nullptr;};
    inline string distParameterName() const { DARABONBA_PTR_GET_DEFAULT(distParameterName_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setDistParameterName(string distParameterName) { DARABONBA_PTR_SET_VALUE(distParameterName_, distParameterName) };


    // distParameterOptional Field Functions 
    bool hasDistParameterOptional() const { return this->distParameterOptional_ != nullptr;};
    void deleteDistParameterOptional() { this->distParameterOptional_ = nullptr;};
    inline string distParameterOptional() const { DARABONBA_PTR_GET_DEFAULT(distParameterOptional_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setDistParameterOptional(string distParameterOptional) { DARABONBA_PTR_SET_VALUE(distParameterOptional_, distParameterOptional) };


    // distParameterValue Field Functions 
    bool hasDistParameterValue() const { return this->distParameterValue_ != nullptr;};
    void deleteDistParameterValue() { this->distParameterValue_ = nullptr;};
    inline string distParameterValue() const { DARABONBA_PTR_GET_DEFAULT(distParameterValue_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setDistParameterValue(string distParameterValue) { DARABONBA_PTR_SET_VALUE(distParameterValue_, distParameterValue) };


    // rdsParameterDescription Field Functions 
    bool hasRdsParameterDescription() const { return this->rdsParameterDescription_ != nullptr;};
    void deleteRdsParameterDescription() { this->rdsParameterDescription_ = nullptr;};
    inline string rdsParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(rdsParameterDescription_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setRdsParameterDescription(string rdsParameterDescription) { DARABONBA_PTR_SET_VALUE(rdsParameterDescription_, rdsParameterDescription) };


    // rdsParameterName Field Functions 
    bool hasRdsParameterName() const { return this->rdsParameterName_ != nullptr;};
    void deleteRdsParameterName() { this->rdsParameterName_ = nullptr;};
    inline string rdsParameterName() const { DARABONBA_PTR_GET_DEFAULT(rdsParameterName_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setRdsParameterName(string rdsParameterName) { DARABONBA_PTR_SET_VALUE(rdsParameterName_, rdsParameterName) };


    // rdsParameterOptional Field Functions 
    bool hasRdsParameterOptional() const { return this->rdsParameterOptional_ != nullptr;};
    void deleteRdsParameterOptional() { this->rdsParameterOptional_ = nullptr;};
    inline string rdsParameterOptional() const { DARABONBA_PTR_GET_DEFAULT(rdsParameterOptional_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setRdsParameterOptional(string rdsParameterOptional) { DARABONBA_PTR_SET_VALUE(rdsParameterOptional_, rdsParameterOptional) };


    // rdsParameterValue Field Functions 
    bool hasRdsParameterValue() const { return this->rdsParameterValue_ != nullptr;};
    void deleteRdsParameterValue() { this->rdsParameterValue_ = nullptr;};
    inline string rdsParameterValue() const { DARABONBA_PTR_GET_DEFAULT(rdsParameterValue_, "") };
    inline DescribeDBClusterParametersResponseBodyParametersParameters& setRdsParameterValue(string rdsParameterValue) { DARABONBA_PTR_SET_VALUE(rdsParameterValue_, rdsParameterValue) };


  protected:
    // Indicates whether the source and current parameters have the same value.
    std::shared_ptr<string> isEqual_ = nullptr;
    // Indicate whether the parameter is a primary parameter of the destination cluster. Valid values:
    // 
    // *   **1**: The parameter is a primary parameter of the destination cluster.
    // *   **0**: The parameter is not a primary parameter of the destination cluster.
    std::shared_ptr<string> isInstancePolarDBKey_ = nullptr;
    // Indicate whether the parameter is a primary parameter of the source instance. Valid values:
    // 
    // *   **1**: The parameter is a primary parameter of the source instance.
    // *   **0**: The parameter is not a primary parameter of the source instance.
    std::shared_ptr<string> isInstanceRdsKey_ = nullptr;
    // Indicate whether the parameter is a primary parameter of the destination cluster. Valid values:
    // 
    // *   **1**: The parameter is a primary parameter of the destination cluster.
    // *   **0**: The parameter is not a primary parameter of the destination cluster.
    std::shared_ptr<string> isPolarDBKey_ = nullptr;
    // Indicate whether the parameter is a primary parameter of the source instance. Valid values:
    // 
    // *   **1**: The parameter is a primary parameter of the source instance.
    // *   **0**: The parameter is not a primary parameter of the source instance.
    std::shared_ptr<string> isRdsKey_ = nullptr;
    // The description of the parameter of the destination cluster.
    std::shared_ptr<string> distParameterDescription_ = nullptr;
    // The name of the parameter of the destination cluster.
    std::shared_ptr<string> distParameterName_ = nullptr;
    // The valid values of the parameter of the destination cluster.
    std::shared_ptr<string> distParameterOptional_ = nullptr;
    // The value of the parameter of the destination cluster.
    std::shared_ptr<string> distParameterValue_ = nullptr;
    // The description of the parameter of the source instance.
    std::shared_ptr<string> rdsParameterDescription_ = nullptr;
    // The name of the parameter of the source instance.
    std::shared_ptr<string> rdsParameterName_ = nullptr;
    // The valid values of the parameter of the source instance.
    std::shared_ptr<string> rdsParameterOptional_ = nullptr;
    // The value of the parameter of the source instance.
    std::shared_ptr<string> rdsParameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
