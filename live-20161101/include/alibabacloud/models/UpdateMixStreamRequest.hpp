// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMIXSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMIXSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateMixStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMixStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InputStreamList, inputStreamList_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(MixStreamId, mixStreamId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMixStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InputStreamList, inputStreamList_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(MixStreamId, mixStreamId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateMixStreamRequest() = default ;
    UpdateMixStreamRequest(const UpdateMixStreamRequest &) = default ;
    UpdateMixStreamRequest(UpdateMixStreamRequest &&) = default ;
    UpdateMixStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMixStreamRequest() = default ;
    UpdateMixStreamRequest& operator=(const UpdateMixStreamRequest &) = default ;
    UpdateMixStreamRequest& operator=(UpdateMixStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->inputStreamList_ == nullptr && this->layoutId_ == nullptr && this->mixStreamId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateMixStreamRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // inputStreamList Field Functions 
    bool hasInputStreamList() const { return this->inputStreamList_ != nullptr;};
    void deleteInputStreamList() { this->inputStreamList_ = nullptr;};
    inline string getInputStreamList() const { DARABONBA_PTR_GET_DEFAULT(inputStreamList_, "") };
    inline UpdateMixStreamRequest& setInputStreamList(string inputStreamList) { DARABONBA_PTR_SET_VALUE(inputStreamList_, inputStreamList) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline UpdateMixStreamRequest& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // mixStreamId Field Functions 
    bool hasMixStreamId() const { return this->mixStreamId_ != nullptr;};
    void deleteMixStreamId() { this->mixStreamId_ = nullptr;};
    inline string getMixStreamId() const { DARABONBA_PTR_GET_DEFAULT(mixStreamId_, "") };
    inline UpdateMixStreamRequest& setMixStreamId(string mixStreamId) { DARABONBA_PTR_SET_VALUE(mixStreamId_, mixStreamId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateMixStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateMixStreamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The main streaming domain.
    // 
    // >  Only domain names that reside in the China (Shanghai) and China (Beijing) regions are supported.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The input streams, in a JSON array.
    // 
    // For more information, see **InputStreamConfig**.
    // 
    // This parameter is required.
    shared_ptr<string> inputStreamList_ {};
    // The ID of the layout. Valid values:
    // 
    // *   **MixStreamLayout-1-1**
    // *   **MixStreamLayout-2-1**
    // *   **MixStreamLayout-2-2**
    // *   **MixStreamLayout-2-3**
    // *   **MixStreamLayout-3-1**
    // *   **MixStreamLayout-3-2**
    // *   **MixStreamLayout-4-1**
    // *   **USERDEFINED**: If you do not use a preset layout, set this parameter to **USERDEFINED**.
    // 
    // >  For more information, see [Preset layouts for stream mixing](https://help.aliyun.com/document_detail/199361.html).
    shared_ptr<string> layoutId_ {};
    // The ID of the stream mixing task. If the task was created by calling the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation, check the value of the response parameter MixStreamId to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> mixStreamId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
