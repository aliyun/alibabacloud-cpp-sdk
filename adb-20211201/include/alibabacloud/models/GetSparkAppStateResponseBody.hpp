// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPSTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPSTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSparkAppStateResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkAppStateResponseBody() = default ;
    GetSparkAppStateResponseBody(const GetSparkAppStateResponseBody &) = default ;
    GetSparkAppStateResponseBody(GetSparkAppStateResponseBody &&) = default ;
    GetSparkAppStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppStateResponseBody() = default ;
    GetSparkAppStateResponseBody& operator=(const GetSparkAppStateResponseBody &) = default ;
    GetSparkAppStateResponseBody& operator=(GetSparkAppStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkAppStateResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetSparkAppStateResponseBodyData) };
    inline GetSparkAppStateResponseBodyData data() { DARABONBA_PTR_GET(data_, GetSparkAppStateResponseBodyData) };
    inline GetSparkAppStateResponseBody& setData(const GetSparkAppStateResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkAppStateResponseBody& setData(GetSparkAppStateResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkAppStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<GetSparkAppStateResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
