// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNPYTHON3SCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNPYTHON3SCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RunPython3ScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunPython3ScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(PythonScript, pythonScript_);
      DARABONBA_PTR_TO_JSON(PythonVersion, pythonVersion_);
    };
    friend void from_json(const Darabonba::Json& j, RunPython3ScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(PythonScript, pythonScript_);
      DARABONBA_PTR_FROM_JSON(PythonVersion, pythonVersion_);
    };
    RunPython3ScriptRequest() = default ;
    RunPython3ScriptRequest(const RunPython3ScriptRequest &) = default ;
    RunPython3ScriptRequest(RunPython3ScriptRequest &&) = default ;
    RunPython3ScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunPython3ScriptRequest() = default ;
    RunPython3ScriptRequest& operator=(const RunPython3ScriptRequest &) = default ;
    RunPython3ScriptRequest& operator=(RunPython3ScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeName_ == nullptr
        && this->params_ == nullptr && this->playbookUuid_ == nullptr && this->pythonScript_ == nullptr && this->pythonVersion_ == nullptr; };
    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline RunPython3ScriptRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline RunPython3ScriptRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline RunPython3ScriptRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // pythonScript Field Functions 
    bool hasPythonScript() const { return this->pythonScript_ != nullptr;};
    void deletePythonScript() { this->pythonScript_ = nullptr;};
    inline string getPythonScript() const { DARABONBA_PTR_GET_DEFAULT(pythonScript_, "") };
    inline RunPython3ScriptRequest& setPythonScript(string pythonScript) { DARABONBA_PTR_SET_VALUE(pythonScript_, pythonScript) };


    // pythonVersion Field Functions 
    bool hasPythonVersion() const { return this->pythonVersion_ != nullptr;};
    void deletePythonVersion() { this->pythonVersion_ = nullptr;};
    inline string getPythonVersion() const { DARABONBA_PTR_GET_DEFAULT(pythonVersion_, "") };
    inline RunPython3ScriptRequest& setPythonVersion(string pythonVersion) { DARABONBA_PTR_SET_VALUE(pythonVersion_, pythonVersion) };


  protected:
    // The name of the node in the playbook.
    shared_ptr<string> nodeName_ {};
    // The input parameters of the Python3 script.
    shared_ptr<string> params_ {};
    // The UUID of the playbook.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~) operation to query the UUIDs of playbooks.
    shared_ptr<string> playbookUuid_ {};
    // The Python3 script.
    shared_ptr<string> pythonScript_ {};
    shared_ptr<string> pythonVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
