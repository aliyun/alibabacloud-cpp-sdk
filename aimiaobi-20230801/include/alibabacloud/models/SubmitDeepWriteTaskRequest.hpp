// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitDeepWriteTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDeepWriteTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentOrchestration, agentOrchestration_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Instructions, instructions_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDeepWriteTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentOrchestration, agentOrchestration_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitDeepWriteTaskRequest() = default ;
    SubmitDeepWriteTaskRequest(const SubmitDeepWriteTaskRequest &) = default ;
    SubmitDeepWriteTaskRequest(SubmitDeepWriteTaskRequest &&) = default ;
    SubmitDeepWriteTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDeepWriteTaskRequest() = default ;
    SubmitDeepWriteTaskRequest& operator=(const SubmitDeepWriteTaskRequest &) = default ;
    SubmitDeepWriteTaskRequest& operator=(SubmitDeepWriteTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(FileDescription, fileDescription_);
        DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(FileDescription, fileDescription_);
        DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileDescription_ == nullptr
        && this->fileKey_ == nullptr && this->fileName_ == nullptr; };
      // fileDescription Field Functions 
      bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
      void deleteFileDescription() { this->fileDescription_ = nullptr;};
      inline string getFileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
      inline Files& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


      // fileKey Field Functions 
      bool hasFileKey() const { return this->fileKey_ != nullptr;};
      void deleteFileKey() { this->fileKey_ = nullptr;};
      inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
      inline Files& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Files& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    protected:
      shared_ptr<string> fileDescription_ {};
      shared_ptr<string> fileKey_ {};
      shared_ptr<string> fileName_ {};
    };

    class AgentOrchestration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentOrchestration& obj) { 
        DARABONBA_PTR_TO_JSON(DataAnalystAgent, dataAnalystAgent_);
        DARABONBA_PTR_TO_JSON(DataCollectorAgent, dataCollectorAgent_);
        DARABONBA_PTR_TO_JSON(ReporterAgent, reporterAgent_);
      };
      friend void from_json(const Darabonba::Json& j, AgentOrchestration& obj) { 
        DARABONBA_PTR_FROM_JSON(DataAnalystAgent, dataAnalystAgent_);
        DARABONBA_PTR_FROM_JSON(DataCollectorAgent, dataCollectorAgent_);
        DARABONBA_PTR_FROM_JSON(ReporterAgent, reporterAgent_);
      };
      AgentOrchestration() = default ;
      AgentOrchestration(const AgentOrchestration &) = default ;
      AgentOrchestration(AgentOrchestration &&) = default ;
      AgentOrchestration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentOrchestration() = default ;
      AgentOrchestration& operator=(const AgentOrchestration &) = default ;
      AgentOrchestration& operator=(AgentOrchestration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReporterAgent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReporterAgent& obj) { 
          DARABONBA_PTR_TO_JSON(EnableCitation, enableCitation_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ReporterAgent& obj) { 
          DARABONBA_PTR_FROM_JSON(EnableCitation, enableCitation_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ReporterAgent() = default ;
        ReporterAgent(const ReporterAgent &) = default ;
        ReporterAgent(ReporterAgent &&) = default ;
        ReporterAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReporterAgent() = default ;
        ReporterAgent& operator=(const ReporterAgent &) = default ;
        ReporterAgent& operator=(ReporterAgent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableCitation_ == nullptr
        && this->name_ == nullptr; };
        // enableCitation Field Functions 
        bool hasEnableCitation() const { return this->enableCitation_ != nullptr;};
        void deleteEnableCitation() { this->enableCitation_ = nullptr;};
        inline bool getEnableCitation() const { DARABONBA_PTR_GET_DEFAULT(enableCitation_, false) };
        inline ReporterAgent& setEnableCitation(bool enableCitation) { DARABONBA_PTR_SET_VALUE(enableCitation_, enableCitation) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ReporterAgent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<bool> enableCitation_ {};
        shared_ptr<string> name_ {};
      };

      class DataCollectorAgent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataCollectorAgent& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DataCollectorAgent& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        DataCollectorAgent() = default ;
        DataCollectorAgent(const DataCollectorAgent &) = default ;
        DataCollectorAgent(DataCollectorAgent &&) = default ;
        DataCollectorAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataCollectorAgent() = default ;
        DataCollectorAgent& operator=(const DataCollectorAgent &) = default ;
        DataCollectorAgent& operator=(DataCollectorAgent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataCollectorAgent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> name_ {};
      };

      class DataAnalystAgent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataAnalystAgent& obj) { 
          DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DataAnalystAgent& obj) { 
          DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        DataAnalystAgent() = default ;
        DataAnalystAgent(const DataAnalystAgent &) = default ;
        DataAnalystAgent(DataAnalystAgent &&) = default ;
        DataAnalystAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataAnalystAgent() = default ;
        DataAnalystAgent& operator=(const DataAnalystAgent &) = default ;
        DataAnalystAgent& operator=(DataAnalystAgent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableSearch_ == nullptr
        && this->name_ == nullptr; };
        // enableSearch Field Functions 
        bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
        void deleteEnableSearch() { this->enableSearch_ = nullptr;};
        inline bool getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
        inline DataAnalystAgent& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataAnalystAgent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<bool> enableSearch_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->dataAnalystAgent_ == nullptr
        && this->dataCollectorAgent_ == nullptr && this->reporterAgent_ == nullptr; };
      // dataAnalystAgent Field Functions 
      bool hasDataAnalystAgent() const { return this->dataAnalystAgent_ != nullptr;};
      void deleteDataAnalystAgent() { this->dataAnalystAgent_ = nullptr;};
      inline const AgentOrchestration::DataAnalystAgent & getDataAnalystAgent() const { DARABONBA_PTR_GET_CONST(dataAnalystAgent_, AgentOrchestration::DataAnalystAgent) };
      inline AgentOrchestration::DataAnalystAgent getDataAnalystAgent() { DARABONBA_PTR_GET(dataAnalystAgent_, AgentOrchestration::DataAnalystAgent) };
      inline AgentOrchestration& setDataAnalystAgent(const AgentOrchestration::DataAnalystAgent & dataAnalystAgent) { DARABONBA_PTR_SET_VALUE(dataAnalystAgent_, dataAnalystAgent) };
      inline AgentOrchestration& setDataAnalystAgent(AgentOrchestration::DataAnalystAgent && dataAnalystAgent) { DARABONBA_PTR_SET_RVALUE(dataAnalystAgent_, dataAnalystAgent) };


      // dataCollectorAgent Field Functions 
      bool hasDataCollectorAgent() const { return this->dataCollectorAgent_ != nullptr;};
      void deleteDataCollectorAgent() { this->dataCollectorAgent_ = nullptr;};
      inline const AgentOrchestration::DataCollectorAgent & getDataCollectorAgent() const { DARABONBA_PTR_GET_CONST(dataCollectorAgent_, AgentOrchestration::DataCollectorAgent) };
      inline AgentOrchestration::DataCollectorAgent getDataCollectorAgent() { DARABONBA_PTR_GET(dataCollectorAgent_, AgentOrchestration::DataCollectorAgent) };
      inline AgentOrchestration& setDataCollectorAgent(const AgentOrchestration::DataCollectorAgent & dataCollectorAgent) { DARABONBA_PTR_SET_VALUE(dataCollectorAgent_, dataCollectorAgent) };
      inline AgentOrchestration& setDataCollectorAgent(AgentOrchestration::DataCollectorAgent && dataCollectorAgent) { DARABONBA_PTR_SET_RVALUE(dataCollectorAgent_, dataCollectorAgent) };


      // reporterAgent Field Functions 
      bool hasReporterAgent() const { return this->reporterAgent_ != nullptr;};
      void deleteReporterAgent() { this->reporterAgent_ = nullptr;};
      inline const AgentOrchestration::ReporterAgent & getReporterAgent() const { DARABONBA_PTR_GET_CONST(reporterAgent_, AgentOrchestration::ReporterAgent) };
      inline AgentOrchestration::ReporterAgent getReporterAgent() { DARABONBA_PTR_GET(reporterAgent_, AgentOrchestration::ReporterAgent) };
      inline AgentOrchestration& setReporterAgent(const AgentOrchestration::ReporterAgent & reporterAgent) { DARABONBA_PTR_SET_VALUE(reporterAgent_, reporterAgent) };
      inline AgentOrchestration& setReporterAgent(AgentOrchestration::ReporterAgent && reporterAgent) { DARABONBA_PTR_SET_RVALUE(reporterAgent_, reporterAgent) };


    protected:
      shared_ptr<AgentOrchestration::DataAnalystAgent> dataAnalystAgent_ {};
      shared_ptr<AgentOrchestration::DataCollectorAgent> dataCollectorAgent_ {};
      shared_ptr<AgentOrchestration::ReporterAgent> reporterAgent_ {};
    };

    virtual bool empty() const override { return this->agentOrchestration_ == nullptr
        && this->files_ == nullptr && this->input_ == nullptr && this->instructions_ == nullptr && this->workspaceId_ == nullptr; };
    // agentOrchestration Field Functions 
    bool hasAgentOrchestration() const { return this->agentOrchestration_ != nullptr;};
    void deleteAgentOrchestration() { this->agentOrchestration_ = nullptr;};
    inline const SubmitDeepWriteTaskRequest::AgentOrchestration & getAgentOrchestration() const { DARABONBA_PTR_GET_CONST(agentOrchestration_, SubmitDeepWriteTaskRequest::AgentOrchestration) };
    inline SubmitDeepWriteTaskRequest::AgentOrchestration getAgentOrchestration() { DARABONBA_PTR_GET(agentOrchestration_, SubmitDeepWriteTaskRequest::AgentOrchestration) };
    inline SubmitDeepWriteTaskRequest& setAgentOrchestration(const SubmitDeepWriteTaskRequest::AgentOrchestration & agentOrchestration) { DARABONBA_PTR_SET_VALUE(agentOrchestration_, agentOrchestration) };
    inline SubmitDeepWriteTaskRequest& setAgentOrchestration(SubmitDeepWriteTaskRequest::AgentOrchestration && agentOrchestration) { DARABONBA_PTR_SET_RVALUE(agentOrchestration_, agentOrchestration) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<SubmitDeepWriteTaskRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<SubmitDeepWriteTaskRequest::Files>) };
    inline vector<SubmitDeepWriteTaskRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<SubmitDeepWriteTaskRequest::Files>) };
    inline SubmitDeepWriteTaskRequest& setFiles(const vector<SubmitDeepWriteTaskRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SubmitDeepWriteTaskRequest& setFiles(vector<SubmitDeepWriteTaskRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitDeepWriteTaskRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string getInstructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline SubmitDeepWriteTaskRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitDeepWriteTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<SubmitDeepWriteTaskRequest::AgentOrchestration> agentOrchestration_ {};
    shared_ptr<vector<SubmitDeepWriteTaskRequest::Files>> files_ {};
    // This parameter is required.
    shared_ptr<string> input_ {};
    shared_ptr<string> instructions_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
