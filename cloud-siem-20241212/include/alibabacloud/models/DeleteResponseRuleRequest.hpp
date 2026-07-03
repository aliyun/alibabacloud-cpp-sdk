// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESPONSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESPONSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class DeleteResponseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResponseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResponseRuleId, responseRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResponseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleId, responseRuleId_);
    };
    DeleteResponseRuleRequest() = default ;
    DeleteResponseRuleRequest(const DeleteResponseRuleRequest &) = default ;
    DeleteResponseRuleRequest(DeleteResponseRuleRequest &&) = default ;
    DeleteResponseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResponseRuleRequest() = default ;
    DeleteResponseRuleRequest& operator=(const DeleteResponseRuleRequest &) = default ;
    DeleteResponseRuleRequest& operator=(DeleteResponseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->responseRuleId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteResponseRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DeleteResponseRuleRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DeleteResponseRuleRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteResponseRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // responseRuleId Field Functions 
    bool hasResponseRuleId() const { return this->responseRuleId_ != nullptr;};
    void deleteResponseRuleId() { this->responseRuleId_ = nullptr;};
    inline string getResponseRuleId() const { DARABONBA_PTR_GET_DEFAULT(responseRuleId_, "") };
    inline DeleteResponseRuleRequest& setResponseRuleId(string responseRuleId) { DARABONBA_PTR_SET_VALUE(responseRuleId_, responseRuleId) };


  protected:
    // The language of the response message. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to retrieve the next page of results. If you do not specify this parameter, the service returns the first page of results.
    shared_ptr<string> nextToken_ {};
    // The region ID of the data management center for threat analysis. This must be the region where your assets are located. Valid values:
    // 
    // - `cn-hangzhou`: for assets in the Chinese mainland or Hong Kong (China).
    // 
    // - `ap-southeast-1`: for assets in international regions.
    shared_ptr<string> regionId_ {};
    // The ID of the automatic response rule to delete.
    shared_ptr<string> responseRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
