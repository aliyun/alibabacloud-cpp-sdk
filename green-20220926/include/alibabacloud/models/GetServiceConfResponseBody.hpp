// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetServiceConfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(CustomServiceConf, customServiceConf_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_ANY_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(CustomServiceConf, customServiceConf_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_ANY_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetServiceConfResponseBody() = default ;
    GetServiceConfResponseBody(const GetServiceConfResponseBody &) = default ;
    GetServiceConfResponseBody(GetServiceConfResponseBody &&) = default ;
    GetServiceConfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConfResponseBody() = default ;
    GetServiceConfResponseBody& operator=(const GetServiceConfResponseBody &) = default ;
    GetServiceConfResponseBody& operator=(GetServiceConfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classify_ == nullptr
        && return this->code_ == nullptr && return this->customServiceConf_ == nullptr && return this->gmtModified_ == nullptr && return this->msg_ == nullptr && return this->option_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceType_ == nullptr && return this->serviceCode_ == nullptr && return this->serviceType_ == nullptr && return this->success_ == nullptr
        && return this->uid_ == nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline GetServiceConfResponseBody& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetServiceConfResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customServiceConf Field Functions 
    bool hasCustomServiceConf() const { return this->customServiceConf_ != nullptr;};
    void deleteCustomServiceConf() { this->customServiceConf_ = nullptr;};
    inline     const Darabonba::Json & customServiceConf() const { DARABONBA_GET(customServiceConf_) };
    Darabonba::Json & customServiceConf() { DARABONBA_GET(customServiceConf_) };
    inline GetServiceConfResponseBody& setCustomServiceConf(const Darabonba::Json & customServiceConf) { DARABONBA_SET_VALUE(customServiceConf_, customServiceConf) };
    inline GetServiceConfResponseBody& setCustomServiceConf(Darabonba::Json & customServiceConf) { DARABONBA_SET_RVALUE(customServiceConf_, customServiceConf) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetServiceConfResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetServiceConfResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline     const Darabonba::Json & option() const { DARABONBA_GET(option_) };
    Darabonba::Json & option() { DARABONBA_GET(option_) };
    inline GetServiceConfResponseBody& setOption(const Darabonba::Json & option) { DARABONBA_SET_VALUE(option_, option) };
    inline GetServiceConfResponseBody& setOption(Darabonba::Json & option) { DARABONBA_SET_RVALUE(option_, option) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceConfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetServiceConfResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetServiceConfResponseBody& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceConfResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceConfResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetServiceConfResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Classification.
    std::shared_ptr<string> classify_ = nullptr;
    // Error code, consistent with HTTP status.
    std::shared_ptr<int32_t> code_ = nullptr;
    // Service details
    Darabonba::Json customServiceConf_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Further description of the error code.
    std::shared_ptr<string> msg_ = nullptr;
    // Options.
    Darabonba::Json option_ = nullptr;
    // ID assigned by the backend to uniquely identify a request. Can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Service type.
    std::shared_ptr<string> serviceType_ = nullptr;
    // Success indicator
    std::shared_ptr<bool> success_ = nullptr;
    // UID.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
