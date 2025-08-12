// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODESTREAMNUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODESTREAMNUMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeStreamNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeStreamNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SplitType, splitType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeStreamNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SplitType, splitType_);
    };
    DescribeLiveStreamTranscodeStreamNumRequest() = default ;
    DescribeLiveStreamTranscodeStreamNumRequest(const DescribeLiveStreamTranscodeStreamNumRequest &) = default ;
    DescribeLiveStreamTranscodeStreamNumRequest(DescribeLiveStreamTranscodeStreamNumRequest &&) = default ;
    DescribeLiveStreamTranscodeStreamNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeStreamNumRequest() = default ;
    DescribeLiveStreamTranscodeStreamNumRequest& operator=(const DescribeLiveStreamTranscodeStreamNumRequest &) = default ;
    DescribeLiveStreamTranscodeStreamNumRequest& operator=(DescribeLiveStreamTranscodeStreamNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->splitType_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamTranscodeStreamNumRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveStreamTranscodeStreamNumRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveStreamTranscodeStreamNumRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // splitType Field Functions 
    bool hasSplitType() const { return this->splitType_ != nullptr;};
    void deleteSplitType() { this->splitType_ = nullptr;};
    inline string splitType() const { DARABONBA_PTR_GET_DEFAULT(splitType_, "") };
    inline DescribeLiveStreamTranscodeStreamNumRequest& setSplitType(string splitType) { DARABONBA_PTR_SET_VALUE(splitType_, splitType) };


  protected:
    // The streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The grouping method.
    // 
    // *   Domain name (default)
    // *   Template
    // 
    // Valid values:
    // 
    // *   domain
    // *   template
    std::shared_ptr<string> splitType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
