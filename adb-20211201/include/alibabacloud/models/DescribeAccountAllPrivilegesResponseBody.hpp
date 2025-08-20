// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccountAllPrivilegesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountAllPrivilegesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAllPrivilegesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAllPrivilegesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountAllPrivilegesResponseBody() = default ;
    DescribeAccountAllPrivilegesResponseBody(const DescribeAccountAllPrivilegesResponseBody &) = default ;
    DescribeAccountAllPrivilegesResponseBody(DescribeAccountAllPrivilegesResponseBody &&) = default ;
    DescribeAccountAllPrivilegesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAllPrivilegesResponseBody() = default ;
    DescribeAccountAllPrivilegesResponseBody& operator=(const DescribeAccountAllPrivilegesResponseBody &) = default ;
    DescribeAccountAllPrivilegesResponseBody& operator=(DescribeAccountAllPrivilegesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAccountAllPrivilegesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeAccountAllPrivilegesResponseBodyData) };
    inline DescribeAccountAllPrivilegesResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeAccountAllPrivilegesResponseBodyData) };
    inline DescribeAccountAllPrivilegesResponseBody& setData(const DescribeAccountAllPrivilegesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAccountAllPrivilegesResponseBody& setData(DescribeAccountAllPrivilegesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountAllPrivilegesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the permissions.
    std::shared_ptr<DescribeAccountAllPrivilegesResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
