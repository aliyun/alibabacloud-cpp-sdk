// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKTEMPLATEVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKTEMPLATEVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ViewPlugin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class GetTaskTemplateViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskTemplateViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Views, views_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskTemplateViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Views, views_);
    };
    GetTaskTemplateViewsResponseBody() = default ;
    GetTaskTemplateViewsResponseBody(const GetTaskTemplateViewsResponseBody &) = default ;
    GetTaskTemplateViewsResponseBody(GetTaskTemplateViewsResponseBody &&) = default ;
    GetTaskTemplateViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskTemplateViewsResponseBody() = default ;
    GetTaskTemplateViewsResponseBody& operator=(const GetTaskTemplateViewsResponseBody &) = default ;
    GetTaskTemplateViewsResponseBody& operator=(GetTaskTemplateViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Views : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Views& obj) { 
        DARABONBA_PTR_TO_JSON(ViewPlugins, viewPlugins_);
      };
      friend void from_json(const Darabonba::Json& j, Views& obj) { 
        DARABONBA_PTR_FROM_JSON(ViewPlugins, viewPlugins_);
      };
      Views() = default ;
      Views(const Views &) = default ;
      Views(Views &&) = default ;
      Views(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Views() = default ;
      Views& operator=(const Views &) = default ;
      Views& operator=(Views &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->viewPlugins_ == nullptr; };
      // viewPlugins Field Functions 
      bool hasViewPlugins() const { return this->viewPlugins_ != nullptr;};
      void deleteViewPlugins() { this->viewPlugins_ = nullptr;};
      inline const vector<ViewPlugin> & getViewPlugins() const { DARABONBA_PTR_GET_CONST(viewPlugins_, vector<ViewPlugin>) };
      inline vector<ViewPlugin> getViewPlugins() { DARABONBA_PTR_GET(viewPlugins_, vector<ViewPlugin>) };
      inline Views& setViewPlugins(const vector<ViewPlugin> & viewPlugins) { DARABONBA_PTR_SET_VALUE(viewPlugins_, viewPlugins) };
      inline Views& setViewPlugins(vector<ViewPlugin> && viewPlugins) { DARABONBA_PTR_SET_RVALUE(viewPlugins_, viewPlugins) };


    protected:
      // List of view plugins
      shared_ptr<vector<ViewPlugin>> viewPlugins_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->details_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->views_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTaskTemplateViewsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline GetTaskTemplateViewsResponseBody& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskTemplateViewsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskTemplateViewsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskTemplateViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskTemplateViewsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // views Field Functions 
    bool hasViews() const { return this->views_ != nullptr;};
    void deleteViews() { this->views_ = nullptr;};
    inline const GetTaskTemplateViewsResponseBody::Views & getViews() const { DARABONBA_PTR_GET_CONST(views_, GetTaskTemplateViewsResponseBody::Views) };
    inline GetTaskTemplateViewsResponseBody::Views getViews() { DARABONBA_PTR_GET(views_, GetTaskTemplateViewsResponseBody::Views) };
    inline GetTaskTemplateViewsResponseBody& setViews(const GetTaskTemplateViewsResponseBody::Views & views) { DARABONBA_PTR_SET_VALUE(views_, views) };
    inline GetTaskTemplateViewsResponseBody& setViews(GetTaskTemplateViewsResponseBody::Views && views) { DARABONBA_PTR_SET_RVALUE(views_, views) };


  protected:
    // Total amount of data under the current request conditions. This parameter is optional and does not need to be returned by default.
    shared_ptr<int32_t> code_ {};
    // Details
    shared_ptr<string> details_ {};
    // error code
    shared_ptr<string> errorCode_ {};
    // Return message of the request
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // is succeeded
    shared_ptr<bool> success_ {};
    // view
    shared_ptr<GetTaskTemplateViewsResponseBody::Views> views_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
