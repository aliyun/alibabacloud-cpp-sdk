// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJENKINSIMAGEREGISTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJENKINSIMAGEREGISTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJenkinsImageRegistryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateJenkinsImageRegistryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJenkinsImageRegistryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJenkinsImageRegistryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
    };
    CreateJenkinsImageRegistryResponseBody() = default ;
    CreateJenkinsImageRegistryResponseBody(const CreateJenkinsImageRegistryResponseBody &) = default ;
    CreateJenkinsImageRegistryResponseBody(CreateJenkinsImageRegistryResponseBody &&) = default ;
    CreateJenkinsImageRegistryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJenkinsImageRegistryResponseBody() = default ;
    CreateJenkinsImageRegistryResponseBody& operator=(const CreateJenkinsImageRegistryResponseBody &) = default ;
    CreateJenkinsImageRegistryResponseBody& operator=(CreateJenkinsImageRegistryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr && return this->timeCost_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateJenkinsImageRegistryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateJenkinsImageRegistryResponseBodyData) };
    inline CreateJenkinsImageRegistryResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateJenkinsImageRegistryResponseBodyData) };
    inline CreateJenkinsImageRegistryResponseBody& setData(const CreateJenkinsImageRegistryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateJenkinsImageRegistryResponseBody& setData(CreateJenkinsImageRegistryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateJenkinsImageRegistryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateJenkinsImageRegistryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline int64_t timeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
    inline CreateJenkinsImageRegistryResponseBody& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    // The result of creating the image repository.
    std::shared_ptr<CreateJenkinsImageRegistryResponseBodyData> data_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time consumed. Unit: seconds.
    std::shared_ptr<int64_t> timeCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
