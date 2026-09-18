// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(engines, engines_);
      DARABONBA_PTR_TO_JSON(instructionPrompt, instructionPrompt_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(engines, engines_);
      DARABONBA_PTR_FROM_JSON(instructionPrompt, instructionPrompt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    CreateProjectRequest() = default ;
    CreateProjectRequest(const CreateProjectRequest &) = default ;
    CreateProjectRequest(CreateProjectRequest &&) = default ;
    CreateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRequest() = default ;
    CreateProjectRequest& operator=(const CreateProjectRequest &) = default ;
    CreateProjectRequest& operator=(CreateProjectRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(sastConfig, sastConfig_);
        DARABONBA_PTR_TO_JSON(sca, sca_);
        DARABONBA_PTR_TO_JSON(scaConfig, scaConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Engines& obj) { 
        DARABONBA_PTR_FROM_JSON(sast, sast_);
        DARABONBA_PTR_FROM_JSON(sastConfig, sastConfig_);
        DARABONBA_PTR_FROM_JSON(sca, sca_);
        DARABONBA_PTR_FROM_JSON(scaConfig, scaConfig_);
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
      class ScaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(remediation, remediation_);
        };
        friend void from_json(const Darabonba::Json& j, ScaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(remediation, remediation_);
        };
        ScaConfig() = default ;
        ScaConfig(const ScaConfig &) = default ;
        ScaConfig(ScaConfig &&) = default ;
        ScaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScaConfig() = default ;
        ScaConfig& operator=(const ScaConfig &) = default ;
        ScaConfig& operator=(ScaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->remediation_ == nullptr; };
        // remediation Field Functions 
        bool hasRemediation() const { return this->remediation_ != nullptr;};
        void deleteRemediation() { this->remediation_ = nullptr;};
        inline bool getRemediation() const { DARABONBA_PTR_GET_DEFAULT(remediation_, false) };
        inline ScaConfig& setRemediation(bool remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };


      protected:
        // Specifies whether to generate remediation suggestions.
        shared_ptr<bool> remediation_ {};
      };

      class SastConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SastConfig& obj) { 
          DARABONBA_PTR_TO_JSON(remediation, remediation_);
        };
        friend void from_json(const Darabonba::Json& j, SastConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(remediation, remediation_);
        };
        SastConfig() = default ;
        SastConfig(const SastConfig &) = default ;
        SastConfig(SastConfig &&) = default ;
        SastConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SastConfig() = default ;
        SastConfig& operator=(const SastConfig &) = default ;
        SastConfig& operator=(SastConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->remediation_ == nullptr; };
        // remediation Field Functions 
        bool hasRemediation() const { return this->remediation_ != nullptr;};
        void deleteRemediation() { this->remediation_ = nullptr;};
        inline bool getRemediation() const { DARABONBA_PTR_GET_DEFAULT(remediation_, false) };
        inline SastConfig& setRemediation(bool remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };


      protected:
        // Specifies whether to generate remediation suggestions.
        shared_ptr<bool> remediation_ {};
      };

      virtual bool empty() const override { return this->sast_ == nullptr
        && this->sastConfig_ == nullptr && this->sca_ == nullptr && this->scaConfig_ == nullptr; };
      // sast Field Functions 
      bool hasSast() const { return this->sast_ != nullptr;};
      void deleteSast() { this->sast_ = nullptr;};
      inline bool getSast() const { DARABONBA_PTR_GET_DEFAULT(sast_, false) };
      inline Engines& setSast(bool sast) { DARABONBA_PTR_SET_VALUE(sast_, sast) };


      // sastConfig Field Functions 
      bool hasSastConfig() const { return this->sastConfig_ != nullptr;};
      void deleteSastConfig() { this->sastConfig_ = nullptr;};
      inline const Engines::SastConfig & getSastConfig() const { DARABONBA_PTR_GET_CONST(sastConfig_, Engines::SastConfig) };
      inline Engines::SastConfig getSastConfig() { DARABONBA_PTR_GET(sastConfig_, Engines::SastConfig) };
      inline Engines& setSastConfig(const Engines::SastConfig & sastConfig) { DARABONBA_PTR_SET_VALUE(sastConfig_, sastConfig) };
      inline Engines& setSastConfig(Engines::SastConfig && sastConfig) { DARABONBA_PTR_SET_RVALUE(sastConfig_, sastConfig) };


      // sca Field Functions 
      bool hasSca() const { return this->sca_ != nullptr;};
      void deleteSca() { this->sca_ = nullptr;};
      inline bool getSca() const { DARABONBA_PTR_GET_DEFAULT(sca_, false) };
      inline Engines& setSca(bool sca) { DARABONBA_PTR_SET_VALUE(sca_, sca) };


      // scaConfig Field Functions 
      bool hasScaConfig() const { return this->scaConfig_ != nullptr;};
      void deleteScaConfig() { this->scaConfig_ = nullptr;};
      inline const Engines::ScaConfig & getScaConfig() const { DARABONBA_PTR_GET_CONST(scaConfig_, Engines::ScaConfig) };
      inline Engines::ScaConfig getScaConfig() { DARABONBA_PTR_GET(scaConfig_, Engines::ScaConfig) };
      inline Engines& setScaConfig(const Engines::ScaConfig & scaConfig) { DARABONBA_PTR_SET_VALUE(scaConfig_, scaConfig) };
      inline Engines& setScaConfig(Engines::ScaConfig && scaConfig) { DARABONBA_PTR_SET_RVALUE(scaConfig_, scaConfig) };


    protected:
      // Specifies whether SAST is supported.
      shared_ptr<bool> sast_ {};
      // The engine-level configuration.
      shared_ptr<Engines::SastConfig> sastConfig_ {};
      // Specifies whether SCA is supported.
      shared_ptr<bool> sca_ {};
      // The engine-level configuration.
      shared_ptr<Engines::ScaConfig> scaConfig_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->engines_ == nullptr && this->instructionPrompt_ == nullptr && this->name_ == nullptr && this->source_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engines Field Functions 
    bool hasEngines() const { return this->engines_ != nullptr;};
    void deleteEngines() { this->engines_ = nullptr;};
    inline const CreateProjectRequest::Engines & getEngines() const { DARABONBA_PTR_GET_CONST(engines_, CreateProjectRequest::Engines) };
    inline CreateProjectRequest::Engines getEngines() { DARABONBA_PTR_GET(engines_, CreateProjectRequest::Engines) };
    inline CreateProjectRequest& setEngines(const CreateProjectRequest::Engines & engines) { DARABONBA_PTR_SET_VALUE(engines_, engines) };
    inline CreateProjectRequest& setEngines(CreateProjectRequest::Engines && engines) { DARABONBA_PTR_SET_RVALUE(engines_, engines) };


    // instructionPrompt Field Functions 
    bool hasInstructionPrompt() const { return this->instructionPrompt_ != nullptr;};
    void deleteInstructionPrompt() { this->instructionPrompt_ = nullptr;};
    inline string getInstructionPrompt() const { DARABONBA_PTR_GET_DEFAULT(instructionPrompt_, "") };
    inline CreateProjectRequest& setInstructionPrompt(string instructionPrompt) { DARABONBA_PTR_SET_VALUE(instructionPrompt_, instructionPrompt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProjectRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const CreateProjectRequest::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, CreateProjectRequest::Source) };
    inline CreateProjectRequest::Source getSource() { DARABONBA_PTR_GET(source_, CreateProjectRequest::Source) };
    inline CreateProjectRequest& setSource(const CreateProjectRequest::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CreateProjectRequest& setSource(CreateProjectRequest::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    // The description.
    shared_ptr<string> description_ {};
    // The engine switches for the project or scan snapshot. Only SAST and SCA are supported.
    shared_ptr<CreateProjectRequest::Engines> engines_ {};
    // The natural language prompt that describes scanning or result processing preferences, such as ignoring low-risk vulnerabilities.
    shared_ptr<string> instructionPrompt_ {};
    // The project name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The project source.
    shared_ptr<CreateProjectRequest::Source> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
