// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTTASKRESPONSEBODYDATAJOBS_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTTASKRESPONSEBODYDATAJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAgentTaskResponseBodyDataJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentTaskResponseBodyDataJobs& obj) { 
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentTaskResponseBodyDataJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetAgentTaskResponseBodyDataJobs() = default ;
    GetAgentTaskResponseBodyDataJobs(const GetAgentTaskResponseBodyDataJobs &) = default ;
    GetAgentTaskResponseBodyDataJobs(GetAgentTaskResponseBodyDataJobs &&) = default ;
    GetAgentTaskResponseBodyDataJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentTaskResponseBodyDataJobs() = default ;
    GetAgentTaskResponseBodyDataJobs& operator=(const GetAgentTaskResponseBodyDataJobs &) = default ;
    GetAgentTaskResponseBodyDataJobs& operator=(GetAgentTaskResponseBodyDataJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->error_ == nullptr
        && return this->instance_ == nullptr && return this->params_ == nullptr && return this->region_ == nullptr && return this->result_ == nullptr && return this->status_ == nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline GetAgentTaskResponseBodyDataJobs& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetAgentTaskResponseBodyDataJobs& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline GetAgentTaskResponseBodyDataJobs& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline GetAgentTaskResponseBodyDataJobs& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetAgentTaskResponseBodyDataJobs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetAgentTaskResponseBodyDataJobs& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAgentTaskResponseBodyDataJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    Darabonba::Json params_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
