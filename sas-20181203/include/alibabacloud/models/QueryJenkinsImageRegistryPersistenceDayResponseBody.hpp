// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJENKINSIMAGEREGISTRYPERSISTENCEDAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYJENKINSIMAGEREGISTRYPERSISTENCEDAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryJenkinsImageRegistryPersistenceDayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJenkinsImageRegistryPersistenceDayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJenkinsImageRegistryPersistenceDayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
    };
    QueryJenkinsImageRegistryPersistenceDayResponseBody() = default ;
    QueryJenkinsImageRegistryPersistenceDayResponseBody(const QueryJenkinsImageRegistryPersistenceDayResponseBody &) = default ;
    QueryJenkinsImageRegistryPersistenceDayResponseBody(QueryJenkinsImageRegistryPersistenceDayResponseBody &&) = default ;
    QueryJenkinsImageRegistryPersistenceDayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJenkinsImageRegistryPersistenceDayResponseBody() = default ;
    QueryJenkinsImageRegistryPersistenceDayResponseBody& operator=(const QueryJenkinsImageRegistryPersistenceDayResponseBody &) = default ;
    QueryJenkinsImageRegistryPersistenceDayResponseBody& operator=(QueryJenkinsImageRegistryPersistenceDayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->httpStatusCode_ != nullptr && this->requestId_ != nullptr && this->timeCost_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int32_t data() const { DARABONBA_PTR_GET_DEFAULT(data_, 0) };
    inline QueryJenkinsImageRegistryPersistenceDayResponseBody& setData(int32_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryJenkinsImageRegistryPersistenceDayResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryJenkinsImageRegistryPersistenceDayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline int64_t timeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
    inline QueryJenkinsImageRegistryPersistenceDayResponseBody& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    // The retention period. Unit: days.
    std::shared_ptr<int32_t> data_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time consumed. Unit: seconds.
    std::shared_ptr<int64_t> timeCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
