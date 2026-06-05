// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMINIAPPBINDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMINIAPPBINDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateMiniAppBindingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMiniAppBindingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMiniAppBindingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateMiniAppBindingResponseBody() = default ;
    UpdateMiniAppBindingResponseBody(const UpdateMiniAppBindingResponseBody &) = default ;
    UpdateMiniAppBindingResponseBody(UpdateMiniAppBindingResponseBody &&) = default ;
    UpdateMiniAppBindingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMiniAppBindingResponseBody() = default ;
    UpdateMiniAppBindingResponseBody& operator=(const UpdateMiniAppBindingResponseBody &) = default ;
    UpdateMiniAppBindingResponseBody& operator=(UpdateMiniAppBindingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->success_ == nullptr; };
      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateMiniAppBindingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateMiniAppBindingResponseBody::Data) };
    inline UpdateMiniAppBindingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateMiniAppBindingResponseBody::Data) };
    inline UpdateMiniAppBindingResponseBody& setData(const UpdateMiniAppBindingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateMiniAppBindingResponseBody& setData(UpdateMiniAppBindingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMiniAppBindingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateMiniAppBindingResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
