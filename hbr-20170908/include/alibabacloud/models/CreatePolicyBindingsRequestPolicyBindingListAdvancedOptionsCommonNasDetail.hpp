// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONSCOMMONNASDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONSCOMMONNASDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(FetchSliceSize, fetchSliceSize_);
      DARABONBA_PTR_TO_JSON(FullOnIncrementFail, fullOnIncrementFail_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(FetchSliceSize, fetchSliceSize_);
      DARABONBA_PTR_FROM_JSON(FullOnIncrementFail, fullOnIncrementFail_);
    };
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail &&) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail& operator=(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail& operator=(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->fetchSliceSize_ == nullptr && return this->fullOnIncrementFail_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // fetchSliceSize Field Functions 
    bool hasFetchSliceSize() const { return this->fetchSliceSize_ != nullptr;};
    void deleteFetchSliceSize() { this->fetchSliceSize_ = nullptr;};
    inline int64_t fetchSliceSize() const { DARABONBA_PTR_GET_DEFAULT(fetchSliceSize_, 0L) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail& setFetchSliceSize(int64_t fetchSliceSize) { DARABONBA_PTR_SET_VALUE(fetchSliceSize_, fetchSliceSize) };


    // fullOnIncrementFail Field Functions 
    bool hasFullOnIncrementFail() const { return this->fullOnIncrementFail_ != nullptr;};
    void deleteFullOnIncrementFail() { this->fullOnIncrementFail_ = nullptr;};
    inline bool fullOnIncrementFail() const { DARABONBA_PTR_GET_DEFAULT(fullOnIncrementFail_, false) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail& setFullOnIncrementFail(bool fullOnIncrementFail) { DARABONBA_PTR_SET_VALUE(fullOnIncrementFail_, fullOnIncrementFail) };


  protected:
    // The ID of the backup client group. When you perform on-premises NAS backup, Cloud Backup selects clients from the specified backup client group.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The size of backup shards (the number of files).
    std::shared_ptr<int64_t> fetchSliceSize_ = nullptr;
    // Specifies whether the system performs full backup if incremental backup fails. Valid values:
    // 
    // *   **true**: The system performs full backup if incremental backup fails.
    // *   **false**: The system does not perform full backup if incremental backup fails.
    std::shared_ptr<bool> fullOnIncrementFail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
