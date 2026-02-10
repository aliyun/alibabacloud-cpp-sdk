// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAISubtitleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAISubtitleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAISubtitleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
    };
    DescribeLiveAISubtitleRequest() = default ;
    DescribeLiveAISubtitleRequest(const DescribeLiveAISubtitleRequest &) = default ;
    DescribeLiveAISubtitleRequest(DescribeLiveAISubtitleRequest &&) = default ;
    DescribeLiveAISubtitleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAISubtitleRequest() = default ;
    DescribeLiveAISubtitleRequest& operator=(const DescribeLiveAISubtitleRequest &) = default ;
    DescribeLiveAISubtitleRequest& operator=(DescribeLiveAISubtitleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->subtitleId_ == nullptr
        && this->subtitleName_ == nullptr; };
    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeLiveAISubtitleRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveAISubtitleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeLiveAISubtitleRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeLiveAISubtitleRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveAISubtitleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subtitleId Field Functions 
    bool hasSubtitleId() const { return this->subtitleId_ != nullptr;};
    void deleteSubtitleId() { this->subtitleId_ = nullptr;};
    inline string getSubtitleId() const { DARABONBA_PTR_GET_DEFAULT(subtitleId_, "") };
    inline DescribeLiveAISubtitleRequest& setSubtitleId(string subtitleId) { DARABONBA_PTR_SET_VALUE(subtitleId_, subtitleId) };


    // subtitleName Field Functions 
    bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
    void deleteSubtitleName() { this->subtitleName_ = nullptr;};
    inline string getSubtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
    inline DescribeLiveAISubtitleRequest& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


  protected:
    // Specifies whether to query the default subtitle template. Valid values:
    // 
    // *   true
    // 
    // *   false
    // 
    //     **
    // 
    //     **Note **The default template includes the built-in parameter configurations. You can specify the copyFrom parameter when you call the AddLiveAISubtitle operation to use the default template.
    shared_ptr<bool> isDefault_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Valid values: [1,100].
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page. Valid values: [1,100].
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the subtitle template.
    shared_ptr<string> subtitleId_ {};
    // The name of the subtitle template. The name can contain only digits, letters, and hyphens (-). The name cannot start with a hyphen.
    shared_ptr<string> subtitleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
