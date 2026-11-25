// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiskAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskAttachments, diskAttachments_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskAttachments, diskAttachments_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiskAttachmentsResponseBody() = default ;
    DescribeDiskAttachmentsResponseBody(const DescribeDiskAttachmentsResponseBody &) = default ;
    DescribeDiskAttachmentsResponseBody(DescribeDiskAttachmentsResponseBody &&) = default ;
    DescribeDiskAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskAttachmentsResponseBody() = default ;
    DescribeDiskAttachmentsResponseBody& operator=(const DescribeDiskAttachmentsResponseBody &) = default ;
    DescribeDiskAttachmentsResponseBody& operator=(DescribeDiskAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiskAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiskAttachments& obj) { 
        DARABONBA_PTR_TO_JSON(AttachedTime, attachedTime_);
        DARABONBA_PTR_TO_JSON(Device, device_);
        DARABONBA_PTR_TO_JSON(DiskId, diskId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, DiskAttachments& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachedTime, attachedTime_);
        DARABONBA_PTR_FROM_JSON(Device, device_);
        DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      DiskAttachments() = default ;
      DiskAttachments(const DiskAttachments &) = default ;
      DiskAttachments(DiskAttachments &&) = default ;
      DiskAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiskAttachments() = default ;
      DiskAttachments& operator=(const DiskAttachments &) = default ;
      DiskAttachments& operator=(DiskAttachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachedTime_ == nullptr
        && this->device_ == nullptr && this->diskId_ == nullptr && this->instanceId_ == nullptr; };
      // attachedTime Field Functions 
      bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
      void deleteAttachedTime() { this->attachedTime_ = nullptr;};
      inline string getAttachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
      inline DiskAttachments& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


      // device Field Functions 
      bool hasDevice() const { return this->device_ != nullptr;};
      void deleteDevice() { this->device_ = nullptr;};
      inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
      inline DiskAttachments& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


      // diskId Field Functions 
      bool hasDiskId() const { return this->diskId_ != nullptr;};
      void deleteDiskId() { this->diskId_ = nullptr;};
      inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
      inline DiskAttachments& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DiskAttachments& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The time when the disk was successfully attached, in ISO 8601 format (UTC).
      shared_ptr<string> attachedTime_ {};
      // The device name on the instance.
      shared_ptr<string> device_ {};
      // The disk ID.
      shared_ptr<string> diskId_ {};
      // The ID of the instance to which the disk is attached.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->diskAttachments_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // diskAttachments Field Functions 
    bool hasDiskAttachments() const { return this->diskAttachments_ != nullptr;};
    void deleteDiskAttachments() { this->diskAttachments_ = nullptr;};
    inline const vector<DescribeDiskAttachmentsResponseBody::DiskAttachments> & getDiskAttachments() const { DARABONBA_PTR_GET_CONST(diskAttachments_, vector<DescribeDiskAttachmentsResponseBody::DiskAttachments>) };
    inline vector<DescribeDiskAttachmentsResponseBody::DiskAttachments> getDiskAttachments() { DARABONBA_PTR_GET(diskAttachments_, vector<DescribeDiskAttachmentsResponseBody::DiskAttachments>) };
    inline DescribeDiskAttachmentsResponseBody& setDiskAttachments(const vector<DescribeDiskAttachmentsResponseBody::DiskAttachments> & diskAttachments) { DARABONBA_PTR_SET_VALUE(diskAttachments_, diskAttachments) };
    inline DescribeDiskAttachmentsResponseBody& setDiskAttachments(vector<DescribeDiskAttachmentsResponseBody::DiskAttachments> && diskAttachments) { DARABONBA_PTR_SET_RVALUE(diskAttachments_, diskAttachments) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDiskAttachmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskAttachmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of disk attachments.
    shared_ptr<vector<DescribeDiskAttachmentsResponseBody::DiskAttachments>> diskAttachments_ {};
    // The maximum number of attachments returned in a single request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. An empty value indicates that all attachments have been returned.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
