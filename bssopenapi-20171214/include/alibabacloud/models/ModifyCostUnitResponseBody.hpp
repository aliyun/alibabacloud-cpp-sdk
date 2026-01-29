// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ModifyCostUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyCostUnitResponseBody() = default ;
    ModifyCostUnitResponseBody(const ModifyCostUnitResponseBody &) = default ;
    ModifyCostUnitResponseBody(ModifyCostUnitResponseBody &&) = default ;
    ModifyCostUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostUnitResponseBody() = default ;
    ModifyCostUnitResponseBody& operator=(const ModifyCostUnitResponseBody &) = default ;
    ModifyCostUnitResponseBody& operator=(ModifyCostUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
        DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_TO_JSON(UnitId, unitId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
        DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
        DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
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
      virtual bool empty() const override { return this->isSuccess_ == nullptr
        && this->ownerUid_ == nullptr && this->unitId_ == nullptr; };
      // isSuccess Field Functions 
      bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
      void deleteIsSuccess() { this->isSuccess_ = nullptr;};
      inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
      inline Data& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


      // ownerUid Field Functions 
      bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
      void deleteOwnerUid() { this->ownerUid_ = nullptr;};
      inline int64_t getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
      inline Data& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


      // unitId Field Functions 
      bool hasUnitId() const { return this->unitId_ != nullptr;};
      void deleteUnitId() { this->unitId_ = nullptr;};
      inline int64_t getUnitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
      inline Data& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


    protected:
      // Indicates whether the cost center was modified.
      shared_ptr<bool> isSuccess_ {};
      // The user ID of the cost center owner.
      shared_ptr<int64_t> ownerUid_ {};
      // The ID of the cost center.
      shared_ptr<int64_t> unitId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyCostUnitResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ModifyCostUnitResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ModifyCostUnitResponseBody::Data>) };
    inline vector<ModifyCostUnitResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ModifyCostUnitResponseBody::Data>) };
    inline ModifyCostUnitResponseBody& setData(const vector<ModifyCostUnitResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyCostUnitResponseBody& setData(vector<ModifyCostUnitResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyCostUnitResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCostUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyCostUnitResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<vector<ModifyCostUnitResponseBody::Data>> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
