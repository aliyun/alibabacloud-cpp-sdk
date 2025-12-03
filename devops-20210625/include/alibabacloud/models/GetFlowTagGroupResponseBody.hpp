// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWTAGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWTAGGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFlowTagGroupResponseBodyFlowTagGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetFlowTagGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowTagGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(flowTagGroup, flowTagGroup_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowTagGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(flowTagGroup, flowTagGroup_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetFlowTagGroupResponseBody() = default ;
    GetFlowTagGroupResponseBody(const GetFlowTagGroupResponseBody &) = default ;
    GetFlowTagGroupResponseBody(GetFlowTagGroupResponseBody &&) = default ;
    GetFlowTagGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowTagGroupResponseBody() = default ;
    GetFlowTagGroupResponseBody& operator=(const GetFlowTagGroupResponseBody &) = default ;
    GetFlowTagGroupResponseBody& operator=(GetFlowTagGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->flowTagGroup_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetFlowTagGroupResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetFlowTagGroupResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // flowTagGroup Field Functions 
    bool hasFlowTagGroup() const { return this->flowTagGroup_ != nullptr;};
    void deleteFlowTagGroup() { this->flowTagGroup_ = nullptr;};
    inline const GetFlowTagGroupResponseBodyFlowTagGroup & flowTagGroup() const { DARABONBA_PTR_GET_CONST(flowTagGroup_, GetFlowTagGroupResponseBodyFlowTagGroup) };
    inline GetFlowTagGroupResponseBodyFlowTagGroup flowTagGroup() { DARABONBA_PTR_GET(flowTagGroup_, GetFlowTagGroupResponseBodyFlowTagGroup) };
    inline GetFlowTagGroupResponseBody& setFlowTagGroup(const GetFlowTagGroupResponseBodyFlowTagGroup & flowTagGroup) { DARABONBA_PTR_SET_VALUE(flowTagGroup_, flowTagGroup) };
    inline GetFlowTagGroupResponseBody& setFlowTagGroup(GetFlowTagGroupResponseBodyFlowTagGroup && flowTagGroup) { DARABONBA_PTR_SET_RVALUE(flowTagGroup_, flowTagGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFlowTagGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFlowTagGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<GetFlowTagGroupResponseBodyFlowTagGroup> flowTagGroup_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
