// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESBYIDLISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESBYIDLISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstancesByIdListResponseBodyResultActionExecutor.hpp>
#include <alibabacloud/models/GetInstancesByIdListResponseBodyResultOriginator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstancesByIdListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancesByIdListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ActionExecutor, actionExecutor_);
      DARABONBA_PTR_TO_JSON(ApprovedResult, approvedResult_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(Originator, originator_);
      DARABONBA_PTR_TO_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancesByIdListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionExecutor, actionExecutor_);
      DARABONBA_PTR_FROM_JSON(ApprovedResult, approvedResult_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(Originator, originator_);
      DARABONBA_PTR_FROM_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetInstancesByIdListResponseBodyResult() = default ;
    GetInstancesByIdListResponseBodyResult(const GetInstancesByIdListResponseBodyResult &) = default ;
    GetInstancesByIdListResponseBodyResult(GetInstancesByIdListResponseBodyResult &&) = default ;
    GetInstancesByIdListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancesByIdListResponseBodyResult() = default ;
    GetInstancesByIdListResponseBodyResult& operator=(const GetInstancesByIdListResponseBodyResult &) = default ;
    GetInstancesByIdListResponseBodyResult& operator=(GetInstancesByIdListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionExecutor_ != nullptr
        && this->approvedResult_ != nullptr && this->data_ != nullptr && this->formUuid_ != nullptr && this->instanceStatus_ != nullptr && this->originator_ != nullptr
        && this->processCode_ != nullptr && this->processInstanceId_ != nullptr && this->title_ != nullptr; };
    // actionExecutor Field Functions 
    bool hasActionExecutor() const { return this->actionExecutor_ != nullptr;};
    void deleteActionExecutor() { this->actionExecutor_ = nullptr;};
    inline const vector<Models::GetInstancesByIdListResponseBodyResultActionExecutor> & actionExecutor() const { DARABONBA_PTR_GET_CONST(actionExecutor_, vector<Models::GetInstancesByIdListResponseBodyResultActionExecutor>) };
    inline vector<Models::GetInstancesByIdListResponseBodyResultActionExecutor> actionExecutor() { DARABONBA_PTR_GET(actionExecutor_, vector<Models::GetInstancesByIdListResponseBodyResultActionExecutor>) };
    inline GetInstancesByIdListResponseBodyResult& setActionExecutor(const vector<Models::GetInstancesByIdListResponseBodyResultActionExecutor> & actionExecutor) { DARABONBA_PTR_SET_VALUE(actionExecutor_, actionExecutor) };
    inline GetInstancesByIdListResponseBodyResult& setActionExecutor(vector<Models::GetInstancesByIdListResponseBodyResultActionExecutor> && actionExecutor) { DARABONBA_PTR_SET_RVALUE(actionExecutor_, actionExecutor) };


    // approvedResult Field Functions 
    bool hasApprovedResult() const { return this->approvedResult_ != nullptr;};
    void deleteApprovedResult() { this->approvedResult_ = nullptr;};
    inline string approvedResult() const { DARABONBA_PTR_GET_DEFAULT(approvedResult_, "") };
    inline GetInstancesByIdListResponseBodyResult& setApprovedResult(string approvedResult) { DARABONBA_PTR_SET_VALUE(approvedResult_, approvedResult) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline GetInstancesByIdListResponseBodyResult& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline GetInstancesByIdListResponseBodyResult& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline GetInstancesByIdListResponseBodyResult& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstancesByIdListResponseBodyResult& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const Models::GetInstancesByIdListResponseBodyResultOriginator & originator() const { DARABONBA_PTR_GET_CONST(originator_, Models::GetInstancesByIdListResponseBodyResultOriginator) };
    inline Models::GetInstancesByIdListResponseBodyResultOriginator originator() { DARABONBA_PTR_GET(originator_, Models::GetInstancesByIdListResponseBodyResultOriginator) };
    inline GetInstancesByIdListResponseBodyResult& setOriginator(const Models::GetInstancesByIdListResponseBodyResultOriginator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline GetInstancesByIdListResponseBodyResult& setOriginator(Models::GetInstancesByIdListResponseBodyResultOriginator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // processCode Field Functions 
    bool hasProcessCode() const { return this->processCode_ != nullptr;};
    void deleteProcessCode() { this->processCode_ = nullptr;};
    inline string processCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
    inline GetInstancesByIdListResponseBodyResult& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetInstancesByIdListResponseBodyResult& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetInstancesByIdListResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::GetInstancesByIdListResponseBodyResultActionExecutor>> actionExecutor_ = nullptr;
    std::shared_ptr<string> approvedResult_ = nullptr;
    Darabonba::Json data_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<Models::GetInstancesByIdListResponseBodyResultOriginator> originator_ = nullptr;
    std::shared_ptr<string> processCode_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
