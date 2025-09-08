// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDeepWritingResponseBodyPayloadOutputItem.hpp>
#include <alibabacloud/models/RunDeepWritingResponseBodyPayloadOutputResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDeepWritingResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDeepWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(OutputIndex, outputIndex_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(SequenceNumber, sequenceNumber_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunDeepWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(OutputIndex, outputIndex_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(SequenceNumber, sequenceNumber_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RunDeepWritingResponseBodyPayloadOutput() = default ;
    RunDeepWritingResponseBodyPayloadOutput(const RunDeepWritingResponseBodyPayloadOutput &) = default ;
    RunDeepWritingResponseBodyPayloadOutput(RunDeepWritingResponseBodyPayloadOutput &&) = default ;
    RunDeepWritingResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDeepWritingResponseBodyPayloadOutput() = default ;
    RunDeepWritingResponseBodyPayloadOutput& operator=(const RunDeepWritingResponseBodyPayloadOutput &) = default ;
    RunDeepWritingResponseBodyPayloadOutput& operator=(RunDeepWritingResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr
        && this->outputIndex_ != nullptr && this->response_ != nullptr && this->sequenceNumber_ != nullptr && this->type_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const Models::RunDeepWritingResponseBodyPayloadOutputItem & item() const { DARABONBA_PTR_GET_CONST(item_, Models::RunDeepWritingResponseBodyPayloadOutputItem) };
    inline Models::RunDeepWritingResponseBodyPayloadOutputItem item() { DARABONBA_PTR_GET(item_, Models::RunDeepWritingResponseBodyPayloadOutputItem) };
    inline RunDeepWritingResponseBodyPayloadOutput& setItem(const Models::RunDeepWritingResponseBodyPayloadOutputItem & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline RunDeepWritingResponseBodyPayloadOutput& setItem(Models::RunDeepWritingResponseBodyPayloadOutputItem && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // outputIndex Field Functions 
    bool hasOutputIndex() const { return this->outputIndex_ != nullptr;};
    void deleteOutputIndex() { this->outputIndex_ = nullptr;};
    inline int32_t outputIndex() const { DARABONBA_PTR_GET_DEFAULT(outputIndex_, 0) };
    inline RunDeepWritingResponseBodyPayloadOutput& setOutputIndex(int32_t outputIndex) { DARABONBA_PTR_SET_VALUE(outputIndex_, outputIndex) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::RunDeepWritingResponseBodyPayloadOutputResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::RunDeepWritingResponseBodyPayloadOutputResponse) };
    inline Models::RunDeepWritingResponseBodyPayloadOutputResponse response() { DARABONBA_PTR_GET(response_, Models::RunDeepWritingResponseBodyPayloadOutputResponse) };
    inline RunDeepWritingResponseBodyPayloadOutput& setResponse(const Models::RunDeepWritingResponseBodyPayloadOutputResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline RunDeepWritingResponseBodyPayloadOutput& setResponse(Models::RunDeepWritingResponseBodyPayloadOutputResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    // sequenceNumber Field Functions 
    bool hasSequenceNumber() const { return this->sequenceNumber_ != nullptr;};
    void deleteSequenceNumber() { this->sequenceNumber_ = nullptr;};
    inline string sequenceNumber() const { DARABONBA_PTR_GET_DEFAULT(sequenceNumber_, "") };
    inline RunDeepWritingResponseBodyPayloadOutput& setSequenceNumber(string sequenceNumber) { DARABONBA_PTR_SET_VALUE(sequenceNumber_, sequenceNumber) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunDeepWritingResponseBodyPayloadOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::RunDeepWritingResponseBodyPayloadOutputItem> item_ = nullptr;
    std::shared_ptr<int32_t> outputIndex_ = nullptr;
    std::shared_ptr<Models::RunDeepWritingResponseBodyPayloadOutputResponse> response_ = nullptr;
    std::shared_ptr<string> sequenceNumber_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
