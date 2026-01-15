// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCREASEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INCREASEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class IncreaseInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncreaseInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, IncreaseInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    IncreaseInstanceResponseBody() = default ;
    IncreaseInstanceResponseBody(const IncreaseInstanceResponseBody &) = default ;
    IncreaseInstanceResponseBody(IncreaseInstanceResponseBody &&) = default ;
    IncreaseInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncreaseInstanceResponseBody() = default ;
    IncreaseInstanceResponseBody& operator=(const IncreaseInstanceResponseBody &) = default ;
    IncreaseInstanceResponseBody& operator=(IncreaseInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IncrementStatus, incrementStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IncrementStatus, incrementStatus_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->incrementStatus_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // incrementStatus Field Functions 
      bool hasIncrementStatus() const { return this->incrementStatus_ != nullptr;};
      void deleteIncrementStatus() { this->incrementStatus_ = nullptr;};
      inline string getIncrementStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementStatus_, "") };
      inline Data& setIncrementStatus(string incrementStatus) { DARABONBA_PTR_SET_VALUE(incrementStatus_, incrementStatus) };


    protected:
      // The ID of the task.
      shared_ptr<string> id_ {};
      // The status of the task.
      // 
      // *   PROCESSING: in progress
      // *   FAIL: failed
      // *   SUCCESS: successful
      shared_ptr<string> incrementStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const IncreaseInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, IncreaseInstanceResponseBody::Data) };
    inline IncreaseInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, IncreaseInstanceResponseBody::Data) };
    inline IncreaseInstanceResponseBody& setData(const IncreaseInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline IncreaseInstanceResponseBody& setData(IncreaseInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IncreaseInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IncreaseInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the task.
    shared_ptr<IncreaseInstanceResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
