// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSPARKAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSPARKAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSparkAppResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SubmitSparkAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSparkAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSparkAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitSparkAppResponseBody() = default ;
    SubmitSparkAppResponseBody(const SubmitSparkAppResponseBody &) = default ;
    SubmitSparkAppResponseBody(SubmitSparkAppResponseBody &&) = default ;
    SubmitSparkAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSparkAppResponseBody() = default ;
    SubmitSparkAppResponseBody& operator=(const SubmitSparkAppResponseBody &) = default ;
    SubmitSparkAppResponseBody& operator=(SubmitSparkAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitSparkAppResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SubmitSparkAppResponseBodyData) };
    inline SubmitSparkAppResponseBodyData data() { DARABONBA_PTR_GET(data_, SubmitSparkAppResponseBodyData) };
    inline SubmitSparkAppResponseBody& setData(const SubmitSparkAppResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitSparkAppResponseBody& setData(SubmitSparkAppResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitSparkAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<SubmitSparkAppResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
