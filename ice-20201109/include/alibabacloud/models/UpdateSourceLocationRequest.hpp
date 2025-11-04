// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESOURCELOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESOURCELOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateSourceLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSourceLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(EnableSegmentDelivery, enableSegmentDelivery_);
      DARABONBA_PTR_TO_JSON(SegmentDeliveryUrl, segmentDeliveryUrl_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSourceLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(EnableSegmentDelivery, enableSegmentDelivery_);
      DARABONBA_PTR_FROM_JSON(SegmentDeliveryUrl, segmentDeliveryUrl_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
    };
    UpdateSourceLocationRequest() = default ;
    UpdateSourceLocationRequest(const UpdateSourceLocationRequest &) = default ;
    UpdateSourceLocationRequest(UpdateSourceLocationRequest &&) = default ;
    UpdateSourceLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSourceLocationRequest() = default ;
    UpdateSourceLocationRequest& operator=(const UpdateSourceLocationRequest &) = default ;
    UpdateSourceLocationRequest& operator=(UpdateSourceLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseUrl_ == nullptr
        && return this->enableSegmentDelivery_ == nullptr && return this->segmentDeliveryUrl_ == nullptr && return this->sourceLocationName_ == nullptr; };
    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string baseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline UpdateSourceLocationRequest& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // enableSegmentDelivery Field Functions 
    bool hasEnableSegmentDelivery() const { return this->enableSegmentDelivery_ != nullptr;};
    void deleteEnableSegmentDelivery() { this->enableSegmentDelivery_ = nullptr;};
    inline bool enableSegmentDelivery() const { DARABONBA_PTR_GET_DEFAULT(enableSegmentDelivery_, false) };
    inline UpdateSourceLocationRequest& setEnableSegmentDelivery(bool enableSegmentDelivery) { DARABONBA_PTR_SET_VALUE(enableSegmentDelivery_, enableSegmentDelivery) };


    // segmentDeliveryUrl Field Functions 
    bool hasSegmentDeliveryUrl() const { return this->segmentDeliveryUrl_ != nullptr;};
    void deleteSegmentDeliveryUrl() { this->segmentDeliveryUrl_ = nullptr;};
    inline string segmentDeliveryUrl() const { DARABONBA_PTR_GET_DEFAULT(segmentDeliveryUrl_, "") };
    inline UpdateSourceLocationRequest& setSegmentDeliveryUrl(string segmentDeliveryUrl) { DARABONBA_PTR_SET_VALUE(segmentDeliveryUrl_, segmentDeliveryUrl) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline UpdateSourceLocationRequest& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


  protected:
    // The protocol and hostname of the source location.
    std::shared_ptr<string> baseUrl_ = nullptr;
    // Specifies whether to use an independent domain name to access the segments.
    std::shared_ptr<bool> enableSegmentDelivery_ = nullptr;
    // The domain name used to access the segments.
    std::shared_ptr<string> segmentDeliveryUrl_ = nullptr;
    // The name of the source location.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceLocationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
