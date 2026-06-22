// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOPENLOGSHIPPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOPENLOGSHIPPERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyOpenLogShipperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOpenLogShipperRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOpenLogShipperRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    ModifyOpenLogShipperRequest() = default ;
    ModifyOpenLogShipperRequest(const ModifyOpenLogShipperRequest &) = default ;
    ModifyOpenLogShipperRequest(ModifyOpenLogShipperRequest &&) = default ;
    ModifyOpenLogShipperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOpenLogShipperRequest() = default ;
    ModifyOpenLogShipperRequest& operator=(const ModifyOpenLogShipperRequest &) = default ;
    ModifyOpenLogShipperRequest& operator=(ModifyOpenLogShipperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->resourceDirectoryAccountId_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline ModifyOpenLogShipperRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ModifyOpenLogShipperRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The identifier of the request source. Default value: **aegis**. Valid values:
    // 
    // - **aegis**: Server Guard edition.
    // - **sas**: Security Center edition.
    // 
    // > Server Guard users must use **aegis**, and Security Center users must use **sas**.
    shared_ptr<string> from_ {};
    // The ID of the member accounts in the resource directory (Alibaba Cloud account).
    // > You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
