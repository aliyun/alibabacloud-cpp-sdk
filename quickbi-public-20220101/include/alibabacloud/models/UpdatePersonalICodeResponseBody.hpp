// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPERSONALICODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPERSONALICODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdatePersonalICodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePersonalICodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePersonalICodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdatePersonalICodeResponseBody() = default ;
    UpdatePersonalICodeResponseBody(const UpdatePersonalICodeResponseBody &) = default ;
    UpdatePersonalICodeResponseBody(UpdatePersonalICodeResponseBody &&) = default ;
    UpdatePersonalICodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePersonalICodeResponseBody() = default ;
    UpdatePersonalICodeResponseBody& operator=(const UpdatePersonalICodeResponseBody &) = default ;
    UpdatePersonalICodeResponseBody& operator=(UpdatePersonalICodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Icode, icode_);
        DARABONBA_PTR_TO_JSON(IcodeKey, icodeKey_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Icode, icode_);
        DARABONBA_PTR_FROM_JSON(IcodeKey, icodeKey_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->icode_ == nullptr
        && this->icodeKey_ == nullptr && this->type_ == nullptr; };
      // icode Field Functions 
      bool hasIcode() const { return this->icode_ != nullptr;};
      void deleteIcode() { this->icode_ = nullptr;};
      inline string getIcode() const { DARABONBA_PTR_GET_DEFAULT(icode_, "") };
      inline Result& setIcode(string icode) { DARABONBA_PTR_SET_VALUE(icode_, icode) };


      // icodeKey Field Functions 
      bool hasIcodeKey() const { return this->icodeKey_ != nullptr;};
      void deleteIcodeKey() { this->icodeKey_ = nullptr;};
      inline string getIcodeKey() const { DARABONBA_PTR_GET_DEFAULT(icodeKey_, "") };
      inline Result& setIcodeKey(string icodeKey) { DARABONBA_PTR_SET_VALUE(icodeKey_, icodeKey) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Result& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // SK
      shared_ptr<string> icode_ {};
      // AK
      shared_ptr<string> icodeKey_ {};
      // The AK type. Currently, only the value 1 is supported, which indicates a personal AK.
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePersonalICodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdatePersonalICodeResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdatePersonalICodeResponseBody::Result) };
    inline UpdatePersonalICodeResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdatePersonalICodeResponseBody::Result) };
    inline UpdatePersonalICodeResponseBody& setResult(const UpdatePersonalICodeResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdatePersonalICodeResponseBody& setResult(UpdatePersonalICodeResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdatePersonalICodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The AK model.
    shared_ptr<UpdatePersonalICodeResponseBody::Result> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: The request is successful.
    // - false: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
