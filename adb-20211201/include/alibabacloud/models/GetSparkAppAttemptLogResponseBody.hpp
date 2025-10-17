// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPATTEMPTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPATTEMPTLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSparkAppAttemptLogResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppAttemptLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppAttemptLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppAttemptLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkAppAttemptLogResponseBody() = default ;
    GetSparkAppAttemptLogResponseBody(const GetSparkAppAttemptLogResponseBody &) = default ;
    GetSparkAppAttemptLogResponseBody(GetSparkAppAttemptLogResponseBody &&) = default ;
    GetSparkAppAttemptLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppAttemptLogResponseBody() = default ;
    GetSparkAppAttemptLogResponseBody& operator=(const GetSparkAppAttemptLogResponseBody &) = default ;
    GetSparkAppAttemptLogResponseBody& operator=(GetSparkAppAttemptLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkAppAttemptLogResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetSparkAppAttemptLogResponseBodyData) };
    inline GetSparkAppAttemptLogResponseBodyData data() { DARABONBA_PTR_GET(data_, GetSparkAppAttemptLogResponseBodyData) };
    inline GetSparkAppAttemptLogResponseBody& setData(const GetSparkAppAttemptLogResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkAppAttemptLogResponseBody& setData(GetSparkAppAttemptLogResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkAppAttemptLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried log.
    std::shared_ptr<GetSparkAppAttemptLogResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
