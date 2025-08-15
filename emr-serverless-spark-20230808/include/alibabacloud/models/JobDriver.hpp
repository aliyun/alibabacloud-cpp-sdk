// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBDRIVER_HPP_
#define ALIBABACLOUD_MODELS_JOBDRIVER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JobDriverSparkSubmit.hpp>
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
    virtual bool empty() const override { this->sparkSubmit_ != nullptr; };
    // sparkSubmit Field Functions 
    bool hasSparkSubmit() const { return this->sparkSubmit_ != nullptr;};
    void deleteSparkSubmit() { this->sparkSubmit_ = nullptr;};
    inline const JobDriverSparkSubmit & sparkSubmit() const { DARABONBA_PTR_GET_CONST(sparkSubmit_, JobDriverSparkSubmit) };
    inline JobDriverSparkSubmit sparkSubmit() { DARABONBA_PTR_GET(sparkSubmit_, JobDriverSparkSubmit) };
    inline JobDriver& setSparkSubmit(const JobDriverSparkSubmit & sparkSubmit) { DARABONBA_PTR_SET_VALUE(sparkSubmit_, sparkSubmit) };
    inline JobDriver& setSparkSubmit(JobDriverSparkSubmit && sparkSubmit) { DARABONBA_PTR_SET_RVALUE(sparkSubmit_, sparkSubmit) };


  protected:
    std::shared_ptr<JobDriverSparkSubmit> sparkSubmit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
