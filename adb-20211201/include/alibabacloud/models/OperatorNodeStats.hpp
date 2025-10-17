// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATORNODESTATS_HPP_
#define ALIBABACLOUD_MODELS_OPERATORNODESTATS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OperatorNodeStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperatorNodeStats& obj) { 
      DARABONBA_PTR_TO_JSON(bytes, bytes_);
      DARABONBA_PTR_TO_JSON(outputRows, outputRows_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(peakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(timeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, OperatorNodeStats& obj) { 
      DARABONBA_PTR_FROM_JSON(bytes, bytes_);
      DARABONBA_PTR_FROM_JSON(outputRows, outputRows_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(peakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(timeCost, timeCost_);
    };
    OperatorNodeStats() = default ;
    OperatorNodeStats(const OperatorNodeStats &) = default ;
    OperatorNodeStats(OperatorNodeStats &&) = default ;
    OperatorNodeStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperatorNodeStats() = default ;
    OperatorNodeStats& operator=(const OperatorNodeStats &) = default ;
    OperatorNodeStats& operator=(OperatorNodeStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bytes_ == nullptr
        && return this->outputRows_ == nullptr && return this->parameters_ == nullptr && return this->peakMemory_ == nullptr && return this->timeCost_ == nullptr; };
    // bytes Field Functions 
    bool hasBytes() const { return this->bytes_ != nullptr;};
    void deleteBytes() { this->bytes_ = nullptr;};
    inline int64_t bytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
    inline OperatorNodeStats& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


    // outputRows Field Functions 
    bool hasOutputRows() const { return this->outputRows_ != nullptr;};
    void deleteOutputRows() { this->outputRows_ = nullptr;};
    inline int64_t outputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
    inline OperatorNodeStats& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline OperatorNodeStats& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline OperatorNodeStats& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline int64_t timeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
    inline OperatorNodeStats& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    std::shared_ptr<int64_t> bytes_ = nullptr;
    std::shared_ptr<int64_t> outputRows_ = nullptr;
    std::shared_ptr<string> parameters_ = nullptr;
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    std::shared_ptr<int64_t> timeCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
