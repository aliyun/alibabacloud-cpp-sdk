// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSCOMMONNASDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSCOMMONNASDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(FetchSliceSize, fetchSliceSize_);
      DARABONBA_PTR_TO_JSON(FullOnIncrementFail, fullOnIncrementFail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(FetchSliceSize, fetchSliceSize_);
      DARABONBA_PTR_FROM_JSON(FullOnIncrementFail, fullOnIncrementFail_);
    };
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail &&) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail& operator=(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail& operator=(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && return this->clusterId_ == nullptr && return this->fetchSliceSize_ == nullptr && return this->fullOnIncrementFail_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // fetchSliceSize Field Functions 
    bool hasFetchSliceSize() const { return this->fetchSliceSize_ != nullptr;};
    void deleteFetchSliceSize() { this->fetchSliceSize_ = nullptr;};
    inline int64_t fetchSliceSize() const { DARABONBA_PTR_GET_DEFAULT(fetchSliceSize_, 0L) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail& setFetchSliceSize(int64_t fetchSliceSize) { DARABONBA_PTR_SET_VALUE(fetchSliceSize_, fetchSliceSize) };


    // fullOnIncrementFail Field Functions 
    bool hasFullOnIncrementFail() const { return this->fullOnIncrementFail_ != nullptr;};
    void deleteFullOnIncrementFail() { this->fullOnIncrementFail_ = nullptr;};
    inline bool fullOnIncrementFail() const { DARABONBA_PTR_GET_DEFAULT(fullOnIncrementFail_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail& setFullOnIncrementFail(bool fullOnIncrementFail) { DARABONBA_PTR_SET_VALUE(fullOnIncrementFail_, fullOnIncrementFail) };


  protected:
    // Backup client ID.
    std::shared_ptr<string> clientId_ = nullptr;
    // Client group ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Backup slice size (number of files).
    std::shared_ptr<int64_t> fetchSliceSize_ = nullptr;
    // Whether to switch to a full backup when an incremental backup fails. Values:
    // - **true**: Switch to full backup on failure.
    // - **false**: Do not switch to full backup on failure.
    std::shared_ptr<bool> fullOnIncrementFail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
