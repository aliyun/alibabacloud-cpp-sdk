// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERSTATEUSERSLBDTOUSERSLBLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERSTATEUSERSLBDTOUSERSLBLISTENERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners& obj) { 
      DARABONBA_PTR_TO_JSON(ListenersStatus, listenersStatus_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenersStatus, listenersStatus_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners() = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners(const DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners &) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners(DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners &&) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners() = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners& operator=(const DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners &) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners& operator=(DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listenersStatus_ != nullptr
        && this->port_ != nullptr; };
    // listenersStatus Field Functions 
    bool hasListenersStatus() const { return this->listenersStatus_ != nullptr;};
    void deleteListenersStatus() { this->listenersStatus_ = nullptr;};
    inline string listenersStatus() const { DARABONBA_PTR_GET_DEFAULT(listenersStatus_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners& setListenersStatus(string listenersStatus) { DARABONBA_PTR_SET_VALUE(listenersStatus_, listenersStatus) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> listenersStatus_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
