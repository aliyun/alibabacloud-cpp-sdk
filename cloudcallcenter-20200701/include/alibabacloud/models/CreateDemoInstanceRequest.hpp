// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEMOINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEMOINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class CreateDemoInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDemoInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutboundCallWhitelist, outboundCallWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDemoInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutboundCallWhitelist, outboundCallWhitelist_);
    };
    CreateDemoInstanceRequest() = default ;
    CreateDemoInstanceRequest(const CreateDemoInstanceRequest &) = default ;
    CreateDemoInstanceRequest(CreateDemoInstanceRequest &&) = default ;
    CreateDemoInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDemoInstanceRequest() = default ;
    CreateDemoInstanceRequest& operator=(const CreateDemoInstanceRequest &) = default ;
    CreateDemoInstanceRequest& operator=(CreateDemoInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outboundCallWhitelist_ == nullptr; };
    // outboundCallWhitelist Field Functions 
    bool hasOutboundCallWhitelist() const { return this->outboundCallWhitelist_ != nullptr;};
    void deleteOutboundCallWhitelist() { this->outboundCallWhitelist_ = nullptr;};
    inline string getOutboundCallWhitelist() const { DARABONBA_PTR_GET_DEFAULT(outboundCallWhitelist_, "") };
    inline CreateDemoInstanceRequest& setOutboundCallWhitelist(string outboundCallWhitelist) { DARABONBA_PTR_SET_VALUE(outboundCallWhitelist_, outboundCallWhitelist) };


  protected:
    // This parameter is required.
    shared_ptr<string> outboundCallWhitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
