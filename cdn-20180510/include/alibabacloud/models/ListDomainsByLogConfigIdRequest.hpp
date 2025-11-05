// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSBYLOGCONFIGIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSBYLOGCONFIGIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListDomainsByLogConfigIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsByLogConfigIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsByLogConfigIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
    };
    ListDomainsByLogConfigIdRequest() = default ;
    ListDomainsByLogConfigIdRequest(const ListDomainsByLogConfigIdRequest &) = default ;
    ListDomainsByLogConfigIdRequest(ListDomainsByLogConfigIdRequest &&) = default ;
    ListDomainsByLogConfigIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsByLogConfigIdRequest() = default ;
    ListDomainsByLogConfigIdRequest& operator=(const ListDomainsByLogConfigIdRequest &) = default ;
    ListDomainsByLogConfigIdRequest& operator=(ListDomainsByLogConfigIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ListDomainsByLogConfigIdRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


  protected:
    // The ID of the custom configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> configId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
