// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYMIGRATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYMIGRATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class VerifyMigrationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    VerifyMigrationTaskResponseBody() = default ;
    VerifyMigrationTaskResponseBody(const VerifyMigrationTaskResponseBody &) = default ;
    VerifyMigrationTaskResponseBody(VerifyMigrationTaskResponseBody &&) = default ;
    VerifyMigrationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyMigrationTaskResponseBody() = default ;
    VerifyMigrationTaskResponseBody& operator=(const VerifyMigrationTaskResponseBody &) = default ;
    VerifyMigrationTaskResponseBody& operator=(VerifyMigrationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(isSupported, isSupported_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(success, success_);
        DARABONBA_PTR_TO_JSON(unSupportedRouteRules, unSupportedRouteRules_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(isSupported, isSupported_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(success, success_);
        DARABONBA_PTR_FROM_JSON(unSupportedRouteRules, unSupportedRouteRules_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UnSupportedRouteRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UnSupportedRouteRules& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(rule, rule_);
          DARABONBA_PTR_TO_JSON(unSupportedAnnotations, unSupportedAnnotations_);
        };
        friend void from_json(const Darabonba::Json& j, UnSupportedRouteRules& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(rule, rule_);
          DARABONBA_PTR_FROM_JSON(unSupportedAnnotations, unSupportedAnnotations_);
        };
        UnSupportedRouteRules() = default ;
        UnSupportedRouteRules(const UnSupportedRouteRules &) = default ;
        UnSupportedRouteRules(UnSupportedRouteRules &&) = default ;
        UnSupportedRouteRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UnSupportedRouteRules() = default ;
        UnSupportedRouteRules& operator=(const UnSupportedRouteRules &) = default ;
        UnSupportedRouteRules& operator=(UnSupportedRouteRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->rule_ == nullptr && this->unSupportedAnnotations_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UnSupportedRouteRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline UnSupportedRouteRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // unSupportedAnnotations Field Functions 
        bool hasUnSupportedAnnotations() const { return this->unSupportedAnnotations_ != nullptr;};
        void deleteUnSupportedAnnotations() { this->unSupportedAnnotations_ = nullptr;};
        inline const vector<string> & getUnSupportedAnnotations() const { DARABONBA_PTR_GET_CONST(unSupportedAnnotations_, vector<string>) };
        inline vector<string> getUnSupportedAnnotations() { DARABONBA_PTR_GET(unSupportedAnnotations_, vector<string>) };
        inline UnSupportedRouteRules& setUnSupportedAnnotations(const vector<string> & unSupportedAnnotations) { DARABONBA_PTR_SET_VALUE(unSupportedAnnotations_, unSupportedAnnotations) };
        inline UnSupportedRouteRules& setUnSupportedAnnotations(vector<string> && unSupportedAnnotations) { DARABONBA_PTR_SET_RVALUE(unSupportedAnnotations_, unSupportedAnnotations) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> rule_ {};
        shared_ptr<vector<string>> unSupportedAnnotations_ {};
      };

      virtual bool empty() const override { return this->isSupported_ == nullptr
        && this->message_ == nullptr && this->success_ == nullptr && this->unSupportedRouteRules_ == nullptr; };
      // isSupported Field Functions 
      bool hasIsSupported() const { return this->isSupported_ != nullptr;};
      void deleteIsSupported() { this->isSupported_ = nullptr;};
      inline bool getIsSupported() const { DARABONBA_PTR_GET_DEFAULT(isSupported_, false) };
      inline Data& setIsSupported(bool isSupported) { DARABONBA_PTR_SET_VALUE(isSupported_, isSupported) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // unSupportedRouteRules Field Functions 
      bool hasUnSupportedRouteRules() const { return this->unSupportedRouteRules_ != nullptr;};
      void deleteUnSupportedRouteRules() { this->unSupportedRouteRules_ = nullptr;};
      inline const vector<Data::UnSupportedRouteRules> & getUnSupportedRouteRules() const { DARABONBA_PTR_GET_CONST(unSupportedRouteRules_, vector<Data::UnSupportedRouteRules>) };
      inline vector<Data::UnSupportedRouteRules> getUnSupportedRouteRules() { DARABONBA_PTR_GET(unSupportedRouteRules_, vector<Data::UnSupportedRouteRules>) };
      inline Data& setUnSupportedRouteRules(const vector<Data::UnSupportedRouteRules> & unSupportedRouteRules) { DARABONBA_PTR_SET_VALUE(unSupportedRouteRules_, unSupportedRouteRules) };
      inline Data& setUnSupportedRouteRules(vector<Data::UnSupportedRouteRules> && unSupportedRouteRules) { DARABONBA_PTR_SET_RVALUE(unSupportedRouteRules_, unSupportedRouteRules) };


    protected:
      shared_ptr<bool> isSupported_ {};
      shared_ptr<string> message_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<vector<Data::UnSupportedRouteRules>> unSupportedRouteRules_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyMigrationTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifyMigrationTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VerifyMigrationTaskResponseBody::Data) };
    inline VerifyMigrationTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VerifyMigrationTaskResponseBody::Data) };
    inline VerifyMigrationTaskResponseBody& setData(const VerifyMigrationTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifyMigrationTaskResponseBody& setData(VerifyMigrationTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyMigrationTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyMigrationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<VerifyMigrationTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
