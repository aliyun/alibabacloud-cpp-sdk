// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYBINDINGREQUESTADVANCEDOPTIONSCOMMONFILESYSTEMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYBINDINGREQUESTADVANCEDOPTIONSCOMMONFILESYSTEMDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail& obj) { 
      DARABONBA_PTR_TO_JSON(FetchSliceSize, fetchSliceSize_);
      DARABONBA_PTR_TO_JSON(FullOnIncrementFail, fullOnIncrementFail_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(FetchSliceSize, fetchSliceSize_);
      DARABONBA_PTR_FROM_JSON(FullOnIncrementFail, fullOnIncrementFail_);
    };
    UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail() = default ;
    UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail(const UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail &) = default ;
    UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail(UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail &&) = default ;
    UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail() = default ;
    UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail& operator=(const UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail &) = default ;
    UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail& operator=(UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail &&) = default ;
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
    inline UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail& setFetchSliceSize(int64_t fetchSliceSize) { DARABONBA_PTR_SET_VALUE(fetchSliceSize_, fetchSliceSize) };


    // fullOnIncrementFail Field Functions 
    bool hasFullOnIncrementFail() const { return this->fullOnIncrementFail_ != nullptr;};
    void deleteFullOnIncrementFail() { this->fullOnIncrementFail_ = nullptr;};
    inline bool fullOnIncrementFail() const { DARABONBA_PTR_GET_DEFAULT(fullOnIncrementFail_, false) };
    inline UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail& setFullOnIncrementFail(bool fullOnIncrementFail) { DARABONBA_PTR_SET_VALUE(fullOnIncrementFail_, fullOnIncrementFail) };


  protected:
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
