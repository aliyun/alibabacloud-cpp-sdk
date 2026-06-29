// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEVIEWRESPONSEBODY_HPP_
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
  class GetTemplateViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(ViewConfigs, viewConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(ViewConfigs, viewConfigs_);
    };
    GetTemplateViewResponseBody() = default ;
    GetTemplateViewResponseBody(const GetTemplateViewResponseBody &) = default ;
    GetTemplateViewResponseBody(GetTemplateViewResponseBody &&) = default ;
    GetTemplateViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateViewResponseBody() = default ;
    GetTemplateViewResponseBody& operator=(const GetTemplateViewResponseBody &) = default ;
    GetTemplateViewResponseBody& operator=(GetTemplateViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ViewConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ViewConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ViewPlugins, viewPlugins_);
      };
      friend void from_json(const Darabonba::Json& j, ViewConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ViewPlugins, viewPlugins_);
      };
      ViewConfigs() = default ;
      ViewConfigs(const ViewConfigs &) = default ;
      ViewConfigs(ViewConfigs &&) = default ;
      ViewConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ViewConfigs() = default ;
      ViewConfigs& operator=(const ViewConfigs &) = default ;
      ViewConfigs& operator=(ViewConfigs &&) = default ;
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
      inline ViewConfigs& setViewPlugins(const vector<ViewPlugin> & viewPlugins) { DARABONBA_PTR_SET_VALUE(viewPlugins_, viewPlugins) };
      inline ViewConfigs& setViewPlugins(vector<ViewPlugin> && viewPlugins) { DARABONBA_PTR_SET_RVALUE(viewPlugins_, viewPlugins) };


    protected:
      // List of data display configuration plugins
      shared_ptr<vector<ViewPlugin>> viewPlugins_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->details_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->viewConfigs_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTemplateViewResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline GetTemplateViewResponseBody& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTemplateViewResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTemplateViewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTemplateViewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // viewConfigs Field Functions 
    bool hasViewConfigs() const { return this->viewConfigs_ != nullptr;};
    void deleteViewConfigs() { this->viewConfigs_ = nullptr;};
    inline const GetTemplateViewResponseBody::ViewConfigs & getViewConfigs() const { DARABONBA_PTR_GET_CONST(viewConfigs_, GetTemplateViewResponseBody::ViewConfigs) };
    inline GetTemplateViewResponseBody::ViewConfigs getViewConfigs() { DARABONBA_PTR_GET(viewConfigs_, GetTemplateViewResponseBody::ViewConfigs) };
    inline GetTemplateViewResponseBody& setViewConfigs(const GetTemplateViewResponseBody::ViewConfigs & viewConfigs) { DARABONBA_PTR_SET_VALUE(viewConfigs_, viewConfigs) };
    inline GetTemplateViewResponseBody& setViewConfigs(GetTemplateViewResponseBody::ViewConfigs && viewConfigs) { DARABONBA_PTR_SET_RVALUE(viewConfigs_, viewConfigs) };


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
    // Data display configuration
    shared_ptr<GetTemplateViewResponseBody::ViewConfigs> viewConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
