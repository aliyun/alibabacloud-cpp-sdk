// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIdResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DescribeIdResponseBody() = default ;
    DescribeIdResponseBody(const DescribeIdResponseBody &) = default ;
    DescribeIdResponseBody(DescribeIdResponseBody &&) = default ;
    DescribeIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdResponseBody() = default ;
    DescribeIdResponseBody& operator=(const DescribeIdResponseBody &) = default ;
    DescribeIdResponseBody& operator=(DescribeIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeIdResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeIdResponseBodyData) };
    inline DescribeIdResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeIdResponseBodyData) };
    inline DescribeIdResponseBody& setData(const DescribeIdResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeIdResponseBody& setData(DescribeIdResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeIdResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
