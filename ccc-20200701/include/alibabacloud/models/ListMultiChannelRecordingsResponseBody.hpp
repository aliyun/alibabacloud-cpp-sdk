// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTICHANNELRECORDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTICHANNELRECORDINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListMultiChannelRecordingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiChannelRecordingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiChannelRecordingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMultiChannelRecordingsResponseBody() = default ;
    ListMultiChannelRecordingsResponseBody(const ListMultiChannelRecordingsResponseBody &) = default ;
    ListMultiChannelRecordingsResponseBody(ListMultiChannelRecordingsResponseBody &&) = default ;
    ListMultiChannelRecordingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiChannelRecordingsResponseBody() = default ;
    ListMultiChannelRecordingsResponseBody& operator=(const ListMultiChannelRecordingsResponseBody &) = default ;
    ListMultiChannelRecordingsResponseBody& operator=(ListMultiChannelRecordingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentChannelId, agentChannelId_);
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(HoldTimeSegments, holdTimeSegments_);
        DARABONBA_PTR_TO_JSON(RamId, ramId_);
        DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentChannelId, agentChannelId_);
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(HoldTimeSegments, holdTimeSegments_);
        DARABONBA_PTR_FROM_JSON(RamId, ramId_);
        DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HoldTimeSegments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HoldTimeSegments& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, HoldTimeSegments& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        HoldTimeSegments() = default ;
        HoldTimeSegments(const HoldTimeSegments &) = default ;
        HoldTimeSegments(HoldTimeSegments &&) = default ;
        HoldTimeSegments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HoldTimeSegments() = default ;
        HoldTimeSegments& operator=(const HoldTimeSegments &) = default ;
        HoldTimeSegments& operator=(HoldTimeSegments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline HoldTimeSegments& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline HoldTimeSegments& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->agentChannelId_ == nullptr
        && this->agentId_ == nullptr && this->agentName_ == nullptr && this->contactId_ == nullptr && this->duration_ == nullptr && this->fileName_ == nullptr
        && this->fileUrl_ == nullptr && this->holdTimeSegments_ == nullptr && this->ramId_ == nullptr && this->skillGroupId_ == nullptr && this->startTime_ == nullptr; };
      // agentChannelId Field Functions 
      bool hasAgentChannelId() const { return this->agentChannelId_ != nullptr;};
      void deleteAgentChannelId() { this->agentChannelId_ = nullptr;};
      inline string getAgentChannelId() const { DARABONBA_PTR_GET_DEFAULT(agentChannelId_, "") };
      inline Data& setAgentChannelId(string agentChannelId) { DARABONBA_PTR_SET_VALUE(agentChannelId_, agentChannelId) };


      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Data& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Data& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline Data& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline Data& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // holdTimeSegments Field Functions 
      bool hasHoldTimeSegments() const { return this->holdTimeSegments_ != nullptr;};
      void deleteHoldTimeSegments() { this->holdTimeSegments_ = nullptr;};
      inline const vector<Data::HoldTimeSegments> & getHoldTimeSegments() const { DARABONBA_PTR_GET_CONST(holdTimeSegments_, vector<Data::HoldTimeSegments>) };
      inline vector<Data::HoldTimeSegments> getHoldTimeSegments() { DARABONBA_PTR_GET(holdTimeSegments_, vector<Data::HoldTimeSegments>) };
      inline Data& setHoldTimeSegments(const vector<Data::HoldTimeSegments> & holdTimeSegments) { DARABONBA_PTR_SET_VALUE(holdTimeSegments_, holdTimeSegments) };
      inline Data& setHoldTimeSegments(vector<Data::HoldTimeSegments> && holdTimeSegments) { DARABONBA_PTR_SET_RVALUE(holdTimeSegments_, holdTimeSegments) };


      // ramId Field Functions 
      bool hasRamId() const { return this->ramId_ != nullptr;};
      void deleteRamId() { this->ramId_ = nullptr;};
      inline string getRamId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, "") };
      inline Data& setRamId(string ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


      // skillGroupId Field Functions 
      bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
      void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
      inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
      inline Data& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> agentChannelId_ {};
      shared_ptr<string> agentId_ {};
      shared_ptr<string> agentName_ {};
      shared_ptr<string> contactId_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> fileUrl_ {};
      shared_ptr<vector<Data::HoldTimeSegments>> holdTimeSegments_ {};
      shared_ptr<string> ramId_ {};
      shared_ptr<string> skillGroupId_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMultiChannelRecordingsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMultiChannelRecordingsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMultiChannelRecordingsResponseBody::Data>) };
    inline vector<ListMultiChannelRecordingsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMultiChannelRecordingsResponseBody::Data>) };
    inline ListMultiChannelRecordingsResponseBody& setData(const vector<ListMultiChannelRecordingsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMultiChannelRecordingsResponseBody& setData(vector<ListMultiChannelRecordingsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListMultiChannelRecordingsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMultiChannelRecordingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiChannelRecordingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListMultiChannelRecordingsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
