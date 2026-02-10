// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAuthSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowPartialBuy, allowPartialBuy_);
      DARABONBA_PTR_TO_JSON(AllowUpgradePartialBuy, allowUpgradePartialBuy_);
      DARABONBA_PTR_TO_JSON(AllowUserUnbind, allowUserUnbind_);
      DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_TO_JSON(ClusterNodeCheck, clusterNodeCheck_);
      DARABONBA_PTR_TO_JSON(DefaultAuthToAll, defaultAuthToAll_);
      DARABONBA_PTR_TO_JSON(HasPreBindSetting, hasPreBindSetting_);
      DARABONBA_PTR_TO_JSON(HighestVersion, highestVersion_);
      DARABONBA_PTR_TO_JSON(InvalidBindStatus, invalidBindStatus_);
      DARABONBA_PTR_TO_JSON(IsMultiVersion, isMultiVersion_);
      DARABONBA_PTR_TO_JSON(Machine, machine_);
      DARABONBA_PTR_TO_JSON(PostPaidHighestVersion, postPaidHighestVersion_);
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_TO_JSON(PostPaidVersionSummary, postPaidVersionSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VersionSummary, versionSummary_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowPartialBuy, allowPartialBuy_);
      DARABONBA_PTR_FROM_JSON(AllowUpgradePartialBuy, allowUpgradePartialBuy_);
      DARABONBA_PTR_FROM_JSON(AllowUserUnbind, allowUserUnbind_);
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(ClusterNodeCheck, clusterNodeCheck_);
      DARABONBA_PTR_FROM_JSON(DefaultAuthToAll, defaultAuthToAll_);
      DARABONBA_PTR_FROM_JSON(HasPreBindSetting, hasPreBindSetting_);
      DARABONBA_PTR_FROM_JSON(HighestVersion, highestVersion_);
      DARABONBA_PTR_FROM_JSON(InvalidBindStatus, invalidBindStatus_);
      DARABONBA_PTR_FROM_JSON(IsMultiVersion, isMultiVersion_);
      DARABONBA_PTR_FROM_JSON(Machine, machine_);
      DARABONBA_PTR_FROM_JSON(PostPaidHighestVersion, postPaidHighestVersion_);
      DARABONBA_PTR_FROM_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_FROM_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_FROM_JSON(PostPaidVersionSummary, postPaidVersionSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VersionSummary, versionSummary_);
    };
    GetAuthSummaryResponseBody() = default ;
    GetAuthSummaryResponseBody(const GetAuthSummaryResponseBody &) = default ;
    GetAuthSummaryResponseBody(GetAuthSummaryResponseBody &&) = default ;
    GetAuthSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthSummaryResponseBody() = default ;
    GetAuthSummaryResponseBody& operator=(const GetAuthSummaryResponseBody &) = default ;
    GetAuthSummaryResponseBody& operator=(GetAuthSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VersionSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VersionSummary& obj) { 
        DARABONBA_PTR_TO_JSON(AuthBindType, authBindType_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(TotalCoreAuthCount, totalCoreAuthCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalEcsAuthCount, totalEcsAuthCount_);
        DARABONBA_PTR_TO_JSON(UnUsedCount, unUsedCount_);
        DARABONBA_PTR_TO_JSON(UnusedCoreAuthCount, unusedCoreAuthCount_);
        DARABONBA_PTR_TO_JSON(UnusedEcsAuthCount, unusedEcsAuthCount_);
        DARABONBA_PTR_TO_JSON(UsedCoreCount, usedCoreCount_);
        DARABONBA_PTR_TO_JSON(UsedEcsCount, usedEcsCount_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, VersionSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthBindType, authBindType_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(TotalCoreAuthCount, totalCoreAuthCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalEcsAuthCount, totalEcsAuthCount_);
        DARABONBA_PTR_FROM_JSON(UnUsedCount, unUsedCount_);
        DARABONBA_PTR_FROM_JSON(UnusedCoreAuthCount, unusedCoreAuthCount_);
        DARABONBA_PTR_FROM_JSON(UnusedEcsAuthCount, unusedEcsAuthCount_);
        DARABONBA_PTR_FROM_JSON(UsedCoreCount, usedCoreCount_);
        DARABONBA_PTR_FROM_JSON(UsedEcsCount, usedEcsCount_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      VersionSummary() = default ;
      VersionSummary(const VersionSummary &) = default ;
      VersionSummary(VersionSummary &&) = default ;
      VersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VersionSummary() = default ;
      VersionSummary& operator=(const VersionSummary &) = default ;
      VersionSummary& operator=(VersionSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authBindType_ == nullptr
        && this->index_ == nullptr && this->totalCoreAuthCount_ == nullptr && this->totalCount_ == nullptr && this->totalEcsAuthCount_ == nullptr && this->unUsedCount_ == nullptr
        && this->unusedCoreAuthCount_ == nullptr && this->unusedEcsAuthCount_ == nullptr && this->usedCoreCount_ == nullptr && this->usedEcsCount_ == nullptr && this->version_ == nullptr; };
      // authBindType Field Functions 
      bool hasAuthBindType() const { return this->authBindType_ != nullptr;};
      void deleteAuthBindType() { this->authBindType_ = nullptr;};
      inline string getAuthBindType() const { DARABONBA_PTR_GET_DEFAULT(authBindType_, "") };
      inline VersionSummary& setAuthBindType(string authBindType) { DARABONBA_PTR_SET_VALUE(authBindType_, authBindType) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline VersionSummary& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // totalCoreAuthCount Field Functions 
      bool hasTotalCoreAuthCount() const { return this->totalCoreAuthCount_ != nullptr;};
      void deleteTotalCoreAuthCount() { this->totalCoreAuthCount_ = nullptr;};
      inline int32_t getTotalCoreAuthCount() const { DARABONBA_PTR_GET_DEFAULT(totalCoreAuthCount_, 0) };
      inline VersionSummary& setTotalCoreAuthCount(int32_t totalCoreAuthCount) { DARABONBA_PTR_SET_VALUE(totalCoreAuthCount_, totalCoreAuthCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline VersionSummary& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalEcsAuthCount Field Functions 
      bool hasTotalEcsAuthCount() const { return this->totalEcsAuthCount_ != nullptr;};
      void deleteTotalEcsAuthCount() { this->totalEcsAuthCount_ = nullptr;};
      inline int32_t getTotalEcsAuthCount() const { DARABONBA_PTR_GET_DEFAULT(totalEcsAuthCount_, 0) };
      inline VersionSummary& setTotalEcsAuthCount(int32_t totalEcsAuthCount) { DARABONBA_PTR_SET_VALUE(totalEcsAuthCount_, totalEcsAuthCount) };


      // unUsedCount Field Functions 
      bool hasUnUsedCount() const { return this->unUsedCount_ != nullptr;};
      void deleteUnUsedCount() { this->unUsedCount_ = nullptr;};
      inline int32_t getUnUsedCount() const { DARABONBA_PTR_GET_DEFAULT(unUsedCount_, 0) };
      inline VersionSummary& setUnUsedCount(int32_t unUsedCount) { DARABONBA_PTR_SET_VALUE(unUsedCount_, unUsedCount) };


      // unusedCoreAuthCount Field Functions 
      bool hasUnusedCoreAuthCount() const { return this->unusedCoreAuthCount_ != nullptr;};
      void deleteUnusedCoreAuthCount() { this->unusedCoreAuthCount_ = nullptr;};
      inline int32_t getUnusedCoreAuthCount() const { DARABONBA_PTR_GET_DEFAULT(unusedCoreAuthCount_, 0) };
      inline VersionSummary& setUnusedCoreAuthCount(int32_t unusedCoreAuthCount) { DARABONBA_PTR_SET_VALUE(unusedCoreAuthCount_, unusedCoreAuthCount) };


      // unusedEcsAuthCount Field Functions 
      bool hasUnusedEcsAuthCount() const { return this->unusedEcsAuthCount_ != nullptr;};
      void deleteUnusedEcsAuthCount() { this->unusedEcsAuthCount_ = nullptr;};
      inline int32_t getUnusedEcsAuthCount() const { DARABONBA_PTR_GET_DEFAULT(unusedEcsAuthCount_, 0) };
      inline VersionSummary& setUnusedEcsAuthCount(int32_t unusedEcsAuthCount) { DARABONBA_PTR_SET_VALUE(unusedEcsAuthCount_, unusedEcsAuthCount) };


      // usedCoreCount Field Functions 
      bool hasUsedCoreCount() const { return this->usedCoreCount_ != nullptr;};
      void deleteUsedCoreCount() { this->usedCoreCount_ = nullptr;};
      inline int32_t getUsedCoreCount() const { DARABONBA_PTR_GET_DEFAULT(usedCoreCount_, 0) };
      inline VersionSummary& setUsedCoreCount(int32_t usedCoreCount) { DARABONBA_PTR_SET_VALUE(usedCoreCount_, usedCoreCount) };


      // usedEcsCount Field Functions 
      bool hasUsedEcsCount() const { return this->usedEcsCount_ != nullptr;};
      void deleteUsedEcsCount() { this->usedEcsCount_ = nullptr;};
      inline int32_t getUsedEcsCount() const { DARABONBA_PTR_GET_DEFAULT(usedEcsCount_, 0) };
      inline VersionSummary& setUsedEcsCount(int32_t usedEcsCount) { DARABONBA_PTR_SET_VALUE(usedEcsCount_, usedEcsCount) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline VersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The type of the quota that is consumed. Valid values:
      // 
      // *   ASSET: quota of servers.
      // *   CORE: quota of server cores.
      // *   ASSET_AND_CORE: both.
      shared_ptr<string> authBindType_ {};
      // The index of the current edition. The smaller the value, the higher the edition. The index is used for sorting.
      shared_ptr<int32_t> index_ {};
      // The total quota of server cores.
      // 
      // >  This parameter takes effect only if AuthBindType is set to CORE or ASSET_AND_CORE.
      shared_ptr<int32_t> totalCoreAuthCount_ {};
      // The total quota of servers in the current edition.
      // 
      // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
      shared_ptr<int32_t> totalCount_ {};
      // The total quota of servers.
      // 
      // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
      shared_ptr<int32_t> totalEcsAuthCount_ {};
      // The remaining quota of servers.
      // 
      // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
      shared_ptr<int32_t> unUsedCount_ {};
      // The remaining quota of server cores.
      // 
      // >  This parameter takes effect only if AuthBindType is set to CORE or ASSET_AND_CORE.
      shared_ptr<int32_t> unusedCoreAuthCount_ {};
      // The remaining quota of servers.
      // 
      // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
      shared_ptr<int32_t> unusedEcsAuthCount_ {};
      // The consumed quota of server cores.
      // 
      // >  This parameter takes effect only if AuthBindType is set to CORE or ASSET_AND_CORE.
      shared_ptr<int32_t> usedCoreCount_ {};
      // The used quota of servers.
      // 
      // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
      shared_ptr<int32_t> usedEcsCount_ {};
      // The edition of purchased Security Center. Valid values:
      // 
      // *   **1**: Basic edition
      // *   **3**: Enterprise edition
      // *   **5**: Advanced edition
      // *   **6**: Anti-virus edition
      // *   **7**: Ultimate edition
      // *   **8**: Multi-edition
      // *   **10**: Value-added Plan edition
      shared_ptr<int32_t> version_ {};
    };

    class PostPaidVersionSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PostPaidVersionSummary& obj) { 
        DARABONBA_PTR_TO_JSON(AuthBindType, authBindType_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(UsedCoreCount, usedCoreCount_);
        DARABONBA_PTR_TO_JSON(UsedEcsCount, usedEcsCount_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, PostPaidVersionSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthBindType, authBindType_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(UsedCoreCount, usedCoreCount_);
        DARABONBA_PTR_FROM_JSON(UsedEcsCount, usedEcsCount_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      PostPaidVersionSummary() = default ;
      PostPaidVersionSummary(const PostPaidVersionSummary &) = default ;
      PostPaidVersionSummary(PostPaidVersionSummary &&) = default ;
      PostPaidVersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PostPaidVersionSummary() = default ;
      PostPaidVersionSummary& operator=(const PostPaidVersionSummary &) = default ;
      PostPaidVersionSummary& operator=(PostPaidVersionSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authBindType_ == nullptr
        && this->index_ == nullptr && this->usedCoreCount_ == nullptr && this->usedEcsCount_ == nullptr && this->version_ == nullptr; };
      // authBindType Field Functions 
      bool hasAuthBindType() const { return this->authBindType_ != nullptr;};
      void deleteAuthBindType() { this->authBindType_ = nullptr;};
      inline string getAuthBindType() const { DARABONBA_PTR_GET_DEFAULT(authBindType_, "") };
      inline PostPaidVersionSummary& setAuthBindType(string authBindType) { DARABONBA_PTR_SET_VALUE(authBindType_, authBindType) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline PostPaidVersionSummary& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // usedCoreCount Field Functions 
      bool hasUsedCoreCount() const { return this->usedCoreCount_ != nullptr;};
      void deleteUsedCoreCount() { this->usedCoreCount_ = nullptr;};
      inline int64_t getUsedCoreCount() const { DARABONBA_PTR_GET_DEFAULT(usedCoreCount_, 0L) };
      inline PostPaidVersionSummary& setUsedCoreCount(int64_t usedCoreCount) { DARABONBA_PTR_SET_VALUE(usedCoreCount_, usedCoreCount) };


      // usedEcsCount Field Functions 
      bool hasUsedEcsCount() const { return this->usedEcsCount_ != nullptr;};
      void deleteUsedEcsCount() { this->usedEcsCount_ = nullptr;};
      inline int64_t getUsedEcsCount() const { DARABONBA_PTR_GET_DEFAULT(usedEcsCount_, 0L) };
      inline PostPaidVersionSummary& setUsedEcsCount(int64_t usedEcsCount) { DARABONBA_PTR_SET_VALUE(usedEcsCount_, usedEcsCount) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline PostPaidVersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The type of authorization consumed during binding, with values: - **ASSET**: Consumes the number of authorized devices - **CORE**: Consumes the number of authorized cores - **ASSET_AND_CORE**: Consumes both the number of authorized devices and cores.
      shared_ptr<string> authBindType_ {};
      // Current version index, the higher the number, the newer the version, used for sorting. Values: - **1**: Free Edition - **2**: Anti-virus Edition - **3**: Advanced Edition - **4**: Enterprise Edition - **5**: Flagship Edition
      shared_ptr<int32_t> index_ {};
      // Number of authorized cores used. > This parameter is valid when AuthBindType is set to CORE or ASSET_AND_CORE.
      shared_ptr<int64_t> usedCoreCount_ {};
      // Number of authorized devices used. > This parameter is valid when AuthBindType is ASSET or ASSET_AND_CORE.
      shared_ptr<int64_t> usedEcsCount_ {};
      // Bound host assets with postpaid versions, values:   - **1**: Free version  - **3**: Enterprise version - **5**: Advanced version - **6**: Anti-virus version     - **7**: Flagship version
      shared_ptr<int32_t> version_ {};
    };

    class Machine : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Machine& obj) { 
        DARABONBA_PTR_TO_JSON(BindCoreCount, bindCoreCount_);
        DARABONBA_PTR_TO_JSON(BindEcsCount, bindEcsCount_);
        DARABONBA_PTR_TO_JSON(PostPaidBindCoreCount, postPaidBindCoreCount_);
        DARABONBA_PTR_TO_JSON(PostPaidBindEcsCount, postPaidBindEcsCount_);
        DARABONBA_PTR_TO_JSON(RiskCoreCount, riskCoreCount_);
        DARABONBA_PTR_TO_JSON(RiskEcsCount, riskEcsCount_);
        DARABONBA_PTR_TO_JSON(TotalCoreCount, totalCoreCount_);
        DARABONBA_PTR_TO_JSON(TotalEcsCount, totalEcsCount_);
        DARABONBA_PTR_TO_JSON(UnBindCoreCount, unBindCoreCount_);
        DARABONBA_PTR_TO_JSON(UnBindEcsCount, unBindEcsCount_);
      };
      friend void from_json(const Darabonba::Json& j, Machine& obj) { 
        DARABONBA_PTR_FROM_JSON(BindCoreCount, bindCoreCount_);
        DARABONBA_PTR_FROM_JSON(BindEcsCount, bindEcsCount_);
        DARABONBA_PTR_FROM_JSON(PostPaidBindCoreCount, postPaidBindCoreCount_);
        DARABONBA_PTR_FROM_JSON(PostPaidBindEcsCount, postPaidBindEcsCount_);
        DARABONBA_PTR_FROM_JSON(RiskCoreCount, riskCoreCount_);
        DARABONBA_PTR_FROM_JSON(RiskEcsCount, riskEcsCount_);
        DARABONBA_PTR_FROM_JSON(TotalCoreCount, totalCoreCount_);
        DARABONBA_PTR_FROM_JSON(TotalEcsCount, totalEcsCount_);
        DARABONBA_PTR_FROM_JSON(UnBindCoreCount, unBindCoreCount_);
        DARABONBA_PTR_FROM_JSON(UnBindEcsCount, unBindEcsCount_);
      };
      Machine() = default ;
      Machine(const Machine &) = default ;
      Machine(Machine &&) = default ;
      Machine(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Machine() = default ;
      Machine& operator=(const Machine &) = default ;
      Machine& operator=(Machine &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindCoreCount_ == nullptr
        && this->bindEcsCount_ == nullptr && this->postPaidBindCoreCount_ == nullptr && this->postPaidBindEcsCount_ == nullptr && this->riskCoreCount_ == nullptr && this->riskEcsCount_ == nullptr
        && this->totalCoreCount_ == nullptr && this->totalEcsCount_ == nullptr && this->unBindCoreCount_ == nullptr && this->unBindEcsCount_ == nullptr; };
      // bindCoreCount Field Functions 
      bool hasBindCoreCount() const { return this->bindCoreCount_ != nullptr;};
      void deleteBindCoreCount() { this->bindCoreCount_ = nullptr;};
      inline int32_t getBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(bindCoreCount_, 0) };
      inline Machine& setBindCoreCount(int32_t bindCoreCount) { DARABONBA_PTR_SET_VALUE(bindCoreCount_, bindCoreCount) };


      // bindEcsCount Field Functions 
      bool hasBindEcsCount() const { return this->bindEcsCount_ != nullptr;};
      void deleteBindEcsCount() { this->bindEcsCount_ = nullptr;};
      inline int32_t getBindEcsCount() const { DARABONBA_PTR_GET_DEFAULT(bindEcsCount_, 0) };
      inline Machine& setBindEcsCount(int32_t bindEcsCount) { DARABONBA_PTR_SET_VALUE(bindEcsCount_, bindEcsCount) };


      // postPaidBindCoreCount Field Functions 
      bool hasPostPaidBindCoreCount() const { return this->postPaidBindCoreCount_ != nullptr;};
      void deletePostPaidBindCoreCount() { this->postPaidBindCoreCount_ = nullptr;};
      inline int32_t getPostPaidBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(postPaidBindCoreCount_, 0) };
      inline Machine& setPostPaidBindCoreCount(int32_t postPaidBindCoreCount) { DARABONBA_PTR_SET_VALUE(postPaidBindCoreCount_, postPaidBindCoreCount) };


      // postPaidBindEcsCount Field Functions 
      bool hasPostPaidBindEcsCount() const { return this->postPaidBindEcsCount_ != nullptr;};
      void deletePostPaidBindEcsCount() { this->postPaidBindEcsCount_ = nullptr;};
      inline int32_t getPostPaidBindEcsCount() const { DARABONBA_PTR_GET_DEFAULT(postPaidBindEcsCount_, 0) };
      inline Machine& setPostPaidBindEcsCount(int32_t postPaidBindEcsCount) { DARABONBA_PTR_SET_VALUE(postPaidBindEcsCount_, postPaidBindEcsCount) };


      // riskCoreCount Field Functions 
      bool hasRiskCoreCount() const { return this->riskCoreCount_ != nullptr;};
      void deleteRiskCoreCount() { this->riskCoreCount_ = nullptr;};
      inline int32_t getRiskCoreCount() const { DARABONBA_PTR_GET_DEFAULT(riskCoreCount_, 0) };
      inline Machine& setRiskCoreCount(int32_t riskCoreCount) { DARABONBA_PTR_SET_VALUE(riskCoreCount_, riskCoreCount) };


      // riskEcsCount Field Functions 
      bool hasRiskEcsCount() const { return this->riskEcsCount_ != nullptr;};
      void deleteRiskEcsCount() { this->riskEcsCount_ = nullptr;};
      inline int32_t getRiskEcsCount() const { DARABONBA_PTR_GET_DEFAULT(riskEcsCount_, 0) };
      inline Machine& setRiskEcsCount(int32_t riskEcsCount) { DARABONBA_PTR_SET_VALUE(riskEcsCount_, riskEcsCount) };


      // totalCoreCount Field Functions 
      bool hasTotalCoreCount() const { return this->totalCoreCount_ != nullptr;};
      void deleteTotalCoreCount() { this->totalCoreCount_ = nullptr;};
      inline int32_t getTotalCoreCount() const { DARABONBA_PTR_GET_DEFAULT(totalCoreCount_, 0) };
      inline Machine& setTotalCoreCount(int32_t totalCoreCount) { DARABONBA_PTR_SET_VALUE(totalCoreCount_, totalCoreCount) };


      // totalEcsCount Field Functions 
      bool hasTotalEcsCount() const { return this->totalEcsCount_ != nullptr;};
      void deleteTotalEcsCount() { this->totalEcsCount_ = nullptr;};
      inline int32_t getTotalEcsCount() const { DARABONBA_PTR_GET_DEFAULT(totalEcsCount_, 0) };
      inline Machine& setTotalEcsCount(int32_t totalEcsCount) { DARABONBA_PTR_SET_VALUE(totalEcsCount_, totalEcsCount) };


      // unBindCoreCount Field Functions 
      bool hasUnBindCoreCount() const { return this->unBindCoreCount_ != nullptr;};
      void deleteUnBindCoreCount() { this->unBindCoreCount_ = nullptr;};
      inline int32_t getUnBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(unBindCoreCount_, 0) };
      inline Machine& setUnBindCoreCount(int32_t unBindCoreCount) { DARABONBA_PTR_SET_VALUE(unBindCoreCount_, unBindCoreCount) };


      // unBindEcsCount Field Functions 
      bool hasUnBindEcsCount() const { return this->unBindEcsCount_ != nullptr;};
      void deleteUnBindEcsCount() { this->unBindEcsCount_ = nullptr;};
      inline int32_t getUnBindEcsCount() const { DARABONBA_PTR_GET_DEFAULT(unBindEcsCount_, 0) };
      inline Machine& setUnBindEcsCount(int32_t unBindEcsCount) { DARABONBA_PTR_SET_VALUE(unBindEcsCount_, unBindEcsCount) };


    protected:
      // The number of cores of the assets that are bound to Security Center.
      shared_ptr<int32_t> bindCoreCount_ {};
      // The number of the assets that are bound to Security Center.
      shared_ptr<int32_t> bindEcsCount_ {};
      // Bind the number of cores for postpaid authorization assets.
      shared_ptr<int32_t> postPaidBindCoreCount_ {};
      // The number of assets bound to the postpaid authorization.
      shared_ptr<int32_t> postPaidBindEcsCount_ {};
      // The number of cores of the assets that are at risk.
      shared_ptr<int32_t> riskCoreCount_ {};
      // The number of the assets that are at risk.
      shared_ptr<int32_t> riskEcsCount_ {};
      // The total number of asset cores.
      shared_ptr<int32_t> totalCoreCount_ {};
      // The total number of assets.
      shared_ptr<int32_t> totalEcsCount_ {};
      // The number of cores of unbound assets.
      shared_ptr<int32_t> unBindCoreCount_ {};
      // The number of unbound assets.
      shared_ptr<int32_t> unBindEcsCount_ {};
    };

    virtual bool empty() const override { return this->allowPartialBuy_ == nullptr
        && this->allowUpgradePartialBuy_ == nullptr && this->allowUserUnbind_ == nullptr && this->autoBind_ == nullptr && this->clusterNodeCheck_ == nullptr && this->defaultAuthToAll_ == nullptr
        && this->hasPreBindSetting_ == nullptr && this->highestVersion_ == nullptr && this->invalidBindStatus_ == nullptr && this->isMultiVersion_ == nullptr && this->machine_ == nullptr
        && this->postPaidHighestVersion_ == nullptr && this->postPaidHostAutoBind_ == nullptr && this->postPaidHostAutoBindVersion_ == nullptr && this->postPaidVersionSummary_ == nullptr && this->requestId_ == nullptr
        && this->versionSummary_ == nullptr; };
    // allowPartialBuy Field Functions 
    bool hasAllowPartialBuy() const { return this->allowPartialBuy_ != nullptr;};
    void deleteAllowPartialBuy() { this->allowPartialBuy_ = nullptr;};
    inline int32_t getAllowPartialBuy() const { DARABONBA_PTR_GET_DEFAULT(allowPartialBuy_, 0) };
    inline GetAuthSummaryResponseBody& setAllowPartialBuy(int32_t allowPartialBuy) { DARABONBA_PTR_SET_VALUE(allowPartialBuy_, allowPartialBuy) };


    // allowUpgradePartialBuy Field Functions 
    bool hasAllowUpgradePartialBuy() const { return this->allowUpgradePartialBuy_ != nullptr;};
    void deleteAllowUpgradePartialBuy() { this->allowUpgradePartialBuy_ = nullptr;};
    inline int32_t getAllowUpgradePartialBuy() const { DARABONBA_PTR_GET_DEFAULT(allowUpgradePartialBuy_, 0) };
    inline GetAuthSummaryResponseBody& setAllowUpgradePartialBuy(int32_t allowUpgradePartialBuy) { DARABONBA_PTR_SET_VALUE(allowUpgradePartialBuy_, allowUpgradePartialBuy) };


    // allowUserUnbind Field Functions 
    bool hasAllowUserUnbind() const { return this->allowUserUnbind_ != nullptr;};
    void deleteAllowUserUnbind() { this->allowUserUnbind_ = nullptr;};
    inline int32_t getAllowUserUnbind() const { DARABONBA_PTR_GET_DEFAULT(allowUserUnbind_, 0) };
    inline GetAuthSummaryResponseBody& setAllowUserUnbind(int32_t allowUserUnbind) { DARABONBA_PTR_SET_VALUE(allowUserUnbind_, allowUserUnbind) };


    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t getAutoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline GetAuthSummaryResponseBody& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // clusterNodeCheck Field Functions 
    bool hasClusterNodeCheck() const { return this->clusterNodeCheck_ != nullptr;};
    void deleteClusterNodeCheck() { this->clusterNodeCheck_ = nullptr;};
    inline int32_t getClusterNodeCheck() const { DARABONBA_PTR_GET_DEFAULT(clusterNodeCheck_, 0) };
    inline GetAuthSummaryResponseBody& setClusterNodeCheck(int32_t clusterNodeCheck) { DARABONBA_PTR_SET_VALUE(clusterNodeCheck_, clusterNodeCheck) };


    // defaultAuthToAll Field Functions 
    bool hasDefaultAuthToAll() const { return this->defaultAuthToAll_ != nullptr;};
    void deleteDefaultAuthToAll() { this->defaultAuthToAll_ = nullptr;};
    inline int32_t getDefaultAuthToAll() const { DARABONBA_PTR_GET_DEFAULT(defaultAuthToAll_, 0) };
    inline GetAuthSummaryResponseBody& setDefaultAuthToAll(int32_t defaultAuthToAll) { DARABONBA_PTR_SET_VALUE(defaultAuthToAll_, defaultAuthToAll) };


    // hasPreBindSetting Field Functions 
    bool hasHasPreBindSetting() const { return this->hasPreBindSetting_ != nullptr;};
    void deleteHasPreBindSetting() { this->hasPreBindSetting_ = nullptr;};
    inline bool getHasPreBindSetting() const { DARABONBA_PTR_GET_DEFAULT(hasPreBindSetting_, false) };
    inline GetAuthSummaryResponseBody& setHasPreBindSetting(bool hasPreBindSetting) { DARABONBA_PTR_SET_VALUE(hasPreBindSetting_, hasPreBindSetting) };


    // highestVersion Field Functions 
    bool hasHighestVersion() const { return this->highestVersion_ != nullptr;};
    void deleteHighestVersion() { this->highestVersion_ = nullptr;};
    inline int32_t getHighestVersion() const { DARABONBA_PTR_GET_DEFAULT(highestVersion_, 0) };
    inline GetAuthSummaryResponseBody& setHighestVersion(int32_t highestVersion) { DARABONBA_PTR_SET_VALUE(highestVersion_, highestVersion) };


    // invalidBindStatus Field Functions 
    bool hasInvalidBindStatus() const { return this->invalidBindStatus_ != nullptr;};
    void deleteInvalidBindStatus() { this->invalidBindStatus_ = nullptr;};
    inline string getInvalidBindStatus() const { DARABONBA_PTR_GET_DEFAULT(invalidBindStatus_, "") };
    inline GetAuthSummaryResponseBody& setInvalidBindStatus(string invalidBindStatus) { DARABONBA_PTR_SET_VALUE(invalidBindStatus_, invalidBindStatus) };


    // isMultiVersion Field Functions 
    bool hasIsMultiVersion() const { return this->isMultiVersion_ != nullptr;};
    void deleteIsMultiVersion() { this->isMultiVersion_ = nullptr;};
    inline int32_t getIsMultiVersion() const { DARABONBA_PTR_GET_DEFAULT(isMultiVersion_, 0) };
    inline GetAuthSummaryResponseBody& setIsMultiVersion(int32_t isMultiVersion) { DARABONBA_PTR_SET_VALUE(isMultiVersion_, isMultiVersion) };


    // machine Field Functions 
    bool hasMachine() const { return this->machine_ != nullptr;};
    void deleteMachine() { this->machine_ = nullptr;};
    inline const GetAuthSummaryResponseBody::Machine & getMachine() const { DARABONBA_PTR_GET_CONST(machine_, GetAuthSummaryResponseBody::Machine) };
    inline GetAuthSummaryResponseBody::Machine getMachine() { DARABONBA_PTR_GET(machine_, GetAuthSummaryResponseBody::Machine) };
    inline GetAuthSummaryResponseBody& setMachine(const GetAuthSummaryResponseBody::Machine & machine) { DARABONBA_PTR_SET_VALUE(machine_, machine) };
    inline GetAuthSummaryResponseBody& setMachine(GetAuthSummaryResponseBody::Machine && machine) { DARABONBA_PTR_SET_RVALUE(machine_, machine) };


    // postPaidHighestVersion Field Functions 
    bool hasPostPaidHighestVersion() const { return this->postPaidHighestVersion_ != nullptr;};
    void deletePostPaidHighestVersion() { this->postPaidHighestVersion_ = nullptr;};
    inline string getPostPaidHighestVersion() const { DARABONBA_PTR_GET_DEFAULT(postPaidHighestVersion_, "") };
    inline GetAuthSummaryResponseBody& setPostPaidHighestVersion(string postPaidHighestVersion) { DARABONBA_PTR_SET_VALUE(postPaidHighestVersion_, postPaidHighestVersion) };


    // postPaidHostAutoBind Field Functions 
    bool hasPostPaidHostAutoBind() const { return this->postPaidHostAutoBind_ != nullptr;};
    void deletePostPaidHostAutoBind() { this->postPaidHostAutoBind_ = nullptr;};
    inline string getPostPaidHostAutoBind() const { DARABONBA_PTR_GET_DEFAULT(postPaidHostAutoBind_, "") };
    inline GetAuthSummaryResponseBody& setPostPaidHostAutoBind(string postPaidHostAutoBind) { DARABONBA_PTR_SET_VALUE(postPaidHostAutoBind_, postPaidHostAutoBind) };


    // postPaidHostAutoBindVersion Field Functions 
    bool hasPostPaidHostAutoBindVersion() const { return this->postPaidHostAutoBindVersion_ != nullptr;};
    void deletePostPaidHostAutoBindVersion() { this->postPaidHostAutoBindVersion_ = nullptr;};
    inline string getPostPaidHostAutoBindVersion() const { DARABONBA_PTR_GET_DEFAULT(postPaidHostAutoBindVersion_, "") };
    inline GetAuthSummaryResponseBody& setPostPaidHostAutoBindVersion(string postPaidHostAutoBindVersion) { DARABONBA_PTR_SET_VALUE(postPaidHostAutoBindVersion_, postPaidHostAutoBindVersion) };


    // postPaidVersionSummary Field Functions 
    bool hasPostPaidVersionSummary() const { return this->postPaidVersionSummary_ != nullptr;};
    void deletePostPaidVersionSummary() { this->postPaidVersionSummary_ = nullptr;};
    inline const vector<GetAuthSummaryResponseBody::PostPaidVersionSummary> & getPostPaidVersionSummary() const { DARABONBA_PTR_GET_CONST(postPaidVersionSummary_, vector<GetAuthSummaryResponseBody::PostPaidVersionSummary>) };
    inline vector<GetAuthSummaryResponseBody::PostPaidVersionSummary> getPostPaidVersionSummary() { DARABONBA_PTR_GET(postPaidVersionSummary_, vector<GetAuthSummaryResponseBody::PostPaidVersionSummary>) };
    inline GetAuthSummaryResponseBody& setPostPaidVersionSummary(const vector<GetAuthSummaryResponseBody::PostPaidVersionSummary> & postPaidVersionSummary) { DARABONBA_PTR_SET_VALUE(postPaidVersionSummary_, postPaidVersionSummary) };
    inline GetAuthSummaryResponseBody& setPostPaidVersionSummary(vector<GetAuthSummaryResponseBody::PostPaidVersionSummary> && postPaidVersionSummary) { DARABONBA_PTR_SET_RVALUE(postPaidVersionSummary_, postPaidVersionSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versionSummary Field Functions 
    bool hasVersionSummary() const { return this->versionSummary_ != nullptr;};
    void deleteVersionSummary() { this->versionSummary_ = nullptr;};
    inline const vector<GetAuthSummaryResponseBody::VersionSummary> & getVersionSummary() const { DARABONBA_PTR_GET_CONST(versionSummary_, vector<GetAuthSummaryResponseBody::VersionSummary>) };
    inline vector<GetAuthSummaryResponseBody::VersionSummary> getVersionSummary() { DARABONBA_PTR_GET(versionSummary_, vector<GetAuthSummaryResponseBody::VersionSummary>) };
    inline GetAuthSummaryResponseBody& setVersionSummary(const vector<GetAuthSummaryResponseBody::VersionSummary> & versionSummary) { DARABONBA_PTR_SET_VALUE(versionSummary_, versionSummary) };
    inline GetAuthSummaryResponseBody& setVersionSummary(vector<GetAuthSummaryResponseBody::VersionSummary> && versionSummary) { DARABONBA_PTR_SET_RVALUE(versionSummary_, versionSummary) };


  protected:
    // Indicates whether you can purchase protection quota on demand when you purchase Security Center. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    shared_ptr<int32_t> allowPartialBuy_ {};
    // Indicates whether you can purchase protection quota on demand after an upgrade. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    shared_ptr<int32_t> allowUpgradePartialBuy_ {};
    // Indicates whether all bound assets can be immediately unbound. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    shared_ptr<int32_t> allowUserUnbind_ {};
    // Indicates whether automatic binding is enabled. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    shared_ptr<int32_t> autoBind_ {};
    // Cluster node need to check the machine version,  Value:
    // 
    // - **0** : Not required
    // 
    // - **1** : Required
    shared_ptr<int32_t> clusterNodeCheck_ {};
    // Indicates whether the protection quota is supported for all assets. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    shared_ptr<int32_t> defaultAuthToAll_ {};
    // Indicates whether pre-bound assets exist. If you select assets to bind when you purchase Security Center, pre-bound assets exist. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    shared_ptr<bool> hasPreBindSetting_ {};
    // The most advanced edition that is used. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **3**: Enterprise edition
    // *   **5**: Advanced edition
    // *   **6**: Anti-virus edition
    // *   **7**: Ultimate edition
    // *   **10**: Value-added Plan edition
    // 
    // >  If you purchase Security Center Multi-edition, the value indicates the most advanced edition that is used. Otherwise, the value indicates the specific edition that is purchased.
    shared_ptr<int32_t> highestVersion_ {};
    // Binding effective status, value:
    // 
    // - **NORMAL** : Effective
    // 
    // - **INVALID_NODE_VERSION**: Invalid
    shared_ptr<string> invalidBindStatus_ {};
    // Indicates whether Security Center Multi-edition is purchased. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    shared_ptr<int32_t> isMultiVersion_ {};
    // The statistics of the protection quota for assets.
    shared_ptr<GetAuthSummaryResponseBody::Machine> machine_ {};
    // Activate the pay-as-you-go service protection version for hosts and container security, which is the highest protection version among all bound hosts. Values:   - **1**: Free Edition  - **3**: Enterprise Edition - **5**: Advanced Edition - **6**: Antivirus Edition     - **7**: Flagship Edition
    shared_ptr<string> postPaidHighestVersion_ {};
    // The pay-as-you-go service for host and container security adds an automatic binding identifier for new hosts, with values: - **0**: Off - **1**: On
    shared_ptr<string> postPaidHostAutoBind_ {};
    // The version for the pay-as-you-go service of host and container security to automatically bind new assets, with values: - **1**: Free Edition - **3**: Enterprise Edition - **5**: Advanced Edition - **6**: Antivirus Edition - **7**: Flagship Edition
    shared_ptr<string> postPaidHostAutoBindVersion_ {};
    // Statistics on pay-as-you-go service authorization for host and container security.
    shared_ptr<vector<GetAuthSummaryResponseBody::PostPaidVersionSummary>> postPaidVersionSummary_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The quota consumption statistics.
    shared_ptr<vector<GetAuthSummaryResponseBody::VersionSummary>> versionSummary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
