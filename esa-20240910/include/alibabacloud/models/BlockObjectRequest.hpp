// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BLOCKOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BLOCKOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BlockObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BlockObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(Maxage, maxage_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, BlockObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(Maxage, maxage_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    BlockObjectRequest() = default ;
    BlockObjectRequest(const BlockObjectRequest &) = default ;
    BlockObjectRequest(BlockObjectRequest &&) = default ;
    BlockObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BlockObjectRequest() = default ;
    BlockObjectRequest& operator=(const BlockObjectRequest &) = default ;
    BlockObjectRequest& operator=(BlockObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->extension_ == nullptr && this->maxage_ == nullptr && this->siteId_ == nullptr && this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<string> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<string>) };
    inline vector<string> getContent() { DARABONBA_PTR_GET(content_, vector<string>) };
    inline BlockObjectRequest& setContent(const vector<string> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline BlockObjectRequest& setContent(vector<string> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline BlockObjectRequest& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // maxage Field Functions 
    bool hasMaxage() const { return this->maxage_ != nullptr;};
    void deleteMaxage() { this->maxage_ = nullptr;};
    inline int32_t getMaxage() const { DARABONBA_PTR_GET_DEFAULT(maxage_, 0) };
    inline BlockObjectRequest& setMaxage(int32_t maxage) { DARABONBA_PTR_SET_VALUE(maxage_, maxage) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BlockObjectRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BlockObjectRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The content to block.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> content_ {};
    // The blocking period that you can extend. Set the value to 2year.
    shared_ptr<string> extension_ {};
    // The period of time during which the URL is blocked. Unit: seconds. Specify this parameter if Type is set to block.
    shared_ptr<int32_t> maxage_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The type. Valid values:
    // 
    // *   **block**
    // *   **unblock**
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
