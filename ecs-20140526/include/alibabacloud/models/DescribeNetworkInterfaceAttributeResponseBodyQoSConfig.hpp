// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYQOSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYQOSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyQoSConfigQoS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyQoSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyQoSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableQoS, enableQoS_);
      DARABONBA_PTR_TO_JSON(QoS, qoS_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyQoSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableQoS, enableQoS_);
      DARABONBA_PTR_FROM_JSON(QoS, qoS_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyQoSConfig() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyQoSConfig(const DescribeNetworkInterfaceAttributeResponseBodyQoSConfig &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyQoSConfig(DescribeNetworkInterfaceAttributeResponseBodyQoSConfig &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyQoSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyQoSConfig() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyQoSConfig& operator=(const DescribeNetworkInterfaceAttributeResponseBodyQoSConfig &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyQoSConfig& operator=(DescribeNetworkInterfaceAttributeResponseBodyQoSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableQoS_ == nullptr
        && return this->qoS_ == nullptr; };
    // enableQoS Field Functions 
    bool hasEnableQoS() const { return this->enableQoS_ != nullptr;};
    void deleteEnableQoS() { this->enableQoS_ = nullptr;};
    inline bool enableQoS() const { DARABONBA_PTR_GET_DEFAULT(enableQoS_, false) };
    inline DescribeNetworkInterfaceAttributeResponseBodyQoSConfig& setEnableQoS(bool enableQoS) { DARABONBA_PTR_SET_VALUE(enableQoS_, enableQoS) };


    // qoS Field Functions 
    bool hasQoS() const { return this->qoS_ != nullptr;};
    void deleteQoS() { this->qoS_ = nullptr;};
    inline const Models::DescribeNetworkInterfaceAttributeResponseBodyQoSConfigQoS & qoS() const { DARABONBA_PTR_GET_CONST(qoS_, Models::DescribeNetworkInterfaceAttributeResponseBodyQoSConfigQoS) };
    inline Models::DescribeNetworkInterfaceAttributeResponseBodyQoSConfigQoS qoS() { DARABONBA_PTR_GET(qoS_, Models::DescribeNetworkInterfaceAttributeResponseBodyQoSConfigQoS) };
    inline DescribeNetworkInterfaceAttributeResponseBodyQoSConfig& setQoS(const Models::DescribeNetworkInterfaceAttributeResponseBodyQoSConfigQoS & qoS) { DARABONBA_PTR_SET_VALUE(qoS_, qoS) };
    inline DescribeNetworkInterfaceAttributeResponseBodyQoSConfig& setQoS(Models::DescribeNetworkInterfaceAttributeResponseBodyQoSConfigQoS && qoS) { DARABONBA_PTR_SET_RVALUE(qoS_, qoS) };


  protected:
    std::shared_ptr<bool> enableQoS_ = nullptr;
    std::shared_ptr<Models::DescribeNetworkInterfaceAttributeResponseBodyQoSConfigQoS> qoS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
