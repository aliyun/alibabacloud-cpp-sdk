// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BASECITYINFOSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BASECITYINFOSEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class BaseCityInfoSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BaseCityInfoSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, BaseCityInfoSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    BaseCityInfoSearchResponseBody() = default ;
    BaseCityInfoSearchResponseBody(const BaseCityInfoSearchResponseBody &) = default ;
    BaseCityInfoSearchResponseBody(BaseCityInfoSearchResponseBody &&) = default ;
    BaseCityInfoSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BaseCityInfoSearchResponseBody() = default ;
    BaseCityInfoSearchResponseBody& operator=(const BaseCityInfoSearchResponseBody &) = default ;
    BaseCityInfoSearchResponseBody& operator=(BaseCityInfoSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(nameTree, nameTree_);
        DARABONBA_PTR_TO_JSON(region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(nameTree, nameTree_);
        DARABONBA_PTR_FROM_JSON(region, region_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->nameTree_ == nullptr && this->region_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Module& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Module& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameTree Field Functions 
      bool hasNameTree() const { return this->nameTree_ != nullptr;};
      void deleteNameTree() { this->nameTree_ = nullptr;};
      inline string getNameTree() const { DARABONBA_PTR_GET_DEFAULT(nameTree_, "") };
      inline Module& setNameTree(string nameTree) { DARABONBA_PTR_SET_VALUE(nameTree_, nameTree) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Module& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nameTree_ {};
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BaseCityInfoSearchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BaseCityInfoSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<BaseCityInfoSearchResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<BaseCityInfoSearchResponseBody::Module>) };
    inline vector<BaseCityInfoSearchResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<BaseCityInfoSearchResponseBody::Module>) };
    inline BaseCityInfoSearchResponseBody& setModule(const vector<BaseCityInfoSearchResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline BaseCityInfoSearchResponseBody& setModule(vector<BaseCityInfoSearchResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BaseCityInfoSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BaseCityInfoSearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline BaseCityInfoSearchResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<BaseCityInfoSearchResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
