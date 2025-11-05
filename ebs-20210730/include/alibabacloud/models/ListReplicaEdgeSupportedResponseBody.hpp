// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListReplicaEdgeSupportedResponseBodySupportedRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ListReplicaEdgeSupportedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReplicaEdgeSupportedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportedRegions, supportedRegions_);
    };
    friend void from_json(const Darabonba::Json& j, ListReplicaEdgeSupportedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportedRegions, supportedRegions_);
    };
    ListReplicaEdgeSupportedResponseBody() = default ;
    ListReplicaEdgeSupportedResponseBody(const ListReplicaEdgeSupportedResponseBody &) = default ;
    ListReplicaEdgeSupportedResponseBody(ListReplicaEdgeSupportedResponseBody &&) = default ;
    ListReplicaEdgeSupportedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReplicaEdgeSupportedResponseBody() = default ;
    ListReplicaEdgeSupportedResponseBody& operator=(const ListReplicaEdgeSupportedResponseBody &) = default ;
    ListReplicaEdgeSupportedResponseBody& operator=(ListReplicaEdgeSupportedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->supportedRegions_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListReplicaEdgeSupportedResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReplicaEdgeSupportedResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReplicaEdgeSupportedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportedRegions Field Functions 
    bool hasSupportedRegions() const { return this->supportedRegions_ != nullptr;};
    void deleteSupportedRegions() { this->supportedRegions_ = nullptr;};
    inline const vector<ListReplicaEdgeSupportedResponseBodySupportedRegions> & supportedRegions() const { DARABONBA_PTR_GET_CONST(supportedRegions_, vector<ListReplicaEdgeSupportedResponseBodySupportedRegions>) };
    inline vector<ListReplicaEdgeSupportedResponseBodySupportedRegions> supportedRegions() { DARABONBA_PTR_GET(supportedRegions_, vector<ListReplicaEdgeSupportedResponseBodySupportedRegions>) };
    inline ListReplicaEdgeSupportedResponseBody& setSupportedRegions(const vector<ListReplicaEdgeSupportedResponseBodySupportedRegions> & supportedRegions) { DARABONBA_PTR_SET_VALUE(supportedRegions_, supportedRegions) };
    inline ListReplicaEdgeSupportedResponseBody& setSupportedRegions(vector<ListReplicaEdgeSupportedResponseBodySupportedRegions> && supportedRegions) { DARABONBA_PTR_SET_RVALUE(supportedRegions_, supportedRegions) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListReplicaEdgeSupportedResponseBodySupportedRegions>> supportedRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
