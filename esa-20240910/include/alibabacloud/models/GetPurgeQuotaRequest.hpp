// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPURGEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPURGEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetPurgeQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPurgeQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetPurgeQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetPurgeQuotaRequest() = default ;
    GetPurgeQuotaRequest(const GetPurgeQuotaRequest &) = default ;
    GetPurgeQuotaRequest(GetPurgeQuotaRequest &&) = default ;
    GetPurgeQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPurgeQuotaRequest() = default ;
    GetPurgeQuotaRequest& operator=(const GetPurgeQuotaRequest &) = default ;
    GetPurgeQuotaRequest& operator=(GetPurgeQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && return this->type_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetPurgeQuotaRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetPurgeQuotaRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The website ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The type of the purge task. Valid values:
    // 
    // *   **file** (default): purges the cache by file.
    // *   **cachetag**: purges the cache by cache tag.
    // *   **directory**: purges the cache by directory.
    // *   **ignoreParams**: purges the cache by URL with specific parameters ignored.
    // *   **hostname**: purges the cache by hostname.
    // *   **purgeall**: purges all cache.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
