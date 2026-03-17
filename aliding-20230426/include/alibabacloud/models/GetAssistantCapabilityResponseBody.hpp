// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(assistantDescription, assistantDescription_);
      DARABONBA_PTR_TO_JSON(canHandle, canHandle_);
      DARABONBA_PTR_TO_JSON(capabilityAssessment, capabilityAssessment_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(thread, thread_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(assistantDescription, assistantDescription_);
      DARABONBA_PTR_FROM_JSON(canHandle, canHandle_);
      DARABONBA_PTR_FROM_JSON(capabilityAssessment, capabilityAssessment_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(thread, thread_);
    };
    GetAssistantCapabilityResponseBody() = default ;
    GetAssistantCapabilityResponseBody(const GetAssistantCapabilityResponseBody &) = default ;
    GetAssistantCapabilityResponseBody(GetAssistantCapabilityResponseBody &&) = default ;
    GetAssistantCapabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityResponseBody() = default ;
    GetAssistantCapabilityResponseBody& operator=(const GetAssistantCapabilityResponseBody &) = default ;
    GetAssistantCapabilityResponseBody& operator=(GetAssistantCapabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Thread : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Thread& obj) { 
        DARABONBA_PTR_TO_JSON(createAt, createAt_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Thread& obj) { 
        DARABONBA_PTR_FROM_JSON(createAt, createAt_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Thread() = default ;
      Thread(const Thread &) = default ;
      Thread(Thread &&) = default ;
      Thread(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Thread() = default ;
      Thread& operator=(const Thread &) = default ;
      Thread& operator=(Thread &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createAt_ == nullptr
        && this->id_ == nullptr && this->status_ == nullptr; };
      // createAt Field Functions 
      bool hasCreateAt() const { return this->createAt_ != nullptr;};
      void deleteCreateAt() { this->createAt_ = nullptr;};
      inline int64_t getCreateAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
      inline Thread& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Thread& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Thread& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> createAt_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> status_ {};
    };

    class CapabilityAssessment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CapabilityAssessment& obj) { 
        DARABONBA_PTR_TO_JSON(briefCapability, briefCapability_);
        DARABONBA_PTR_TO_JSON(capabilityList, capabilityList_);
      };
      friend void from_json(const Darabonba::Json& j, CapabilityAssessment& obj) { 
        DARABONBA_PTR_FROM_JSON(briefCapability, briefCapability_);
        DARABONBA_PTR_FROM_JSON(capabilityList, capabilityList_);
      };
      CapabilityAssessment() = default ;
      CapabilityAssessment(const CapabilityAssessment &) = default ;
      CapabilityAssessment(CapabilityAssessment &&) = default ;
      CapabilityAssessment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CapabilityAssessment() = default ;
      CapabilityAssessment& operator=(const CapabilityAssessment &) = default ;
      CapabilityAssessment& operator=(CapabilityAssessment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CapabilityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CapabilityList& obj) { 
          DARABONBA_PTR_TO_JSON(capabilityOverview, capabilityOverview_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, CapabilityList& obj) { 
          DARABONBA_PTR_FROM_JSON(capabilityOverview, capabilityOverview_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        CapabilityList() = default ;
        CapabilityList(const CapabilityList &) = default ;
        CapabilityList(CapabilityList &&) = default ;
        CapabilityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CapabilityList() = default ;
        CapabilityList& operator=(const CapabilityList &) = default ;
        CapabilityList& operator=(CapabilityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->capabilityOverview_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr; };
        // capabilityOverview Field Functions 
        bool hasCapabilityOverview() const { return this->capabilityOverview_ != nullptr;};
        void deleteCapabilityOverview() { this->capabilityOverview_ = nullptr;};
        inline string getCapabilityOverview() const { DARABONBA_PTR_GET_DEFAULT(capabilityOverview_, "") };
        inline CapabilityList& setCapabilityOverview(string capabilityOverview) { DARABONBA_PTR_SET_VALUE(capabilityOverview_, capabilityOverview) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CapabilityList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CapabilityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> capabilityOverview_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->briefCapability_ == nullptr
        && this->capabilityList_ == nullptr; };
      // briefCapability Field Functions 
      bool hasBriefCapability() const { return this->briefCapability_ != nullptr;};
      void deleteBriefCapability() { this->briefCapability_ = nullptr;};
      inline string getBriefCapability() const { DARABONBA_PTR_GET_DEFAULT(briefCapability_, "") };
      inline CapabilityAssessment& setBriefCapability(string briefCapability) { DARABONBA_PTR_SET_VALUE(briefCapability_, briefCapability) };


      // capabilityList Field Functions 
      bool hasCapabilityList() const { return this->capabilityList_ != nullptr;};
      void deleteCapabilityList() { this->capabilityList_ = nullptr;};
      inline const vector<CapabilityAssessment::CapabilityList> & getCapabilityList() const { DARABONBA_PTR_GET_CONST(capabilityList_, vector<CapabilityAssessment::CapabilityList>) };
      inline vector<CapabilityAssessment::CapabilityList> getCapabilityList() { DARABONBA_PTR_GET(capabilityList_, vector<CapabilityAssessment::CapabilityList>) };
      inline CapabilityAssessment& setCapabilityList(const vector<CapabilityAssessment::CapabilityList> & capabilityList) { DARABONBA_PTR_SET_VALUE(capabilityList_, capabilityList) };
      inline CapabilityAssessment& setCapabilityList(vector<CapabilityAssessment::CapabilityList> && capabilityList) { DARABONBA_PTR_SET_RVALUE(capabilityList_, capabilityList) };


    protected:
      shared_ptr<string> briefCapability_ {};
      shared_ptr<vector<CapabilityAssessment::CapabilityList>> capabilityList_ {};
    };

    virtual bool empty() const override { return this->assistantDescription_ == nullptr
        && this->canHandle_ == nullptr && this->capabilityAssessment_ == nullptr && this->requestId_ == nullptr && this->thread_ == nullptr; };
    // assistantDescription Field Functions 
    bool hasAssistantDescription() const { return this->assistantDescription_ != nullptr;};
    void deleteAssistantDescription() { this->assistantDescription_ = nullptr;};
    inline string getAssistantDescription() const { DARABONBA_PTR_GET_DEFAULT(assistantDescription_, "") };
    inline GetAssistantCapabilityResponseBody& setAssistantDescription(string assistantDescription) { DARABONBA_PTR_SET_VALUE(assistantDescription_, assistantDescription) };


    // canHandle Field Functions 
    bool hasCanHandle() const { return this->canHandle_ != nullptr;};
    void deleteCanHandle() { this->canHandle_ = nullptr;};
    inline bool getCanHandle() const { DARABONBA_PTR_GET_DEFAULT(canHandle_, false) };
    inline GetAssistantCapabilityResponseBody& setCanHandle(bool canHandle) { DARABONBA_PTR_SET_VALUE(canHandle_, canHandle) };


    // capabilityAssessment Field Functions 
    bool hasCapabilityAssessment() const { return this->capabilityAssessment_ != nullptr;};
    void deleteCapabilityAssessment() { this->capabilityAssessment_ = nullptr;};
    inline const GetAssistantCapabilityResponseBody::CapabilityAssessment & getCapabilityAssessment() const { DARABONBA_PTR_GET_CONST(capabilityAssessment_, GetAssistantCapabilityResponseBody::CapabilityAssessment) };
    inline GetAssistantCapabilityResponseBody::CapabilityAssessment getCapabilityAssessment() { DARABONBA_PTR_GET(capabilityAssessment_, GetAssistantCapabilityResponseBody::CapabilityAssessment) };
    inline GetAssistantCapabilityResponseBody& setCapabilityAssessment(const GetAssistantCapabilityResponseBody::CapabilityAssessment & capabilityAssessment) { DARABONBA_PTR_SET_VALUE(capabilityAssessment_, capabilityAssessment) };
    inline GetAssistantCapabilityResponseBody& setCapabilityAssessment(GetAssistantCapabilityResponseBody::CapabilityAssessment && capabilityAssessment) { DARABONBA_PTR_SET_RVALUE(capabilityAssessment_, capabilityAssessment) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssistantCapabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline const GetAssistantCapabilityResponseBody::Thread & getThread() const { DARABONBA_PTR_GET_CONST(thread_, GetAssistantCapabilityResponseBody::Thread) };
    inline GetAssistantCapabilityResponseBody::Thread getThread() { DARABONBA_PTR_GET(thread_, GetAssistantCapabilityResponseBody::Thread) };
    inline GetAssistantCapabilityResponseBody& setThread(const GetAssistantCapabilityResponseBody::Thread & thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };
    inline GetAssistantCapabilityResponseBody& setThread(GetAssistantCapabilityResponseBody::Thread && thread) { DARABONBA_PTR_SET_RVALUE(thread_, thread) };


  protected:
    shared_ptr<string> assistantDescription_ {};
    shared_ptr<bool> canHandle_ {};
    shared_ptr<GetAssistantCapabilityResponseBody::CapabilityAssessment> capabilityAssessment_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetAssistantCapabilityResponseBody::Thread> thread_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
