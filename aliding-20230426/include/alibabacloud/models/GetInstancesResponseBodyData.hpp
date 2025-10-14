// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstancesResponseBodyDataActionExecutor.hpp>
#include <alibabacloud/models/GetInstancesResponseBodyDataOriginator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActionExecutor, actionExecutor_);
      DARABONBA_PTR_TO_JSON(ApprovedResult, approvedResult_);
      DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_TO_JSON(Originator, originator_);
      DARABONBA_PTR_TO_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionExecutor, actionExecutor_);
      DARABONBA_PTR_FROM_JSON(ApprovedResult, approvedResult_);
      DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_FROM_JSON(Originator, originator_);
      DARABONBA_PTR_FROM_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetInstancesResponseBodyData() = default ;
    GetInstancesResponseBodyData(const GetInstancesResponseBodyData &) = default ;
    GetInstancesResponseBodyData(GetInstancesResponseBodyData &&) = default ;
    GetInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancesResponseBodyData() = default ;
    GetInstancesResponseBodyData& operator=(const GetInstancesResponseBodyData &) = default ;
    GetInstancesResponseBodyData& operator=(GetInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionExecutor_ == nullptr
        && return this->approvedResult_ == nullptr && return this->createTimeGMT_ == nullptr && return this->data_ == nullptr && return this->formUuid_ == nullptr && return this->instanceStatus_ == nullptr
        && return this->modifiedTimeGMT_ == nullptr && return this->originator_ == nullptr && return this->processCode_ == nullptr && return this->processInstanceId_ == nullptr && return this->title_ == nullptr
        && return this->version_ == nullptr; };
    // actionExecutor Field Functions 
    bool hasActionExecutor() const { return this->actionExecutor_ != nullptr;};
    void deleteActionExecutor() { this->actionExecutor_ = nullptr;};
    inline const vector<Models::GetInstancesResponseBodyDataActionExecutor> & actionExecutor() const { DARABONBA_PTR_GET_CONST(actionExecutor_, vector<Models::GetInstancesResponseBodyDataActionExecutor>) };
    inline vector<Models::GetInstancesResponseBodyDataActionExecutor> actionExecutor() { DARABONBA_PTR_GET(actionExecutor_, vector<Models::GetInstancesResponseBodyDataActionExecutor>) };
    inline GetInstancesResponseBodyData& setActionExecutor(const vector<Models::GetInstancesResponseBodyDataActionExecutor> & actionExecutor) { DARABONBA_PTR_SET_VALUE(actionExecutor_, actionExecutor) };
    inline GetInstancesResponseBodyData& setActionExecutor(vector<Models::GetInstancesResponseBodyDataActionExecutor> && actionExecutor) { DARABONBA_PTR_SET_RVALUE(actionExecutor_, actionExecutor) };


    // approvedResult Field Functions 
    bool hasApprovedResult() const { return this->approvedResult_ != nullptr;};
    void deleteApprovedResult() { this->approvedResult_ = nullptr;};
    inline string approvedResult() const { DARABONBA_PTR_GET_DEFAULT(approvedResult_, "") };
    inline GetInstancesResponseBodyData& setApprovedResult(string approvedResult) { DARABONBA_PTR_SET_VALUE(approvedResult_, approvedResult) };


    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string createTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline GetInstancesResponseBodyData& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline GetInstancesResponseBodyData& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline GetInstancesResponseBodyData& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline GetInstancesResponseBodyData& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstancesResponseBodyData& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string modifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline GetInstancesResponseBodyData& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const Models::GetInstancesResponseBodyDataOriginator & originator() const { DARABONBA_PTR_GET_CONST(originator_, Models::GetInstancesResponseBodyDataOriginator) };
    inline Models::GetInstancesResponseBodyDataOriginator originator() { DARABONBA_PTR_GET(originator_, Models::GetInstancesResponseBodyDataOriginator) };
    inline GetInstancesResponseBodyData& setOriginator(const Models::GetInstancesResponseBodyDataOriginator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline GetInstancesResponseBodyData& setOriginator(Models::GetInstancesResponseBodyDataOriginator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // processCode Field Functions 
    bool hasProcessCode() const { return this->processCode_ != nullptr;};
    void deleteProcessCode() { this->processCode_ = nullptr;};
    inline string processCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
    inline GetInstancesResponseBodyData& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetInstancesResponseBodyData& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetInstancesResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetInstancesResponseBodyData& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<vector<Models::GetInstancesResponseBodyDataActionExecutor>> actionExecutor_ = nullptr;
    std::shared_ptr<string> approvedResult_ = nullptr;
    std::shared_ptr<string> createTimeGMT_ = nullptr;
    Darabonba::Json data_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<string> modifiedTimeGMT_ = nullptr;
    std::shared_ptr<Models::GetInstancesResponseBodyDataOriginator> originator_ = nullptr;
    std::shared_ptr<string> processCode_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
