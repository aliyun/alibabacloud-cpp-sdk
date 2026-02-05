// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTVOICEPRINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTVOICEPRINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Voiceprints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Voiceprints& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
      };
      friend void from_json(const Darabonba::Json& j, Voiceprints& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
      };
      Voiceprints() = default ;
      Voiceprints(const Voiceprints &) = default ;
      Voiceprints(Voiceprints &&) = default ;
      Voiceprints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Voiceprints() = default ;
      Voiceprints& operator=(const Voiceprints &) = default ;
      Voiceprints& operator=(Voiceprints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->voiceprintId_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Voiceprints& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Voiceprints& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // voiceprintId Field Functions 
      bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
      void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
      inline string getVoiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
      inline Voiceprints& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


    protected:
      // The creation time of the voiceprint.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time of the voiceprint.
      shared_ptr<string> gmtModified_ {};
      // The unique identifier for the voiceprint.
      shared_ptr<string> voiceprintId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->voiceprints_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIAgentVoiceprintsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAIAgentVoiceprintsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // voiceprints Field Functions 
    bool hasVoiceprints() const { return this->voiceprints_ != nullptr;};
    void deleteVoiceprints() { this->voiceprints_ = nullptr;};
    inline const vector<ListAIAgentVoiceprintsResponseBody::Voiceprints> & getVoiceprints() const { DARABONBA_PTR_GET_CONST(voiceprints_, vector<ListAIAgentVoiceprintsResponseBody::Voiceprints>) };
    inline vector<ListAIAgentVoiceprintsResponseBody::Voiceprints> getVoiceprints() { DARABONBA_PTR_GET(voiceprints_, vector<ListAIAgentVoiceprintsResponseBody::Voiceprints>) };
    inline ListAIAgentVoiceprintsResponseBody& setVoiceprints(const vector<ListAIAgentVoiceprintsResponseBody::Voiceprints> & voiceprints) { DARABONBA_PTR_SET_VALUE(voiceprints_, voiceprints) };
    inline ListAIAgentVoiceprintsResponseBody& setVoiceprints(vector<ListAIAgentVoiceprintsResponseBody::Voiceprints> && voiceprints) { DARABONBA_PTR_SET_RVALUE(voiceprints_, voiceprints) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of voiceprints that match the query criteria.
    shared_ptr<int32_t> totalCount_ {};
    // The voiceprints.
    shared_ptr<vector<ListAIAgentVoiceprintsResponseBody::Voiceprints>> voiceprints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
