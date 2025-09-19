// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyPushAllTaskResponseBodyPushTaskRsp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPushAllTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPushAllTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PushTaskRsp, pushTaskRsp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPushAllTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PushTaskRsp, pushTaskRsp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyPushAllTaskResponseBody() = default ;
    ModifyPushAllTaskResponseBody(const ModifyPushAllTaskResponseBody &) = default ;
    ModifyPushAllTaskResponseBody(ModifyPushAllTaskResponseBody &&) = default ;
    ModifyPushAllTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPushAllTaskResponseBody() = default ;
    ModifyPushAllTaskResponseBody& operator=(const ModifyPushAllTaskResponseBody &) = default ;
    ModifyPushAllTaskResponseBody& operator=(ModifyPushAllTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pushTaskRsp_ != nullptr
        && this->requestId_ != nullptr; };
    // pushTaskRsp Field Functions 
    bool hasPushTaskRsp() const { return this->pushTaskRsp_ != nullptr;};
    void deletePushTaskRsp() { this->pushTaskRsp_ = nullptr;};
    inline const ModifyPushAllTaskResponseBodyPushTaskRsp & pushTaskRsp() const { DARABONBA_PTR_GET_CONST(pushTaskRsp_, ModifyPushAllTaskResponseBodyPushTaskRsp) };
    inline ModifyPushAllTaskResponseBodyPushTaskRsp pushTaskRsp() { DARABONBA_PTR_GET(pushTaskRsp_, ModifyPushAllTaskResponseBodyPushTaskRsp) };
    inline ModifyPushAllTaskResponseBody& setPushTaskRsp(const ModifyPushAllTaskResponseBodyPushTaskRsp & pushTaskRsp) { DARABONBA_PTR_SET_VALUE(pushTaskRsp_, pushTaskRsp) };
    inline ModifyPushAllTaskResponseBody& setPushTaskRsp(ModifyPushAllTaskResponseBodyPushTaskRsp && pushTaskRsp) { DARABONBA_PTR_SET_RVALUE(pushTaskRsp_, pushTaskRsp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyPushAllTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of security check tasks.
    std::shared_ptr<ModifyPushAllTaskResponseBodyPushTaskRsp> pushTaskRsp_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
