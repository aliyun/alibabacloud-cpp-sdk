// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTEREDLOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTEREDLOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRegisteredLocationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UpdateRegisteredLocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegisteredLocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegisteredLocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateRegisteredLocationResponseBody() = default ;
    UpdateRegisteredLocationResponseBody(const UpdateRegisteredLocationResponseBody &) = default ;
    UpdateRegisteredLocationResponseBody(UpdateRegisteredLocationResponseBody &&) = default ;
    UpdateRegisteredLocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegisteredLocationResponseBody() = default ;
    UpdateRegisteredLocationResponseBody& operator=(const UpdateRegisteredLocationResponseBody &) = default ;
    UpdateRegisteredLocationResponseBody& operator=(UpdateRegisteredLocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateRegisteredLocationResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateRegisteredLocationResponseBodyData) };
    inline UpdateRegisteredLocationResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateRegisteredLocationResponseBodyData) };
    inline UpdateRegisteredLocationResponseBody& setData(const UpdateRegisteredLocationResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateRegisteredLocationResponseBody& setData(UpdateRegisteredLocationResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRegisteredLocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateRegisteredLocationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    std::shared_ptr<UpdateRegisteredLocationResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
