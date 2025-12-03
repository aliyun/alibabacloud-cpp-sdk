// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineGroupResponseBodyPipelineGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(pipelineGroup, pipelineGroup_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(pipelineGroup, pipelineGroup_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetPipelineGroupResponseBody() = default ;
    GetPipelineGroupResponseBody(const GetPipelineGroupResponseBody &) = default ;
    GetPipelineGroupResponseBody(GetPipelineGroupResponseBody &&) = default ;
    GetPipelineGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineGroupResponseBody() = default ;
    GetPipelineGroupResponseBody& operator=(const GetPipelineGroupResponseBody &) = default ;
    GetPipelineGroupResponseBody& operator=(GetPipelineGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->pipelineGroup_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPipelineGroupResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPipelineGroupResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // pipelineGroup Field Functions 
    bool hasPipelineGroup() const { return this->pipelineGroup_ != nullptr;};
    void deletePipelineGroup() { this->pipelineGroup_ = nullptr;};
    inline const GetPipelineGroupResponseBodyPipelineGroup & pipelineGroup() const { DARABONBA_PTR_GET_CONST(pipelineGroup_, GetPipelineGroupResponseBodyPipelineGroup) };
    inline GetPipelineGroupResponseBodyPipelineGroup pipelineGroup() { DARABONBA_PTR_GET(pipelineGroup_, GetPipelineGroupResponseBodyPipelineGroup) };
    inline GetPipelineGroupResponseBody& setPipelineGroup(const GetPipelineGroupResponseBodyPipelineGroup & pipelineGroup) { DARABONBA_PTR_SET_VALUE(pipelineGroup_, pipelineGroup) };
    inline GetPipelineGroupResponseBody& setPipelineGroup(GetPipelineGroupResponseBodyPipelineGroup && pipelineGroup) { DARABONBA_PTR_SET_RVALUE(pipelineGroup_, pipelineGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPipelineGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPipelineGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<GetPipelineGroupResponseBodyPipelineGroup> pipelineGroup_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
