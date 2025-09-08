// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExt.hpp>
#include <vector>
#include <alibabacloud/models/ImageModerationResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ImageModerationResponseBodyData() = default ;
    ImageModerationResponseBodyData(const ImageModerationResponseBodyData &) = default ;
    ImageModerationResponseBodyData(ImageModerationResponseBodyData &&) = default ;
    ImageModerationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyData() = default ;
    ImageModerationResponseBodyData& operator=(const ImageModerationResponseBodyData &) = default ;
    ImageModerationResponseBodyData& operator=(ImageModerationResponseBodyData &&) = default ;
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
    inline ImageModerationResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExt & ext() const { DARABONBA_PTR_GET_CONST(ext_, Models::ImageModerationResponseBodyDataExt) };
    inline Models::ImageModerationResponseBodyDataExt ext() { DARABONBA_PTR_GET(ext_, Models::ImageModerationResponseBodyDataExt) };
    inline ImageModerationResponseBodyData& setExt(const Models::ImageModerationResponseBodyDataExt & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline ImageModerationResponseBodyData& setExt(Models::ImageModerationResponseBodyDataExt && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline ImageModerationResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ImageModerationResponseBodyDataResult>) };
    inline vector<Models::ImageModerationResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ImageModerationResponseBodyDataResult>) };
    inline ImageModerationResponseBodyData& setResult(const vector<Models::ImageModerationResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ImageModerationResponseBodyData& setResult(vector<Models::ImageModerationResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ImageModerationResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The ID of the moderated object.
    // 
    // >  If you specify the dataId parameter in the request, the value of the dataId parameter is returned in the response.
    std::shared_ptr<string> dataId_ = nullptr;
    // Auxiliary reference information.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExt> ext_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    // The results of image moderation parameters such as the label parameter and the confidence parameter, which are an array structure.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataResult>> result_ = nullptr;
    // Risk Level.
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
