// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSCOMMONFILESYSTEMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSCOMMONFILESYSTEMDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail& obj) { 
      DARABONBA_PTR_TO_JSON(FetchSliceSize, fetchSliceSize_);
      DARABONBA_PTR_TO_JSON(FullOnIncrementFail, fullOnIncrementFail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(FetchSliceSize, fetchSliceSize_);
      DARABONBA_PTR_FROM_JSON(FullOnIncrementFail, fullOnIncrementFail_);
    };
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail &&) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail& operator=(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail& operator=(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fetchSliceSize_ != nullptr
        && this->fullOnIncrementFail_ != nullptr; };
    // fetchSliceSize Field Functions 
    bool hasFetchSliceSize() const { return this->fetchSliceSize_ != nullptr;};
    void deleteFetchSliceSize() { this->fetchSliceSize_ = nullptr;};
    inline int64_t fetchSliceSize() const { DARABONBA_PTR_GET_DEFAULT(fetchSliceSize_, 0L) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail& setFetchSliceSize(int64_t fetchSliceSize) { DARABONBA_PTR_SET_VALUE(fetchSliceSize_, fetchSliceSize) };


    // fullOnIncrementFail Field Functions 
    bool hasFullOnIncrementFail() const { return this->fullOnIncrementFail_ != nullptr;};
    void deleteFullOnIncrementFail() { this->fullOnIncrementFail_ = nullptr;};
    inline bool fullOnIncrementFail() const { DARABONBA_PTR_GET_DEFAULT(fullOnIncrementFail_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail& setFullOnIncrementFail(bool fullOnIncrementFail) { DARABONBA_PTR_SET_VALUE(fullOnIncrementFail_, fullOnIncrementFail) };


  protected:
    // Backup shard size (number of files).
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
