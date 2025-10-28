// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTK8SAPPPRECHECKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTK8SAPPPRECHECKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class StartK8sAppPrecheckResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartK8sAppPrecheckResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
    };
    friend void from_json(const Darabonba::Json& j, StartK8sAppPrecheckResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
    };
    StartK8sAppPrecheckResponseBodyData() = default ;
    StartK8sAppPrecheckResponseBodyData(const StartK8sAppPrecheckResponseBodyData &) = default ;
    StartK8sAppPrecheckResponseBodyData(StartK8sAppPrecheckResponseBodyData &&) = default ;
    StartK8sAppPrecheckResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartK8sAppPrecheckResponseBodyData() = default ;
    StartK8sAppPrecheckResponseBodyData& operator=(const StartK8sAppPrecheckResponseBodyData &) = default ;
    StartK8sAppPrecheckResponseBodyData& operator=(StartK8sAppPrecheckResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobs_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<string> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<string>) };
    inline vector<string> jobs() { DARABONBA_PTR_GET(jobs_, vector<string>) };
    inline StartK8sAppPrecheckResponseBodyData& setJobs(const vector<string> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline StartK8sAppPrecheckResponseBodyData& setJobs(vector<string> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


  protected:
    // The jobs and the details about the jobs.
    std::shared_ptr<vector<string>> jobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
