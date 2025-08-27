// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYGETAPPLYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYGETAPPLYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ElectronicItineraryGetApplyResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryGetApplyResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batch_apply_no, batchApplyNo_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryGetApplyResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batch_apply_no, batchApplyNo_);
    };
    ElectronicItineraryGetApplyResultRequest() = default ;
    ElectronicItineraryGetApplyResultRequest(const ElectronicItineraryGetApplyResultRequest &) = default ;
    ElectronicItineraryGetApplyResultRequest(ElectronicItineraryGetApplyResultRequest &&) = default ;
    ElectronicItineraryGetApplyResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryGetApplyResultRequest() = default ;
    ElectronicItineraryGetApplyResultRequest& operator=(const ElectronicItineraryGetApplyResultRequest &) = default ;
    ElectronicItineraryGetApplyResultRequest& operator=(ElectronicItineraryGetApplyResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchApplyNo_ != nullptr; };
    // batchApplyNo Field Functions 
    bool hasBatchApplyNo() const { return this->batchApplyNo_ != nullptr;};
    void deleteBatchApplyNo() { this->batchApplyNo_ = nullptr;};
    inline string batchApplyNo() const { DARABONBA_PTR_GET_DEFAULT(batchApplyNo_, "") };
    inline ElectronicItineraryGetApplyResultRequest& setBatchApplyNo(string batchApplyNo) { DARABONBA_PTR_SET_VALUE(batchApplyNo_, batchApplyNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> batchApplyNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
