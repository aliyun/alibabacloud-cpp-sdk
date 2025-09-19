// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIMAGEBUILDRISKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETIMAGEBUILDRISKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SetImageBuildRiskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetImageBuildRiskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUuids, imageUuids_);
      DARABONBA_PTR_TO_JSON(RiskKey, riskKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetImageBuildRiskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUuids, imageUuids_);
      DARABONBA_PTR_FROM_JSON(RiskKey, riskKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetImageBuildRiskStatusRequest() = default ;
    SetImageBuildRiskStatusRequest(const SetImageBuildRiskStatusRequest &) = default ;
    SetImageBuildRiskStatusRequest(SetImageBuildRiskStatusRequest &&) = default ;
    SetImageBuildRiskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetImageBuildRiskStatusRequest() = default ;
    SetImageBuildRiskStatusRequest& operator=(const SetImageBuildRiskStatusRequest &) = default ;
    SetImageBuildRiskStatusRequest& operator=(SetImageBuildRiskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageUuids_ != nullptr
        && this->riskKey_ != nullptr && this->status_ != nullptr; };
    // imageUuids Field Functions 
    bool hasImageUuids() const { return this->imageUuids_ != nullptr;};
    void deleteImageUuids() { this->imageUuids_ = nullptr;};
    inline string imageUuids() const { DARABONBA_PTR_GET_DEFAULT(imageUuids_, "") };
    inline SetImageBuildRiskStatusRequest& setImageUuids(string imageUuids) { DARABONBA_PTR_SET_VALUE(imageUuids_, imageUuids) };


    // riskKey Field Functions 
    bool hasRiskKey() const { return this->riskKey_ != nullptr;};
    void deleteRiskKey() { this->riskKey_ = nullptr;};
    inline string riskKey() const { DARABONBA_PTR_GET_DEFAULT(riskKey_, "") };
    inline SetImageBuildRiskStatusRequest& setRiskKey(string riskKey) { DARABONBA_PTR_SET_VALUE(riskKey_, riskKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SetImageBuildRiskStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The UUIDs of images. Separate multiple UUIDs with commas (,).
    // 
    // >  You can call the [DescribeImageInstances](~~DescribeImageInstances~~) operation to query the UUIDs of images.
    std::shared_ptr<string> imageUuids_ = nullptr;
    // The keyword of the image build command risk.
    std::shared_ptr<string> riskKey_ = nullptr;
    // The status of the image build command risk. Valid values:
    // 
    // *   **0**: unhandled.
    // *   **1**: ignored.
    // *   **2**: false positive.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
