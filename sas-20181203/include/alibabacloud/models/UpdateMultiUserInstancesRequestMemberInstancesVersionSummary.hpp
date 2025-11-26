// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESREQUESTMEMBERINSTANCESVERSIONSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESREQUESTMEMBERINSTANCESVERSIONSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateMultiUserInstancesRequestMemberInstancesVersionSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiUserInstancesRequestMemberInstancesVersionSummary& obj) { 
      DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiUserInstancesRequestMemberInstancesVersionSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdateMultiUserInstancesRequestMemberInstancesVersionSummary() = default ;
    UpdateMultiUserInstancesRequestMemberInstancesVersionSummary(const UpdateMultiUserInstancesRequestMemberInstancesVersionSummary &) = default ;
    UpdateMultiUserInstancesRequestMemberInstancesVersionSummary(UpdateMultiUserInstancesRequestMemberInstancesVersionSummary &&) = default ;
    UpdateMultiUserInstancesRequestMemberInstancesVersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiUserInstancesRequestMemberInstancesVersionSummary() = default ;
    UpdateMultiUserInstancesRequestMemberInstancesVersionSummary& operator=(const UpdateMultiUserInstancesRequestMemberInstancesVersionSummary &) = default ;
    UpdateMultiUserInstancesRequestMemberInstancesVersionSummary& operator=(UpdateMultiUserInstancesRequestMemberInstancesVersionSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coreCount_ == nullptr
        && return this->ecsCount_ == nullptr && return this->version_ == nullptr; };
    // coreCount Field Functions 
    bool hasCoreCount() const { return this->coreCount_ != nullptr;};
    void deleteCoreCount() { this->coreCount_ = nullptr;};
    inline int64_t coreCount() const { DARABONBA_PTR_GET_DEFAULT(coreCount_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstancesVersionSummary& setCoreCount(int64_t coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };


    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int64_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0L) };
    inline UpdateMultiUserInstancesRequestMemberInstancesVersionSummary& setEcsCount(int64_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline UpdateMultiUserInstancesRequestMemberInstancesVersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Number of cores authorized for the member.
    std::shared_ptr<int64_t> coreCount_ = nullptr;
    // Number of authorizations allocated to the member.
    std::shared_ptr<int64_t> ecsCount_ = nullptr;
    // Version of the Cloud Security Center for the member account. Values:  
    // - **1**: Free Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Antivirus Edition    
    // - **7**: Flagship Edition   
    // - **8**: Multiple Versions   
    // - **10**: Only Purchase Value-Added Services
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
