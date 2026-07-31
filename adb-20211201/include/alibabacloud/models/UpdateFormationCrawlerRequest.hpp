// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFORMATIONCRAWLERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFORMATIONCRAWLERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateFormationCrawlerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFormationCrawlerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrawlerInfo, crawlerInfo_);
      DARABONBA_PTR_TO_JSON(CrawlerTaskId, crawlerTaskId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFormationCrawlerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrawlerInfo, crawlerInfo_);
      DARABONBA_PTR_FROM_JSON(CrawlerTaskId, crawlerTaskId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateFormationCrawlerRequest() = default ;
    UpdateFormationCrawlerRequest(const UpdateFormationCrawlerRequest &) = default ;
    UpdateFormationCrawlerRequest(UpdateFormationCrawlerRequest &&) = default ;
    UpdateFormationCrawlerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFormationCrawlerRequest() = default ;
    UpdateFormationCrawlerRequest& operator=(const UpdateFormationCrawlerRequest &) = default ;
    UpdateFormationCrawlerRequest& operator=(UpdateFormationCrawlerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crawlerInfo_ == nullptr
        && this->crawlerTaskId_ == nullptr && this->DBClusterId_ == nullptr && this->regionId_ == nullptr; };
    // crawlerInfo Field Functions 
    bool hasCrawlerInfo() const { return this->crawlerInfo_ != nullptr;};
    void deleteCrawlerInfo() { this->crawlerInfo_ = nullptr;};
    inline string getCrawlerInfo() const { DARABONBA_PTR_GET_DEFAULT(crawlerInfo_, "") };
    inline UpdateFormationCrawlerRequest& setCrawlerInfo(string crawlerInfo) { DARABONBA_PTR_SET_VALUE(crawlerInfo_, crawlerInfo) };


    // crawlerTaskId Field Functions 
    bool hasCrawlerTaskId() const { return this->crawlerTaskId_ != nullptr;};
    void deleteCrawlerTaskId() { this->crawlerTaskId_ = nullptr;};
    inline string getCrawlerTaskId() const { DARABONBA_PTR_GET_DEFAULT(crawlerTaskId_, "") };
    inline UpdateFormationCrawlerRequest& setCrawlerTaskId(string crawlerTaskId) { DARABONBA_PTR_SET_VALUE(crawlerTaskId_, crawlerTaskId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateFormationCrawlerRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateFormationCrawlerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The JSON string that contains the complete configuration of the crawler. This is the most important parameter. For more information about the internal JSON structure, see the CrawlerInfo structure definition section.
    // 
    // This parameter is required.
    shared_ptr<string> crawlerInfo_ {};
    // The task ID.
    shared_ptr<string> crawlerTaskId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the regions and zones supported by AnalyticDB for MySQL, including region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
