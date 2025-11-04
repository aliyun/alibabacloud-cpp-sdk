// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTVOICEPRINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTVOICEPRINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIAgentVoiceprintsResponseBodyVoiceprints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentVoiceprintsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentVoiceprintsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Voiceprints, voiceprints_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentVoiceprintsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Voiceprints, voiceprints_);
    };
    ListAIAgentVoiceprintsResponseBody() = default ;
    ListAIAgentVoiceprintsResponseBody(const ListAIAgentVoiceprintsResponseBody &) = default ;
    ListAIAgentVoiceprintsResponseBody(ListAIAgentVoiceprintsResponseBody &&) = default ;
    ListAIAgentVoiceprintsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentVoiceprintsResponseBody() = default ;
    ListAIAgentVoiceprintsResponseBody& operator=(const ListAIAgentVoiceprintsResponseBody &) = default ;
    ListAIAgentVoiceprintsResponseBody& operator=(ListAIAgentVoiceprintsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->voiceprints_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIAgentVoiceprintsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAIAgentVoiceprintsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // voiceprints Field Functions 
    bool hasVoiceprints() const { return this->voiceprints_ != nullptr;};
    void deleteVoiceprints() { this->voiceprints_ = nullptr;};
    inline const vector<ListAIAgentVoiceprintsResponseBodyVoiceprints> & voiceprints() const { DARABONBA_PTR_GET_CONST(voiceprints_, vector<ListAIAgentVoiceprintsResponseBodyVoiceprints>) };
    inline vector<ListAIAgentVoiceprintsResponseBodyVoiceprints> voiceprints() { DARABONBA_PTR_GET(voiceprints_, vector<ListAIAgentVoiceprintsResponseBodyVoiceprints>) };
    inline ListAIAgentVoiceprintsResponseBody& setVoiceprints(const vector<ListAIAgentVoiceprintsResponseBodyVoiceprints> & voiceprints) { DARABONBA_PTR_SET_VALUE(voiceprints_, voiceprints) };
    inline ListAIAgentVoiceprintsResponseBody& setVoiceprints(vector<ListAIAgentVoiceprintsResponseBodyVoiceprints> && voiceprints) { DARABONBA_PTR_SET_RVALUE(voiceprints_, voiceprints) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of voiceprints that match the query criteria.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The voiceprints.
    std::shared_ptr<vector<ListAIAgentVoiceprintsResponseBodyVoiceprints>> voiceprints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
