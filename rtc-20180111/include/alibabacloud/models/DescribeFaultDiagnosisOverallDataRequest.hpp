// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisOverallDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisOverallDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
      DARABONBA_PTR_TO_JSON(StatDim, statDim_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisOverallDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
      DARABONBA_PTR_FROM_JSON(StatDim, statDim_);
    };
    DescribeFaultDiagnosisOverallDataRequest() = default ;
    DescribeFaultDiagnosisOverallDataRequest(const DescribeFaultDiagnosisOverallDataRequest &) = default ;
    DescribeFaultDiagnosisOverallDataRequest(DescribeFaultDiagnosisOverallDataRequest &&) = default ;
    DescribeFaultDiagnosisOverallDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisOverallDataRequest() = default ;
    DescribeFaultDiagnosisOverallDataRequest& operator=(const DescribeFaultDiagnosisOverallDataRequest &) = default ;
    DescribeFaultDiagnosisOverallDataRequest& operator=(DescribeFaultDiagnosisOverallDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->endTs_ == nullptr && return this->startTs_ == nullptr && return this->statDim_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeFaultDiagnosisOverallDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribeFaultDiagnosisOverallDataRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeFaultDiagnosisOverallDataRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // statDim Field Functions 
    bool hasStatDim() const { return this->statDim_ != nullptr;};
    void deleteStatDim() { this->statDim_ = nullptr;};
    inline string statDim() const { DARABONBA_PTR_GET_DEFAULT(statDim_, "") };
    inline DescribeFaultDiagnosisOverallDataRequest& setStatDim(string statDim) { DARABONBA_PTR_SET_VALUE(statDim_, statDim) };


  protected:
    // APP ID
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> statDim_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
