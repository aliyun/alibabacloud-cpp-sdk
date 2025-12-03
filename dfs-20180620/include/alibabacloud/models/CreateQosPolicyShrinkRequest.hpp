// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateQosPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederationId, federationId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FlowIds, flowIdsShrink_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(MaxIOBandWidth, maxIOBandWidth_);
      DARABONBA_PTR_TO_JSON(MaxIOps, maxIOps_);
      DARABONBA_PTR_TO_JSON(MaxMetaQps, maxMetaQps_);
      DARABONBA_PTR_TO_JSON(ReqTags, reqTagsShrink_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederationId, federationId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FlowIds, flowIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(MaxIOBandWidth, maxIOBandWidth_);
      DARABONBA_PTR_FROM_JSON(MaxIOps, maxIOps_);
      DARABONBA_PTR_FROM_JSON(MaxMetaQps, maxMetaQps_);
      DARABONBA_PTR_FROM_JSON(ReqTags, reqTagsShrink_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIdsShrink_);
    };
    CreateQosPolicyShrinkRequest() = default ;
    CreateQosPolicyShrinkRequest(const CreateQosPolicyShrinkRequest &) = default ;
    CreateQosPolicyShrinkRequest(CreateQosPolicyShrinkRequest &&) = default ;
    CreateQosPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosPolicyShrinkRequest() = default ;
    CreateQosPolicyShrinkRequest& operator=(const CreateQosPolicyShrinkRequest &) = default ;
    CreateQosPolicyShrinkRequest& operator=(CreateQosPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->federationId_ == nullptr && return this->fileSystemId_ == nullptr && return this->flowIdsShrink_ == nullptr && return this->inputRegionId_ == nullptr && return this->maxIOBandWidth_ == nullptr
        && return this->maxIOps_ == nullptr && return this->maxMetaQps_ == nullptr && return this->reqTagsShrink_ == nullptr && return this->zoneIdsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateQosPolicyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federationId Field Functions 
    bool hasFederationId() const { return this->federationId_ != nullptr;};
    void deleteFederationId() { this->federationId_ = nullptr;};
    inline string federationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
    inline CreateQosPolicyShrinkRequest& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateQosPolicyShrinkRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // flowIdsShrink Field Functions 
    bool hasFlowIdsShrink() const { return this->flowIdsShrink_ != nullptr;};
    void deleteFlowIdsShrink() { this->flowIdsShrink_ = nullptr;};
    inline string flowIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(flowIdsShrink_, "") };
    inline CreateQosPolicyShrinkRequest& setFlowIdsShrink(string flowIdsShrink) { DARABONBA_PTR_SET_VALUE(flowIdsShrink_, flowIdsShrink) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline CreateQosPolicyShrinkRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // maxIOBandWidth Field Functions 
    bool hasMaxIOBandWidth() const { return this->maxIOBandWidth_ != nullptr;};
    void deleteMaxIOBandWidth() { this->maxIOBandWidth_ = nullptr;};
    inline int64_t maxIOBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxIOBandWidth_, 0L) };
    inline CreateQosPolicyShrinkRequest& setMaxIOBandWidth(int64_t maxIOBandWidth) { DARABONBA_PTR_SET_VALUE(maxIOBandWidth_, maxIOBandWidth) };


    // maxIOps Field Functions 
    bool hasMaxIOps() const { return this->maxIOps_ != nullptr;};
    void deleteMaxIOps() { this->maxIOps_ = nullptr;};
    inline int64_t maxIOps() const { DARABONBA_PTR_GET_DEFAULT(maxIOps_, 0L) };
    inline CreateQosPolicyShrinkRequest& setMaxIOps(int64_t maxIOps) { DARABONBA_PTR_SET_VALUE(maxIOps_, maxIOps) };


    // maxMetaQps Field Functions 
    bool hasMaxMetaQps() const { return this->maxMetaQps_ != nullptr;};
    void deleteMaxMetaQps() { this->maxMetaQps_ = nullptr;};
    inline int64_t maxMetaQps() const { DARABONBA_PTR_GET_DEFAULT(maxMetaQps_, 0L) };
    inline CreateQosPolicyShrinkRequest& setMaxMetaQps(int64_t maxMetaQps) { DARABONBA_PTR_SET_VALUE(maxMetaQps_, maxMetaQps) };


    // reqTagsShrink Field Functions 
    bool hasReqTagsShrink() const { return this->reqTagsShrink_ != nullptr;};
    void deleteReqTagsShrink() { this->reqTagsShrink_ = nullptr;};
    inline string reqTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(reqTagsShrink_, "") };
    inline CreateQosPolicyShrinkRequest& setReqTagsShrink(string reqTagsShrink) { DARABONBA_PTR_SET_VALUE(reqTagsShrink_, reqTagsShrink) };


    // zoneIdsShrink Field Functions 
    bool hasZoneIdsShrink() const { return this->zoneIdsShrink_ != nullptr;};
    void deleteZoneIdsShrink() { this->zoneIdsShrink_ = nullptr;};
    inline string zoneIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(zoneIdsShrink_, "") };
    inline CreateQosPolicyShrinkRequest& setZoneIdsShrink(string zoneIdsShrink) { DARABONBA_PTR_SET_VALUE(zoneIdsShrink_, zoneIdsShrink) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> federationId_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<string> flowIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int64_t> maxIOBandWidth_ = nullptr;
    std::shared_ptr<int64_t> maxIOps_ = nullptr;
    std::shared_ptr<int64_t> maxMetaQps_ = nullptr;
    std::shared_ptr<string> reqTagsShrink_ = nullptr;
    std::shared_ptr<string> zoneIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
