// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVEDOMAINSTAGINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVEDOMAINSTAGINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveDomainStagingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Functions, functions_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveDomainStagingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetLiveDomainStagingConfigRequest() = default ;
    SetLiveDomainStagingConfigRequest(const SetLiveDomainStagingConfigRequest &) = default ;
    SetLiveDomainStagingConfigRequest(SetLiveDomainStagingConfigRequest &&) = default ;
    SetLiveDomainStagingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveDomainStagingConfigRequest() = default ;
    SetLiveDomainStagingConfigRequest& operator=(const SetLiveDomainStagingConfigRequest &) = default ;
    SetLiveDomainStagingConfigRequest& operator=(SetLiveDomainStagingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->functions_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetLiveDomainStagingConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline string functions() const { DARABONBA_PTR_GET_DEFAULT(functions_, "") };
    inline SetLiveDomainStagingConfigRequest& setFunctions(string functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveDomainStagingConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLiveDomainStagingConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The accelerated domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The list of features. You must specify the ConfigId field when you want to modify the configurations. For more information, see **Features specified by the Functions parameter**.
    // 
    // This parameter is required.
    std::shared_ptr<string> functions_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
