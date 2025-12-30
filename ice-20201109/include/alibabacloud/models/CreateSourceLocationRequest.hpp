// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOURCELOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOURCELOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateSourceLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSourceLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(EnableSegmentDelivery, enableSegmentDelivery_);
      DARABONBA_PTR_TO_JSON(SegmentDeliveryUrl, segmentDeliveryUrl_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSourceLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(EnableSegmentDelivery, enableSegmentDelivery_);
      DARABONBA_PTR_FROM_JSON(SegmentDeliveryUrl, segmentDeliveryUrl_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
    };
    CreateSourceLocationRequest() = default ;
    CreateSourceLocationRequest(const CreateSourceLocationRequest &) = default ;
    CreateSourceLocationRequest(CreateSourceLocationRequest &&) = default ;
    CreateSourceLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSourceLocationRequest() = default ;
    CreateSourceLocationRequest& operator=(const CreateSourceLocationRequest &) = default ;
    CreateSourceLocationRequest& operator=(CreateSourceLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->enableSegmentDelivery_ == nullptr && this->segmentDeliveryUrl_ == nullptr && this->sourceLocationName_ == nullptr; };
    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline CreateSourceLocationRequest& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // enableSegmentDelivery Field Functions 
    bool hasEnableSegmentDelivery() const { return this->enableSegmentDelivery_ != nullptr;};
    void deleteEnableSegmentDelivery() { this->enableSegmentDelivery_ = nullptr;};
    inline bool getEnableSegmentDelivery() const { DARABONBA_PTR_GET_DEFAULT(enableSegmentDelivery_, false) };
    inline CreateSourceLocationRequest& setEnableSegmentDelivery(bool enableSegmentDelivery) { DARABONBA_PTR_SET_VALUE(enableSegmentDelivery_, enableSegmentDelivery) };


    // segmentDeliveryUrl Field Functions 
    bool hasSegmentDeliveryUrl() const { return this->segmentDeliveryUrl_ != nullptr;};
    void deleteSegmentDeliveryUrl() { this->segmentDeliveryUrl_ = nullptr;};
    inline string getSegmentDeliveryUrl() const { DARABONBA_PTR_GET_DEFAULT(segmentDeliveryUrl_, "") };
    inline CreateSourceLocationRequest& setSegmentDeliveryUrl(string segmentDeliveryUrl) { DARABONBA_PTR_SET_VALUE(segmentDeliveryUrl_, segmentDeliveryUrl) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string getSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline CreateSourceLocationRequest& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


  protected:
    // The protocol and hostname of the source location.
    // 
    // This parameter is required.
    shared_ptr<string> baseUrl_ {};
    // Specifies whether to use an independent domain name to access the segments.
    shared_ptr<bool> enableSegmentDelivery_ {};
    // The domain name used to access the segments.
    shared_ptr<string> segmentDeliveryUrl_ {};
    // The name of the source location.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLocationName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
