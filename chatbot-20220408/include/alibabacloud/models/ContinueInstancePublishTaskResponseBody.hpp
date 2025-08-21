// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUEINSTANCEPUBLISHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONTINUEINSTANCEPUBLISHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ContinueInstancePublishTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueInstancePublishTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizTypeList, bizTypeList_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_ANY_TO_JSON(Errors, errors_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_ANY_TO_JSON(Warnings, warnings_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueInstancePublishTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTypeList, bizTypeList_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_ANY_FROM_JSON(Errors, errors_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_ANY_FROM_JSON(Warnings, warnings_);
    };
    ContinueInstancePublishTaskResponseBody() = default ;
    ContinueInstancePublishTaskResponseBody(const ContinueInstancePublishTaskResponseBody &) = default ;
    ContinueInstancePublishTaskResponseBody(ContinueInstancePublishTaskResponseBody &&) = default ;
    ContinueInstancePublishTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueInstancePublishTaskResponseBody() = default ;
    ContinueInstancePublishTaskResponseBody& operator=(const ContinueInstancePublishTaskResponseBody &) = default ;
    ContinueInstancePublishTaskResponseBody& operator=(ContinueInstancePublishTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizTypeList_ != nullptr
        && this->createTime_ != nullptr && this->error_ != nullptr && this->errors_ != nullptr && this->id_ != nullptr && this->modifyTime_ != nullptr
        && this->requestId_ != nullptr && this->response_ != nullptr && this->status_ != nullptr && this->warnings_ != nullptr; };
    // bizTypeList Field Functions 
    bool hasBizTypeList() const { return this->bizTypeList_ != nullptr;};
    void deleteBizTypeList() { this->bizTypeList_ = nullptr;};
    inline const vector<string> & bizTypeList() const { DARABONBA_PTR_GET_CONST(bizTypeList_, vector<string>) };
    inline vector<string> bizTypeList() { DARABONBA_PTR_GET(bizTypeList_, vector<string>) };
    inline ContinueInstancePublishTaskResponseBody& setBizTypeList(const vector<string> & bizTypeList) { DARABONBA_PTR_SET_VALUE(bizTypeList_, bizTypeList) };
    inline ContinueInstancePublishTaskResponseBody& setBizTypeList(vector<string> && bizTypeList) { DARABONBA_PTR_SET_RVALUE(bizTypeList_, bizTypeList) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ContinueInstancePublishTaskResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline ContinueInstancePublishTaskResponseBody& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // errors Field Functions 
    bool hasErrors() const { return this->errors_ != nullptr;};
    void deleteErrors() { this->errors_ = nullptr;};
    inline     const Darabonba::Json & errors() const { DARABONBA_GET(errors_) };
    Darabonba::Json & errors() { DARABONBA_GET(errors_) };
    inline ContinueInstancePublishTaskResponseBody& setErrors(const Darabonba::Json & errors) { DARABONBA_SET_VALUE(errors_, errors) };
    inline ContinueInstancePublishTaskResponseBody& setErrors(Darabonba::Json & errors) { DARABONBA_SET_RVALUE(errors_, errors) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ContinueInstancePublishTaskResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ContinueInstancePublishTaskResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ContinueInstancePublishTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline string response() const { DARABONBA_PTR_GET_DEFAULT(response_, "") };
    inline ContinueInstancePublishTaskResponseBody& setResponse(string response) { DARABONBA_PTR_SET_VALUE(response_, response) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ContinueInstancePublishTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline     const Darabonba::Json & warnings() const { DARABONBA_GET(warnings_) };
    Darabonba::Json & warnings() { DARABONBA_GET(warnings_) };
    inline ContinueInstancePublishTaskResponseBody& setWarnings(const Darabonba::Json & warnings) { DARABONBA_SET_VALUE(warnings_, warnings) };
    inline ContinueInstancePublishTaskResponseBody& setWarnings(Darabonba::Json & warnings) { DARABONBA_SET_RVALUE(warnings_, warnings) };


  protected:
    std::shared_ptr<vector<string>> bizTypeList_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
    Darabonba::Json errors_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> response_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    Darabonba::Json warnings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
