// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYSERVICECONNADDRSSERVICECONNADDR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYSERVICECONNADDRSSERVICECONNADDR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr& obj) { 
      DARABONBA_PTR_TO_JSON(ConnAddrInfo, connAddrInfo_);
      DARABONBA_PTR_TO_JSON(ConnType, connType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnAddrInfo, connAddrInfo_);
      DARABONBA_PTR_FROM_JSON(ConnType, connType_);
    };
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr() = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr(const DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr &) = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr(DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr &&) = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr() = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr& operator=(const DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr &) = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr& operator=(DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connAddrInfo_ == nullptr
        && return this->connType_ == nullptr; };
    // connAddrInfo Field Functions 
    bool hasConnAddrInfo() const { return this->connAddrInfo_ != nullptr;};
    void deleteConnAddrInfo() { this->connAddrInfo_ = nullptr;};
    inline const Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo & connAddrInfo() const { DARABONBA_PTR_GET_CONST(connAddrInfo_, Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo) };
    inline Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo connAddrInfo() { DARABONBA_PTR_GET(connAddrInfo_, Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo) };
    inline DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr& setConnAddrInfo(const Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo & connAddrInfo) { DARABONBA_PTR_SET_VALUE(connAddrInfo_, connAddrInfo) };
    inline DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr& setConnAddrInfo(Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo && connAddrInfo) { DARABONBA_PTR_SET_RVALUE(connAddrInfo_, connAddrInfo) };


    // connType Field Functions 
    bool hasConnType() const { return this->connType_ != nullptr;};
    void deleteConnType() { this->connType_ = nullptr;};
    inline string connType() const { DARABONBA_PTR_GET_DEFAULT(connType_, "") };
    inline DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr& setConnType(string connType) { DARABONBA_PTR_SET_VALUE(connType_, connType) };


  protected:
    std::shared_ptr<Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo> connAddrInfo_ = nullptr;
    std::shared_ptr<string> connType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
