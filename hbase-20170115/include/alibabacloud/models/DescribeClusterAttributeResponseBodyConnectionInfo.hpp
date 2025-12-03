// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYCONNECTIONINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERATTRIBUTERESPONSEBODYCONNECTIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList.hpp>
#include <alibabacloud/models/DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList.hpp>
#include <alibabacloud/models/DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList.hpp>
#include <alibabacloud/models/DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterAttributeResponseBodyConnectionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAttributeResponseBodyConnectionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HaRestConnectionString, haRestConnectionString_);
      DARABONBA_PTR_TO_JSON(HaRestPort, haRestPort_);
      DARABONBA_PTR_TO_JSON(HaThriftConnectionString, haThriftConnectionString_);
      DARABONBA_PTR_TO_JSON(HaThriftPort, haThriftPort_);
      DARABONBA_PTR_TO_JSON(ThriftConnectionString, thriftConnectionString_);
      DARABONBA_PTR_TO_JSON(ThriftPort, thriftPort_);
      DARABONBA_PTR_TO_JSON(UIProxyConnectionString, UIProxyConnectionString_);
      DARABONBA_PTR_TO_JSON(ZKClassicConnectionStringList, ZKClassicConnectionStringList_);
      DARABONBA_PTR_TO_JSON(ZKConnectionStringList, ZKConnectionStringList_);
      DARABONBA_PTR_TO_JSON(ZKInnerConnectionStringList, ZKInnerConnectionStringList_);
      DARABONBA_PTR_TO_JSON(ZKPort, ZKPort_);
      DARABONBA_PTR_TO_JSON(ZKPublicConnectionStringList, ZKPublicConnectionStringList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAttributeResponseBodyConnectionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HaRestConnectionString, haRestConnectionString_);
      DARABONBA_PTR_FROM_JSON(HaRestPort, haRestPort_);
      DARABONBA_PTR_FROM_JSON(HaThriftConnectionString, haThriftConnectionString_);
      DARABONBA_PTR_FROM_JSON(HaThriftPort, haThriftPort_);
      DARABONBA_PTR_FROM_JSON(ThriftConnectionString, thriftConnectionString_);
      DARABONBA_PTR_FROM_JSON(ThriftPort, thriftPort_);
      DARABONBA_PTR_FROM_JSON(UIProxyConnectionString, UIProxyConnectionString_);
      DARABONBA_PTR_FROM_JSON(ZKClassicConnectionStringList, ZKClassicConnectionStringList_);
      DARABONBA_PTR_FROM_JSON(ZKConnectionStringList, ZKConnectionStringList_);
      DARABONBA_PTR_FROM_JSON(ZKInnerConnectionStringList, ZKInnerConnectionStringList_);
      DARABONBA_PTR_FROM_JSON(ZKPort, ZKPort_);
      DARABONBA_PTR_FROM_JSON(ZKPublicConnectionStringList, ZKPublicConnectionStringList_);
    };
    DescribeClusterAttributeResponseBodyConnectionInfo() = default ;
    DescribeClusterAttributeResponseBodyConnectionInfo(const DescribeClusterAttributeResponseBodyConnectionInfo &) = default ;
    DescribeClusterAttributeResponseBodyConnectionInfo(DescribeClusterAttributeResponseBodyConnectionInfo &&) = default ;
    DescribeClusterAttributeResponseBodyConnectionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAttributeResponseBodyConnectionInfo() = default ;
    DescribeClusterAttributeResponseBodyConnectionInfo& operator=(const DescribeClusterAttributeResponseBodyConnectionInfo &) = default ;
    DescribeClusterAttributeResponseBodyConnectionInfo& operator=(DescribeClusterAttributeResponseBodyConnectionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->haRestConnectionString_ == nullptr
        && return this->haRestPort_ == nullptr && return this->haThriftConnectionString_ == nullptr && return this->haThriftPort_ == nullptr && return this->thriftConnectionString_ == nullptr && return this->thriftPort_ == nullptr
        && return this->UIProxyConnectionString_ == nullptr && return this->ZKClassicConnectionStringList_ == nullptr && return this->ZKConnectionStringList_ == nullptr && return this->ZKInnerConnectionStringList_ == nullptr && return this->ZKPort_ == nullptr
        && return this->ZKPublicConnectionStringList_ == nullptr; };
    // haRestConnectionString Field Functions 
    bool hasHaRestConnectionString() const { return this->haRestConnectionString_ != nullptr;};
    void deleteHaRestConnectionString() { this->haRestConnectionString_ = nullptr;};
    inline string haRestConnectionString() const { DARABONBA_PTR_GET_DEFAULT(haRestConnectionString_, "") };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setHaRestConnectionString(string haRestConnectionString) { DARABONBA_PTR_SET_VALUE(haRestConnectionString_, haRestConnectionString) };


    // haRestPort Field Functions 
    bool hasHaRestPort() const { return this->haRestPort_ != nullptr;};
    void deleteHaRestPort() { this->haRestPort_ = nullptr;};
    inline string haRestPort() const { DARABONBA_PTR_GET_DEFAULT(haRestPort_, "") };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setHaRestPort(string haRestPort) { DARABONBA_PTR_SET_VALUE(haRestPort_, haRestPort) };


    // haThriftConnectionString Field Functions 
    bool hasHaThriftConnectionString() const { return this->haThriftConnectionString_ != nullptr;};
    void deleteHaThriftConnectionString() { this->haThriftConnectionString_ = nullptr;};
    inline string haThriftConnectionString() const { DARABONBA_PTR_GET_DEFAULT(haThriftConnectionString_, "") };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setHaThriftConnectionString(string haThriftConnectionString) { DARABONBA_PTR_SET_VALUE(haThriftConnectionString_, haThriftConnectionString) };


    // haThriftPort Field Functions 
    bool hasHaThriftPort() const { return this->haThriftPort_ != nullptr;};
    void deleteHaThriftPort() { this->haThriftPort_ = nullptr;};
    inline string haThriftPort() const { DARABONBA_PTR_GET_DEFAULT(haThriftPort_, "") };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setHaThriftPort(string haThriftPort) { DARABONBA_PTR_SET_VALUE(haThriftPort_, haThriftPort) };


    // thriftConnectionString Field Functions 
    bool hasThriftConnectionString() const { return this->thriftConnectionString_ != nullptr;};
    void deleteThriftConnectionString() { this->thriftConnectionString_ = nullptr;};
    inline string thriftConnectionString() const { DARABONBA_PTR_GET_DEFAULT(thriftConnectionString_, "") };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setThriftConnectionString(string thriftConnectionString) { DARABONBA_PTR_SET_VALUE(thriftConnectionString_, thriftConnectionString) };


    // thriftPort Field Functions 
    bool hasThriftPort() const { return this->thriftPort_ != nullptr;};
    void deleteThriftPort() { this->thriftPort_ = nullptr;};
    inline string thriftPort() const { DARABONBA_PTR_GET_DEFAULT(thriftPort_, "") };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setThriftPort(string thriftPort) { DARABONBA_PTR_SET_VALUE(thriftPort_, thriftPort) };


    // UIProxyConnectionString Field Functions 
    bool hasUIProxyConnectionString() const { return this->UIProxyConnectionString_ != nullptr;};
    void deleteUIProxyConnectionString() { this->UIProxyConnectionString_ = nullptr;};
    inline string UIProxyConnectionString() const { DARABONBA_PTR_GET_DEFAULT(UIProxyConnectionString_, "") };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setUIProxyConnectionString(string UIProxyConnectionString) { DARABONBA_PTR_SET_VALUE(UIProxyConnectionString_, UIProxyConnectionString) };


    // ZKClassicConnectionStringList Field Functions 
    bool hasZKClassicConnectionStringList() const { return this->ZKClassicConnectionStringList_ != nullptr;};
    void deleteZKClassicConnectionStringList() { this->ZKClassicConnectionStringList_ = nullptr;};
    inline const Models::DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList & ZKClassicConnectionStringList() const { DARABONBA_PTR_GET_CONST(ZKClassicConnectionStringList_, Models::DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList) };
    inline Models::DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList ZKClassicConnectionStringList() { DARABONBA_PTR_GET(ZKClassicConnectionStringList_, Models::DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKClassicConnectionStringList(const Models::DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList & ZKClassicConnectionStringList) { DARABONBA_PTR_SET_VALUE(ZKClassicConnectionStringList_, ZKClassicConnectionStringList) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKClassicConnectionStringList(Models::DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList && ZKClassicConnectionStringList) { DARABONBA_PTR_SET_RVALUE(ZKClassicConnectionStringList_, ZKClassicConnectionStringList) };


    // ZKConnectionStringList Field Functions 
    bool hasZKConnectionStringList() const { return this->ZKConnectionStringList_ != nullptr;};
    void deleteZKConnectionStringList() { this->ZKConnectionStringList_ = nullptr;};
    inline const Models::DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList & ZKConnectionStringList() const { DARABONBA_PTR_GET_CONST(ZKConnectionStringList_, Models::DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList) };
    inline Models::DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList ZKConnectionStringList() { DARABONBA_PTR_GET(ZKConnectionStringList_, Models::DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKConnectionStringList(const Models::DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList & ZKConnectionStringList) { DARABONBA_PTR_SET_VALUE(ZKConnectionStringList_, ZKConnectionStringList) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKConnectionStringList(Models::DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList && ZKConnectionStringList) { DARABONBA_PTR_SET_RVALUE(ZKConnectionStringList_, ZKConnectionStringList) };


    // ZKInnerConnectionStringList Field Functions 
    bool hasZKInnerConnectionStringList() const { return this->ZKInnerConnectionStringList_ != nullptr;};
    void deleteZKInnerConnectionStringList() { this->ZKInnerConnectionStringList_ = nullptr;};
    inline const Models::DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList & ZKInnerConnectionStringList() const { DARABONBA_PTR_GET_CONST(ZKInnerConnectionStringList_, Models::DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList) };
    inline Models::DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList ZKInnerConnectionStringList() { DARABONBA_PTR_GET(ZKInnerConnectionStringList_, Models::DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKInnerConnectionStringList(const Models::DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList & ZKInnerConnectionStringList) { DARABONBA_PTR_SET_VALUE(ZKInnerConnectionStringList_, ZKInnerConnectionStringList) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKInnerConnectionStringList(Models::DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList && ZKInnerConnectionStringList) { DARABONBA_PTR_SET_RVALUE(ZKInnerConnectionStringList_, ZKInnerConnectionStringList) };


    // ZKPort Field Functions 
    bool hasZKPort() const { return this->ZKPort_ != nullptr;};
    void deleteZKPort() { this->ZKPort_ = nullptr;};
    inline int32_t ZKPort() const { DARABONBA_PTR_GET_DEFAULT(ZKPort_, 0) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKPort(int32_t ZKPort) { DARABONBA_PTR_SET_VALUE(ZKPort_, ZKPort) };


    // ZKPublicConnectionStringList Field Functions 
    bool hasZKPublicConnectionStringList() const { return this->ZKPublicConnectionStringList_ != nullptr;};
    void deleteZKPublicConnectionStringList() { this->ZKPublicConnectionStringList_ = nullptr;};
    inline const Models::DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList & ZKPublicConnectionStringList() const { DARABONBA_PTR_GET_CONST(ZKPublicConnectionStringList_, Models::DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList) };
    inline Models::DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList ZKPublicConnectionStringList() { DARABONBA_PTR_GET(ZKPublicConnectionStringList_, Models::DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKPublicConnectionStringList(const Models::DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList & ZKPublicConnectionStringList) { DARABONBA_PTR_SET_VALUE(ZKPublicConnectionStringList_, ZKPublicConnectionStringList) };
    inline DescribeClusterAttributeResponseBodyConnectionInfo& setZKPublicConnectionStringList(Models::DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList && ZKPublicConnectionStringList) { DARABONBA_PTR_SET_RVALUE(ZKPublicConnectionStringList_, ZKPublicConnectionStringList) };


  protected:
    std::shared_ptr<string> haRestConnectionString_ = nullptr;
    std::shared_ptr<string> haRestPort_ = nullptr;
    std::shared_ptr<string> haThriftConnectionString_ = nullptr;
    std::shared_ptr<string> haThriftPort_ = nullptr;
    std::shared_ptr<string> thriftConnectionString_ = nullptr;
    std::shared_ptr<string> thriftPort_ = nullptr;
    std::shared_ptr<string> UIProxyConnectionString_ = nullptr;
    std::shared_ptr<Models::DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList> ZKClassicConnectionStringList_ = nullptr;
    std::shared_ptr<Models::DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList> ZKConnectionStringList_ = nullptr;
    std::shared_ptr<Models::DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList> ZKInnerConnectionStringList_ = nullptr;
    std::shared_ptr<int32_t> ZKPort_ = nullptr;
    std::shared_ptr<Models::DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList> ZKPublicConnectionStringList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
