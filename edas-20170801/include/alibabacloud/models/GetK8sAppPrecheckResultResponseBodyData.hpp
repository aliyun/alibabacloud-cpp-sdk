// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetK8sAppPrecheckResultResponseBodyDataJobResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sAppPrecheckResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sAppPrecheckResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobResults, jobResults_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sAppPrecheckResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobResults, jobResults_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetK8sAppPrecheckResultResponseBodyData() = default ;
    GetK8sAppPrecheckResultResponseBodyData(const GetK8sAppPrecheckResultResponseBodyData &) = default ;
    GetK8sAppPrecheckResultResponseBodyData(GetK8sAppPrecheckResultResponseBodyData &&) = default ;
    GetK8sAppPrecheckResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sAppPrecheckResultResponseBodyData() = default ;
    GetK8sAppPrecheckResultResponseBodyData& operator=(const GetK8sAppPrecheckResultResponseBodyData &) = default ;
    GetK8sAppPrecheckResultResponseBodyData& operator=(GetK8sAppPrecheckResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobResults_ == nullptr
        && return this->reason_ == nullptr && return this->status_ == nullptr; };
    // jobResults Field Functions 
    bool hasJobResults() const { return this->jobResults_ != nullptr;};
    void deleteJobResults() { this->jobResults_ = nullptr;};
    inline const vector<Models::GetK8sAppPrecheckResultResponseBodyDataJobResults> & jobResults() const { DARABONBA_PTR_GET_CONST(jobResults_, vector<Models::GetK8sAppPrecheckResultResponseBodyDataJobResults>) };
    inline vector<Models::GetK8sAppPrecheckResultResponseBodyDataJobResults> jobResults() { DARABONBA_PTR_GET(jobResults_, vector<Models::GetK8sAppPrecheckResultResponseBodyDataJobResults>) };
    inline GetK8sAppPrecheckResultResponseBodyData& setJobResults(const vector<Models::GetK8sAppPrecheckResultResponseBodyDataJobResults> & jobResults) { DARABONBA_PTR_SET_VALUE(jobResults_, jobResults) };
    inline GetK8sAppPrecheckResultResponseBodyData& setJobResults(vector<Models::GetK8sAppPrecheckResultResponseBodyDataJobResults> && jobResults) { DARABONBA_PTR_SET_RVALUE(jobResults_, jobResults) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetK8sAppPrecheckResultResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetK8sAppPrecheckResultResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The precheck result for the application change.
    std::shared_ptr<vector<Models::GetK8sAppPrecheckResultResponseBodyDataJobResults>> jobResults_ = nullptr;
    // The reason why the application failed the precheck. This parameter is left empty when the application passed the precheck.
    std::shared_ptr<string> reason_ = nullptr;
    // The precheck state for the application change. Valid values:
    // 
    // *   checking: The application is being prechecked.
    // *   pass: The application passed the precheck.
    // *   failed: The application failed the precheck.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
