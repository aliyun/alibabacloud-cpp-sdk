// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTITYSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EntitySetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntitySetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(more_page, morePage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, EntitySetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(more_page, morePage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    EntitySetResponseBody() = default ;
    EntitySetResponseBody(const EntitySetResponseBody &) = default ;
    EntitySetResponseBody(EntitySetResponseBody &&) = default ;
    EntitySetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntitySetResponseBody() = default ;
    EntitySetResponseBody& operator=(const EntitySetResponseBody &) = default ;
    EntitySetResponseBody& operator=(EntitySetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(add_num, addNum_);
        DARABONBA_PTR_TO_JSON(remove_num, removeNum_);
        DARABONBA_PTR_TO_JSON(selected_user_num, selectedUserNum_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(add_num, addNum_);
        DARABONBA_PTR_FROM_JSON(remove_num, removeNum_);
        DARABONBA_PTR_FROM_JSON(selected_user_num, selectedUserNum_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addNum_ == nullptr
        && this->removeNum_ == nullptr && this->selectedUserNum_ == nullptr; };
      // addNum Field Functions 
      bool hasAddNum() const { return this->addNum_ != nullptr;};
      void deleteAddNum() { this->addNum_ = nullptr;};
      inline int32_t getAddNum() const { DARABONBA_PTR_GET_DEFAULT(addNum_, 0) };
      inline Module& setAddNum(int32_t addNum) { DARABONBA_PTR_SET_VALUE(addNum_, addNum) };


      // removeNum Field Functions 
      bool hasRemoveNum() const { return this->removeNum_ != nullptr;};
      void deleteRemoveNum() { this->removeNum_ = nullptr;};
      inline int32_t getRemoveNum() const { DARABONBA_PTR_GET_DEFAULT(removeNum_, 0) };
      inline Module& setRemoveNum(int32_t removeNum) { DARABONBA_PTR_SET_VALUE(removeNum_, removeNum) };


      // selectedUserNum Field Functions 
      bool hasSelectedUserNum() const { return this->selectedUserNum_ != nullptr;};
      void deleteSelectedUserNum() { this->selectedUserNum_ = nullptr;};
      inline int32_t getSelectedUserNum() const { DARABONBA_PTR_GET_DEFAULT(selectedUserNum_, 0) };
      inline Module& setSelectedUserNum(int32_t selectedUserNum) { DARABONBA_PTR_SET_VALUE(selectedUserNum_, selectedUserNum) };


    protected:
      shared_ptr<int32_t> addNum_ {};
      shared_ptr<int32_t> removeNum_ {};
      shared_ptr<int32_t> selectedUserNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->morePage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EntitySetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EntitySetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const EntitySetResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, EntitySetResponseBody::Module) };
    inline EntitySetResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, EntitySetResponseBody::Module) };
    inline EntitySetResponseBody& setModule(const EntitySetResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline EntitySetResponseBody& setModule(EntitySetResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // morePage Field Functions 
    bool hasMorePage() const { return this->morePage_ != nullptr;};
    void deleteMorePage() { this->morePage_ = nullptr;};
    inline bool getMorePage() const { DARABONBA_PTR_GET_DEFAULT(morePage_, false) };
    inline EntitySetResponseBody& setMorePage(bool morePage) { DARABONBA_PTR_SET_VALUE(morePage_, morePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EntitySetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EntitySetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline EntitySetResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<EntitySetResponseBody::Module> module_ {};
    shared_ptr<bool> morePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
