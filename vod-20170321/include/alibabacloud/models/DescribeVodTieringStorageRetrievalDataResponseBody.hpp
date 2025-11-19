// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGERETRIEVALDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGERETRIEVALDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTieringStorageRetrievalDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTieringStorageRetrievalDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetrievalData, retrievalData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTieringStorageRetrievalDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetrievalData, retrievalData_);
    };
    DescribeVodTieringStorageRetrievalDataResponseBody() = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody(const DescribeVodTieringStorageRetrievalDataResponseBody &) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody(DescribeVodTieringStorageRetrievalDataResponseBody &&) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTieringStorageRetrievalDataResponseBody() = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody& operator=(const DescribeVodTieringStorageRetrievalDataResponseBody &) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBody& operator=(DescribeVodTieringStorageRetrievalDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->retrievalData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodTieringStorageRetrievalDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retrievalData Field Functions 
    bool hasRetrievalData() const { return this->retrievalData_ != nullptr;};
    void deleteRetrievalData() { this->retrievalData_ = nullptr;};
    inline const vector<DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData> & retrievalData() const { DARABONBA_PTR_GET_CONST(retrievalData_, vector<DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData>) };
    inline vector<DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData> retrievalData() { DARABONBA_PTR_GET(retrievalData_, vector<DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData>) };
    inline DescribeVodTieringStorageRetrievalDataResponseBody& setRetrievalData(const vector<DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData> & retrievalData) { DARABONBA_PTR_SET_VALUE(retrievalData_, retrievalData) };
    inline DescribeVodTieringStorageRetrievalDataResponseBody& setRetrievalData(vector<DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData> && retrievalData) { DARABONBA_PTR_SET_RVALUE(retrievalData_, retrievalData) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The data retrieval information.
    std::shared_ptr<vector<DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData>> retrievalData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
