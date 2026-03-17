// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISECODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISECODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListEnterpriseCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnterpriseCodes, enterpriseCodes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnterpriseCodes, enterpriseCodes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEnterpriseCodeResponseBody() = default ;
    ListEnterpriseCodeResponseBody(const ListEnterpriseCodeResponseBody &) = default ;
    ListEnterpriseCodeResponseBody(ListEnterpriseCodeResponseBody &&) = default ;
    ListEnterpriseCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseCodeResponseBody() = default ;
    ListEnterpriseCodeResponseBody& operator=(const ListEnterpriseCodeResponseBody &) = default ;
    ListEnterpriseCodeResponseBody& operator=(ListEnterpriseCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnterpriseCodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnterpriseCodes& obj) { 
        DARABONBA_PTR_TO_JSON(EnterpriseCode, enterpriseCode_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      };
      friend void from_json(const Darabonba::Json& j, EnterpriseCodes& obj) { 
        DARABONBA_PTR_FROM_JSON(EnterpriseCode, enterpriseCode_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      };
      EnterpriseCodes() = default ;
      EnterpriseCodes(const EnterpriseCodes &) = default ;
      EnterpriseCodes(EnterpriseCodes &&) = default ;
      EnterpriseCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnterpriseCodes() = default ;
      EnterpriseCodes& operator=(const EnterpriseCodes &) = default ;
      EnterpriseCodes& operator=(EnterpriseCodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enterpriseCode_ == nullptr
        && this->isDefault_ == nullptr; };
      // enterpriseCode Field Functions 
      bool hasEnterpriseCode() const { return this->enterpriseCode_ != nullptr;};
      void deleteEnterpriseCode() { this->enterpriseCode_ = nullptr;};
      inline string getEnterpriseCode() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCode_, "") };
      inline EnterpriseCodes& setEnterpriseCode(string enterpriseCode) { DARABONBA_PTR_SET_VALUE(enterpriseCode_, enterpriseCode) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline EnterpriseCodes& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    protected:
      // The enterprise code.
      shared_ptr<string> enterpriseCode_ {};
      // Indicates whether the enterprise code is the default one.
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> isDefault_ {};
    };

    virtual bool empty() const override { return this->enterpriseCodes_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // enterpriseCodes Field Functions 
    bool hasEnterpriseCodes() const { return this->enterpriseCodes_ != nullptr;};
    void deleteEnterpriseCodes() { this->enterpriseCodes_ = nullptr;};
    inline const vector<ListEnterpriseCodeResponseBody::EnterpriseCodes> & getEnterpriseCodes() const { DARABONBA_PTR_GET_CONST(enterpriseCodes_, vector<ListEnterpriseCodeResponseBody::EnterpriseCodes>) };
    inline vector<ListEnterpriseCodeResponseBody::EnterpriseCodes> getEnterpriseCodes() { DARABONBA_PTR_GET(enterpriseCodes_, vector<ListEnterpriseCodeResponseBody::EnterpriseCodes>) };
    inline ListEnterpriseCodeResponseBody& setEnterpriseCodes(const vector<ListEnterpriseCodeResponseBody::EnterpriseCodes> & enterpriseCodes) { DARABONBA_PTR_SET_VALUE(enterpriseCodes_, enterpriseCodes) };
    inline ListEnterpriseCodeResponseBody& setEnterpriseCodes(vector<ListEnterpriseCodeResponseBody::EnterpriseCodes> && enterpriseCodes) { DARABONBA_PTR_SET_RVALUE(enterpriseCodes_, enterpriseCodes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEnterpriseCodeResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEnterpriseCodeResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnterpriseCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEnterpriseCodeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about enterprise codes.
    shared_ptr<vector<ListEnterpriseCodeResponseBody::EnterpriseCodes>> enterpriseCodes_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for returning the next page when the data is returned in more than one page.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
