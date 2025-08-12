// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANTSITEMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANTSITEMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstantSiteMonitorResponseBodyCreateResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateInstantSiteMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstantSiteMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateResultList, createResultList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstantSiteMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateResultList, createResultList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateInstantSiteMonitorResponseBody() = default ;
    CreateInstantSiteMonitorResponseBody(const CreateInstantSiteMonitorResponseBody &) = default ;
    CreateInstantSiteMonitorResponseBody(CreateInstantSiteMonitorResponseBody &&) = default ;
    CreateInstantSiteMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstantSiteMonitorResponseBody() = default ;
    CreateInstantSiteMonitorResponseBody& operator=(const CreateInstantSiteMonitorResponseBody &) = default ;
    CreateInstantSiteMonitorResponseBody& operator=(CreateInstantSiteMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->createResultList_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateInstantSiteMonitorResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createResultList Field Functions 
    bool hasCreateResultList() const { return this->createResultList_ != nullptr;};
    void deleteCreateResultList() { this->createResultList_ = nullptr;};
    inline const vector<CreateInstantSiteMonitorResponseBodyCreateResultList> & createResultList() const { DARABONBA_PTR_GET_CONST(createResultList_, vector<CreateInstantSiteMonitorResponseBodyCreateResultList>) };
    inline vector<CreateInstantSiteMonitorResponseBodyCreateResultList> createResultList() { DARABONBA_PTR_GET(createResultList_, vector<CreateInstantSiteMonitorResponseBodyCreateResultList>) };
    inline CreateInstantSiteMonitorResponseBody& setCreateResultList(const vector<CreateInstantSiteMonitorResponseBodyCreateResultList> & createResultList) { DARABONBA_PTR_SET_VALUE(createResultList_, createResultList) };
    inline CreateInstantSiteMonitorResponseBody& setCreateResultList(vector<CreateInstantSiteMonitorResponseBodyCreateResultList> && createResultList) { DARABONBA_PTR_SET_RVALUE(createResultList_, createResultList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateInstantSiteMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstantSiteMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateInstantSiteMonitorResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    // 
    // > The status code 200 indicates that the call was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The results for creating the instant test task.
    std::shared_ptr<vector<CreateInstantSiteMonitorResponseBodyCreateResultList>> createResultList_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
