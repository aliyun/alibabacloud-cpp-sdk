// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETIMERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETIMERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTimerGroupResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeTimerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTimerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTimerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTimerGroupResponseBody() = default ;
    DescribeTimerGroupResponseBody(const DescribeTimerGroupResponseBody &) = default ;
    DescribeTimerGroupResponseBody(DescribeTimerGroupResponseBody &&) = default ;
    DescribeTimerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTimerGroupResponseBody() = default ;
    DescribeTimerGroupResponseBody& operator=(const DescribeTimerGroupResponseBody &) = default ;
    DescribeTimerGroupResponseBody& operator=(DescribeTimerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeTimerGroupResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeTimerGroupResponseBodyData) };
    inline DescribeTimerGroupResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeTimerGroupResponseBodyData) };
    inline DescribeTimerGroupResponseBody& setData(const DescribeTimerGroupResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTimerGroupResponseBody& setData(DescribeTimerGroupResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTimerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the scheduled task group.
    std::shared_ptr<DescribeTimerGroupResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
