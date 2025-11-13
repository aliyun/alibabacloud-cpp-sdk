// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityIPListResponseBodyGroupItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeSecurityIPListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupItems, groupItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSecurityIPListResponseBody() = default ;
    DescribeSecurityIPListResponseBody(const DescribeSecurityIPListResponseBody &) = default ;
    DescribeSecurityIPListResponseBody(DescribeSecurityIPListResponseBody &&) = default ;
    DescribeSecurityIPListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPListResponseBody() = default ;
    DescribeSecurityIPListResponseBody& operator=(const DescribeSecurityIPListResponseBody &) = default ;
    DescribeSecurityIPListResponseBody& operator=(DescribeSecurityIPListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->groupItems_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeSecurityIPListResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupItems Field Functions 
    bool hasGroupItems() const { return this->groupItems_ != nullptr;};
    void deleteGroupItems() { this->groupItems_ = nullptr;};
    inline const vector<DescribeSecurityIPListResponseBodyGroupItems> & groupItems() const { DARABONBA_PTR_GET_CONST(groupItems_, vector<DescribeSecurityIPListResponseBodyGroupItems>) };
    inline vector<DescribeSecurityIPListResponseBodyGroupItems> groupItems() { DARABONBA_PTR_GET(groupItems_, vector<DescribeSecurityIPListResponseBodyGroupItems>) };
    inline DescribeSecurityIPListResponseBody& setGroupItems(const vector<DescribeSecurityIPListResponseBodyGroupItems> & groupItems) { DARABONBA_PTR_SET_VALUE(groupItems_, groupItems) };
    inline DescribeSecurityIPListResponseBody& setGroupItems(vector<DescribeSecurityIPListResponseBodyGroupItems> && groupItems) { DARABONBA_PTR_SET_RVALUE(groupItems_, groupItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityIPListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The details about each IP address whitelist returned.
    std::shared_ptr<vector<DescribeSecurityIPListResponseBodyGroupItems>> groupItems_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
