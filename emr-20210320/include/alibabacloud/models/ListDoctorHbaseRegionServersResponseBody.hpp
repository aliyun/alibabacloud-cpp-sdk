// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHBaseRegionServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHBaseRegionServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHBaseRegionServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDoctorHBaseRegionServersResponseBody() = default ;
    ListDoctorHBaseRegionServersResponseBody(const ListDoctorHBaseRegionServersResponseBody &) = default ;
    ListDoctorHBaseRegionServersResponseBody(ListDoctorHBaseRegionServersResponseBody &&) = default ;
    ListDoctorHBaseRegionServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHBaseRegionServersResponseBody() = default ;
    ListDoctorHBaseRegionServersResponseBody& operator=(const ListDoctorHBaseRegionServersResponseBody &) = default ;
    ListDoctorHBaseRegionServersResponseBody& operator=(ListDoctorHBaseRegionServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDoctorHBaseRegionServersResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDoctorHBaseRegionServersResponseBodyData>) };
    inline vector<ListDoctorHBaseRegionServersResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListDoctorHBaseRegionServersResponseBodyData>) };
    inline ListDoctorHBaseRegionServersResponseBody& setData(const vector<ListDoctorHBaseRegionServersResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDoctorHBaseRegionServersResponseBody& setData(vector<ListDoctorHBaseRegionServersResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorHBaseRegionServersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorHBaseRegionServersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDoctorHBaseRegionServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDoctorHBaseRegionServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned data.
    std::shared_ptr<vector<ListDoctorHBaseRegionServersResponseBodyData>> data_ = nullptr;
    // The maximum number of entries that are returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
