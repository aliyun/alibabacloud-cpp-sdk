// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYDAINSTANCEVERSIONSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESRESPONSEBODYDAINSTANCEVERSIONSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryCoreCount.hpp>
#include <alibabacloud/models/ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryEcsCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMultiUserInstancesResponseBodyDaInstanceVersionSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& obj) { 
      DARABONBA_PTR_TO_JSON(AuthBindType, authBindType_);
      DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthBindType, authBindType_);
      DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListMultiUserInstancesResponseBodyDaInstanceVersionSummary() = default ;
    ListMultiUserInstancesResponseBodyDaInstanceVersionSummary(const ListMultiUserInstancesResponseBodyDaInstanceVersionSummary &) = default ;
    ListMultiUserInstancesResponseBodyDaInstanceVersionSummary(ListMultiUserInstancesResponseBodyDaInstanceVersionSummary &&) = default ;
    ListMultiUserInstancesResponseBodyDaInstanceVersionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiUserInstancesResponseBodyDaInstanceVersionSummary() = default ;
    ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& operator=(const ListMultiUserInstancesResponseBodyDaInstanceVersionSummary &) = default ;
    ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& operator=(ListMultiUserInstancesResponseBodyDaInstanceVersionSummary &&) = default ;
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
    inline ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& setAuthBindType(string authBindType) { DARABONBA_PTR_SET_VALUE(authBindType_, authBindType) };


    // coreCount Field Functions 
    bool hasCoreCount() const { return this->coreCount_ != nullptr;};
    void deleteCoreCount() { this->coreCount_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryCoreCount & coreCount() const { DARABONBA_PTR_GET_CONST(coreCount_, Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryCoreCount) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryCoreCount coreCount() { DARABONBA_PTR_GET(coreCount_, Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryCoreCount) };
    inline ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& setCoreCount(const Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryCoreCount & coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };
    inline ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& setCoreCount(Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryCoreCount && coreCount) { DARABONBA_PTR_SET_RVALUE(coreCount_, coreCount) };


    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline const Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryEcsCount & ecsCount() const { DARABONBA_PTR_GET_CONST(ecsCount_, Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryEcsCount) };
    inline Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryEcsCount ecsCount() { DARABONBA_PTR_GET(ecsCount_, Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryEcsCount) };
    inline ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& setEcsCount(const Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryEcsCount & ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };
    inline ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& setEcsCount(Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryEcsCount && ecsCount) { DARABONBA_PTR_SET_RVALUE(ecsCount_, ecsCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline ListMultiUserInstancesResponseBodyDaInstanceVersionSummary& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> authBindType_ = nullptr;
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryCoreCount> coreCount_ = nullptr;
    std::shared_ptr<Models::ListMultiUserInstancesResponseBodyDaInstanceVersionSummaryEcsCount> ecsCount_ = nullptr;
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
