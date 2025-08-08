// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYOLLAMAMODELOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYOLLAMAMODELOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployOllamaModelOutputData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployOllamaModelOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployOllamaModelOutput& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeployOllamaModelOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DeployOllamaModelOutput() = default ;
    DeployOllamaModelOutput(const DeployOllamaModelOutput &) = default ;
    DeployOllamaModelOutput(DeployOllamaModelOutput &&) = default ;
    DeployOllamaModelOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployOllamaModelOutput() = default ;
    DeployOllamaModelOutput& operator=(const DeployOllamaModelOutput &) = default ;
    DeployOllamaModelOutput& operator=(DeployOllamaModelOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->errCode_ != nullptr && this->errMsg_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeployOllamaModelOutputData & data() const { DARABONBA_PTR_GET_CONST(data_, DeployOllamaModelOutputData) };
    inline DeployOllamaModelOutputData data() { DARABONBA_PTR_GET(data_, DeployOllamaModelOutputData) };
    inline DeployOllamaModelOutput& setData(const DeployOllamaModelOutputData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeployOllamaModelOutput& setData(DeployOllamaModelOutputData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DeployOllamaModelOutput& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DeployOllamaModelOutput& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeployOllamaModelOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeployOllamaModelOutput& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<DeployOllamaModelOutputData> data_ = nullptr;
    std::shared_ptr<string> errCode_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
