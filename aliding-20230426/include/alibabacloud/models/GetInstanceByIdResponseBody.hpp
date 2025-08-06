// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceByIdResponseBodyActionExecutor.hpp>
#include <alibabacloud/models/GetInstanceByIdResponseBodyOriginator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstanceByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(actionExecutor, actionExecutor_);
      DARABONBA_PTR_TO_JSON(approvedResult, approvedResult_);
      DARABONBA_PTR_TO_JSON(createTimeGMT, createTimeGMT_);
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(formUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(modifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_TO_JSON(originator, originator_);
      DARABONBA_PTR_TO_JSON(processCode, processCode_);
      DARABONBA_PTR_TO_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(actionExecutor, actionExecutor_);
      DARABONBA_PTR_FROM_JSON(approvedResult, approvedResult_);
      DARABONBA_PTR_FROM_JSON(createTimeGMT, createTimeGMT_);
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(formUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(modifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_FROM_JSON(originator, originator_);
      DARABONBA_PTR_FROM_JSON(processCode, processCode_);
      DARABONBA_PTR_FROM_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetInstanceByIdResponseBody() = default ;
    GetInstanceByIdResponseBody(const GetInstanceByIdResponseBody &) = default ;
    GetInstanceByIdResponseBody(GetInstanceByIdResponseBody &&) = default ;
    GetInstanceByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceByIdResponseBody() = default ;
    GetInstanceByIdResponseBody& operator=(const GetInstanceByIdResponseBody &) = default ;
    GetInstanceByIdResponseBody& operator=(GetInstanceByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionExecutor_ != nullptr
        && this->approvedResult_ != nullptr && this->createTimeGMT_ != nullptr && this->data_ != nullptr && this->formUuid_ != nullptr && this->instanceStatus_ != nullptr
        && this->modifiedTimeGMT_ != nullptr && this->originator_ != nullptr && this->processCode_ != nullptr && this->processInstanceId_ != nullptr && this->requestId_ != nullptr
        && this->title_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr && this->version_ != nullptr; };
    // actionExecutor Field Functions 
    bool hasActionExecutor() const { return this->actionExecutor_ != nullptr;};
    void deleteActionExecutor() { this->actionExecutor_ = nullptr;};
    inline const vector<GetInstanceByIdResponseBodyActionExecutor> & actionExecutor() const { DARABONBA_PTR_GET_CONST(actionExecutor_, vector<GetInstanceByIdResponseBodyActionExecutor>) };
    inline vector<GetInstanceByIdResponseBodyActionExecutor> actionExecutor() { DARABONBA_PTR_GET(actionExecutor_, vector<GetInstanceByIdResponseBodyActionExecutor>) };
    inline GetInstanceByIdResponseBody& setActionExecutor(const vector<GetInstanceByIdResponseBodyActionExecutor> & actionExecutor) { DARABONBA_PTR_SET_VALUE(actionExecutor_, actionExecutor) };
    inline GetInstanceByIdResponseBody& setActionExecutor(vector<GetInstanceByIdResponseBodyActionExecutor> && actionExecutor) { DARABONBA_PTR_SET_RVALUE(actionExecutor_, actionExecutor) };


    // approvedResult Field Functions 
    bool hasApprovedResult() const { return this->approvedResult_ != nullptr;};
    void deleteApprovedResult() { this->approvedResult_ = nullptr;};
    inline string approvedResult() const { DARABONBA_PTR_GET_DEFAULT(approvedResult_, "") };
    inline GetInstanceByIdResponseBody& setApprovedResult(string approvedResult) { DARABONBA_PTR_SET_VALUE(approvedResult_, approvedResult) };


    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string createTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline GetInstanceByIdResponseBody& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline GetInstanceByIdResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline GetInstanceByIdResponseBody& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline GetInstanceByIdResponseBody& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstanceByIdResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string modifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline GetInstanceByIdResponseBody& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const GetInstanceByIdResponseBodyOriginator & originator() const { DARABONBA_PTR_GET_CONST(originator_, GetInstanceByIdResponseBodyOriginator) };
    inline GetInstanceByIdResponseBodyOriginator originator() { DARABONBA_PTR_GET(originator_, GetInstanceByIdResponseBodyOriginator) };
    inline GetInstanceByIdResponseBody& setOriginator(const GetInstanceByIdResponseBodyOriginator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline GetInstanceByIdResponseBody& setOriginator(GetInstanceByIdResponseBodyOriginator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // processCode Field Functions 
    bool hasProcessCode() const { return this->processCode_ != nullptr;};
    void deleteProcessCode() { this->processCode_ = nullptr;};
    inline string processCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
    inline GetInstanceByIdResponseBody& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetInstanceByIdResponseBody& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetInstanceByIdResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetInstanceByIdResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetInstanceByIdResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetInstanceByIdResponseBody& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<vector<GetInstanceByIdResponseBodyActionExecutor>> actionExecutor_ = nullptr;
    std::shared_ptr<string> approvedResult_ = nullptr;
    std::shared_ptr<string> createTimeGMT_ = nullptr;
    Darabonba::Json data_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<string> modifiedTimeGMT_ = nullptr;
    std::shared_ptr<GetInstanceByIdResponseBodyOriginator> originator_ = nullptr;
    std::shared_ptr<string> processCode_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
