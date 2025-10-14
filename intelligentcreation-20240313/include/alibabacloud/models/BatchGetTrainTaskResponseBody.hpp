// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETTRAINTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETTRAINTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetTrainTaskResponseBodyVoiceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetTrainTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetTrainTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(voiceList, voiceList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetTrainTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(voiceList, voiceList_);
    };
    BatchGetTrainTaskResponseBody() = default ;
    BatchGetTrainTaskResponseBody(const BatchGetTrainTaskResponseBody &) = default ;
    BatchGetTrainTaskResponseBody(BatchGetTrainTaskResponseBody &&) = default ;
    BatchGetTrainTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetTrainTaskResponseBody() = default ;
    BatchGetTrainTaskResponseBody& operator=(const BatchGetTrainTaskResponseBody &) = default ;
    BatchGetTrainTaskResponseBody& operator=(BatchGetTrainTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->voiceList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetTrainTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // voiceList Field Functions 
    bool hasVoiceList() const { return this->voiceList_ != nullptr;};
    void deleteVoiceList() { this->voiceList_ = nullptr;};
    inline const vector<BatchGetTrainTaskResponseBodyVoiceList> & voiceList() const { DARABONBA_PTR_GET_CONST(voiceList_, vector<BatchGetTrainTaskResponseBodyVoiceList>) };
    inline vector<BatchGetTrainTaskResponseBodyVoiceList> voiceList() { DARABONBA_PTR_GET(voiceList_, vector<BatchGetTrainTaskResponseBodyVoiceList>) };
    inline BatchGetTrainTaskResponseBody& setVoiceList(const vector<BatchGetTrainTaskResponseBodyVoiceList> & voiceList) { DARABONBA_PTR_SET_VALUE(voiceList_, voiceList) };
    inline BatchGetTrainTaskResponseBody& setVoiceList(vector<BatchGetTrainTaskResponseBodyVoiceList> && voiceList) { DARABONBA_PTR_SET_RVALUE(voiceList_, voiceList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<BatchGetTrainTaskResponseBodyVoiceList>> voiceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
