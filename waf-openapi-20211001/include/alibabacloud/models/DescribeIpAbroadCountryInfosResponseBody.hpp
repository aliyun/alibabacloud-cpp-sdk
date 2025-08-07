// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpAbroadCountryInfosResponseBodyAbroadInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeIpAbroadCountryInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpAbroadCountryInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbroadInfos, abroadInfos_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpAbroadCountryInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbroadInfos, abroadInfos_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpAbroadCountryInfosResponseBody() = default ;
    DescribeIpAbroadCountryInfosResponseBody(const DescribeIpAbroadCountryInfosResponseBody &) = default ;
    DescribeIpAbroadCountryInfosResponseBody(DescribeIpAbroadCountryInfosResponseBody &&) = default ;
    DescribeIpAbroadCountryInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpAbroadCountryInfosResponseBody() = default ;
    DescribeIpAbroadCountryInfosResponseBody& operator=(const DescribeIpAbroadCountryInfosResponseBody &) = default ;
    DescribeIpAbroadCountryInfosResponseBody& operator=(DescribeIpAbroadCountryInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abroadInfos_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // abroadInfos Field Functions 
    bool hasAbroadInfos() const { return this->abroadInfos_ != nullptr;};
    void deleteAbroadInfos() { this->abroadInfos_ = nullptr;};
    inline const vector<DescribeIpAbroadCountryInfosResponseBodyAbroadInfos> & abroadInfos() const { DARABONBA_PTR_GET_CONST(abroadInfos_, vector<DescribeIpAbroadCountryInfosResponseBodyAbroadInfos>) };
    inline vector<DescribeIpAbroadCountryInfosResponseBodyAbroadInfos> abroadInfos() { DARABONBA_PTR_GET(abroadInfos_, vector<DescribeIpAbroadCountryInfosResponseBodyAbroadInfos>) };
    inline DescribeIpAbroadCountryInfosResponseBody& setAbroadInfos(const vector<DescribeIpAbroadCountryInfosResponseBodyAbroadInfos> & abroadInfos) { DARABONBA_PTR_SET_VALUE(abroadInfos_, abroadInfos) };
    inline DescribeIpAbroadCountryInfosResponseBody& setAbroadInfos(vector<DescribeIpAbroadCountryInfosResponseBodyAbroadInfos> && abroadInfos) { DARABONBA_PTR_SET_RVALUE(abroadInfos_, abroadInfos) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeIpAbroadCountryInfosResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeIpAbroadCountryInfosResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpAbroadCountryInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpAbroadCountryInfosResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeIpAbroadCountryInfosResponseBodyAbroadInfos>> abroadInfos_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
