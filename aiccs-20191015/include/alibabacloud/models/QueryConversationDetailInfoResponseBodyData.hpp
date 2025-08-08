// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERSATIONDETAILINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERSATIONDETAILINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryConversationDetailInfoResponseBodyDataOutputTags.hpp>
#include <alibabacloud/models/QueryConversationDetailInfoResponseBodyDataVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryConversationDetailInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConversationDetailInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationRecord, conversationRecord_);
      DARABONBA_PTR_TO_JSON(OutputTags, outputTags_);
      DARABONBA_PTR_TO_JSON(PickUpTime, pickUpTime_);
      DARABONBA_PTR_TO_JSON(RecordingFileDownloadUrl, recordingFileDownloadUrl_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConversationDetailInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationRecord, conversationRecord_);
      DARABONBA_PTR_FROM_JSON(OutputTags, outputTags_);
      DARABONBA_PTR_FROM_JSON(PickUpTime, pickUpTime_);
      DARABONBA_PTR_FROM_JSON(RecordingFileDownloadUrl, recordingFileDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    QueryConversationDetailInfoResponseBodyData() = default ;
    QueryConversationDetailInfoResponseBodyData(const QueryConversationDetailInfoResponseBodyData &) = default ;
    QueryConversationDetailInfoResponseBodyData(QueryConversationDetailInfoResponseBodyData &&) = default ;
    QueryConversationDetailInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConversationDetailInfoResponseBodyData() = default ;
    QueryConversationDetailInfoResponseBodyData& operator=(const QueryConversationDetailInfoResponseBodyData &) = default ;
    QueryConversationDetailInfoResponseBodyData& operator=(QueryConversationDetailInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conversationRecord_ != nullptr
        && this->outputTags_ != nullptr && this->pickUpTime_ != nullptr && this->recordingFileDownloadUrl_ != nullptr && this->variables_ != nullptr; };
    // conversationRecord Field Functions 
    bool hasConversationRecord() const { return this->conversationRecord_ != nullptr;};
    void deleteConversationRecord() { this->conversationRecord_ = nullptr;};
    inline string conversationRecord() const { DARABONBA_PTR_GET_DEFAULT(conversationRecord_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setConversationRecord(string conversationRecord) { DARABONBA_PTR_SET_VALUE(conversationRecord_, conversationRecord) };


    // outputTags Field Functions 
    bool hasOutputTags() const { return this->outputTags_ != nullptr;};
    void deleteOutputTags() { this->outputTags_ = nullptr;};
    inline const vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags> & outputTags() const { DARABONBA_PTR_GET_CONST(outputTags_, vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags>) };
    inline vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags> outputTags() { DARABONBA_PTR_GET(outputTags_, vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags>) };
    inline QueryConversationDetailInfoResponseBodyData& setOutputTags(const vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags> & outputTags) { DARABONBA_PTR_SET_VALUE(outputTags_, outputTags) };
    inline QueryConversationDetailInfoResponseBodyData& setOutputTags(vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags> && outputTags) { DARABONBA_PTR_SET_RVALUE(outputTags_, outputTags) };


    // pickUpTime Field Functions 
    bool hasPickUpTime() const { return this->pickUpTime_ != nullptr;};
    void deletePickUpTime() { this->pickUpTime_ = nullptr;};
    inline int64_t pickUpTime() const { DARABONBA_PTR_GET_DEFAULT(pickUpTime_, 0L) };
    inline QueryConversationDetailInfoResponseBodyData& setPickUpTime(int64_t pickUpTime) { DARABONBA_PTR_SET_VALUE(pickUpTime_, pickUpTime) };


    // recordingFileDownloadUrl Field Functions 
    bool hasRecordingFileDownloadUrl() const { return this->recordingFileDownloadUrl_ != nullptr;};
    void deleteRecordingFileDownloadUrl() { this->recordingFileDownloadUrl_ = nullptr;};
    inline string recordingFileDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(recordingFileDownloadUrl_, "") };
    inline QueryConversationDetailInfoResponseBodyData& setRecordingFileDownloadUrl(string recordingFileDownloadUrl) { DARABONBA_PTR_SET_VALUE(recordingFileDownloadUrl_, recordingFileDownloadUrl) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::QueryConversationDetailInfoResponseBodyDataVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::QueryConversationDetailInfoResponseBodyDataVariables>) };
    inline vector<Models::QueryConversationDetailInfoResponseBodyDataVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::QueryConversationDetailInfoResponseBodyDataVariables>) };
    inline QueryConversationDetailInfoResponseBodyData& setVariables(const vector<Models::QueryConversationDetailInfoResponseBodyDataVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline QueryConversationDetailInfoResponseBodyData& setVariables(vector<Models::QueryConversationDetailInfoResponseBodyDataVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> conversationRecord_ = nullptr;
    std::shared_ptr<vector<Models::QueryConversationDetailInfoResponseBodyDataOutputTags>> outputTags_ = nullptr;
    std::shared_ptr<int64_t> pickUpTime_ = nullptr;
    std::shared_ptr<string> recordingFileDownloadUrl_ = nullptr;
    std::shared_ptr<vector<Models::QueryConversationDetailInfoResponseBodyDataVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
