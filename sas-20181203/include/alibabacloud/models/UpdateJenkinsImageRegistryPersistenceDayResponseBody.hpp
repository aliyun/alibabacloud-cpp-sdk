// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJENKINSIMAGEREGISTRYPERSISTENCEDAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJENKINSIMAGEREGISTRYPERSISTENCEDAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateJenkinsImageRegistryPersistenceDayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJenkinsImageRegistryPersistenceDayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJenkinsImageRegistryPersistenceDayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
    };
    UpdateJenkinsImageRegistryPersistenceDayResponseBody() = default ;
    UpdateJenkinsImageRegistryPersistenceDayResponseBody(const UpdateJenkinsImageRegistryPersistenceDayResponseBody &) = default ;
    UpdateJenkinsImageRegistryPersistenceDayResponseBody(UpdateJenkinsImageRegistryPersistenceDayResponseBody &&) = default ;
    UpdateJenkinsImageRegistryPersistenceDayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJenkinsImageRegistryPersistenceDayResponseBody() = default ;
    UpdateJenkinsImageRegistryPersistenceDayResponseBody& operator=(const UpdateJenkinsImageRegistryPersistenceDayResponseBody &) = default ;
    UpdateJenkinsImageRegistryPersistenceDayResponseBody& operator=(UpdateJenkinsImageRegistryPersistenceDayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->timeCost_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline UpdateJenkinsImageRegistryPersistenceDayResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateJenkinsImageRegistryPersistenceDayResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateJenkinsImageRegistryPersistenceDayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline int64_t getTimeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
    inline UpdateJenkinsImageRegistryPersistenceDayResponseBody& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The time consumed. Unit: seconds.
    shared_ptr<int64_t> timeCost_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
