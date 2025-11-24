// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPROTOCOLSUPPORT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPROTOCOLSUPPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport& obj) { 
      DARABONBA_PTR_TO_JSON(DubboFilterEnabled, dubboFilterEnabled_);
      DARABONBA_PTR_TO_JSON(MysqlFilterEnabled, mysqlFilterEnabled_);
      DARABONBA_PTR_TO_JSON(RedisFilterEnabled, redisFilterEnabled_);
      DARABONBA_PTR_TO_JSON(ThriftFilterEnabled, thriftFilterEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport& obj) { 
      DARABONBA_PTR_FROM_JSON(DubboFilterEnabled, dubboFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(MysqlFilterEnabled, mysqlFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(RedisFilterEnabled, redisFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(ThriftFilterEnabled, thriftFilterEnabled_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dubboFilterEnabled_ == nullptr
        && return this->mysqlFilterEnabled_ == nullptr && return this->redisFilterEnabled_ == nullptr && return this->thriftFilterEnabled_ == nullptr; };
    // dubboFilterEnabled Field Functions 
    bool hasDubboFilterEnabled() const { return this->dubboFilterEnabled_ != nullptr;};
    void deleteDubboFilterEnabled() { this->dubboFilterEnabled_ = nullptr;};
    inline bool dubboFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(dubboFilterEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport& setDubboFilterEnabled(bool dubboFilterEnabled) { DARABONBA_PTR_SET_VALUE(dubboFilterEnabled_, dubboFilterEnabled) };


    // mysqlFilterEnabled Field Functions 
    bool hasMysqlFilterEnabled() const { return this->mysqlFilterEnabled_ != nullptr;};
    void deleteMysqlFilterEnabled() { this->mysqlFilterEnabled_ = nullptr;};
    inline bool mysqlFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(mysqlFilterEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport& setMysqlFilterEnabled(bool mysqlFilterEnabled) { DARABONBA_PTR_SET_VALUE(mysqlFilterEnabled_, mysqlFilterEnabled) };


    // redisFilterEnabled Field Functions 
    bool hasRedisFilterEnabled() const { return this->redisFilterEnabled_ != nullptr;};
    void deleteRedisFilterEnabled() { this->redisFilterEnabled_ = nullptr;};
    inline bool redisFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(redisFilterEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport& setRedisFilterEnabled(bool redisFilterEnabled) { DARABONBA_PTR_SET_VALUE(redisFilterEnabled_, redisFilterEnabled) };


    // thriftFilterEnabled Field Functions 
    bool hasThriftFilterEnabled() const { return this->thriftFilterEnabled_ != nullptr;};
    void deleteThriftFilterEnabled() { this->thriftFilterEnabled_ = nullptr;};
    inline bool thriftFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(thriftFilterEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport& setThriftFilterEnabled(bool thriftFilterEnabled) { DARABONBA_PTR_SET_VALUE(thriftFilterEnabled_, thriftFilterEnabled) };


  protected:
    // Indicates whether Dubbo Filter is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> dubboFilterEnabled_ = nullptr;
    // Indicates whether MySQL Filter is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> mysqlFilterEnabled_ = nullptr;
    // Indicates whether Redis Filter is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> redisFilterEnabled_ = nullptr;
    // Indicates whether Thrift Filter is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> thriftFilterEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
