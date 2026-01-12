// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ModifyCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCallbackResponseBody() = default ;
    ModifyCallbackResponseBody(const ModifyCallbackResponseBody &) = default ;
    ModifyCallbackResponseBody(ModifyCallbackResponseBody &&) = default ;
    ModifyCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCallbackResponseBody() = default ;
    ModifyCallbackResponseBody& operator=(const ModifyCallbackResponseBody &) = default ;
    ModifyCallbackResponseBody& operator=(ModifyCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline ModifyCallbackResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return result.
    shared_ptr<bool> data_ {};
    // Backend-assigned ID, used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
