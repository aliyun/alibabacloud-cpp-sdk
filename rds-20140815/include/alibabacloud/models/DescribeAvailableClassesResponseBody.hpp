// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableClassesResponseBodyDBInstanceClasses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableClassesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableClassesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceClasses, DBInstanceClasses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableClassesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceClasses, DBInstanceClasses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableClassesResponseBody() = default ;
    DescribeAvailableClassesResponseBody(const DescribeAvailableClassesResponseBody &) = default ;
    DescribeAvailableClassesResponseBody(DescribeAvailableClassesResponseBody &&) = default ;
    DescribeAvailableClassesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableClassesResponseBody() = default ;
    DescribeAvailableClassesResponseBody& operator=(const DescribeAvailableClassesResponseBody &) = default ;
    DescribeAvailableClassesResponseBody& operator=(DescribeAvailableClassesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceClasses_ == nullptr
        && return this->requestId_ == nullptr; };
    // DBInstanceClasses Field Functions 
    bool hasDBInstanceClasses() const { return this->DBInstanceClasses_ != nullptr;};
    void deleteDBInstanceClasses() { this->DBInstanceClasses_ = nullptr;};
    inline const vector<DescribeAvailableClassesResponseBodyDBInstanceClasses> & DBInstanceClasses() const { DARABONBA_PTR_GET_CONST(DBInstanceClasses_, vector<DescribeAvailableClassesResponseBodyDBInstanceClasses>) };
    inline vector<DescribeAvailableClassesResponseBodyDBInstanceClasses> DBInstanceClasses() { DARABONBA_PTR_GET(DBInstanceClasses_, vector<DescribeAvailableClassesResponseBodyDBInstanceClasses>) };
    inline DescribeAvailableClassesResponseBody& setDBInstanceClasses(const vector<DescribeAvailableClassesResponseBodyDBInstanceClasses> & DBInstanceClasses) { DARABONBA_PTR_SET_VALUE(DBInstanceClasses_, DBInstanceClasses) };
    inline DescribeAvailableClassesResponseBody& setDBInstanceClasses(vector<DescribeAvailableClassesResponseBodyDBInstanceClasses> && DBInstanceClasses) { DARABONBA_PTR_SET_RVALUE(DBInstanceClasses_, DBInstanceClasses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableClassesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the instance types available for the instance.
    std::shared_ptr<vector<DescribeAvailableClassesResponseBodyDBInstanceClasses>> DBInstanceClasses_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
