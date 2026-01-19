// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSTATISTICSBYTODAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSTATISTICSBYTODAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeGroupStatisticsByTodayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupStatisticsByTodayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupStatisticsByTodayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeGroupStatisticsByTodayResponseBody() = default ;
    DescribeGroupStatisticsByTodayResponseBody(const DescribeGroupStatisticsByTodayResponseBody &) = default ;
    DescribeGroupStatisticsByTodayResponseBody(DescribeGroupStatisticsByTodayResponseBody &&) = default ;
    DescribeGroupStatisticsByTodayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupStatisticsByTodayResponseBody() = default ;
    DescribeGroupStatisticsByTodayResponseBody& operator=(const DescribeGroupStatisticsByTodayResponseBody &) = default ;
    DescribeGroupStatisticsByTodayResponseBody& operator=(DescribeGroupStatisticsByTodayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupStatisticsByTodayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline DescribeGroupStatisticsByTodayResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned data.
    shared_ptr<bool> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
