// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExt.hpp>
#include <vector>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ImageQueueModerationResponseBodyData() = default ;
    ImageQueueModerationResponseBodyData(const ImageQueueModerationResponseBodyData &) = default ;
    ImageQueueModerationResponseBodyData(ImageQueueModerationResponseBodyData &&) = default ;
    ImageQueueModerationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyData() = default ;
    ImageQueueModerationResponseBodyData& operator=(const ImageQueueModerationResponseBodyData &) = default ;
    ImageQueueModerationResponseBodyData& operator=(ImageQueueModerationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->ext_ != nullptr && this->manualTaskId_ != nullptr && this->result_ != nullptr && this->riskLevel_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ImageQueueModerationResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExt & ext() const { DARABONBA_PTR_GET_CONST(ext_, Models::ImageQueueModerationResponseBodyDataExt) };
    inline Models::ImageQueueModerationResponseBodyDataExt ext() { DARABONBA_PTR_GET(ext_, Models::ImageQueueModerationResponseBodyDataExt) };
    inline ImageQueueModerationResponseBodyData& setExt(const Models::ImageQueueModerationResponseBodyDataExt & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline ImageQueueModerationResponseBodyData& setExt(Models::ImageQueueModerationResponseBodyDataExt && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline ImageQueueModerationResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ImageQueueModerationResponseBodyDataResult>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ImageQueueModerationResponseBodyDataResult>) };
    inline ImageQueueModerationResponseBodyData& setResult(const vector<Models::ImageQueueModerationResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ImageQueueModerationResponseBodyData& setResult(vector<Models::ImageQueueModerationResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ImageQueueModerationResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExt> ext_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataResult>> result_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
