// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCELOCATION_HPP_
#define ALIBABACLOUD_MODELS_SOURCELOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SourceLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceLocation& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(SegmentDeliveryConfigurations, segmentDeliveryConfigurations_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, SourceLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(SegmentDeliveryConfigurations, segmentDeliveryConfigurations_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    SourceLocation() = default ;
    SourceLocation(const SourceLocation &) = default ;
    SourceLocation(SourceLocation &&) = default ;
    SourceLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceLocation() = default ;
    SourceLocation& operator=(const SourceLocation &) = default ;
    SourceLocation& operator=(SourceLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->baseUrl_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->segmentDeliveryConfigurations_ == nullptr && return this->sourceLocationName_ == nullptr
        && return this->state_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline SourceLocation& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string baseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline SourceLocation& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline SourceLocation& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline SourceLocation& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // segmentDeliveryConfigurations Field Functions 
    bool hasSegmentDeliveryConfigurations() const { return this->segmentDeliveryConfigurations_ != nullptr;};
    void deleteSegmentDeliveryConfigurations() { this->segmentDeliveryConfigurations_ = nullptr;};
    inline string segmentDeliveryConfigurations() const { DARABONBA_PTR_GET_DEFAULT(segmentDeliveryConfigurations_, "") };
    inline SourceLocation& setSegmentDeliveryConfigurations(string segmentDeliveryConfigurations) { DARABONBA_PTR_SET_VALUE(segmentDeliveryConfigurations_, segmentDeliveryConfigurations) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline SourceLocation& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline SourceLocation& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> baseUrl_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> segmentDeliveryConfigurations_ = nullptr;
    std::shared_ptr<string> sourceLocationName_ = nullptr;
    std::shared_ptr<int32_t> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
