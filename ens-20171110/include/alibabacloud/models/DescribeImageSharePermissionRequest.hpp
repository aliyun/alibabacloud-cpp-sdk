// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImageSharePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSharePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSharePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeImageSharePermissionRequest() = default ;
    DescribeImageSharePermissionRequest(const DescribeImageSharePermissionRequest &) = default ;
    DescribeImageSharePermissionRequest(DescribeImageSharePermissionRequest &&) = default ;
    DescribeImageSharePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSharePermissionRequest() = default ;
    DescribeImageSharePermissionRequest& operator=(const DescribeImageSharePermissionRequest &) = default ;
    DescribeImageSharePermissionRequest& operator=(DescribeImageSharePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunId_ != nullptr
        && this->imageId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // aliyunId Field Functions 
    bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
    void deleteAliyunId() { this->aliyunId_ = nullptr;};
    inline int64_t aliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, 0L) };
    inline DescribeImageSharePermissionRequest& setAliyunId(int64_t aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageSharePermissionRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeImageSharePermissionRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeImageSharePermissionRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliyunId_ = nullptr;
    // The ID of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The page number. Pages start from page **1**.
    // 
    // Default value: **1**.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: **100**.
    // 
    // Default value: **10**.
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
