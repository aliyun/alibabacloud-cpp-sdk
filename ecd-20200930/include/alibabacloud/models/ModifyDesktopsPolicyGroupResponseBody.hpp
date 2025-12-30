// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPSPOLICYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPSPOLICYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopsPolicyGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopsPolicyGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyResults, modifyResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopsPolicyGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyResults, modifyResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDesktopsPolicyGroupResponseBody() = default ;
    ModifyDesktopsPolicyGroupResponseBody(const ModifyDesktopsPolicyGroupResponseBody &) = default ;
    ModifyDesktopsPolicyGroupResponseBody(ModifyDesktopsPolicyGroupResponseBody &&) = default ;
    ModifyDesktopsPolicyGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopsPolicyGroupResponseBody() = default ;
    ModifyDesktopsPolicyGroupResponseBody& operator=(const ModifyDesktopsPolicyGroupResponseBody &) = default ;
    ModifyDesktopsPolicyGroupResponseBody& operator=(ModifyDesktopsPolicyGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModifyResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModifyResults& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, ModifyResults& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      ModifyResults() = default ;
      ModifyResults(const ModifyResults &) = default ;
      ModifyResults(ModifyResults &&) = default ;
      ModifyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModifyResults() = default ;
      ModifyResults& operator=(const ModifyResults &) = default ;
      ModifyResults& operator=(ModifyResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->desktopId_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ModifyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline ModifyResults& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ModifyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The returned message. If the request was successful, `success` is returned. If the request failed, an error message is returned.
      shared_ptr<string> code_ {};
      // The cloud computer ID.
      shared_ptr<string> desktopId_ {};
      // The error message returned if the request failed. This parameter is not returned if the value of Code is success.``
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->modifyResults_ == nullptr
        && this->requestId_ == nullptr; };
    // modifyResults Field Functions 
    bool hasModifyResults() const { return this->modifyResults_ != nullptr;};
    void deleteModifyResults() { this->modifyResults_ = nullptr;};
    inline const vector<ModifyDesktopsPolicyGroupResponseBody::ModifyResults> & getModifyResults() const { DARABONBA_PTR_GET_CONST(modifyResults_, vector<ModifyDesktopsPolicyGroupResponseBody::ModifyResults>) };
    inline vector<ModifyDesktopsPolicyGroupResponseBody::ModifyResults> getModifyResults() { DARABONBA_PTR_GET(modifyResults_, vector<ModifyDesktopsPolicyGroupResponseBody::ModifyResults>) };
    inline ModifyDesktopsPolicyGroupResponseBody& setModifyResults(const vector<ModifyDesktopsPolicyGroupResponseBody::ModifyResults> & modifyResults) { DARABONBA_PTR_SET_VALUE(modifyResults_, modifyResults) };
    inline ModifyDesktopsPolicyGroupResponseBody& setModifyResults(vector<ModifyDesktopsPolicyGroupResponseBody::ModifyResults> && modifyResults) { DARABONBA_PTR_SET_RVALUE(modifyResults_, modifyResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDesktopsPolicyGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request results.
    shared_ptr<vector<ModifyDesktopsPolicyGroupResponseBody::ModifyResults>> modifyResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
