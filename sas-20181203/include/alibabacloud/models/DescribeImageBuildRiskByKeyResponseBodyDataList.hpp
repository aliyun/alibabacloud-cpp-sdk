// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKBYKEYRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBUILDRISKBYKEYRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBuildRiskByKeyResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBuildRiskByKeyResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Advice, advice_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LayerCmd, layerCmd_);
      DARABONBA_PTR_TO_JSON(LayerDigest, layerDigest_);
      DARABONBA_PTR_TO_JSON(Promt, promt_);
      DARABONBA_PTR_TO_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_TO_JSON(RiskClassName, riskClassName_);
      DARABONBA_PTR_TO_JSON(RiskKey, riskKey_);
      DARABONBA_PTR_TO_JSON(RiskKeyName, riskKeyName_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBuildRiskByKeyResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Advice, advice_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LayerCmd, layerCmd_);
      DARABONBA_PTR_FROM_JSON(LayerDigest, layerDigest_);
      DARABONBA_PTR_FROM_JSON(Promt, promt_);
      DARABONBA_PTR_FROM_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_FROM_JSON(RiskClassName, riskClassName_);
      DARABONBA_PTR_FROM_JSON(RiskKey, riskKey_);
      DARABONBA_PTR_FROM_JSON(RiskKeyName, riskKeyName_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeImageBuildRiskByKeyResponseBodyDataList() = default ;
    DescribeImageBuildRiskByKeyResponseBodyDataList(const DescribeImageBuildRiskByKeyResponseBodyDataList &) = default ;
    DescribeImageBuildRiskByKeyResponseBodyDataList(DescribeImageBuildRiskByKeyResponseBodyDataList &&) = default ;
    DescribeImageBuildRiskByKeyResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBuildRiskByKeyResponseBodyDataList() = default ;
    DescribeImageBuildRiskByKeyResponseBodyDataList& operator=(const DescribeImageBuildRiskByKeyResponseBodyDataList &) = default ;
    DescribeImageBuildRiskByKeyResponseBodyDataList& operator=(DescribeImageBuildRiskByKeyResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advice_ == nullptr
        && return this->description_ == nullptr && return this->layerCmd_ == nullptr && return this->layerDigest_ == nullptr && return this->promt_ == nullptr && return this->riskClass_ == nullptr
        && return this->riskClassName_ == nullptr && return this->riskKey_ == nullptr && return this->riskKeyName_ == nullptr && return this->riskLevel_ == nullptr; };
    // advice Field Functions 
    bool hasAdvice() const { return this->advice_ != nullptr;};
    void deleteAdvice() { this->advice_ = nullptr;};
    inline string advice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // layerCmd Field Functions 
    bool hasLayerCmd() const { return this->layerCmd_ != nullptr;};
    void deleteLayerCmd() { this->layerCmd_ = nullptr;};
    inline string layerCmd() const { DARABONBA_PTR_GET_DEFAULT(layerCmd_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setLayerCmd(string layerCmd) { DARABONBA_PTR_SET_VALUE(layerCmd_, layerCmd) };


    // layerDigest Field Functions 
    bool hasLayerDigest() const { return this->layerDigest_ != nullptr;};
    void deleteLayerDigest() { this->layerDigest_ = nullptr;};
    inline string layerDigest() const { DARABONBA_PTR_GET_DEFAULT(layerDigest_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setLayerDigest(string layerDigest) { DARABONBA_PTR_SET_VALUE(layerDigest_, layerDigest) };


    // promt Field Functions 
    bool hasPromt() const { return this->promt_ != nullptr;};
    void deletePromt() { this->promt_ = nullptr;};
    inline string promt() const { DARABONBA_PTR_GET_DEFAULT(promt_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setPromt(string promt) { DARABONBA_PTR_SET_VALUE(promt_, promt) };


    // riskClass Field Functions 
    bool hasRiskClass() const { return this->riskClass_ != nullptr;};
    void deleteRiskClass() { this->riskClass_ = nullptr;};
    inline string riskClass() const { DARABONBA_PTR_GET_DEFAULT(riskClass_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setRiskClass(string riskClass) { DARABONBA_PTR_SET_VALUE(riskClass_, riskClass) };


    // riskClassName Field Functions 
    bool hasRiskClassName() const { return this->riskClassName_ != nullptr;};
    void deleteRiskClassName() { this->riskClassName_ = nullptr;};
    inline string riskClassName() const { DARABONBA_PTR_GET_DEFAULT(riskClassName_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setRiskClassName(string riskClassName) { DARABONBA_PTR_SET_VALUE(riskClassName_, riskClassName) };


    // riskKey Field Functions 
    bool hasRiskKey() const { return this->riskKey_ != nullptr;};
    void deleteRiskKey() { this->riskKey_ = nullptr;};
    inline string riskKey() const { DARABONBA_PTR_GET_DEFAULT(riskKey_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setRiskKey(string riskKey) { DARABONBA_PTR_SET_VALUE(riskKey_, riskKey) };


    // riskKeyName Field Functions 
    bool hasRiskKeyName() const { return this->riskKeyName_ != nullptr;};
    void deleteRiskKeyName() { this->riskKeyName_ = nullptr;};
    inline string riskKeyName() const { DARABONBA_PTR_GET_DEFAULT(riskKeyName_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setRiskKeyName(string riskKeyName) { DARABONBA_PTR_SET_VALUE(riskKeyName_, riskKeyName) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImageBuildRiskByKeyResponseBodyDataList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The suggestion on how to handle the risk.
    std::shared_ptr<string> advice_ = nullptr;
    // The description of the suggestion on how to handle the risk.
    std::shared_ptr<string> description_ = nullptr;
    // The image build command.
    std::shared_ptr<string> layerCmd_ = nullptr;
    // The digest of the image.
    std::shared_ptr<string> layerDigest_ = nullptr;
    // The prompt message on the risk.
    std::shared_ptr<string> promt_ = nullptr;
    // The type key of the risk rule.
    std::shared_ptr<string> riskClass_ = nullptr;
    // The type name of the risk rule.
    std::shared_ptr<string> riskClassName_ = nullptr;
    // The key of the risk rule.
    std::shared_ptr<string> riskKey_ = nullptr;
    // The name of the risk rule.
    std::shared_ptr<string> riskKeyName_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
