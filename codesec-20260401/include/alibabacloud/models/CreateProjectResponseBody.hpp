// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(configRevision, configRevision_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(engines, engines_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(instructionPrompt, instructionPrompt_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(configRevision, configRevision_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(engines, engines_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(instructionPrompt, instructionPrompt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    CreateProjectResponseBody() = default ;
    CreateProjectResponseBody(const CreateProjectResponseBody &) = default ;
    CreateProjectResponseBody(CreateProjectResponseBody &&) = default ;
    CreateProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectResponseBody() = default ;
    CreateProjectResponseBody& operator=(const CreateProjectResponseBody &) = default ;
    CreateProjectResponseBody& operator=(CreateProjectResponseBody &&) = default ;
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
      // Specifies whether SAST is supported.
      shared_ptr<bool> sast_ {};
      // Specifies whether SCA is supported.
      shared_ptr<bool> sca_ {};
    };

    virtual bool empty() const override { return this->configRevision_ == nullptr
        && this->createdAt_ == nullptr && this->createdBy_ == nullptr && this->description_ == nullptr && this->engines_ == nullptr && this->id_ == nullptr
        && this->instructionPrompt_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->source_ == nullptr && this->updatedAt_ == nullptr; };
    // configRevision Field Functions 
    bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
    void deleteConfigRevision() { this->configRevision_ = nullptr;};
    inline int64_t getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, 0L) };
    inline CreateProjectResponseBody& setConfigRevision(int64_t configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateProjectResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline CreateProjectResponseBody& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProjectResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engines Field Functions 
    bool hasEngines() const { return this->engines_ != nullptr;};
    void deleteEngines() { this->engines_ = nullptr;};
    inline const CreateProjectResponseBody::Engines & getEngines() const { DARABONBA_PTR_GET_CONST(engines_, CreateProjectResponseBody::Engines) };
    inline CreateProjectResponseBody::Engines getEngines() { DARABONBA_PTR_GET(engines_, CreateProjectResponseBody::Engines) };
    inline CreateProjectResponseBody& setEngines(const CreateProjectResponseBody::Engines & engines) { DARABONBA_PTR_SET_VALUE(engines_, engines) };
    inline CreateProjectResponseBody& setEngines(CreateProjectResponseBody::Engines && engines) { DARABONBA_PTR_SET_RVALUE(engines_, engines) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateProjectResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instructionPrompt Field Functions 
    bool hasInstructionPrompt() const { return this->instructionPrompt_ != nullptr;};
    void deleteInstructionPrompt() { this->instructionPrompt_ = nullptr;};
    inline string getInstructionPrompt() const { DARABONBA_PTR_GET_DEFAULT(instructionPrompt_, "") };
    inline CreateProjectResponseBody& setInstructionPrompt(string instructionPrompt) { DARABONBA_PTR_SET_VALUE(instructionPrompt_, instructionPrompt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProjectResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const CreateProjectResponseBody::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, CreateProjectResponseBody::Source) };
    inline CreateProjectResponseBody::Source getSource() { DARABONBA_PTR_GET(source_, CreateProjectResponseBody::Source) };
    inline CreateProjectResponseBody& setSource(const CreateProjectResponseBody::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CreateProjectResponseBody& setSource(CreateProjectResponseBody::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline CreateProjectResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // The project configuration version number.
    shared_ptr<int64_t> configRevision_ {};
    // The creation time.
    shared_ptr<string> createdAt_ {};
    // The user ID of the project creator.
    shared_ptr<string> createdBy_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The engine switches for the project or scan snapshot. Only SAST and SCA are supported.
    shared_ptr<CreateProjectResponseBody::Engines> engines_ {};
    // The project ID.
    shared_ptr<int64_t> id_ {};
    // The natural language prompt that describes scanning or result processing preferences, such as ignoring low-risk vulnerabilities.
    shared_ptr<string> instructionPrompt_ {};
    // The project name.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The project source.
    shared_ptr<CreateProjectResponseBody::Source> source_ {};
    // The update time.
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
