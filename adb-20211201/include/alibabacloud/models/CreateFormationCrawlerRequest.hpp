// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFORMATIONCRAWLERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFORMATIONCRAWLERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateFormationCrawlerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFormationCrawlerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrawlerInfo, crawlerInfo_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFormationCrawlerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrawlerInfo, crawlerInfo_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateFormationCrawlerRequest() = default ;
    CreateFormationCrawlerRequest(const CreateFormationCrawlerRequest &) = default ;
    CreateFormationCrawlerRequest(CreateFormationCrawlerRequest &&) = default ;
    CreateFormationCrawlerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFormationCrawlerRequest() = default ;
    CreateFormationCrawlerRequest& operator=(const CreateFormationCrawlerRequest &) = default ;
    CreateFormationCrawlerRequest& operator=(CreateFormationCrawlerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crawlerInfo_ == nullptr
        && this->DBClusterId_ == nullptr && this->regionId_ == nullptr; };
    // crawlerInfo Field Functions 
    bool hasCrawlerInfo() const { return this->crawlerInfo_ != nullptr;};
    void deleteCrawlerInfo() { this->crawlerInfo_ = nullptr;};
    inline string getCrawlerInfo() const { DARABONBA_PTR_GET_DEFAULT(crawlerInfo_, "") };
    inline CreateFormationCrawlerRequest& setCrawlerInfo(string crawlerInfo) { DARABONBA_PTR_SET_VALUE(crawlerInfo_, crawlerInfo) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateFormationCrawlerRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFormationCrawlerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The JSON string that contains the complete crawler configuration. This is the most important parameter. For the internal JSON structure, see the CrawlerInfo structure definition section.
    // 
    // This parameter is required.
    shared_ptr<string> crawlerInfo_ {};
    // The ADB instance ID. This specifies the resource-level scope of the operation.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
