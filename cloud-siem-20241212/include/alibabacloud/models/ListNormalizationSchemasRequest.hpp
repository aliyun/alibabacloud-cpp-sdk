// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONSCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONSCHEMASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldSource, normalizationFieldSource_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_TO_JSON(NormalizationSecurityDomainId, normalizationSecurityDomainId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldSource, normalizationFieldSource_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_FROM_JSON(NormalizationSecurityDomainId, normalizationSecurityDomainId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListNormalizationSchemasRequest() = default ;
    ListNormalizationSchemasRequest(const ListNormalizationSchemasRequest &) = default ;
    ListNormalizationSchemasRequest(ListNormalizationSchemasRequest &&) = default ;
    ListNormalizationSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationSchemasRequest() = default ;
    ListNormalizationSchemasRequest& operator=(const ListNormalizationSchemasRequest &) = default ;
    ListNormalizationSchemasRequest& operator=(ListNormalizationSchemasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->normalizationCategoryId_ == nullptr && this->normalizationFieldSource_ == nullptr && this->normalizationSchemaType_ == nullptr
        && this->normalizationSecurityDomainId_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListNormalizationSchemasRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationSchemasRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationSchemasRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationCategoryId Field Functions 
    bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
    void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
    inline string getNormalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
    inline ListNormalizationSchemasRequest& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


    // normalizationFieldSource Field Functions 
    bool hasNormalizationFieldSource() const { return this->normalizationFieldSource_ != nullptr;};
    void deleteNormalizationFieldSource() { this->normalizationFieldSource_ = nullptr;};
    inline string getNormalizationFieldSource() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldSource_, "") };
    inline ListNormalizationSchemasRequest& setNormalizationFieldSource(string normalizationFieldSource) { DARABONBA_PTR_SET_VALUE(normalizationFieldSource_, normalizationFieldSource) };


    // normalizationSchemaType Field Functions 
    bool hasNormalizationSchemaType() const { return this->normalizationSchemaType_ != nullptr;};
    void deleteNormalizationSchemaType() { this->normalizationSchemaType_ = nullptr;};
    inline string getNormalizationSchemaType() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaType_, "") };
    inline ListNormalizationSchemasRequest& setNormalizationSchemaType(string normalizationSchemaType) { DARABONBA_PTR_SET_VALUE(normalizationSchemaType_, normalizationSchemaType) };


    // normalizationSecurityDomainId Field Functions 
    bool hasNormalizationSecurityDomainId() const { return this->normalizationSecurityDomainId_ != nullptr;};
    void deleteNormalizationSecurityDomainId() { this->normalizationSecurityDomainId_ = nullptr;};
    inline string getNormalizationSecurityDomainId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSecurityDomainId_, "") };
    inline ListNormalizationSchemasRequest& setNormalizationSecurityDomainId(string normalizationSecurityDomainId) { DARABONBA_PTR_SET_VALUE(normalizationSecurityDomainId_, normalizationSecurityDomainId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNormalizationSchemasRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListNormalizationSchemasRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. Leave this parameter empty for the first query or if no more results exist. If more results exist, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The ID of the normalization rule category.
    shared_ptr<string> normalizationCategoryId_ {};
    // The field source filter. Valid values: normalized / native.
    shared_ptr<string> normalizationFieldSource_ {};
    // The normalization schema type. Valid values:
    // - log: log.
    // - entity: entity.
    shared_ptr<string> normalizationSchemaType_ {};
    // The security domain ID.
    shared_ptr<string> normalizationSecurityDomainId_ {};
    // The region where the threat analysis data management center is located. Specify the management center based on the region of your assets. Valid values:
    // - cn-hangzhou: the asset is in the Chinese mainland.
    // - ap-southeast-1: the asset is outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The user ID that the administrator switches to when viewing as another member.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
