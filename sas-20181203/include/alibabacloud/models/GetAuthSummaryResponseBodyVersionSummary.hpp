// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODYVERSIONSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODYVERSIONSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAuthSummaryResponseBodyVersionSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthSummaryResponseBodyVersionSummary& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAuthSummaryResponseBodyVersionSummary& obj) { 
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
    GetAuthSummaryResponseBodyVersionSummary() = default ;
    GetAuthSummaryResponseBodyVersionSummary(const GetAuthSummaryResponseBodyVersionSummary &) = default ;
    GetAuthSummaryResponseBodyVersionSummary(GetAuthSummaryResponseBodyVersionSummary &&) = default ;
    GetAuthSummaryResponseBodyVersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthSummaryResponseBodyVersionSummary() = default ;
    GetAuthSummaryResponseBodyVersionSummary& operator=(const GetAuthSummaryResponseBodyVersionSummary &) = default ;
    GetAuthSummaryResponseBodyVersionSummary& operator=(GetAuthSummaryResponseBodyVersionSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authBindType_ == nullptr
        && return this->index_ == nullptr && return this->totalCoreAuthCount_ == nullptr && return this->totalCount_ == nullptr && return this->totalEcsAuthCount_ == nullptr && return this->unUsedCount_ == nullptr
        && return this->unusedCoreAuthCount_ == nullptr && return this->unusedEcsAuthCount_ == nullptr && return this->usedCoreCount_ == nullptr && return this->usedEcsCount_ == nullptr && return this->version_ == nullptr; };
    // authBindType Field Functions 
    bool hasAuthBindType() const { return this->authBindType_ != nullptr;};
    void deleteAuthBindType() { this->authBindType_ = nullptr;};
    inline string authBindType() const { DARABONBA_PTR_GET_DEFAULT(authBindType_, "") };
    inline GetAuthSummaryResponseBodyVersionSummary& setAuthBindType(string authBindType) { DARABONBA_PTR_SET_VALUE(authBindType_, authBindType) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // totalCoreAuthCount Field Functions 
    bool hasTotalCoreAuthCount() const { return this->totalCoreAuthCount_ != nullptr;};
    void deleteTotalCoreAuthCount() { this->totalCoreAuthCount_ = nullptr;};
    inline int32_t totalCoreAuthCount() const { DARABONBA_PTR_GET_DEFAULT(totalCoreAuthCount_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setTotalCoreAuthCount(int32_t totalCoreAuthCount) { DARABONBA_PTR_SET_VALUE(totalCoreAuthCount_, totalCoreAuthCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalEcsAuthCount Field Functions 
    bool hasTotalEcsAuthCount() const { return this->totalEcsAuthCount_ != nullptr;};
    void deleteTotalEcsAuthCount() { this->totalEcsAuthCount_ = nullptr;};
    inline int32_t totalEcsAuthCount() const { DARABONBA_PTR_GET_DEFAULT(totalEcsAuthCount_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setTotalEcsAuthCount(int32_t totalEcsAuthCount) { DARABONBA_PTR_SET_VALUE(totalEcsAuthCount_, totalEcsAuthCount) };


    // unUsedCount Field Functions 
    bool hasUnUsedCount() const { return this->unUsedCount_ != nullptr;};
    void deleteUnUsedCount() { this->unUsedCount_ = nullptr;};
    inline int32_t unUsedCount() const { DARABONBA_PTR_GET_DEFAULT(unUsedCount_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setUnUsedCount(int32_t unUsedCount) { DARABONBA_PTR_SET_VALUE(unUsedCount_, unUsedCount) };


    // unusedCoreAuthCount Field Functions 
    bool hasUnusedCoreAuthCount() const { return this->unusedCoreAuthCount_ != nullptr;};
    void deleteUnusedCoreAuthCount() { this->unusedCoreAuthCount_ = nullptr;};
    inline int32_t unusedCoreAuthCount() const { DARABONBA_PTR_GET_DEFAULT(unusedCoreAuthCount_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setUnusedCoreAuthCount(int32_t unusedCoreAuthCount) { DARABONBA_PTR_SET_VALUE(unusedCoreAuthCount_, unusedCoreAuthCount) };


    // unusedEcsAuthCount Field Functions 
    bool hasUnusedEcsAuthCount() const { return this->unusedEcsAuthCount_ != nullptr;};
    void deleteUnusedEcsAuthCount() { this->unusedEcsAuthCount_ = nullptr;};
    inline int32_t unusedEcsAuthCount() const { DARABONBA_PTR_GET_DEFAULT(unusedEcsAuthCount_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setUnusedEcsAuthCount(int32_t unusedEcsAuthCount) { DARABONBA_PTR_SET_VALUE(unusedEcsAuthCount_, unusedEcsAuthCount) };


    // usedCoreCount Field Functions 
    bool hasUsedCoreCount() const { return this->usedCoreCount_ != nullptr;};
    void deleteUsedCoreCount() { this->usedCoreCount_ = nullptr;};
    inline int32_t usedCoreCount() const { DARABONBA_PTR_GET_DEFAULT(usedCoreCount_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setUsedCoreCount(int32_t usedCoreCount) { DARABONBA_PTR_SET_VALUE(usedCoreCount_, usedCoreCount) };


    // usedEcsCount Field Functions 
    bool hasUsedEcsCount() const { return this->usedEcsCount_ != nullptr;};
    void deleteUsedEcsCount() { this->usedEcsCount_ = nullptr;};
    inline int32_t usedEcsCount() const { DARABONBA_PTR_GET_DEFAULT(usedEcsCount_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setUsedEcsCount(int32_t usedEcsCount) { DARABONBA_PTR_SET_VALUE(usedEcsCount_, usedEcsCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline GetAuthSummaryResponseBodyVersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The type of the quota that is consumed. Valid values:
    // 
    // *   ASSET: quota of servers.
    // *   CORE: quota of server cores.
    // *   ASSET_AND_CORE: both.
    std::shared_ptr<string> authBindType_ = nullptr;
    // The index of the current edition. The smaller the value, the higher the edition. The index is used for sorting.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The total quota of server cores.
    // 
    // >  This parameter takes effect only if AuthBindType is set to CORE or ASSET_AND_CORE.
    std::shared_ptr<int32_t> totalCoreAuthCount_ = nullptr;
    // The total quota of servers in the current edition.
    // 
    // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The total quota of servers.
    // 
    // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
    std::shared_ptr<int32_t> totalEcsAuthCount_ = nullptr;
    // The remaining quota of servers.
    // 
    // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
    std::shared_ptr<int32_t> unUsedCount_ = nullptr;
    // The remaining quota of server cores.
    // 
    // >  This parameter takes effect only if AuthBindType is set to CORE or ASSET_AND_CORE.
    std::shared_ptr<int32_t> unusedCoreAuthCount_ = nullptr;
    // The remaining quota of servers.
    // 
    // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
    std::shared_ptr<int32_t> unusedEcsAuthCount_ = nullptr;
    // The consumed quota of server cores.
    // 
    // >  This parameter takes effect only if AuthBindType is set to CORE or ASSET_AND_CORE.
    std::shared_ptr<int32_t> usedCoreCount_ = nullptr;
    // The used quota of servers.
    // 
    // >  This parameter takes effect only if AuthBindType is set to ASSET or ASSET_AND_CORE.
    std::shared_ptr<int32_t> usedEcsCount_ = nullptr;
    // The edition of purchased Security Center. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **3**: Enterprise edition
    // *   **5**: Advanced edition
    // *   **6**: Anti-virus edition
    // *   **7**: Ultimate edition
    // *   **8**: Multi-edition
    // *   **10**: Value-added Plan edition
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
