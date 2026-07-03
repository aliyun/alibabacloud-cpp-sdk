// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULEVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULEVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationRuleVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRuleVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRuleVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListNormalizationRuleVersionsRequest() = default ;
    ListNormalizationRuleVersionsRequest(const ListNormalizationRuleVersionsRequest &) = default ;
    ListNormalizationRuleVersionsRequest(ListNormalizationRuleVersionsRequest &&) = default ;
    ListNormalizationRuleVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRuleVersionsRequest() = default ;
    ListNormalizationRuleVersionsRequest& operator=(const ListNormalizationRuleVersionsRequest &) = default ;
    ListNormalizationRuleVersionsRequest& operator=(ListNormalizationRuleVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->normalizationRuleId_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListNormalizationRuleVersionsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationRuleVersionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationRuleVersionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline ListNormalizationRuleVersionsRequest& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNormalizationRuleVersionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListNormalizationRuleVersionsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language of the response messages. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return for the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. You do not need to specify this parameter for the first request. If a next page exists, set this parameter to the value of NextToken that is returned from the last call.
    shared_ptr<string> nextToken_ {};
    // The ID of the normalization rule.
    shared_ptr<string> normalizationRuleId_ {};
    // The region where the Data Management Center for threat analysis is located. Select the region for the Management Center based on the region of your assets. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland.
    // 
    // - ap-southeast-1: Your assets are in a region outside Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The user ID of the member. An administrator can use this parameter to switch to the perspective of this member.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
