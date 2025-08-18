// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BLOCKOBJECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BLOCKOBJECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BlockObjectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BlockObjectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(Maxage, maxage_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, BlockObjectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(Maxage, maxage_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    BlockObjectShrinkRequest() = default ;
    BlockObjectShrinkRequest(const BlockObjectShrinkRequest &) = default ;
    BlockObjectShrinkRequest(BlockObjectShrinkRequest &&) = default ;
    BlockObjectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BlockObjectShrinkRequest() = default ;
    BlockObjectShrinkRequest& operator=(const BlockObjectShrinkRequest &) = default ;
    BlockObjectShrinkRequest& operator=(BlockObjectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentShrink_ != nullptr
        && this->extension_ != nullptr && this->maxage_ != nullptr && this->siteId_ != nullptr && this->type_ != nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string contentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline BlockObjectShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline BlockObjectShrinkRequest& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // maxage Field Functions 
    bool hasMaxage() const { return this->maxage_ != nullptr;};
    void deleteMaxage() { this->maxage_ = nullptr;};
    inline int32_t maxage() const { DARABONBA_PTR_GET_DEFAULT(maxage_, 0) };
    inline BlockObjectShrinkRequest& setMaxage(int32_t maxage) { DARABONBA_PTR_SET_VALUE(maxage_, maxage) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BlockObjectShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BlockObjectShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The content to block.
    // 
    // This parameter is required.
    std::shared_ptr<string> contentShrink_ = nullptr;
    // The blocking period that you can extend. Set the value to 2year.
    std::shared_ptr<string> extension_ = nullptr;
    // The period of time during which the URL is blocked. Unit: seconds. Specify this parameter if Type is set to block.
    std::shared_ptr<int32_t> maxage_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The type. Valid values:
    // 
    // *   **block**
    // *   **unblock**
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
