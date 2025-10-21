// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELINSTANCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELINSTANCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelInstanceInfoResponseBodyHarmfulCategoryConfigInfoList.hpp>
#include <alibabacloud/models/GetModelInstanceInfoResponseBodyPromptAttackInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelInstanceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelInstanceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EasServiceId, easServiceId_);
      DARABONBA_PTR_TO_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HarmfulCategoryConfigInfoList, harmfulCategoryConfigInfoList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(IsSupportImage, isSupportImage_);
      DARABONBA_PTR_TO_JSON(IsSupportText, isSupportText_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModelCallName, modelCallName_);
      DARABONBA_PTR_TO_JSON(ModelCategoryId, modelCategoryId_);
      DARABONBA_PTR_TO_JSON(ModelInstanceId, modelInstanceId_);
      DARABONBA_PTR_TO_JSON(ModelSource, modelSource_);
      DARABONBA_PTR_TO_JSON(ModelToken, modelToken_);
      DARABONBA_PTR_TO_JSON(ModelUrl, modelUrl_);
      DARABONBA_PTR_TO_JSON(ModelVpcUrl, modelVpcUrl_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelInstanceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EasServiceId, easServiceId_);
      DARABONBA_PTR_FROM_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategoryConfigInfoList, harmfulCategoryConfigInfoList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(IsSupportImage, isSupportImage_);
      DARABONBA_PTR_FROM_JSON(IsSupportText, isSupportText_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModelCallName, modelCallName_);
      DARABONBA_PTR_FROM_JSON(ModelCategoryId, modelCategoryId_);
      DARABONBA_PTR_FROM_JSON(ModelInstanceId, modelInstanceId_);
      DARABONBA_PTR_FROM_JSON(ModelSource, modelSource_);
      DARABONBA_PTR_FROM_JSON(ModelToken, modelToken_);
      DARABONBA_PTR_FROM_JSON(ModelUrl, modelUrl_);
      DARABONBA_PTR_FROM_JSON(ModelVpcUrl, modelVpcUrl_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetModelInstanceInfoResponseBody() = default ;
    GetModelInstanceInfoResponseBody(const GetModelInstanceInfoResponseBody &) = default ;
    GetModelInstanceInfoResponseBody(GetModelInstanceInfoResponseBody &&) = default ;
    GetModelInstanceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelInstanceInfoResponseBody() = default ;
    GetModelInstanceInfoResponseBody& operator=(const GetModelInstanceInfoResponseBody &) = default ;
    GetModelInstanceInfoResponseBody& operator=(GetModelInstanceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->description_ == nullptr && return this->easServiceId_ == nullptr && return this->easServiceName_ == nullptr && return this->gmtModified_ == nullptr && return this->harmfulCategoryConfigInfoList_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->isSupportImage_ == nullptr && return this->isSupportText_ == nullptr && return this->message_ == nullptr && return this->modelCallName_ == nullptr
        && return this->modelCategoryId_ == nullptr && return this->modelInstanceId_ == nullptr && return this->modelSource_ == nullptr && return this->modelToken_ == nullptr && return this->modelUrl_ == nullptr
        && return this->modelVpcUrl_ == nullptr && return this->promptAttackInfoList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetModelInstanceInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetModelInstanceInfoResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // easServiceId Field Functions 
    bool hasEasServiceId() const { return this->easServiceId_ != nullptr;};
    void deleteEasServiceId() { this->easServiceId_ = nullptr;};
    inline string easServiceId() const { DARABONBA_PTR_GET_DEFAULT(easServiceId_, "") };
    inline GetModelInstanceInfoResponseBody& setEasServiceId(string easServiceId) { DARABONBA_PTR_SET_VALUE(easServiceId_, easServiceId) };


    // easServiceName Field Functions 
    bool hasEasServiceName() const { return this->easServiceName_ != nullptr;};
    void deleteEasServiceName() { this->easServiceName_ = nullptr;};
    inline string easServiceName() const { DARABONBA_PTR_GET_DEFAULT(easServiceName_, "") };
    inline GetModelInstanceInfoResponseBody& setEasServiceName(string easServiceName) { DARABONBA_PTR_SET_VALUE(easServiceName_, easServiceName) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetModelInstanceInfoResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // harmfulCategoryConfigInfoList Field Functions 
    bool hasHarmfulCategoryConfigInfoList() const { return this->harmfulCategoryConfigInfoList_ != nullptr;};
    void deleteHarmfulCategoryConfigInfoList() { this->harmfulCategoryConfigInfoList_ = nullptr;};
    inline const vector<GetModelInstanceInfoResponseBodyHarmfulCategoryConfigInfoList> & harmfulCategoryConfigInfoList() const { DARABONBA_PTR_GET_CONST(harmfulCategoryConfigInfoList_, vector<GetModelInstanceInfoResponseBodyHarmfulCategoryConfigInfoList>) };
    inline vector<GetModelInstanceInfoResponseBodyHarmfulCategoryConfigInfoList> harmfulCategoryConfigInfoList() { DARABONBA_PTR_GET(harmfulCategoryConfigInfoList_, vector<GetModelInstanceInfoResponseBodyHarmfulCategoryConfigInfoList>) };
    inline GetModelInstanceInfoResponseBody& setHarmfulCategoryConfigInfoList(const vector<GetModelInstanceInfoResponseBodyHarmfulCategoryConfigInfoList> & harmfulCategoryConfigInfoList) { DARABONBA_PTR_SET_VALUE(harmfulCategoryConfigInfoList_, harmfulCategoryConfigInfoList) };
    inline GetModelInstanceInfoResponseBody& setHarmfulCategoryConfigInfoList(vector<GetModelInstanceInfoResponseBodyHarmfulCategoryConfigInfoList> && harmfulCategoryConfigInfoList) { DARABONBA_PTR_SET_RVALUE(harmfulCategoryConfigInfoList_, harmfulCategoryConfigInfoList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetModelInstanceInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // isSupportImage Field Functions 
    bool hasIsSupportImage() const { return this->isSupportImage_ != nullptr;};
    void deleteIsSupportImage() { this->isSupportImage_ = nullptr;};
    inline bool isSupportImage() const { DARABONBA_PTR_GET_DEFAULT(isSupportImage_, false) };
    inline GetModelInstanceInfoResponseBody& setIsSupportImage(bool isSupportImage) { DARABONBA_PTR_SET_VALUE(isSupportImage_, isSupportImage) };


    // isSupportText Field Functions 
    bool hasIsSupportText() const { return this->isSupportText_ != nullptr;};
    void deleteIsSupportText() { this->isSupportText_ = nullptr;};
    inline bool isSupportText() const { DARABONBA_PTR_GET_DEFAULT(isSupportText_, false) };
    inline GetModelInstanceInfoResponseBody& setIsSupportText(bool isSupportText) { DARABONBA_PTR_SET_VALUE(isSupportText_, isSupportText) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetModelInstanceInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modelCallName Field Functions 
    bool hasModelCallName() const { return this->modelCallName_ != nullptr;};
    void deleteModelCallName() { this->modelCallName_ = nullptr;};
    inline string modelCallName() const { DARABONBA_PTR_GET_DEFAULT(modelCallName_, "") };
    inline GetModelInstanceInfoResponseBody& setModelCallName(string modelCallName) { DARABONBA_PTR_SET_VALUE(modelCallName_, modelCallName) };


    // modelCategoryId Field Functions 
    bool hasModelCategoryId() const { return this->modelCategoryId_ != nullptr;};
    void deleteModelCategoryId() { this->modelCategoryId_ = nullptr;};
    inline int64_t modelCategoryId() const { DARABONBA_PTR_GET_DEFAULT(modelCategoryId_, 0L) };
    inline GetModelInstanceInfoResponseBody& setModelCategoryId(int64_t modelCategoryId) { DARABONBA_PTR_SET_VALUE(modelCategoryId_, modelCategoryId) };


    // modelInstanceId Field Functions 
    bool hasModelInstanceId() const { return this->modelInstanceId_ != nullptr;};
    void deleteModelInstanceId() { this->modelInstanceId_ = nullptr;};
    inline int64_t modelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(modelInstanceId_, 0L) };
    inline GetModelInstanceInfoResponseBody& setModelInstanceId(int64_t modelInstanceId) { DARABONBA_PTR_SET_VALUE(modelInstanceId_, modelInstanceId) };


    // modelSource Field Functions 
    bool hasModelSource() const { return this->modelSource_ != nullptr;};
    void deleteModelSource() { this->modelSource_ = nullptr;};
    inline int32_t modelSource() const { DARABONBA_PTR_GET_DEFAULT(modelSource_, 0) };
    inline GetModelInstanceInfoResponseBody& setModelSource(int32_t modelSource) { DARABONBA_PTR_SET_VALUE(modelSource_, modelSource) };


    // modelToken Field Functions 
    bool hasModelToken() const { return this->modelToken_ != nullptr;};
    void deleteModelToken() { this->modelToken_ = nullptr;};
    inline string modelToken() const { DARABONBA_PTR_GET_DEFAULT(modelToken_, "") };
    inline GetModelInstanceInfoResponseBody& setModelToken(string modelToken) { DARABONBA_PTR_SET_VALUE(modelToken_, modelToken) };


    // modelUrl Field Functions 
    bool hasModelUrl() const { return this->modelUrl_ != nullptr;};
    void deleteModelUrl() { this->modelUrl_ = nullptr;};
    inline string modelUrl() const { DARABONBA_PTR_GET_DEFAULT(modelUrl_, "") };
    inline GetModelInstanceInfoResponseBody& setModelUrl(string modelUrl) { DARABONBA_PTR_SET_VALUE(modelUrl_, modelUrl) };


    // modelVpcUrl Field Functions 
    bool hasModelVpcUrl() const { return this->modelVpcUrl_ != nullptr;};
    void deleteModelVpcUrl() { this->modelVpcUrl_ = nullptr;};
    inline string modelVpcUrl() const { DARABONBA_PTR_GET_DEFAULT(modelVpcUrl_, "") };
    inline GetModelInstanceInfoResponseBody& setModelVpcUrl(string modelVpcUrl) { DARABONBA_PTR_SET_VALUE(modelVpcUrl_, modelVpcUrl) };


    // promptAttackInfoList Field Functions 
    bool hasPromptAttackInfoList() const { return this->promptAttackInfoList_ != nullptr;};
    void deletePromptAttackInfoList() { this->promptAttackInfoList_ = nullptr;};
    inline const vector<GetModelInstanceInfoResponseBodyPromptAttackInfoList> & promptAttackInfoList() const { DARABONBA_PTR_GET_CONST(promptAttackInfoList_, vector<GetModelInstanceInfoResponseBodyPromptAttackInfoList>) };
    inline vector<GetModelInstanceInfoResponseBodyPromptAttackInfoList> promptAttackInfoList() { DARABONBA_PTR_GET(promptAttackInfoList_, vector<GetModelInstanceInfoResponseBodyPromptAttackInfoList>) };
    inline GetModelInstanceInfoResponseBody& setPromptAttackInfoList(const vector<GetModelInstanceInfoResponseBodyPromptAttackInfoList> & promptAttackInfoList) { DARABONBA_PTR_SET_VALUE(promptAttackInfoList_, promptAttackInfoList) };
    inline GetModelInstanceInfoResponseBody& setPromptAttackInfoList(vector<GetModelInstanceInfoResponseBodyPromptAttackInfoList> && promptAttackInfoList) { DARABONBA_PTR_SET_RVALUE(promptAttackInfoList_, promptAttackInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelInstanceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetModelInstanceInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> easServiceId_ = nullptr;
    std::shared_ptr<string> easServiceName_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<vector<GetModelInstanceInfoResponseBodyHarmfulCategoryConfigInfoList>> harmfulCategoryConfigInfoList_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<bool> isSupportImage_ = nullptr;
    std::shared_ptr<bool> isSupportText_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> modelCallName_ = nullptr;
    std::shared_ptr<int64_t> modelCategoryId_ = nullptr;
    std::shared_ptr<int64_t> modelInstanceId_ = nullptr;
    std::shared_ptr<int32_t> modelSource_ = nullptr;
    std::shared_ptr<string> modelToken_ = nullptr;
    std::shared_ptr<string> modelUrl_ = nullptr;
    std::shared_ptr<string> modelVpcUrl_ = nullptr;
    std::shared_ptr<vector<GetModelInstanceInfoResponseBodyPromptAttackInfoList>> promptAttackInfoList_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
