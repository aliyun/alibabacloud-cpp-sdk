// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMEXTRACTIONSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMEXTRACTIONSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CustomExtractionStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomExtractionStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(extractionPrompt, extractionPrompt_);
      DARABONBA_PTR_TO_JSON(strategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(strategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(updatePrompt, updatePrompt_);
    };
    friend void from_json(const Darabonba::Json& j, CustomExtractionStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(extractionPrompt, extractionPrompt_);
      DARABONBA_PTR_FROM_JSON(strategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(strategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(updatePrompt, updatePrompt_);
    };
    CustomExtractionStrategy() = default ;
    CustomExtractionStrategy(const CustomExtractionStrategy &) = default ;
    CustomExtractionStrategy(CustomExtractionStrategy &&) = default ;
    CustomExtractionStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomExtractionStrategy() = default ;
    CustomExtractionStrategy& operator=(const CustomExtractionStrategy &) = default ;
    CustomExtractionStrategy& operator=(CustomExtractionStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->extractionPrompt_ == nullptr && this->strategyName_ == nullptr && this->strategyType_ == nullptr && this->updatePrompt_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CustomExtractionStrategy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extractionPrompt Field Functions 
    bool hasExtractionPrompt() const { return this->extractionPrompt_ != nullptr;};
    void deleteExtractionPrompt() { this->extractionPrompt_ = nullptr;};
    inline string getExtractionPrompt() const { DARABONBA_PTR_GET_DEFAULT(extractionPrompt_, "") };
    inline CustomExtractionStrategy& setExtractionPrompt(string extractionPrompt) { DARABONBA_PTR_SET_VALUE(extractionPrompt_, extractionPrompt) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline CustomExtractionStrategy& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline CustomExtractionStrategy& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // updatePrompt Field Functions 
    bool hasUpdatePrompt() const { return this->updatePrompt_ != nullptr;};
    void deleteUpdatePrompt() { this->updatePrompt_ = nullptr;};
    inline string getUpdatePrompt() const { DARABONBA_PTR_GET_DEFAULT(updatePrompt_, "") };
    inline CustomExtractionStrategy& setUpdatePrompt(string updatePrompt) { DARABONBA_PTR_SET_VALUE(updatePrompt_, updatePrompt) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> extractionPrompt_ {};
    shared_ptr<string> strategyName_ {};
    shared_ptr<string> strategyType_ {};
    shared_ptr<string> updatePrompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
