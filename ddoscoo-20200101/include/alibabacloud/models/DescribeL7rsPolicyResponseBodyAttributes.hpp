// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7RSPOLICYRESPONSEBODYATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7RSPOLICYRESPONSEBODYATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeL7RsPolicyResponseBodyAttributesAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7RsPolicyResponseBodyAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7RsPolicyResponseBodyAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Attribute, attribute_);
      DARABONBA_PTR_TO_JSON(RealServer, realServer_);
      DARABONBA_PTR_TO_JSON(RsType, rsType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7RsPolicyResponseBodyAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
      DARABONBA_PTR_FROM_JSON(RsType, rsType_);
    };
    DescribeL7RsPolicyResponseBodyAttributes() = default ;
    DescribeL7RsPolicyResponseBodyAttributes(const DescribeL7RsPolicyResponseBodyAttributes &) = default ;
    DescribeL7RsPolicyResponseBodyAttributes(DescribeL7RsPolicyResponseBodyAttributes &&) = default ;
    DescribeL7RsPolicyResponseBodyAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7RsPolicyResponseBodyAttributes() = default ;
    DescribeL7RsPolicyResponseBodyAttributes& operator=(const DescribeL7RsPolicyResponseBodyAttributes &) = default ;
    DescribeL7RsPolicyResponseBodyAttributes& operator=(DescribeL7RsPolicyResponseBodyAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attribute_ != nullptr
        && this->realServer_ != nullptr && this->rsType_ != nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline const Models::DescribeL7RsPolicyResponseBodyAttributesAttribute & attribute() const { DARABONBA_PTR_GET_CONST(attribute_, Models::DescribeL7RsPolicyResponseBodyAttributesAttribute) };
    inline Models::DescribeL7RsPolicyResponseBodyAttributesAttribute attribute() { DARABONBA_PTR_GET(attribute_, Models::DescribeL7RsPolicyResponseBodyAttributesAttribute) };
    inline DescribeL7RsPolicyResponseBodyAttributes& setAttribute(const Models::DescribeL7RsPolicyResponseBodyAttributesAttribute & attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };
    inline DescribeL7RsPolicyResponseBodyAttributes& setAttribute(Models::DescribeL7RsPolicyResponseBodyAttributesAttribute && attribute) { DARABONBA_PTR_SET_RVALUE(attribute_, attribute) };


    // realServer Field Functions 
    bool hasRealServer() const { return this->realServer_ != nullptr;};
    void deleteRealServer() { this->realServer_ = nullptr;};
    inline string realServer() const { DARABONBA_PTR_GET_DEFAULT(realServer_, "") };
    inline DescribeL7RsPolicyResponseBodyAttributes& setRealServer(string realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };


    // rsType Field Functions 
    bool hasRsType() const { return this->rsType_ != nullptr;};
    void deleteRsType() { this->rsType_ = nullptr;};
    inline int32_t rsType() const { DARABONBA_PTR_GET_DEFAULT(rsType_, 0) };
    inline DescribeL7RsPolicyResponseBodyAttributes& setRsType(int32_t rsType) { DARABONBA_PTR_SET_VALUE(rsType_, rsType) };


  protected:
    // The parameters for back-to-origin settings.
    std::shared_ptr<Models::DescribeL7RsPolicyResponseBodyAttributesAttribute> attribute_ = nullptr;
    // The address of the origin server.
    std::shared_ptr<string> realServer_ = nullptr;
    // The address type of the origin server. Valid values:
    // 
    // *   **0**: IP address
    // *   **1**: domain name
    std::shared_ptr<int32_t> rsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
