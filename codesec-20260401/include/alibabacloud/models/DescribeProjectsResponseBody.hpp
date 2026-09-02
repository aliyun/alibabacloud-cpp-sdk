// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class DescribeProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    DescribeProjectsResponseBody() = default ;
    DescribeProjectsResponseBody(const DescribeProjectsResponseBody &) = default ;
    DescribeProjectsResponseBody(DescribeProjectsResponseBody &&) = default ;
    DescribeProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectsResponseBody() = default ;
    DescribeProjectsResponseBody& operator=(const DescribeProjectsResponseBody &) = default ;
    DescribeProjectsResponseBody& operator=(DescribeProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(configRevision, configRevision_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(engines, engines_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(instructionPrompt, instructionPrompt_);
        DARABONBA_PTR_TO_JSON(lastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(configRevision, configRevision_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(engines, engines_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(instructionPrompt, instructionPrompt_);
        DARABONBA_PTR_FROM_JSON(lastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Source() = default ;
        Source(const Source &) = default ;
        Source(Source &&) = default ;
        Source(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Source() = default ;
        Source& operator=(const Source &) = default ;
        Source& operator=(Source &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Source& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The project type.
        shared_ptr<string> type_ {};
      };

      class Engines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Engines& obj) { 
          DARABONBA_PTR_TO_JSON(sast, sast_);
          DARABONBA_PTR_TO_JSON(sca, sca_);
        };
        friend void from_json(const Darabonba::Json& j, Engines& obj) { 
          DARABONBA_PTR_FROM_JSON(sast, sast_);
          DARABONBA_PTR_FROM_JSON(sca, sca_);
        };
        Engines() = default ;
        Engines(const Engines &) = default ;
        Engines(Engines &&) = default ;
        Engines(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Engines() = default ;
        Engines& operator=(const Engines &) = default ;
        Engines& operator=(Engines &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sast_ == nullptr
        && this->sca_ == nullptr; };
        // sast Field Functions 
        bool hasSast() const { return this->sast_ != nullptr;};
        void deleteSast() { this->sast_ = nullptr;};
        inline bool getSast() const { DARABONBA_PTR_GET_DEFAULT(sast_, false) };
        inline Engines& setSast(bool sast) { DARABONBA_PTR_SET_VALUE(sast_, sast) };


        // sca Field Functions 
        bool hasSca() const { return this->sca_ != nullptr;};
        void deleteSca() { this->sca_ = nullptr;};
        inline bool getSca() const { DARABONBA_PTR_GET_DEFAULT(sca_, false) };
        inline Engines& setSca(bool sca) { DARABONBA_PTR_SET_VALUE(sca_, sca) };


      protected:
        // Indicates whether SAST is enabled.
        shared_ptr<bool> sast_ {};
        // Indicates whether SCA is enabled.
        shared_ptr<bool> sca_ {};
      };

      virtual bool empty() const override { return this->configRevision_ == nullptr
        && this->createdAt_ == nullptr && this->createdBy_ == nullptr && this->description_ == nullptr && this->engines_ == nullptr && this->id_ == nullptr
        && this->instructionPrompt_ == nullptr && this->lastScanTime_ == nullptr && this->name_ == nullptr && this->source_ == nullptr && this->updatedAt_ == nullptr; };
      // configRevision Field Functions 
      bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
      void deleteConfigRevision() { this->configRevision_ = nullptr;};
      inline int64_t getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, 0L) };
      inline Items& setConfigRevision(int64_t configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Items& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // engines Field Functions 
      bool hasEngines() const { return this->engines_ != nullptr;};
      void deleteEngines() { this->engines_ = nullptr;};
      inline const Items::Engines & getEngines() const { DARABONBA_PTR_GET_CONST(engines_, Items::Engines) };
      inline Items::Engines getEngines() { DARABONBA_PTR_GET(engines_, Items::Engines) };
      inline Items& setEngines(const Items::Engines & engines) { DARABONBA_PTR_SET_VALUE(engines_, engines) };
      inline Items& setEngines(Items::Engines && engines) { DARABONBA_PTR_SET_RVALUE(engines_, engines) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instructionPrompt Field Functions 
      bool hasInstructionPrompt() const { return this->instructionPrompt_ != nullptr;};
      void deleteInstructionPrompt() { this->instructionPrompt_ = nullptr;};
      inline string getInstructionPrompt() const { DARABONBA_PTR_GET_DEFAULT(instructionPrompt_, "") };
      inline Items& setInstructionPrompt(string instructionPrompt) { DARABONBA_PTR_SET_VALUE(instructionPrompt_, instructionPrompt) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline string getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, "") };
      inline Items& setLastScanTime(string lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Items::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Items::Source) };
      inline Items::Source getSource() { DARABONBA_PTR_GET(source_, Items::Source) };
      inline Items& setSource(const Items::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Items& setSource(Items::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The project configuration version number.
      shared_ptr<int64_t> configRevision_ {};
      // The time when the project was created.
      shared_ptr<string> createdAt_ {};
      // The user ID of the project creator.
      shared_ptr<string> createdBy_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The engine switches for the project or scan snapshot. Only SAST and SCA are supported.
      shared_ptr<Items::Engines> engines_ {};
      // The project ID.
      shared_ptr<int64_t> id_ {};
      // The natural language prompt provided by the user that describes scanning or result processing preferences, such as ignoring low-risk vulnerabilities.
      shared_ptr<string> instructionPrompt_ {};
      // The time when a task was last created.
      shared_ptr<string> lastScanTime_ {};
      // The project name.
      shared_ptr<string> name_ {};
      // The project source.
      shared_ptr<Items::Source> source_ {};
      // The time when the project was last updated.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeProjectsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeProjectsResponseBody::Items>) };
    inline vector<DescribeProjectsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeProjectsResponseBody::Items>) };
    inline DescribeProjectsResponseBody& setItems(const vector<DescribeProjectsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeProjectsResponseBody& setItems(vector<DescribeProjectsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeProjectsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProjectsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeProjectsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of projects.
    shared_ptr<vector<DescribeProjectsResponseBody::Items>> items_ {};
    // The page size.
    // 
    // > If this parameter is not specified, all projects are returned.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. An empty value indicates the last page.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
