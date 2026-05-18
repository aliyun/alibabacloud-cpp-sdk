// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQOSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQOSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ModifyQosPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyQosPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederationId, federationId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(MaxIOBandWidth, maxIOBandWidth_);
      DARABONBA_PTR_TO_JSON(MaxIOps, maxIOps_);
      DARABONBA_PTR_TO_JSON(MaxMetaQps, maxMetaQps_);
      DARABONBA_PTR_TO_JSON(QosPolicyId, qosPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyQosPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederationId, federationId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(MaxIOBandWidth, maxIOBandWidth_);
      DARABONBA_PTR_FROM_JSON(MaxIOps, maxIOps_);
      DARABONBA_PTR_FROM_JSON(MaxMetaQps, maxMetaQps_);
      DARABONBA_PTR_FROM_JSON(QosPolicyId, qosPolicyId_);
    };
    ModifyQosPolicyRequest() = default ;
    ModifyQosPolicyRequest(const ModifyQosPolicyRequest &) = default ;
    ModifyQosPolicyRequest(ModifyQosPolicyRequest &&) = default ;
    ModifyQosPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyQosPolicyRequest() = default ;
    ModifyQosPolicyRequest& operator=(const ModifyQosPolicyRequest &) = default ;
    ModifyQosPolicyRequest& operator=(ModifyQosPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->federationId_ == nullptr && this->fileSystemId_ == nullptr && this->inputRegionId_ == nullptr && this->maxIOBandWidth_ == nullptr && this->maxIOps_ == nullptr
        && this->maxMetaQps_ == nullptr && this->qosPolicyId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyQosPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federationId Field Functions 
    bool hasFederationId() const { return this->federationId_ != nullptr;};
    void deleteFederationId() { this->federationId_ = nullptr;};
    inline string getFederationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
    inline ModifyQosPolicyRequest& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyQosPolicyRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string getInputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline ModifyQosPolicyRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // maxIOBandWidth Field Functions 
    bool hasMaxIOBandWidth() const { return this->maxIOBandWidth_ != nullptr;};
    void deleteMaxIOBandWidth() { this->maxIOBandWidth_ = nullptr;};
    inline int64_t getMaxIOBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxIOBandWidth_, 0L) };
    inline ModifyQosPolicyRequest& setMaxIOBandWidth(int64_t maxIOBandWidth) { DARABONBA_PTR_SET_VALUE(maxIOBandWidth_, maxIOBandWidth) };


    // maxIOps Field Functions 
    bool hasMaxIOps() const { return this->maxIOps_ != nullptr;};
    void deleteMaxIOps() { this->maxIOps_ = nullptr;};
    inline int64_t getMaxIOps() const { DARABONBA_PTR_GET_DEFAULT(maxIOps_, 0L) };
    inline ModifyQosPolicyRequest& setMaxIOps(int64_t maxIOps) { DARABONBA_PTR_SET_VALUE(maxIOps_, maxIOps) };


    // maxMetaQps Field Functions 
    bool hasMaxMetaQps() const { return this->maxMetaQps_ != nullptr;};
    void deleteMaxMetaQps() { this->maxMetaQps_ = nullptr;};
    inline int64_t getMaxMetaQps() const { DARABONBA_PTR_GET_DEFAULT(maxMetaQps_, 0L) };
    inline ModifyQosPolicyRequest& setMaxMetaQps(int64_t maxMetaQps) { DARABONBA_PTR_SET_VALUE(maxMetaQps_, maxMetaQps) };


    // qosPolicyId Field Functions 
    bool hasQosPolicyId() const { return this->qosPolicyId_ != nullptr;};
    void deleteQosPolicyId() { this->qosPolicyId_ = nullptr;};
    inline string getQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(qosPolicyId_, "") };
    inline ModifyQosPolicyRequest& setQosPolicyId(string qosPolicyId) { DARABONBA_PTR_SET_VALUE(qosPolicyId_, qosPolicyId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> federationId_ {};
    shared_ptr<string> fileSystemId_ {};
    // This parameter is required.
    shared_ptr<string> inputRegionId_ {};
    shared_ptr<int64_t> maxIOBandWidth_ {};
    shared_ptr<int64_t> maxIOps_ {};
    shared_ptr<int64_t> maxMetaQps_ {};
    // This parameter is required.
    shared_ptr<string> qosPolicyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
