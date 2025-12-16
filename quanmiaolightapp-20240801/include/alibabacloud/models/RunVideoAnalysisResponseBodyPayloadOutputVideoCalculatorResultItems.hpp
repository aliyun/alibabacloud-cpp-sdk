// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOCALCULATORRESULTITEMS_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOCALCULATORRESULTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& obj) { 
      DARABONBA_PTR_TO_JSON(inputExpense, inputExpense_);
      DARABONBA_PTR_TO_JSON(inputToken, inputToken_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outputExpense, outputExpense_);
      DARABONBA_PTR_TO_JSON(outputToken, outputToken_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(timeExpense, timeExpense_);
      DARABONBA_PTR_TO_JSON(totalExpense, totalExpense_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& obj) { 
      DARABONBA_PTR_FROM_JSON(inputExpense, inputExpense_);
      DARABONBA_PTR_FROM_JSON(inputToken, inputToken_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outputExpense, outputExpense_);
      DARABONBA_PTR_FROM_JSON(outputToken, outputToken_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(timeExpense, timeExpense_);
      DARABONBA_PTR_FROM_JSON(totalExpense, totalExpense_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems(const RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems(RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputExpense_ == nullptr
        && return this->inputToken_ == nullptr && return this->name_ == nullptr && return this->outputExpense_ == nullptr && return this->outputToken_ == nullptr && return this->time_ == nullptr
        && return this->timeExpense_ == nullptr && return this->totalExpense_ == nullptr && return this->type_ == nullptr; };
    // inputExpense Field Functions 
    bool hasInputExpense() const { return this->inputExpense_ != nullptr;};
    void deleteInputExpense() { this->inputExpense_ = nullptr;};
    inline double inputExpense() const { DARABONBA_PTR_GET_DEFAULT(inputExpense_, 0.0) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setInputExpense(double inputExpense) { DARABONBA_PTR_SET_VALUE(inputExpense_, inputExpense) };


    // inputToken Field Functions 
    bool hasInputToken() const { return this->inputToken_ != nullptr;};
    void deleteInputToken() { this->inputToken_ = nullptr;};
    inline int64_t inputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0L) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setInputToken(int64_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputExpense Field Functions 
    bool hasOutputExpense() const { return this->outputExpense_ != nullptr;};
    void deleteOutputExpense() { this->outputExpense_ = nullptr;};
    inline double outputExpense() const { DARABONBA_PTR_GET_DEFAULT(outputExpense_, 0.0) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setOutputExpense(double outputExpense) { DARABONBA_PTR_SET_VALUE(outputExpense_, outputExpense) };


    // outputToken Field Functions 
    bool hasOutputToken() const { return this->outputToken_ != nullptr;};
    void deleteOutputToken() { this->outputToken_ = nullptr;};
    inline int64_t outputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, 0L) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setOutputToken(int64_t outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // timeExpense Field Functions 
    bool hasTimeExpense() const { return this->timeExpense_ != nullptr;};
    void deleteTimeExpense() { this->timeExpense_ = nullptr;};
    inline double timeExpense() const { DARABONBA_PTR_GET_DEFAULT(timeExpense_, 0.0) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setTimeExpense(double timeExpense) { DARABONBA_PTR_SET_VALUE(timeExpense_, timeExpense) };


    // totalExpense Field Functions 
    bool hasTotalExpense() const { return this->totalExpense_ != nullptr;};
    void deleteTotalExpense() { this->totalExpense_ = nullptr;};
    inline double totalExpense() const { DARABONBA_PTR_GET_DEFAULT(totalExpense_, 0.0) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setTotalExpense(double totalExpense) { DARABONBA_PTR_SET_VALUE(totalExpense_, totalExpense) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<double> inputExpense_ = nullptr;
    std::shared_ptr<int64_t> inputToken_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<double> outputExpense_ = nullptr;
    std::shared_ptr<int64_t> outputToken_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<double> timeExpense_ = nullptr;
    std::shared_ptr<double> totalExpense_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
