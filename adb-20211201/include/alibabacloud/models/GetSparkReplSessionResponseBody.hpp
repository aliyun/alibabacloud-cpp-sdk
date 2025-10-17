// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKREPLSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKREPLSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSparkReplSessionResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkReplSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkReplSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkReplSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkReplSessionResponseBody() = default ;
    GetSparkReplSessionResponseBody(const GetSparkReplSessionResponseBody &) = default ;
    GetSparkReplSessionResponseBody(GetSparkReplSessionResponseBody &&) = default ;
    GetSparkReplSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkReplSessionResponseBody() = default ;
    GetSparkReplSessionResponseBody& operator=(const GetSparkReplSessionResponseBody &) = default ;
    GetSparkReplSessionResponseBody& operator=(GetSparkReplSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkReplSessionResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetSparkReplSessionResponseBodyData) };
    inline GetSparkReplSessionResponseBodyData data() { DARABONBA_PTR_GET(data_, GetSparkReplSessionResponseBodyData) };
    inline GetSparkReplSessionResponseBody& setData(const GetSparkReplSessionResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkReplSessionResponseBody& setData(GetSparkReplSessionResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkReplSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<GetSparkReplSessionResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
