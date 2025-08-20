// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSPARKREPLSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTSPARKREPLSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartSparkReplSessionResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class StartSparkReplSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSparkReplSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartSparkReplSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartSparkReplSessionResponseBody() = default ;
    StartSparkReplSessionResponseBody(const StartSparkReplSessionResponseBody &) = default ;
    StartSparkReplSessionResponseBody(StartSparkReplSessionResponseBody &&) = default ;
    StartSparkReplSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSparkReplSessionResponseBody() = default ;
    StartSparkReplSessionResponseBody& operator=(const StartSparkReplSessionResponseBody &) = default ;
    StartSparkReplSessionResponseBody& operator=(StartSparkReplSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartSparkReplSessionResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, StartSparkReplSessionResponseBodyData) };
    inline StartSparkReplSessionResponseBodyData data() { DARABONBA_PTR_GET(data_, StartSparkReplSessionResponseBodyData) };
    inline StartSparkReplSessionResponseBody& setData(const StartSparkReplSessionResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartSparkReplSessionResponseBody& setData(StartSparkReplSessionResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartSparkReplSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<StartSparkReplSessionResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
