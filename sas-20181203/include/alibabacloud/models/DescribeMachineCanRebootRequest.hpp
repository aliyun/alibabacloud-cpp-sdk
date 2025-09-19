// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMACHINECANREBOOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMACHINECANREBOOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMachineCanRebootRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMachineCanRebootRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMachineCanRebootRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeMachineCanRebootRequest() = default ;
    DescribeMachineCanRebootRequest(const DescribeMachineCanRebootRequest &) = default ;
    DescribeMachineCanRebootRequest(DescribeMachineCanRebootRequest &&) = default ;
    DescribeMachineCanRebootRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMachineCanRebootRequest() = default ;
    DescribeMachineCanRebootRequest& operator=(const DescribeMachineCanRebootRequest &) = default ;
    DescribeMachineCanRebootRequest& operator=(DescribeMachineCanRebootRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->uuid_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeMachineCanRebootRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeMachineCanRebootRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The type of the vulnerabilities. Valid values:
    // 
    // *   cve: Linux software vulnerabilities
    // *   sys: Windows system vulnerabilities
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
