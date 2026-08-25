// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERPROVISIONINGRDACCOUNTSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERPROVISIONINGRDACCOUNTSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetUserProvisioningRdAccountStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserProvisioningRdAccountStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(RdMemberId, rdMemberId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserProvisioningRdAccountStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(RdMemberId, rdMemberId_);
    };
    GetUserProvisioningRdAccountStatisticsRequest() = default ;
    GetUserProvisioningRdAccountStatisticsRequest(const GetUserProvisioningRdAccountStatisticsRequest &) = default ;
    GetUserProvisioningRdAccountStatisticsRequest(GetUserProvisioningRdAccountStatisticsRequest &&) = default ;
    GetUserProvisioningRdAccountStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserProvisioningRdAccountStatisticsRequest() = default ;
    GetUserProvisioningRdAccountStatisticsRequest& operator=(const GetUserProvisioningRdAccountStatisticsRequest &) = default ;
    GetUserProvisioningRdAccountStatisticsRequest& operator=(GetUserProvisioningRdAccountStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->rdMemberId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetUserProvisioningRdAccountStatisticsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // rdMemberId Field Functions 
    bool hasRdMemberId() const { return this->rdMemberId_ != nullptr;};
    void deleteRdMemberId() { this->rdMemberId_ = nullptr;};
    inline string getRdMemberId() const { DARABONBA_PTR_GET_DEFAULT(rdMemberId_, "") };
    inline GetUserProvisioningRdAccountStatisticsRequest& setRdMemberId(string rdMemberId) { DARABONBA_PTR_SET_VALUE(rdMemberId_, rdMemberId) };


  protected:
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The ID of the member in the resource directory.
    shared_ptr<string> rdMemberId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
