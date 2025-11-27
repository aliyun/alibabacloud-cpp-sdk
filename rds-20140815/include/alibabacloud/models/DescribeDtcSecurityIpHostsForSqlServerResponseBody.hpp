// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDTCSecurityIpHostsForSQLServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDTCSecurityIpHostsForSQLServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IpHostPairNum, ipHostPairNum_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDTCSecurityIpHostsForSQLServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IpHostPairNum, ipHostPairNum_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDTCSecurityIpHostsForSQLServerResponseBody() = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody(const DescribeDTCSecurityIpHostsForSQLServerResponseBody &) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody(DescribeDTCSecurityIpHostsForSQLServerResponseBody &&) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDTCSecurityIpHostsForSQLServerResponseBody() = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody& operator=(const DescribeDTCSecurityIpHostsForSQLServerResponseBody &) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody& operator=(DescribeDTCSecurityIpHostsForSQLServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->ipHostPairNum_ == nullptr && return this->items_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ipHostPairNum Field Functions 
    bool hasIpHostPairNum() const { return this->ipHostPairNum_ != nullptr;};
    void deleteIpHostPairNum() { this->ipHostPairNum_ = nullptr;};
    inline string ipHostPairNum() const { DARABONBA_PTR_GET_DEFAULT(ipHostPairNum_, "") };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setIpHostPairNum(string ipHostPairNum) { DARABONBA_PTR_SET_VALUE(ipHostPairNum_, ipHostPairNum) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems) };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems) };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setItems(const DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setItems(DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The number of distributed transaction whitelists.
    std::shared_ptr<string> ipHostPairNum_ = nullptr;
    // Details of distributed transaction whitelists.
    std::shared_ptr<DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
