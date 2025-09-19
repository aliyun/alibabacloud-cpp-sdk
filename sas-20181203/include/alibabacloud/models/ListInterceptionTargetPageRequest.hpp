// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONTARGETPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONTARGETPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInterceptionTargetPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionTargetPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionTargetPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListInterceptionTargetPageRequest() = default ;
    ListInterceptionTargetPageRequest(const ListInterceptionTargetPageRequest &) = default ;
    ListInterceptionTargetPageRequest(ListInterceptionTargetPageRequest &&) = default ;
    ListInterceptionTargetPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionTargetPageRequest() = default ;
    ListInterceptionTargetPageRequest& operator=(const ListInterceptionTargetPageRequest &) = default ;
    ListInterceptionTargetPageRequest& operator=(ListInterceptionTargetPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->currentPage_ != nullptr && this->imageList_ != nullptr && this->namespace_ != nullptr && this->pageSize_ != nullptr && this->tagList_ != nullptr
        && this->targetName_ != nullptr && this->targetType_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListInterceptionTargetPageRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListInterceptionTargetPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<string> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
    inline vector<string> imageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
    inline ListInterceptionTargetPageRequest& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline ListInterceptionTargetPageRequest& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListInterceptionTargetPageRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInterceptionTargetPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<string> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
    inline vector<string> tagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
    inline ListInterceptionTargetPageRequest& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline ListInterceptionTargetPageRequest& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListInterceptionTargetPageRequest& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListInterceptionTargetPageRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The name of the application to which the network object belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The images of the network object.
    std::shared_ptr<vector<string>> imageList_ = nullptr;
    // The namespace to which the network object belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The labels specified for the network object.
    std::shared_ptr<vector<string>> tagList_ = nullptr;
    // The name of the network object.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the network object. Valid values:
    // 
    // *   IMAGE
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
