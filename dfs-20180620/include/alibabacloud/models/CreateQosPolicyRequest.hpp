// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateQosPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederationId, federationId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FlowIds, flowIds_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(MaxIOBandWidth, maxIOBandWidth_);
      DARABONBA_PTR_TO_JSON(MaxIOps, maxIOps_);
      DARABONBA_PTR_TO_JSON(MaxMetaQps, maxMetaQps_);
      DARABONBA_PTR_TO_JSON(ReqTags, reqTags_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederationId, federationId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FlowIds, flowIds_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(MaxIOBandWidth, maxIOBandWidth_);
      DARABONBA_PTR_FROM_JSON(MaxIOps, maxIOps_);
      DARABONBA_PTR_FROM_JSON(MaxMetaQps, maxMetaQps_);
      DARABONBA_PTR_FROM_JSON(ReqTags, reqTags_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    CreateQosPolicyRequest() = default ;
    CreateQosPolicyRequest(const CreateQosPolicyRequest &) = default ;
    CreateQosPolicyRequest(CreateQosPolicyRequest &&) = default ;
    CreateQosPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosPolicyRequest() = default ;
    CreateQosPolicyRequest& operator=(const CreateQosPolicyRequest &) = default ;
    CreateQosPolicyRequest& operator=(CreateQosPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->federationId_ == nullptr && return this->fileSystemId_ == nullptr && return this->flowIds_ == nullptr && return this->inputRegionId_ == nullptr && return this->maxIOBandWidth_ == nullptr
        && return this->maxIOps_ == nullptr && return this->maxMetaQps_ == nullptr && return this->reqTags_ == nullptr && return this->zoneIds_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateQosPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federationId Field Functions 
    bool hasFederationId() const { return this->federationId_ != nullptr;};
    void deleteFederationId() { this->federationId_ = nullptr;};
    inline string federationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
    inline CreateQosPolicyRequest& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateQosPolicyRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // flowIds Field Functions 
    bool hasFlowIds() const { return this->flowIds_ != nullptr;};
    void deleteFlowIds() { this->flowIds_ = nullptr;};
    inline const vector<int32_t> & flowIds() const { DARABONBA_PTR_GET_CONST(flowIds_, vector<int32_t>) };
    inline vector<int32_t> flowIds() { DARABONBA_PTR_GET(flowIds_, vector<int32_t>) };
    inline CreateQosPolicyRequest& setFlowIds(const vector<int32_t> & flowIds) { DARABONBA_PTR_SET_VALUE(flowIds_, flowIds) };
    inline CreateQosPolicyRequest& setFlowIds(vector<int32_t> && flowIds) { DARABONBA_PTR_SET_RVALUE(flowIds_, flowIds) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline CreateQosPolicyRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // maxIOBandWidth Field Functions 
    bool hasMaxIOBandWidth() const { return this->maxIOBandWidth_ != nullptr;};
    void deleteMaxIOBandWidth() { this->maxIOBandWidth_ = nullptr;};
    inline int64_t maxIOBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxIOBandWidth_, 0L) };
    inline CreateQosPolicyRequest& setMaxIOBandWidth(int64_t maxIOBandWidth) { DARABONBA_PTR_SET_VALUE(maxIOBandWidth_, maxIOBandWidth) };


    // maxIOps Field Functions 
    bool hasMaxIOps() const { return this->maxIOps_ != nullptr;};
    void deleteMaxIOps() { this->maxIOps_ = nullptr;};
    inline int64_t maxIOps() const { DARABONBA_PTR_GET_DEFAULT(maxIOps_, 0L) };
    inline CreateQosPolicyRequest& setMaxIOps(int64_t maxIOps) { DARABONBA_PTR_SET_VALUE(maxIOps_, maxIOps) };


    // maxMetaQps Field Functions 
    bool hasMaxMetaQps() const { return this->maxMetaQps_ != nullptr;};
    void deleteMaxMetaQps() { this->maxMetaQps_ = nullptr;};
    inline int64_t maxMetaQps() const { DARABONBA_PTR_GET_DEFAULT(maxMetaQps_, 0L) };
    inline CreateQosPolicyRequest& setMaxMetaQps(int64_t maxMetaQps) { DARABONBA_PTR_SET_VALUE(maxMetaQps_, maxMetaQps) };


    // reqTags Field Functions 
    bool hasReqTags() const { return this->reqTags_ != nullptr;};
    void deleteReqTags() { this->reqTags_ = nullptr;};
    inline const vector<string> & reqTags() const { DARABONBA_PTR_GET_CONST(reqTags_, vector<string>) };
    inline vector<string> reqTags() { DARABONBA_PTR_GET(reqTags_, vector<string>) };
    inline CreateQosPolicyRequest& setReqTags(const vector<string> & reqTags) { DARABONBA_PTR_SET_VALUE(reqTags_, reqTags) };
    inline CreateQosPolicyRequest& setReqTags(vector<string> && reqTags) { DARABONBA_PTR_SET_RVALUE(reqTags_, reqTags) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline const vector<string> & zoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
    inline vector<string> zoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
    inline CreateQosPolicyRequest& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
    inline CreateQosPolicyRequest& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> federationId_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<vector<int32_t>> flowIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int64_t> maxIOBandWidth_ = nullptr;
    std::shared_ptr<int64_t> maxIOps_ = nullptr;
    std::shared_ptr<int64_t> maxMetaQps_ = nullptr;
    std::shared_ptr<vector<string>> reqTags_ = nullptr;
    std::shared_ptr<vector<string>> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
