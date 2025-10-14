// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECOLUMNARVERSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECOLUMNARVERSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpgradeColumnarVersionResponseBodyDataTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpgradeColumnarVersionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeColumnarVersionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeColumnarVersionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    UpgradeColumnarVersionResponseBodyData() = default ;
    UpgradeColumnarVersionResponseBodyData(const UpgradeColumnarVersionResponseBodyData &) = default ;
    UpgradeColumnarVersionResponseBodyData(UpgradeColumnarVersionResponseBodyData &&) = default ;
    UpgradeColumnarVersionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeColumnarVersionResponseBodyData() = default ;
    UpgradeColumnarVersionResponseBodyData& operator=(const UpgradeColumnarVersionResponseBodyData &) = default ;
    UpgradeColumnarVersionResponseBodyData& operator=(UpgradeColumnarVersionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minorVersion_ == nullptr
        && return this->taskList_ == nullptr; };
    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline UpgradeColumnarVersionResponseBodyData& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<Models::UpgradeColumnarVersionResponseBodyDataTaskList> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<Models::UpgradeColumnarVersionResponseBodyDataTaskList>) };
    inline vector<Models::UpgradeColumnarVersionResponseBodyDataTaskList> taskList() { DARABONBA_PTR_GET(taskList_, vector<Models::UpgradeColumnarVersionResponseBodyDataTaskList>) };
    inline UpgradeColumnarVersionResponseBodyData& setTaskList(const vector<Models::UpgradeColumnarVersionResponseBodyDataTaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline UpgradeColumnarVersionResponseBodyData& setTaskList(vector<Models::UpgradeColumnarVersionResponseBodyDataTaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    std::shared_ptr<string> minorVersion_ = nullptr;
    std::shared_ptr<vector<Models::UpgradeColumnarVersionResponseBodyDataTaskList>> taskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
