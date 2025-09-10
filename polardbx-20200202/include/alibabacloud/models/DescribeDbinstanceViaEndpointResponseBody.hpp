// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEVIAENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEVIAENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceViaEndpointResponseBodyDBInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceViaEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceViaEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceViaEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceViaEndpointResponseBody() = default ;
    DescribeDBInstanceViaEndpointResponseBody(const DescribeDBInstanceViaEndpointResponseBody &) = default ;
    DescribeDBInstanceViaEndpointResponseBody(DescribeDBInstanceViaEndpointResponseBody &&) = default ;
    DescribeDBInstanceViaEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceViaEndpointResponseBody() = default ;
    DescribeDBInstanceViaEndpointResponseBody& operator=(const DescribeDBInstanceViaEndpointResponseBody &) = default ;
    DescribeDBInstanceViaEndpointResponseBody& operator=(DescribeDBInstanceViaEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstance_ != nullptr
        && this->requestId_ != nullptr; };
    // DBInstance Field Functions 
    bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
    void deleteDBInstance() { this->DBInstance_ = nullptr;};
    inline const DescribeDBInstanceViaEndpointResponseBodyDBInstance & DBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, DescribeDBInstanceViaEndpointResponseBodyDBInstance) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance DBInstance() { DARABONBA_PTR_GET(DBInstance_, DescribeDBInstanceViaEndpointResponseBodyDBInstance) };
    inline DescribeDBInstanceViaEndpointResponseBody& setDBInstance(const DescribeDBInstanceViaEndpointResponseBodyDBInstance & DBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, DBInstance) };
    inline DescribeDBInstanceViaEndpointResponseBody& setDBInstance(DescribeDBInstanceViaEndpointResponseBodyDBInstance && DBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, DBInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeDBInstanceViaEndpointResponseBodyDBInstance> DBInstance_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
