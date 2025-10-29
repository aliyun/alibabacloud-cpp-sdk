// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainTranscodeName, domainTranscodeName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainTranscodeName, domainTranscodeName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeLiveStreamTranscodeInfoRequest() = default ;
    DescribeLiveStreamTranscodeInfoRequest(const DescribeLiveStreamTranscodeInfoRequest &) = default ;
    DescribeLiveStreamTranscodeInfoRequest(DescribeLiveStreamTranscodeInfoRequest &&) = default ;
    DescribeLiveStreamTranscodeInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeInfoRequest() = default ;
    DescribeLiveStreamTranscodeInfoRequest& operator=(const DescribeLiveStreamTranscodeInfoRequest &) = default ;
    DescribeLiveStreamTranscodeInfoRequest& operator=(DescribeLiveStreamTranscodeInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainTranscodeName_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamTranscodeInfoRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainTranscodeName Field Functions 
    bool hasDomainTranscodeName() const { return this->domainTranscodeName_ != nullptr;};
    void deleteDomainTranscodeName() { this->domainTranscodeName_ = nullptr;};
    inline string domainTranscodeName() const { DARABONBA_PTR_GET_DEFAULT(domainTranscodeName_, "") };
    inline DescribeLiveStreamTranscodeInfoRequest& setDomainTranscodeName(string domainTranscodeName) { DARABONBA_PTR_SET_VALUE(domainTranscodeName_, domainTranscodeName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveStreamTranscodeInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveStreamTranscodeInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainTranscodeName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
