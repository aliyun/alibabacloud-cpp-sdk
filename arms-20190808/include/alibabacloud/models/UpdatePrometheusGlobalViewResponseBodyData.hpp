// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSGLOBALVIEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSGLOBALVIEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePrometheusGlobalViewResponseBodyDataFailedInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusGlobalViewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusGlobalViewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusGlobalViewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdatePrometheusGlobalViewResponseBodyData() = default ;
    UpdatePrometheusGlobalViewResponseBodyData(const UpdatePrometheusGlobalViewResponseBodyData &) = default ;
    UpdatePrometheusGlobalViewResponseBodyData(UpdatePrometheusGlobalViewResponseBodyData &&) = default ;
    UpdatePrometheusGlobalViewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusGlobalViewResponseBodyData() = default ;
    UpdatePrometheusGlobalViewResponseBodyData& operator=(const UpdatePrometheusGlobalViewResponseBodyData &) = default ;
    UpdatePrometheusGlobalViewResponseBodyData& operator=(UpdatePrometheusGlobalViewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedInstances_ != nullptr
        && this->success_ != nullptr; };
    // failedInstances Field Functions 
    bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
    void deleteFailedInstances() { this->failedInstances_ = nullptr;};
    inline const vector<Models::UpdatePrometheusGlobalViewResponseBodyDataFailedInstances> & failedInstances() const { DARABONBA_PTR_GET_CONST(failedInstances_, vector<Models::UpdatePrometheusGlobalViewResponseBodyDataFailedInstances>) };
    inline vector<Models::UpdatePrometheusGlobalViewResponseBodyDataFailedInstances> failedInstances() { DARABONBA_PTR_GET(failedInstances_, vector<Models::UpdatePrometheusGlobalViewResponseBodyDataFailedInstances>) };
    inline UpdatePrometheusGlobalViewResponseBodyData& setFailedInstances(const vector<Models::UpdatePrometheusGlobalViewResponseBodyDataFailedInstances> & failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };
    inline UpdatePrometheusGlobalViewResponseBodyData& setFailedInstances(vector<Models::UpdatePrometheusGlobalViewResponseBodyDataFailedInstances> && failedInstances) { DARABONBA_PTR_SET_RVALUE(failedInstances_, failedInstances) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdatePrometheusGlobalViewResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data sources that failed to be updated.
    std::shared_ptr<vector<Models::UpdatePrometheusGlobalViewResponseBodyDataFailedInstances>> failedInstances_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
