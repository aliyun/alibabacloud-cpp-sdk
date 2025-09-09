// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSSUPERACCOUNTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSSUPERACCOUNTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRdsSuperAccountInstancesResponseBodyDbInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRdsSuperAccountInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsSuperAccountInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsSuperAccountInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRdsSuperAccountInstancesResponseBody() = default ;
    DescribeRdsSuperAccountInstancesResponseBody(const DescribeRdsSuperAccountInstancesResponseBody &) = default ;
    DescribeRdsSuperAccountInstancesResponseBody(DescribeRdsSuperAccountInstancesResponseBody &&) = default ;
    DescribeRdsSuperAccountInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsSuperAccountInstancesResponseBody() = default ;
    DescribeRdsSuperAccountInstancesResponseBody& operator=(const DescribeRdsSuperAccountInstancesResponseBody &) = default ;
    DescribeRdsSuperAccountInstancesResponseBody& operator=(DescribeRdsSuperAccountInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstances_ != nullptr
        && this->requestId_ != nullptr; };
    // dbInstances Field Functions 
    bool hasDbInstances() const { return this->dbInstances_ != nullptr;};
    void deleteDbInstances() { this->dbInstances_ = nullptr;};
    inline const DescribeRdsSuperAccountInstancesResponseBodyDbInstances & dbInstances() const { DARABONBA_PTR_GET_CONST(dbInstances_, DescribeRdsSuperAccountInstancesResponseBodyDbInstances) };
    inline DescribeRdsSuperAccountInstancesResponseBodyDbInstances dbInstances() { DARABONBA_PTR_GET(dbInstances_, DescribeRdsSuperAccountInstancesResponseBodyDbInstances) };
    inline DescribeRdsSuperAccountInstancesResponseBody& setDbInstances(const DescribeRdsSuperAccountInstancesResponseBodyDbInstances & dbInstances) { DARABONBA_PTR_SET_VALUE(dbInstances_, dbInstances) };
    inline DescribeRdsSuperAccountInstancesResponseBody& setDbInstances(DescribeRdsSuperAccountInstancesResponseBodyDbInstances && dbInstances) { DARABONBA_PTR_SET_RVALUE(dbInstances_, dbInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsSuperAccountInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The privileged accounts.
    std::shared_ptr<DescribeRdsSuperAccountInstancesResponseBodyDbInstances> dbInstances_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
