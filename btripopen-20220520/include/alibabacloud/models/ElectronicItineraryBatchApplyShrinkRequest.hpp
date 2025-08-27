// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ElectronicItineraryBatchApplyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryBatchApplyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_itinerary_list, applyItineraryListShrink_);
      DARABONBA_PTR_TO_JSON(can_reprint, canReprint_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryBatchApplyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_itinerary_list, applyItineraryListShrink_);
      DARABONBA_PTR_FROM_JSON(can_reprint, canReprint_);
    };
    ElectronicItineraryBatchApplyShrinkRequest() = default ;
    ElectronicItineraryBatchApplyShrinkRequest(const ElectronicItineraryBatchApplyShrinkRequest &) = default ;
    ElectronicItineraryBatchApplyShrinkRequest(ElectronicItineraryBatchApplyShrinkRequest &&) = default ;
    ElectronicItineraryBatchApplyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryBatchApplyShrinkRequest() = default ;
    ElectronicItineraryBatchApplyShrinkRequest& operator=(const ElectronicItineraryBatchApplyShrinkRequest &) = default ;
    ElectronicItineraryBatchApplyShrinkRequest& operator=(ElectronicItineraryBatchApplyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyItineraryListShrink_ != nullptr
        && this->canReprint_ != nullptr; };
    // applyItineraryListShrink Field Functions 
    bool hasApplyItineraryListShrink() const { return this->applyItineraryListShrink_ != nullptr;};
    void deleteApplyItineraryListShrink() { this->applyItineraryListShrink_ = nullptr;};
    inline string applyItineraryListShrink() const { DARABONBA_PTR_GET_DEFAULT(applyItineraryListShrink_, "") };
    inline ElectronicItineraryBatchApplyShrinkRequest& setApplyItineraryListShrink(string applyItineraryListShrink) { DARABONBA_PTR_SET_VALUE(applyItineraryListShrink_, applyItineraryListShrink) };


    // canReprint Field Functions 
    bool hasCanReprint() const { return this->canReprint_ != nullptr;};
    void deleteCanReprint() { this->canReprint_ = nullptr;};
    inline bool canReprint() const { DARABONBA_PTR_GET_DEFAULT(canReprint_, false) };
    inline ElectronicItineraryBatchApplyShrinkRequest& setCanReprint(bool canReprint) { DARABONBA_PTR_SET_VALUE(canReprint_, canReprint) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applyItineraryListShrink_ = nullptr;
    std::shared_ptr<bool> canReprint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
