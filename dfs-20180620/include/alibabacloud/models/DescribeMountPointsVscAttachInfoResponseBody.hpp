// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTPOINTSVSCATTACHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMountPointsVscAttachInfoResponseBodyAttachInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeMountPointsVscAttachInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountPointsVscAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInfos, attachInfos_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountPointsVscAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInfos, attachInfos_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMountPointsVscAttachInfoResponseBody() = default ;
    DescribeMountPointsVscAttachInfoResponseBody(const DescribeMountPointsVscAttachInfoResponseBody &) = default ;
    DescribeMountPointsVscAttachInfoResponseBody(DescribeMountPointsVscAttachInfoResponseBody &&) = default ;
    DescribeMountPointsVscAttachInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountPointsVscAttachInfoResponseBody() = default ;
    DescribeMountPointsVscAttachInfoResponseBody& operator=(const DescribeMountPointsVscAttachInfoResponseBody &) = default ;
    DescribeMountPointsVscAttachInfoResponseBody& operator=(DescribeMountPointsVscAttachInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachInfos_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // attachInfos Field Functions 
    bool hasAttachInfos() const { return this->attachInfos_ != nullptr;};
    void deleteAttachInfos() { this->attachInfos_ = nullptr;};
    inline const vector<DescribeMountPointsVscAttachInfoResponseBodyAttachInfos> & attachInfos() const { DARABONBA_PTR_GET_CONST(attachInfos_, vector<DescribeMountPointsVscAttachInfoResponseBodyAttachInfos>) };
    inline vector<DescribeMountPointsVscAttachInfoResponseBodyAttachInfos> attachInfos() { DARABONBA_PTR_GET(attachInfos_, vector<DescribeMountPointsVscAttachInfoResponseBodyAttachInfos>) };
    inline DescribeMountPointsVscAttachInfoResponseBody& setAttachInfos(const vector<DescribeMountPointsVscAttachInfoResponseBodyAttachInfos> & attachInfos) { DARABONBA_PTR_SET_VALUE(attachInfos_, attachInfos) };
    inline DescribeMountPointsVscAttachInfoResponseBody& setAttachInfos(vector<DescribeMountPointsVscAttachInfoResponseBodyAttachInfos> && attachInfos) { DARABONBA_PTR_SET_RVALUE(attachInfos_, attachInfos) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeMountPointsVscAttachInfoResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeMountPointsVscAttachInfoResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeMountPointsVscAttachInfoResponseBodyAttachInfos>> attachInfos_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
