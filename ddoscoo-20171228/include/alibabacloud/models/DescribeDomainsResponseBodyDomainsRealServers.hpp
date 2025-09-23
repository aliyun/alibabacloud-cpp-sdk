// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSREALSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSREALSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainsResponseBodyDomainsRealServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomainsRealServers& obj) { 
      DARABONBA_PTR_TO_JSON(RealServer, realServer_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomainsRealServers& obj) { 
      DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
    };
    DescribeDomainsResponseBodyDomainsRealServers() = default ;
    DescribeDomainsResponseBodyDomainsRealServers(const DescribeDomainsResponseBodyDomainsRealServers &) = default ;
    DescribeDomainsResponseBodyDomainsRealServers(DescribeDomainsResponseBodyDomainsRealServers &&) = default ;
    DescribeDomainsResponseBodyDomainsRealServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomainsRealServers() = default ;
    DescribeDomainsResponseBodyDomainsRealServers& operator=(const DescribeDomainsResponseBodyDomainsRealServers &) = default ;
    DescribeDomainsResponseBodyDomainsRealServers& operator=(DescribeDomainsResponseBodyDomainsRealServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realServer_ != nullptr
        && this->rsType_ != nullptr; };
    // realServer Field Functions 
    bool hasRealServer() const { return this->realServer_ != nullptr;};
    void deleteRealServer() { this->realServer_ = nullptr;};
    inline string realServer() const { DARABONBA_PTR_GET_DEFAULT(realServer_, "") };
    inline DescribeDomainsResponseBodyDomainsRealServers& setRealServer(string realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t rsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline DescribeDomainsResponseBodyDomainsRealServers& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


  protected:
    std::shared_ptr<string> realServer_ = nullptr;
    std::shared_ptr<int32_t> rsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
