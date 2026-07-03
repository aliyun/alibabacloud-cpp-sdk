// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldSource, normalizationFieldSource_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldSource, normalizationFieldSource_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaType, normalizationSchemaType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListNormalizationFieldsRequest() = default ;
    ListNormalizationFieldsRequest(const ListNormalizationFieldsRequest &) = default ;
    ListNormalizationFieldsRequest(ListNormalizationFieldsRequest &&) = default ;
    ListNormalizationFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationFieldsRequest() = default ;
    ListNormalizationFieldsRequest& operator=(const ListNormalizationFieldsRequest &) = default ;
    ListNormalizationFieldsRequest& operator=(ListNormalizationFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr && this->normalizationFieldSource_ == nullptr && this->normalizationSchemaType_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListNormalizationFieldsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationFieldsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNormalizationFieldsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationFieldsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationFieldSource Field Functions 
    bool hasNormalizationFieldSource() const { return this->normalizationFieldSource_ != nullptr;};
    void deleteNormalizationFieldSource() { this->normalizationFieldSource_ = nullptr;};
    inline string getNormalizationFieldSource() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldSource_, "") };
    inline ListNormalizationFieldsRequest& setNormalizationFieldSource(string normalizationFieldSource) { DARABONBA_PTR_SET_VALUE(normalizationFieldSource_, normalizationFieldSource) };


    // normalizationSchemaType Field Functions 
    bool hasNormalizationSchemaType() const { return this->normalizationSchemaType_ != nullptr;};
    void deleteNormalizationSchemaType() { this->normalizationSchemaType_ = nullptr;};
    inline string getNormalizationSchemaType() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaType_, "") };
    inline ListNormalizationFieldsRequest& setNormalizationSchemaType(string normalizationSchemaType) { DARABONBA_PTR_SET_VALUE(normalizationSchemaType_, normalizationSchemaType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNormalizationFieldsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListNormalizationFieldsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The field name.
    shared_ptr<string> name_ {};
    // Specifies whether a next query token exists. You do not need to specify this parameter for the first query or if no next query exists. If a next query exists, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> normalizationFieldSource_ {};
    shared_ptr<string> normalizationSchemaType_ {};
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Your assets reside in the Chinese mainland.
    // - ap-southeast-1: Your assets reside outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
