// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups.hpp>
#include <alibabacloud/models/DescribeDBClusterAccessWhitelistResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAccessWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterSecurityGroups, DBClusterSecurityGroups_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterSecurityGroups, DBClusterSecurityGroups_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAccessWhitelistResponseBody() = default ;
    DescribeDBClusterAccessWhitelistResponseBody(const DescribeDBClusterAccessWhitelistResponseBody &) = default ;
    DescribeDBClusterAccessWhitelistResponseBody(DescribeDBClusterAccessWhitelistResponseBody &&) = default ;
    DescribeDBClusterAccessWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhitelistResponseBody() = default ;
    DescribeDBClusterAccessWhitelistResponseBody& operator=(const DescribeDBClusterAccessWhitelistResponseBody &) = default ;
    DescribeDBClusterAccessWhitelistResponseBody& operator=(DescribeDBClusterAccessWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterSecurityGroups_ == nullptr
        && return this->items_ == nullptr && return this->requestId_ == nullptr; };
    // DBClusterSecurityGroups Field Functions 
    bool hasDBClusterSecurityGroups() const { return this->DBClusterSecurityGroups_ != nullptr;};
    void deleteDBClusterSecurityGroups() { this->DBClusterSecurityGroups_ = nullptr;};
    inline const DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups & DBClusterSecurityGroups() const { DARABONBA_PTR_GET_CONST(DBClusterSecurityGroups_, DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups) };
    inline DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups DBClusterSecurityGroups() { DARABONBA_PTR_GET(DBClusterSecurityGroups_, DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setDBClusterSecurityGroups(const DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups & DBClusterSecurityGroups) { DARABONBA_PTR_SET_VALUE(DBClusterSecurityGroups_, DBClusterSecurityGroups) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setDBClusterSecurityGroups(DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups && DBClusterSecurityGroups) { DARABONBA_PTR_SET_RVALUE(DBClusterSecurityGroups_, DBClusterSecurityGroups) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBClusterAccessWhitelistResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBClusterAccessWhitelistResponseBodyItems) };
    inline DescribeDBClusterAccessWhitelistResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeDBClusterAccessWhitelistResponseBodyItems) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setItems(const DescribeDBClusterAccessWhitelistResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterAccessWhitelistResponseBody& setItems(DescribeDBClusterAccessWhitelistResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAccessWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Elastic Compute Service (ECS) security groups that are associated with the cluster.
    std::shared_ptr<DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups> DBClusterSecurityGroups_ = nullptr;
    // The details about the cluster.
    std::shared_ptr<DescribeDBClusterAccessWhitelistResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
