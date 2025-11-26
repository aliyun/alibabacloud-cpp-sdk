// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYSALEINSTANCELISTVERSIONSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYSALEINSTANCELISTVERSIONSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryCoreCount.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& obj) { 
      DARABONBA_PTR_TO_JSON(AuthBindType, authBindType_);
      DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthBindType, authBindType_);
      DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary() = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary(const ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary &) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary(ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary &&) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary() = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& operator=(const ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary &) = default ;
    ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& operator=(ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authBindType_ == nullptr
        && return this->coreCount_ == nullptr && return this->ecsCount_ == nullptr && return this->version_ == nullptr; };
    // authBindType Field Functions 
    bool hasAuthBindType() const { return this->authBindType_ != nullptr;};
    void deleteAuthBindType() { this->authBindType_ = nullptr;};
    inline string authBindType() const { DARABONBA_PTR_GET_DEFAULT(authBindType_, "") };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& setAuthBindType(string authBindType) { DARABONBA_PTR_SET_VALUE(authBindType_, authBindType) };


    // coreCount Field Functions 
    bool hasCoreCount() const { return this->coreCount_ != nullptr;};
    void deleteCoreCount() { this->coreCount_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryCoreCount & coreCount() const { DARABONBA_PTR_GET_CONST(coreCount_, Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryCoreCount) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryCoreCount coreCount() { DARABONBA_PTR_GET(coreCount_, Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryCoreCount) };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& setCoreCount(const Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryCoreCount & coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& setCoreCount(Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryCoreCount && coreCount) { DARABONBA_PTR_SET_RVALUE(coreCount_, coreCount) };


    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount & ecsCount() const { DARABONBA_PTR_GET_CONST(ecsCount_, Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount) };
    inline Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount ecsCount() { DARABONBA_PTR_GET(ecsCount_, Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount) };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& setEcsCount(const Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount & ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& setEcsCount(Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount && ecsCount) { DARABONBA_PTR_SET_RVALUE(ecsCount_, ecsCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline ListMultiUserInstancesResponseBodySaleInstanceListVersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Authorization type consumed during binding, with values:
    // - **ASSET**：Consumes the number of authorized instances
    // - **CORE**：Consumes the number of authorized cores
    // - **ASSET_AND_CORE**：Consumes both the number of authorized instances and cores.
    std::shared_ptr<string> authBindType_ = nullptr;
    // Usage of core authorization for the member account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryCoreCount> coreCount_ = nullptr;
    // Usage details of ECS authorizations for the member account.
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodySaleInstanceListVersionSummaryEcsCount> ecsCount_ = nullptr;
    // Version of the Cloud Security Center for the member account. Values:  
    // - **1**: Free Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Anti-Virus Edition    
    // - **7**: Flagship Edition   
    // - **8**: Multiple Versions   
    // - **10**: Value-Added Services Only
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
