// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTSEIPARAMSPASSTHROUGH_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTSEIPARAMSPASSTHROUGH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskRequestSeiParamsPassThrough : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskRequestSeiParamsPassThrough& obj) { 
      DARABONBA_PTR_TO_JSON(FollowIdr, followIdr_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(PayloadContent, payloadContent_);
      DARABONBA_PTR_TO_JSON(PayloadContentKey, payloadContentKey_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskRequestSeiParamsPassThrough& obj) { 
      DARABONBA_PTR_FROM_JSON(FollowIdr, followIdr_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(PayloadContent, payloadContent_);
      DARABONBA_PTR_FROM_JSON(PayloadContentKey, payloadContentKey_);
    };
    UpdateLiveMPUTaskRequestSeiParamsPassThrough() = default ;
    UpdateLiveMPUTaskRequestSeiParamsPassThrough(const UpdateLiveMPUTaskRequestSeiParamsPassThrough &) = default ;
    UpdateLiveMPUTaskRequestSeiParamsPassThrough(UpdateLiveMPUTaskRequestSeiParamsPassThrough &&) = default ;
    UpdateLiveMPUTaskRequestSeiParamsPassThrough(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskRequestSeiParamsPassThrough() = default ;
    UpdateLiveMPUTaskRequestSeiParamsPassThrough& operator=(const UpdateLiveMPUTaskRequestSeiParamsPassThrough &) = default ;
    UpdateLiveMPUTaskRequestSeiParamsPassThrough& operator=(UpdateLiveMPUTaskRequestSeiParamsPassThrough &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->followIdr_ != nullptr
        && this->interval_ != nullptr && this->payloadContent_ != nullptr && this->payloadContentKey_ != nullptr; };
    // followIdr Field Functions 
    bool hasFollowIdr() const { return this->followIdr_ != nullptr;};
    void deleteFollowIdr() { this->followIdr_ = nullptr;};
    inline string followIdr() const { DARABONBA_PTR_GET_DEFAULT(followIdr_, "") };
    inline UpdateLiveMPUTaskRequestSeiParamsPassThrough& setFollowIdr(string followIdr) { DARABONBA_PTR_SET_VALUE(followIdr_, followIdr) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline UpdateLiveMPUTaskRequestSeiParamsPassThrough& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // payloadContent Field Functions 
    bool hasPayloadContent() const { return this->payloadContent_ != nullptr;};
    void deletePayloadContent() { this->payloadContent_ = nullptr;};
    inline string payloadContent() const { DARABONBA_PTR_GET_DEFAULT(payloadContent_, "") };
    inline UpdateLiveMPUTaskRequestSeiParamsPassThrough& setPayloadContent(string payloadContent) { DARABONBA_PTR_SET_VALUE(payloadContent_, payloadContent) };


    // payloadContentKey Field Functions 
    bool hasPayloadContentKey() const { return this->payloadContentKey_ != nullptr;};
    void deletePayloadContentKey() { this->payloadContentKey_ = nullptr;};
    inline string payloadContentKey() const { DARABONBA_PTR_GET_DEFAULT(payloadContentKey_, "") };
    inline UpdateLiveMPUTaskRequestSeiParamsPassThrough& setPayloadContentKey(string payloadContentKey) { DARABONBA_PTR_SET_VALUE(payloadContentKey_, payloadContentKey) };


  protected:
    // Specifies whether to include the SEI in an IDR frame. Valid values:
    // 
    // *   **0**: does not include the SEI.
    // *   **1**: includes the SEI.
    std::shared_ptr<string> followIdr_ = nullptr;
    // The interval at which the SEI is sent. Valid values: [1000,5000]. Unit: milliseconds.
    std::shared_ptr<string> interval_ = nullptr;
    // The payload content of the SEI.
    std::shared_ptr<string> payloadContent_ = nullptr;
    // The key of the payload content of the SEI. If you do not specify this parameter, the default value udd is used.
    std::shared_ptr<string> payloadContentKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
