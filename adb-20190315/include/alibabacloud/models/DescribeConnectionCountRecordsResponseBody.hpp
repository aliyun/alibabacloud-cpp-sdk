// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONNECTIONCOUNTRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONNECTIONCOUNTRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConnectionCountRecordsResponseBodyAccessIpRecords.hpp>
#include <alibabacloud/models/DescribeConnectionCountRecordsResponseBodyUserRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeConnectionCountRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConnectionCountRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessIpRecords, accessIpRecords_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserRecords, userRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConnectionCountRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessIpRecords, accessIpRecords_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserRecords, userRecords_);
    };
    DescribeConnectionCountRecordsResponseBody() = default ;
    DescribeConnectionCountRecordsResponseBody(const DescribeConnectionCountRecordsResponseBody &) = default ;
    DescribeConnectionCountRecordsResponseBody(DescribeConnectionCountRecordsResponseBody &&) = default ;
    DescribeConnectionCountRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConnectionCountRecordsResponseBody() = default ;
    DescribeConnectionCountRecordsResponseBody& operator=(const DescribeConnectionCountRecordsResponseBody &) = default ;
    DescribeConnectionCountRecordsResponseBody& operator=(DescribeConnectionCountRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessIpRecords_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->requestId_ == nullptr && return this->userRecords_ == nullptr; };
    // accessIpRecords Field Functions 
    bool hasAccessIpRecords() const { return this->accessIpRecords_ != nullptr;};
    void deleteAccessIpRecords() { this->accessIpRecords_ = nullptr;};
    inline const vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords> & accessIpRecords() const { DARABONBA_PTR_GET_CONST(accessIpRecords_, vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords>) };
    inline vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords> accessIpRecords() { DARABONBA_PTR_GET(accessIpRecords_, vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords>) };
    inline DescribeConnectionCountRecordsResponseBody& setAccessIpRecords(const vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords> & accessIpRecords) { DARABONBA_PTR_SET_VALUE(accessIpRecords_, accessIpRecords) };
    inline DescribeConnectionCountRecordsResponseBody& setAccessIpRecords(vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords> && accessIpRecords) { DARABONBA_PTR_SET_RVALUE(accessIpRecords_, accessIpRecords) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeConnectionCountRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConnectionCountRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userRecords Field Functions 
    bool hasUserRecords() const { return this->userRecords_ != nullptr;};
    void deleteUserRecords() { this->userRecords_ = nullptr;};
    inline const vector<DescribeConnectionCountRecordsResponseBodyUserRecords> & userRecords() const { DARABONBA_PTR_GET_CONST(userRecords_, vector<DescribeConnectionCountRecordsResponseBodyUserRecords>) };
    inline vector<DescribeConnectionCountRecordsResponseBodyUserRecords> userRecords() { DARABONBA_PTR_GET(userRecords_, vector<DescribeConnectionCountRecordsResponseBodyUserRecords>) };
    inline DescribeConnectionCountRecordsResponseBody& setUserRecords(const vector<DescribeConnectionCountRecordsResponseBodyUserRecords> & userRecords) { DARABONBA_PTR_SET_VALUE(userRecords_, userRecords) };
    inline DescribeConnectionCountRecordsResponseBody& setUserRecords(vector<DescribeConnectionCountRecordsResponseBodyUserRecords> && userRecords) { DARABONBA_PTR_SET_RVALUE(userRecords_, userRecords) };


  protected:
    // The queried client IP addresses.
    std::shared_ptr<vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords>> accessIpRecords_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried database accounts.
    std::shared_ptr<vector<DescribeConnectionCountRecordsResponseBodyUserRecords>> userRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
