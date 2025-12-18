// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADVANCEDSEARCHFILERESPONSEBODYRESOURCESEARCH_HPP_
#define ALIBABACLOUD_MODELS_GETADVANCEDSEARCHFILERESPONSEBODYRESOURCESEARCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAdvancedSearchFileResponseBodyResourceSearch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdvancedSearchFileResponseBodyResourceSearch& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdvancedSearchFileResponseBodyResourceSearch& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetAdvancedSearchFileResponseBodyResourceSearch() = default ;
    GetAdvancedSearchFileResponseBodyResourceSearch(const GetAdvancedSearchFileResponseBodyResourceSearch &) = default ;
    GetAdvancedSearchFileResponseBodyResourceSearch(GetAdvancedSearchFileResponseBodyResourceSearch &&) = default ;
    GetAdvancedSearchFileResponseBodyResourceSearch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdvancedSearchFileResponseBodyResourceSearch() = default ;
    GetAdvancedSearchFileResponseBodyResourceSearch& operator=(const GetAdvancedSearchFileResponseBodyResourceSearch &) = default ;
    GetAdvancedSearchFileResponseBodyResourceSearch& operator=(GetAdvancedSearchFileResponseBodyResourceSearch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && return this->resourceInventoryGenerateTime_ == nullptr && return this->status_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetAdvancedSearchFileResponseBodyResourceSearch& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // resourceInventoryGenerateTime Field Functions 
    bool hasResourceInventoryGenerateTime() const { return this->resourceInventoryGenerateTime_ != nullptr;};
    void deleteResourceInventoryGenerateTime() { this->resourceInventoryGenerateTime_ = nullptr;};
    inline int64_t resourceInventoryGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceInventoryGenerateTime_, 0L) };
    inline GetAdvancedSearchFileResponseBodyResourceSearch& setResourceInventoryGenerateTime(int64_t resourceInventoryGenerateTime) { DARABONBA_PTR_SET_VALUE(resourceInventoryGenerateTime_, resourceInventoryGenerateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAdvancedSearchFileResponseBodyResourceSearch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The download URL of the resource file.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The time when the resource file was generated. The value is a timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> resourceInventoryGenerateTime_ = nullptr;
    // The generation status of the resource file. Valid values:
    // 
    // *   CREATING: The resource file is being generated.
    // *   COMPLETE: The resource file is generated.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
