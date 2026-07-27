// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSMULTICONDITIONCASECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SLSMULTICONDITIONCASECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SlsMultiConditionCaseConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SlsMultiConditionCaseConfig& obj) { 
      DARABONBA_PTR_TO_JSON(countOperator, countOperator_);
      DARABONBA_PTR_TO_JSON(countThreshold, countThreshold_);
      DARABONBA_PTR_TO_JSON(matchField, matchField_);
      DARABONBA_PTR_TO_JSON(matchOperator, matchOperator_);
      DARABONBA_PTR_TO_JSON(matchValue, matchValue_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
    };
    friend void from_json(const Darabonba::Json& j, SlsMultiConditionCaseConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(countOperator, countOperator_);
      DARABONBA_PTR_FROM_JSON(countThreshold, countThreshold_);
      DARABONBA_PTR_FROM_JSON(matchField, matchField_);
      DARABONBA_PTR_FROM_JSON(matchOperator, matchOperator_);
      DARABONBA_PTR_FROM_JSON(matchValue, matchValue_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
    };
    SlsMultiConditionCaseConfig() = default ;
    SlsMultiConditionCaseConfig(const SlsMultiConditionCaseConfig &) = default ;
    SlsMultiConditionCaseConfig(SlsMultiConditionCaseConfig &&) = default ;
    SlsMultiConditionCaseConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SlsMultiConditionCaseConfig() = default ;
    SlsMultiConditionCaseConfig& operator=(const SlsMultiConditionCaseConfig &) = default ;
    SlsMultiConditionCaseConfig& operator=(SlsMultiConditionCaseConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->countOperator_ == nullptr
        && this->countThreshold_ == nullptr && this->matchField_ == nullptr && this->matchOperator_ == nullptr && this->matchValue_ == nullptr && this->severity_ == nullptr; };
    // countOperator Field Functions 
    bool hasCountOperator() const { return this->countOperator_ != nullptr;};
    void deleteCountOperator() { this->countOperator_ = nullptr;};
    inline string getCountOperator() const { DARABONBA_PTR_GET_DEFAULT(countOperator_, "") };
    inline SlsMultiConditionCaseConfig& setCountOperator(string countOperator) { DARABONBA_PTR_SET_VALUE(countOperator_, countOperator) };


    // countThreshold Field Functions 
    bool hasCountThreshold() const { return this->countThreshold_ != nullptr;};
    void deleteCountThreshold() { this->countThreshold_ = nullptr;};
    inline int64_t getCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(countThreshold_, 0L) };
    inline SlsMultiConditionCaseConfig& setCountThreshold(int64_t countThreshold) { DARABONBA_PTR_SET_VALUE(countThreshold_, countThreshold) };


    // matchField Field Functions 
    bool hasMatchField() const { return this->matchField_ != nullptr;};
    void deleteMatchField() { this->matchField_ = nullptr;};
    inline string getMatchField() const { DARABONBA_PTR_GET_DEFAULT(matchField_, "") };
    inline SlsMultiConditionCaseConfig& setMatchField(string matchField) { DARABONBA_PTR_SET_VALUE(matchField_, matchField) };


    // matchOperator Field Functions 
    bool hasMatchOperator() const { return this->matchOperator_ != nullptr;};
    void deleteMatchOperator() { this->matchOperator_ = nullptr;};
    inline string getMatchOperator() const { DARABONBA_PTR_GET_DEFAULT(matchOperator_, "") };
    inline SlsMultiConditionCaseConfig& setMatchOperator(string matchOperator) { DARABONBA_PTR_SET_VALUE(matchOperator_, matchOperator) };


    // matchValue Field Functions 
    bool hasMatchValue() const { return this->matchValue_ != nullptr;};
    void deleteMatchValue() { this->matchValue_ = nullptr;};
    inline string getMatchValue() const { DARABONBA_PTR_GET_DEFAULT(matchValue_, "") };
    inline SlsMultiConditionCaseConfig& setMatchValue(string matchValue) { DARABONBA_PTR_SET_VALUE(matchValue_, matchValue) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline SlsMultiConditionCaseConfig& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


  protected:
    shared_ptr<string> countOperator_ {};
    shared_ptr<int64_t> countThreshold_ {};
    shared_ptr<string> matchField_ {};
    shared_ptr<string> matchOperator_ {};
    shared_ptr<string> matchValue_ {};
    shared_ptr<string> severity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
