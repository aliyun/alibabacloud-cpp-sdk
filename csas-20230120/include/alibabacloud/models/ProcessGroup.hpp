// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROCESSGROUP_HPP_
#define ALIBABACLOUD_MODELS_PROCESSGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProcessItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ProcessGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProcessGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProcessGroupId, processGroupId_);
      DARABONBA_PTR_TO_JSON(Processes, processes_);
    };
    friend void from_json(const Darabonba::Json& j, ProcessGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProcessGroupId, processGroupId_);
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
    };
    ProcessGroup() = default ;
    ProcessGroup(const ProcessGroup &) = default ;
    ProcessGroup(ProcessGroup &&) = default ;
    ProcessGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProcessGroup() = default ;
    ProcessGroup& operator=(const ProcessGroup &) = default ;
    ProcessGroup& operator=(ProcessGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->name_ != nullptr && this->processGroupId_ != nullptr && this->processes_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ProcessGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ProcessGroup& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ProcessGroup& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ProcessGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processGroupId Field Functions 
    bool hasProcessGroupId() const { return this->processGroupId_ != nullptr;};
    void deleteProcessGroupId() { this->processGroupId_ = nullptr;};
    inline string processGroupId() const { DARABONBA_PTR_GET_DEFAULT(processGroupId_, "") };
    inline ProcessGroup& setProcessGroupId(string processGroupId) { DARABONBA_PTR_SET_VALUE(processGroupId_, processGroupId) };


    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<ProcessItem> & processes() const { DARABONBA_PTR_GET_CONST(processes_, vector<ProcessItem>) };
    inline vector<ProcessItem> processes() { DARABONBA_PTR_GET(processes_, vector<ProcessItem>) };
    inline ProcessGroup& setProcesses(const vector<ProcessItem> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ProcessGroup& setProcesses(vector<ProcessItem> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> processGroupId_ = nullptr;
    std::shared_ptr<vector<ProcessItem>> processes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
