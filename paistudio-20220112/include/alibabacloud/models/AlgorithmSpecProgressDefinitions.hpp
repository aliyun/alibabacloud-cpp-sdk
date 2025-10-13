// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALGORITHMSPECPROGRESSDEFINITIONS_HPP_
#define ALIBABACLOUD_MODELS_ALGORITHMSPECPROGRESSDEFINITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AlgorithmSpecProgressDefinitionsOverallProgress.hpp>
#include <alibabacloud/models/AlgorithmSpecProgressDefinitionsRemainingTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AlgorithmSpecProgressDefinitions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlgorithmSpecProgressDefinitions& obj) { 
      DARABONBA_PTR_TO_JSON(OverallProgress, overallProgress_);
      DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
    };
    friend void from_json(const Darabonba::Json& j, AlgorithmSpecProgressDefinitions& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallProgress, overallProgress_);
      DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
    };
    AlgorithmSpecProgressDefinitions() = default ;
    AlgorithmSpecProgressDefinitions(const AlgorithmSpecProgressDefinitions &) = default ;
    AlgorithmSpecProgressDefinitions(AlgorithmSpecProgressDefinitions &&) = default ;
    AlgorithmSpecProgressDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlgorithmSpecProgressDefinitions() = default ;
    AlgorithmSpecProgressDefinitions& operator=(const AlgorithmSpecProgressDefinitions &) = default ;
    AlgorithmSpecProgressDefinitions& operator=(AlgorithmSpecProgressDefinitions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->overallProgress_ == nullptr
        && return this->remainingTime_ == nullptr; };
    // overallProgress Field Functions 
    bool hasOverallProgress() const { return this->overallProgress_ != nullptr;};
    void deleteOverallProgress() { this->overallProgress_ = nullptr;};
    inline const Models::AlgorithmSpecProgressDefinitionsOverallProgress & overallProgress() const { DARABONBA_PTR_GET_CONST(overallProgress_, Models::AlgorithmSpecProgressDefinitionsOverallProgress) };
    inline Models::AlgorithmSpecProgressDefinitionsOverallProgress overallProgress() { DARABONBA_PTR_GET(overallProgress_, Models::AlgorithmSpecProgressDefinitionsOverallProgress) };
    inline AlgorithmSpecProgressDefinitions& setOverallProgress(const Models::AlgorithmSpecProgressDefinitionsOverallProgress & overallProgress) { DARABONBA_PTR_SET_VALUE(overallProgress_, overallProgress) };
    inline AlgorithmSpecProgressDefinitions& setOverallProgress(Models::AlgorithmSpecProgressDefinitionsOverallProgress && overallProgress) { DARABONBA_PTR_SET_RVALUE(overallProgress_, overallProgress) };


    // remainingTime Field Functions 
    bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
    void deleteRemainingTime() { this->remainingTime_ = nullptr;};
    inline const Models::AlgorithmSpecProgressDefinitionsRemainingTime & remainingTime() const { DARABONBA_PTR_GET_CONST(remainingTime_, Models::AlgorithmSpecProgressDefinitionsRemainingTime) };
    inline Models::AlgorithmSpecProgressDefinitionsRemainingTime remainingTime() { DARABONBA_PTR_GET(remainingTime_, Models::AlgorithmSpecProgressDefinitionsRemainingTime) };
    inline AlgorithmSpecProgressDefinitions& setRemainingTime(const Models::AlgorithmSpecProgressDefinitionsRemainingTime & remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };
    inline AlgorithmSpecProgressDefinitions& setRemainingTime(Models::AlgorithmSpecProgressDefinitionsRemainingTime && remainingTime) { DARABONBA_PTR_SET_RVALUE(remainingTime_, remainingTime) };


  protected:
    std::shared_ptr<Models::AlgorithmSpecProgressDefinitionsOverallProgress> overallProgress_ = nullptr;
    std::shared_ptr<Models::AlgorithmSpecProgressDefinitionsRemainingTime> remainingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
