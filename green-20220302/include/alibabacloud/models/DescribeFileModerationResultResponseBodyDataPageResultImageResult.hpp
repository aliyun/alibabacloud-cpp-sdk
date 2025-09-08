// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGERESULTIMAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODYDATAPAGERESULTIMAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult.hpp>
#include <alibabacloud/models/DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultResponseBodyDataPageResultImageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultResponseBodyDataPageResultImageResult& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LabelResult, labelResult_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultResponseBodyDataPageResultImageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LabelResult, labelResult_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    DescribeFileModerationResultResponseBodyDataPageResultImageResult() = default ;
    DescribeFileModerationResultResponseBodyDataPageResultImageResult(const DescribeFileModerationResultResponseBodyDataPageResultImageResult &) = default ;
    DescribeFileModerationResultResponseBodyDataPageResultImageResult(DescribeFileModerationResultResponseBodyDataPageResultImageResult &&) = default ;
    DescribeFileModerationResultResponseBodyDataPageResultImageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultResponseBodyDataPageResultImageResult() = default ;
    DescribeFileModerationResultResponseBodyDataPageResultImageResult& operator=(const DescribeFileModerationResultResponseBodyDataPageResultImageResult &) = default ;
    DescribeFileModerationResultResponseBodyDataPageResultImageResult& operator=(DescribeFileModerationResultResponseBodyDataPageResultImageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->labelResult_ != nullptr && this->location_ != nullptr && this->riskLevel_ != nullptr && this->service_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultImageResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labelResult Field Functions 
    bool hasLabelResult() const { return this->labelResult_ != nullptr;};
    void deleteLabelResult() { this->labelResult_ = nullptr;};
    inline const vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult> & labelResult() const { DARABONBA_PTR_GET_CONST(labelResult_, vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult>) };
    inline vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult> labelResult() { DARABONBA_PTR_GET(labelResult_, vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult>) };
    inline DescribeFileModerationResultResponseBodyDataPageResultImageResult& setLabelResult(const vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult> & labelResult) { DARABONBA_PTR_SET_VALUE(labelResult_, labelResult) };
    inline DescribeFileModerationResultResponseBodyDataPageResultImageResult& setLabelResult(vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult> && labelResult) { DARABONBA_PTR_SET_RVALUE(labelResult_, labelResult) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation) };
    inline Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation location() { DARABONBA_PTR_GET(location_, Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation) };
    inline DescribeFileModerationResultResponseBodyDataPageResultImageResult& setLocation(const Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline DescribeFileModerationResultResponseBodyDataPageResultImageResult& setLocation(Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultImageResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeFileModerationResultResponseBodyDataPageResultImageResult& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The label information.
    std::shared_ptr<vector<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLabelResult>> labelResult_ = nullptr;
    // The location information
    std::shared_ptr<Models::DescribeFileModerationResultResponseBodyDataPageResultImageResultLocation> location_ = nullptr;
    // Risk Level
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The moderation service.
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
