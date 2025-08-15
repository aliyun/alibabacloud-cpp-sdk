// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBDRIVERSPARKSUBMIT_HPP_
#define ALIBABACLOUD_MODELS_JOBDRIVERSPARKSUBMIT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class JobDriverSparkSubmit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobDriverSparkSubmit& obj) { 
      DARABONBA_PTR_TO_JSON(entryPoint, entryPoint_);
      DARABONBA_PTR_TO_JSON(entryPointArguments, entryPointArguments_);
      DARABONBA_PTR_TO_JSON(sparkSubmitParameters, sparkSubmitParameters_);
    };
    friend void from_json(const Darabonba::Json& j, JobDriverSparkSubmit& obj) { 
      DARABONBA_PTR_FROM_JSON(entryPoint, entryPoint_);
      DARABONBA_PTR_FROM_JSON(entryPointArguments, entryPointArguments_);
      DARABONBA_PTR_FROM_JSON(sparkSubmitParameters, sparkSubmitParameters_);
    };
    JobDriverSparkSubmit() = default ;
    JobDriverSparkSubmit(const JobDriverSparkSubmit &) = default ;
    JobDriverSparkSubmit(JobDriverSparkSubmit &&) = default ;
    JobDriverSparkSubmit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobDriverSparkSubmit() = default ;
    JobDriverSparkSubmit& operator=(const JobDriverSparkSubmit &) = default ;
    JobDriverSparkSubmit& operator=(JobDriverSparkSubmit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entryPoint_ != nullptr
        && this->entryPointArguments_ != nullptr && this->sparkSubmitParameters_ != nullptr; };
    // entryPoint Field Functions 
    bool hasEntryPoint() const { return this->entryPoint_ != nullptr;};
    void deleteEntryPoint() { this->entryPoint_ = nullptr;};
    inline string entryPoint() const { DARABONBA_PTR_GET_DEFAULT(entryPoint_, "") };
    inline JobDriverSparkSubmit& setEntryPoint(string entryPoint) { DARABONBA_PTR_SET_VALUE(entryPoint_, entryPoint) };


    // entryPointArguments Field Functions 
    bool hasEntryPointArguments() const { return this->entryPointArguments_ != nullptr;};
    void deleteEntryPointArguments() { this->entryPointArguments_ = nullptr;};
    inline const vector<string> & entryPointArguments() const { DARABONBA_PTR_GET_CONST(entryPointArguments_, vector<string>) };
    inline vector<string> entryPointArguments() { DARABONBA_PTR_GET(entryPointArguments_, vector<string>) };
    inline JobDriverSparkSubmit& setEntryPointArguments(const vector<string> & entryPointArguments) { DARABONBA_PTR_SET_VALUE(entryPointArguments_, entryPointArguments) };
    inline JobDriverSparkSubmit& setEntryPointArguments(vector<string> && entryPointArguments) { DARABONBA_PTR_SET_RVALUE(entryPointArguments_, entryPointArguments) };


    // sparkSubmitParameters Field Functions 
    bool hasSparkSubmitParameters() const { return this->sparkSubmitParameters_ != nullptr;};
    void deleteSparkSubmitParameters() { this->sparkSubmitParameters_ = nullptr;};
    inline string sparkSubmitParameters() const { DARABONBA_PTR_GET_DEFAULT(sparkSubmitParameters_, "") };
    inline JobDriverSparkSubmit& setSparkSubmitParameters(string sparkSubmitParameters) { DARABONBA_PTR_SET_VALUE(sparkSubmitParameters_, sparkSubmitParameters) };


  protected:
    std::shared_ptr<string> entryPoint_ = nullptr;
    std::shared_ptr<vector<string>> entryPointArguments_ = nullptr;
    std::shared_ptr<string> sparkSubmitParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
