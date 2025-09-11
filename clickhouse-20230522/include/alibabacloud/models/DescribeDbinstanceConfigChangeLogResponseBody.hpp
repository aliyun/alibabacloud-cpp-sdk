// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGCHANGELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGCHANGELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceConfigChangeLogResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceConfigChangeLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConfigChangeLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConfigChangeLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceConfigChangeLogResponseBody() = default ;
    DescribeDBInstanceConfigChangeLogResponseBody(const DescribeDBInstanceConfigChangeLogResponseBody &) = default ;
    DescribeDBInstanceConfigChangeLogResponseBody(DescribeDBInstanceConfigChangeLogResponseBody &&) = default ;
    DescribeDBInstanceConfigChangeLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConfigChangeLogResponseBody() = default ;
    DescribeDBInstanceConfigChangeLogResponseBody& operator=(const DescribeDBInstanceConfigChangeLogResponseBody &) = default ;
    DescribeDBInstanceConfigChangeLogResponseBody& operator=(DescribeDBInstanceConfigChangeLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceConfigChangeLogResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceConfigChangeLogResponseBodyData) };
    inline DescribeDBInstanceConfigChangeLogResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeDBInstanceConfigChangeLogResponseBodyData) };
    inline DescribeDBInstanceConfigChangeLogResponseBody& setData(const DescribeDBInstanceConfigChangeLogResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceConfigChangeLogResponseBody& setData(DescribeDBInstanceConfigChangeLogResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceConfigChangeLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeDBInstanceConfigChangeLogResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
