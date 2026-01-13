// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBDRIVER_HPP_
#define ALIBABACLOUD_MODELS_JOBDRIVER_HPP_
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
  class JobDriver : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobDriver& obj) { 
      DARABONBA_PTR_TO_JSON(sparkSubmit, sparkSubmit_);
    };
    friend void from_json(const Darabonba::Json& j, JobDriver& obj) { 
      DARABONBA_PTR_FROM_JSON(sparkSubmit, sparkSubmit_);
    };
    JobDriver() = default ;
    JobDriver(const JobDriver &) = default ;
    JobDriver(JobDriver &&) = default ;
    JobDriver(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobDriver() = default ;
    JobDriver& operator=(const JobDriver &) = default ;
    JobDriver& operator=(JobDriver &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SparkSubmit : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SparkSubmit& obj) { 
        DARABONBA_PTR_TO_JSON(entryPoint, entryPoint_);
        DARABONBA_PTR_TO_JSON(entryPointArguments, entryPointArguments_);
        DARABONBA_PTR_TO_JSON(sparkSubmitParameters, sparkSubmitParameters_);
      };
      friend void from_json(const Darabonba::Json& j, SparkSubmit& obj) { 
        DARABONBA_PTR_FROM_JSON(entryPoint, entryPoint_);
        DARABONBA_PTR_FROM_JSON(entryPointArguments, entryPointArguments_);
        DARABONBA_PTR_FROM_JSON(sparkSubmitParameters, sparkSubmitParameters_);
      };
      SparkSubmit() = default ;
      SparkSubmit(const SparkSubmit &) = default ;
      SparkSubmit(SparkSubmit &&) = default ;
      SparkSubmit(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SparkSubmit() = default ;
      SparkSubmit& operator=(const SparkSubmit &) = default ;
      SparkSubmit& operator=(SparkSubmit &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entryPoint_ == nullptr
        && this->entryPointArguments_ == nullptr && this->sparkSubmitParameters_ == nullptr; };
      // entryPoint Field Functions 
      bool hasEntryPoint() const { return this->entryPoint_ != nullptr;};
      void deleteEntryPoint() { this->entryPoint_ = nullptr;};
      inline string getEntryPoint() const { DARABONBA_PTR_GET_DEFAULT(entryPoint_, "") };
      inline SparkSubmit& setEntryPoint(string entryPoint) { DARABONBA_PTR_SET_VALUE(entryPoint_, entryPoint) };


      // entryPointArguments Field Functions 
      bool hasEntryPointArguments() const { return this->entryPointArguments_ != nullptr;};
      void deleteEntryPointArguments() { this->entryPointArguments_ = nullptr;};
      inline const vector<string> & getEntryPointArguments() const { DARABONBA_PTR_GET_CONST(entryPointArguments_, vector<string>) };
      inline vector<string> getEntryPointArguments() { DARABONBA_PTR_GET(entryPointArguments_, vector<string>) };
      inline SparkSubmit& setEntryPointArguments(const vector<string> & entryPointArguments) { DARABONBA_PTR_SET_VALUE(entryPointArguments_, entryPointArguments) };
      inline SparkSubmit& setEntryPointArguments(vector<string> && entryPointArguments) { DARABONBA_PTR_SET_RVALUE(entryPointArguments_, entryPointArguments) };


      // sparkSubmitParameters Field Functions 
      bool hasSparkSubmitParameters() const { return this->sparkSubmitParameters_ != nullptr;};
      void deleteSparkSubmitParameters() { this->sparkSubmitParameters_ = nullptr;};
      inline string getSparkSubmitParameters() const { DARABONBA_PTR_GET_DEFAULT(sparkSubmitParameters_, "") };
      inline SparkSubmit& setSparkSubmitParameters(string sparkSubmitParameters) { DARABONBA_PTR_SET_VALUE(sparkSubmitParameters_, sparkSubmitParameters) };


    protected:
      shared_ptr<string> entryPoint_ {};
      shared_ptr<vector<string>> entryPointArguments_ {};
      shared_ptr<string> sparkSubmitParameters_ {};
    };

    virtual bool empty() const override { return this->sparkSubmit_ == nullptr; };
    // sparkSubmit Field Functions 
    bool hasSparkSubmit() const { return this->sparkSubmit_ != nullptr;};
    void deleteSparkSubmit() { this->sparkSubmit_ = nullptr;};
    inline const JobDriver::SparkSubmit & getSparkSubmit() const { DARABONBA_PTR_GET_CONST(sparkSubmit_, JobDriver::SparkSubmit) };
    inline JobDriver::SparkSubmit getSparkSubmit() { DARABONBA_PTR_GET(sparkSubmit_, JobDriver::SparkSubmit) };
    inline JobDriver& setSparkSubmit(const JobDriver::SparkSubmit & sparkSubmit) { DARABONBA_PTR_SET_VALUE(sparkSubmit_, sparkSubmit) };
    inline JobDriver& setSparkSubmit(JobDriver::SparkSubmit && sparkSubmit) { DARABONBA_PTR_SET_RVALUE(sparkSubmit_, sparkSubmit) };


  protected:
    shared_ptr<JobDriver::SparkSubmit> sparkSubmit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
