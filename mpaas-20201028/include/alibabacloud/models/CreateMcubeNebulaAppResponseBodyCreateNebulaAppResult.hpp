// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBENEBULAAPPRESPONSEBODYCREATENEBULAAPPRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBENEBULAAPPRESPONSEBODYCREATENEBULAAPPRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult() = default ;
    CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult(const CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult &) = default ;
    CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult(CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult &&) = default ;
    CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult() = default ;
    CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult& operator=(const CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult &) = default ;
    CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult& operator=(CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->requestId_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
