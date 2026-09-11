// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTEDPRICINGAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTEDPRICINGAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListSupportedPricingApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportedPricingApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(supportedApis, supportedApis_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportedPricingApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(supportedApis, supportedApis_);
    };
    ListSupportedPricingApisResponseBody() = default ;
    ListSupportedPricingApisResponseBody(const ListSupportedPricingApisResponseBody &) = default ;
    ListSupportedPricingApisResponseBody(ListSupportedPricingApisResponseBody &&) = default ;
    ListSupportedPricingApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportedPricingApisResponseBody() = default ;
    ListSupportedPricingApisResponseBody& operator=(const ListSupportedPricingApisResponseBody &) = default ;
    ListSupportedPricingApisResponseBody& operator=(ListSupportedPricingApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportedApis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportedApis& obj) { 
        DARABONBA_PTR_TO_JSON(apiName, apiName_);
        DARABONBA_PTR_TO_JSON(popCode, popCode_);
        DARABONBA_PTR_TO_JSON(popVersion, popVersion_);
      };
      friend void from_json(const Darabonba::Json& j, SupportedApis& obj) { 
        DARABONBA_PTR_FROM_JSON(apiName, apiName_);
        DARABONBA_PTR_FROM_JSON(popCode, popCode_);
        DARABONBA_PTR_FROM_JSON(popVersion, popVersion_);
      };
      SupportedApis() = default ;
      SupportedApis(const SupportedApis &) = default ;
      SupportedApis(SupportedApis &&) = default ;
      SupportedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportedApis() = default ;
      SupportedApis& operator=(const SupportedApis &) = default ;
      SupportedApis& operator=(SupportedApis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiName_ == nullptr
        && this->popCode_ == nullptr && this->popVersion_ == nullptr; };
      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline SupportedApis& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // popCode Field Functions 
      bool hasPopCode() const { return this->popCode_ != nullptr;};
      void deletePopCode() { this->popCode_ = nullptr;};
      inline string getPopCode() const { DARABONBA_PTR_GET_DEFAULT(popCode_, "") };
      inline SupportedApis& setPopCode(string popCode) { DARABONBA_PTR_SET_VALUE(popCode_, popCode) };


      // popVersion Field Functions 
      bool hasPopVersion() const { return this->popVersion_ != nullptr;};
      void deletePopVersion() { this->popVersion_ = nullptr;};
      inline string getPopVersion() const { DARABONBA_PTR_GET_DEFAULT(popVersion_, "") };
      inline SupportedApis& setPopVersion(string popVersion) { DARABONBA_PTR_SET_VALUE(popVersion_, popVersion) };


    protected:
      // The OpenAPI name in PascalCase, such as RunInstances.
      shared_ptr<string> apiName_ {};
      // The POP product code, such as Ecs, Rds, or Alb. This value corresponds to the popCode field used in price inquiry requests.
      shared_ptr<string> popCode_ {};
      // The OpenAPI version number, such as 2014-05-26.
      shared_ptr<string> popVersion_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->supportedApis_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSupportedPricingApisResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupportedPricingApisResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupportedPricingApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportedApis Field Functions 
    bool hasSupportedApis() const { return this->supportedApis_ != nullptr;};
    void deleteSupportedApis() { this->supportedApis_ = nullptr;};
    inline const vector<ListSupportedPricingApisResponseBody::SupportedApis> & getSupportedApis() const { DARABONBA_PTR_GET_CONST(supportedApis_, vector<ListSupportedPricingApisResponseBody::SupportedApis>) };
    inline vector<ListSupportedPricingApisResponseBody::SupportedApis> getSupportedApis() { DARABONBA_PTR_GET(supportedApis_, vector<ListSupportedPricingApisResponseBody::SupportedApis>) };
    inline ListSupportedPricingApisResponseBody& setSupportedApis(const vector<ListSupportedPricingApisResponseBody::SupportedApis> & supportedApis) { DARABONBA_PTR_SET_VALUE(supportedApis_, supportedApis) };
    inline ListSupportedPricingApisResponseBody& setSupportedApis(vector<ListSupportedPricingApisResponseBody::SupportedApis> && supportedApis) { DARABONBA_PTR_SET_RVALUE(supportedApis_, supportedApis) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The array of OpenAPI triplets that support price inquiry. The triplets are sorted in alphabetical order by popCode, popVersion, and apiName.
    shared_ptr<vector<ListSupportedPricingApisResponseBody::SupportedApis>> supportedApis_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
