// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ElectronicItineraryBatchApplyRequestApplyItineraryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ElectronicItineraryBatchApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryBatchApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_itinerary_list, applyItineraryList_);
      DARABONBA_PTR_TO_JSON(can_reprint, canReprint_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryBatchApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_itinerary_list, applyItineraryList_);
      DARABONBA_PTR_FROM_JSON(can_reprint, canReprint_);
    };
    ElectronicItineraryBatchApplyRequest() = default ;
    ElectronicItineraryBatchApplyRequest(const ElectronicItineraryBatchApplyRequest &) = default ;
    ElectronicItineraryBatchApplyRequest(ElectronicItineraryBatchApplyRequest &&) = default ;
    ElectronicItineraryBatchApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryBatchApplyRequest() = default ;
    ElectronicItineraryBatchApplyRequest& operator=(const ElectronicItineraryBatchApplyRequest &) = default ;
    ElectronicItineraryBatchApplyRequest& operator=(ElectronicItineraryBatchApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyItineraryList_ != nullptr
        && this->canReprint_ != nullptr; };
    // applyItineraryList Field Functions 
    bool hasApplyItineraryList() const { return this->applyItineraryList_ != nullptr;};
    void deleteApplyItineraryList() { this->applyItineraryList_ = nullptr;};
    inline const vector<ElectronicItineraryBatchApplyRequestApplyItineraryList> & applyItineraryList() const { DARABONBA_PTR_GET_CONST(applyItineraryList_, vector<ElectronicItineraryBatchApplyRequestApplyItineraryList>) };
    inline vector<ElectronicItineraryBatchApplyRequestApplyItineraryList> applyItineraryList() { DARABONBA_PTR_GET(applyItineraryList_, vector<ElectronicItineraryBatchApplyRequestApplyItineraryList>) };
    inline ElectronicItineraryBatchApplyRequest& setApplyItineraryList(const vector<ElectronicItineraryBatchApplyRequestApplyItineraryList> & applyItineraryList) { DARABONBA_PTR_SET_VALUE(applyItineraryList_, applyItineraryList) };
    inline ElectronicItineraryBatchApplyRequest& setApplyItineraryList(vector<ElectronicItineraryBatchApplyRequestApplyItineraryList> && applyItineraryList) { DARABONBA_PTR_SET_RVALUE(applyItineraryList_, applyItineraryList) };


    // canReprint Field Functions 
    bool hasCanReprint() const { return this->canReprint_ != nullptr;};
    void deleteCanReprint() { this->canReprint_ = nullptr;};
    inline bool canReprint() const { DARABONBA_PTR_GET_DEFAULT(canReprint_, false) };
    inline ElectronicItineraryBatchApplyRequest& setCanReprint(bool canReprint) { DARABONBA_PTR_SET_VALUE(canReprint_, canReprint) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<ElectronicItineraryBatchApplyRequestApplyItineraryList>> applyItineraryList_ = nullptr;
    std::shared_ptr<bool> canReprint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
