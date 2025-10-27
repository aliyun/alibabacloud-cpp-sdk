// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENPARTIALBUYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENPARTIALBUYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OpenPartialBuyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenPartialBuyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenPartialBuyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    OpenPartialBuyRequest() = default ;
    OpenPartialBuyRequest(const OpenPartialBuyRequest &) = default ;
    OpenPartialBuyRequest(OpenPartialBuyRequest &&) = default ;
    OpenPartialBuyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenPartialBuyRequest() = default ;
    OpenPartialBuyRequest& operator=(const OpenPartialBuyRequest &) = default ;
    OpenPartialBuyRequest& operator=(OpenPartialBuyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OpenPartialBuyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
