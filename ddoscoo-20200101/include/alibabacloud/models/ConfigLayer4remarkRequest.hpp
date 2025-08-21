// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER4REMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER4REMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigLayer4RemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer4RemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer4RemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
    };
    ConfigLayer4RemarkRequest() = default ;
    ConfigLayer4RemarkRequest(const ConfigLayer4RemarkRequest &) = default ;
    ConfigLayer4RemarkRequest(ConfigLayer4RemarkRequest &&) = default ;
    ConfigLayer4RemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer4RemarkRequest() = default ;
    ConfigLayer4RemarkRequest& operator=(const ConfigLayer4RemarkRequest &) = default ;
    ConfigLayer4RemarkRequest& operator=(ConfigLayer4RemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listeners_ != nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string listeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline ConfigLayer4RemarkRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


  protected:
    // The port forwarding rule that you want to manage.
    // 
    // This parameter is a string that consists of JSON arrays. Each element in a JSON array indicates a port forwarding rule. You can perform this operation only on one port forwarding rule at a time.
    // 
    // > You can call the [DescribeNetworkRules](https://help.aliyun.com/document_detail/157484.html) to query existing port forwarding rules.
    // 
    // Each port forwarding rule contains the following fields:
    // 
    // *   **InstanceId**: the ID of the instance. This field is required and must be of the STRING type.
    // *   **Protocol**: the forwarding protocol. This field is required and must be of the STRING type. Valid values: **tcp** and **udp**.
    // *   **FrontendPort**: the forwarding port. This field is required and must be of the INTEGER type.
    // *   **Remark**: the remarks of the port forwarding rule. This field is required and must be of the STRING type. The value can contain letters, digits, and some special characters, such as `, . + - * / _`. The value can be up to 200 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> listeners_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
