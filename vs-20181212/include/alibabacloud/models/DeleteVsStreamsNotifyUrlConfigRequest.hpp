// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVSSTREAMSNOTIFYURLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVSSTREAMSNOTIFYURLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeleteVsStreamsNotifyUrlConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVsStreamsNotifyUrlConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVsStreamsNotifyUrlConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DeleteVsStreamsNotifyUrlConfigRequest() = default ;
    DeleteVsStreamsNotifyUrlConfigRequest(const DeleteVsStreamsNotifyUrlConfigRequest &) = default ;
    DeleteVsStreamsNotifyUrlConfigRequest(DeleteVsStreamsNotifyUrlConfigRequest &&) = default ;
    DeleteVsStreamsNotifyUrlConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVsStreamsNotifyUrlConfigRequest() = default ;
    DeleteVsStreamsNotifyUrlConfigRequest& operator=(const DeleteVsStreamsNotifyUrlConfigRequest &) = default ;
    DeleteVsStreamsNotifyUrlConfigRequest& operator=(DeleteVsStreamsNotifyUrlConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->ownerId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DeleteVsStreamsNotifyUrlConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteVsStreamsNotifyUrlConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
