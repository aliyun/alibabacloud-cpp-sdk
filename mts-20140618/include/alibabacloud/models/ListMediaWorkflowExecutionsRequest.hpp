// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAWORKFLOWEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListMediaWorkflowExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaWorkflowExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputFileURL, inputFileURL_);
      DARABONBA_PTR_TO_JSON(MaximumPageSize, maximumPageSize_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowName, mediaWorkflowName_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaWorkflowExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputFileURL, inputFileURL_);
      DARABONBA_PTR_FROM_JSON(MaximumPageSize, maximumPageSize_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowName, mediaWorkflowName_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListMediaWorkflowExecutionsRequest() = default ;
    ListMediaWorkflowExecutionsRequest(const ListMediaWorkflowExecutionsRequest &) = default ;
    ListMediaWorkflowExecutionsRequest(ListMediaWorkflowExecutionsRequest &&) = default ;
    ListMediaWorkflowExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaWorkflowExecutionsRequest() = default ;
    ListMediaWorkflowExecutionsRequest& operator=(const ListMediaWorkflowExecutionsRequest &) = default ;
    ListMediaWorkflowExecutionsRequest& operator=(ListMediaWorkflowExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputFileURL_ == nullptr
        && this->maximumPageSize_ == nullptr && this->mediaWorkflowId_ == nullptr && this->mediaWorkflowName_ == nullptr && this->nextPageToken_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // inputFileURL Field Functions 
    bool hasInputFileURL() const { return this->inputFileURL_ != nullptr;};
    void deleteInputFileURL() { this->inputFileURL_ = nullptr;};
    inline string getInputFileURL() const { DARABONBA_PTR_GET_DEFAULT(inputFileURL_, "") };
    inline ListMediaWorkflowExecutionsRequest& setInputFileURL(string inputFileURL) { DARABONBA_PTR_SET_VALUE(inputFileURL_, inputFileURL) };


    // maximumPageSize Field Functions 
    bool hasMaximumPageSize() const { return this->maximumPageSize_ != nullptr;};
    void deleteMaximumPageSize() { this->maximumPageSize_ = nullptr;};
    inline int64_t getMaximumPageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumPageSize_, 0L) };
    inline ListMediaWorkflowExecutionsRequest& setMaximumPageSize(int64_t maximumPageSize) { DARABONBA_PTR_SET_VALUE(maximumPageSize_, maximumPageSize) };


    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline string getMediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
    inline ListMediaWorkflowExecutionsRequest& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


    // mediaWorkflowName Field Functions 
    bool hasMediaWorkflowName() const { return this->mediaWorkflowName_ != nullptr;};
    void deleteMediaWorkflowName() { this->mediaWorkflowName_ = nullptr;};
    inline string getMediaWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowName_, "") };
    inline ListMediaWorkflowExecutionsRequest& setMediaWorkflowName(string mediaWorkflowName) { DARABONBA_PTR_SET_VALUE(mediaWorkflowName_, mediaWorkflowName) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListMediaWorkflowExecutionsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListMediaWorkflowExecutionsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListMediaWorkflowExecutionsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListMediaWorkflowExecutionsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListMediaWorkflowExecutionsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The Object Storage Service (OSS) URL of the input file of the media workflow. The URL complies with RFC 3986 and is encoded in UTF-8, with reserved characters being percent-encoded. For more information, see [URL encoding](https://help.aliyun.com/document_detail/423796.html).
    shared_ptr<string> inputFileURL_ {};
    // The maximum number of media workflow execution instances to return. Valid values: `[1,100]`. Default value: **10**.
    shared_ptr<int64_t> maximumPageSize_ {};
    // The ID of the media workflow whose execution instances you want to query. To obtain the workflow ID, you can log on to the **ApsaraVideo Media Processing (MPS) console** and choose **Workflows** > **Workflow Settings**.
    shared_ptr<string> mediaWorkflowId_ {};
    // The name of the media workflow. To obtain the workflow name, you can log on to the **MPS console** and choose **Workflows** > **Workflow Settings**.
    shared_ptr<string> mediaWorkflowName_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. The value is a UUID that contains 32 characters. When you request the first page of query results, leave the NextPageToken parameter empty. When you request more query results, specify the value of the NextPageToken parameter returned in the query results on the previous page.
    shared_ptr<string> nextPageToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
