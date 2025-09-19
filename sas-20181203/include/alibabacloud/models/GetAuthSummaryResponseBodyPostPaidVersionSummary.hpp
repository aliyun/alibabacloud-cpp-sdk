// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODYPOSTPAIDVERSIONSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHSUMMARYRESPONSEBODYPOSTPAIDVERSIONSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAuthSummaryResponseBodyPostPaidVersionSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthSummaryResponseBodyPostPaidVersionSummary& obj) { 
      DARABONBA_PTR_TO_JSON(AuthBindType, authBindType_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(UsedCoreCount, usedCoreCount_);
      DARABONBA_PTR_TO_JSON(UsedEcsCount, usedEcsCount_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthSummaryResponseBodyPostPaidVersionSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthBindType, authBindType_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(UsedCoreCount, usedCoreCount_);
      DARABONBA_PTR_FROM_JSON(UsedEcsCount, usedEcsCount_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetAuthSummaryResponseBodyPostPaidVersionSummary() = default ;
    GetAuthSummaryResponseBodyPostPaidVersionSummary(const GetAuthSummaryResponseBodyPostPaidVersionSummary &) = default ;
    GetAuthSummaryResponseBodyPostPaidVersionSummary(GetAuthSummaryResponseBodyPostPaidVersionSummary &&) = default ;
    GetAuthSummaryResponseBodyPostPaidVersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthSummaryResponseBodyPostPaidVersionSummary() = default ;
    GetAuthSummaryResponseBodyPostPaidVersionSummary& operator=(const GetAuthSummaryResponseBodyPostPaidVersionSummary &) = default ;
    GetAuthSummaryResponseBodyPostPaidVersionSummary& operator=(GetAuthSummaryResponseBodyPostPaidVersionSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authBindType_ != nullptr
        && this->index_ != nullptr && this->usedCoreCount_ != nullptr && this->usedEcsCount_ != nullptr && this->version_ != nullptr; };
    // authBindType Field Functions 
    bool hasAuthBindType() const { return this->authBindType_ != nullptr;};
    void deleteAuthBindType() { this->authBindType_ = nullptr;};
    inline string authBindType() const { DARABONBA_PTR_GET_DEFAULT(authBindType_, "") };
    inline GetAuthSummaryResponseBodyPostPaidVersionSummary& setAuthBindType(string authBindType) { DARABONBA_PTR_SET_VALUE(authBindType_, authBindType) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GetAuthSummaryResponseBodyPostPaidVersionSummary& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // usedCoreCount Field Functions 
    bool hasUsedCoreCount() const { return this->usedCoreCount_ != nullptr;};
    void deleteUsedCoreCount() { this->usedCoreCount_ = nullptr;};
    inline int64_t usedCoreCount() const { DARABONBA_PTR_GET_DEFAULT(usedCoreCount_, 0L) };
    inline GetAuthSummaryResponseBodyPostPaidVersionSummary& setUsedCoreCount(int64_t usedCoreCount) { DARABONBA_PTR_SET_VALUE(usedCoreCount_, usedCoreCount) };


    // usedEcsCount Field Functions 
    bool hasUsedEcsCount() const { return this->usedEcsCount_ != nullptr;};
    void deleteUsedEcsCount() { this->usedEcsCount_ = nullptr;};
    inline int64_t usedEcsCount() const { DARABONBA_PTR_GET_DEFAULT(usedEcsCount_, 0L) };
    inline GetAuthSummaryResponseBodyPostPaidVersionSummary& setUsedEcsCount(int64_t usedEcsCount) { DARABONBA_PTR_SET_VALUE(usedEcsCount_, usedEcsCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline GetAuthSummaryResponseBodyPostPaidVersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The type of authorization consumed during binding, with values: - **ASSET**: Consumes the number of authorized devices - **CORE**: Consumes the number of authorized cores - **ASSET_AND_CORE**: Consumes both the number of authorized devices and cores.
    std::shared_ptr<string> authBindType_ = nullptr;
    // Current version index, the higher the number, the newer the version, used for sorting. Values: - **1**: Free Edition - **2**: Anti-virus Edition - **3**: Advanced Edition - **4**: Enterprise Edition - **5**: Flagship Edition
    std::shared_ptr<int32_t> index_ = nullptr;
    // Number of authorized cores used. > This parameter is valid when AuthBindType is set to CORE or ASSET_AND_CORE.
    std::shared_ptr<int64_t> usedCoreCount_ = nullptr;
    // Number of authorized devices used. > This parameter is valid when AuthBindType is ASSET or ASSET_AND_CORE.
    std::shared_ptr<int64_t> usedEcsCount_ = nullptr;
    // Bound host assets with postpaid versions, values:   - **1**: Free version  - **3**: Enterprise version - **5**: Advanced version - **6**: Anti-virus version     - **7**: Flagship version
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
