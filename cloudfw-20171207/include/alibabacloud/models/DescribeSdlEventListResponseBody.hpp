// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSdlEventListResponseBodySdlEventDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdlEventDetailList, sdlEventDetailList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdlEventDetailList, sdlEventDetailList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSdlEventListResponseBody() = default ;
    DescribeSdlEventListResponseBody(const DescribeSdlEventListResponseBody &) = default ;
    DescribeSdlEventListResponseBody(DescribeSdlEventListResponseBody &&) = default ;
    DescribeSdlEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventListResponseBody() = default ;
    DescribeSdlEventListResponseBody& operator=(const DescribeSdlEventListResponseBody &) = default ;
    DescribeSdlEventListResponseBody& operator=(DescribeSdlEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sdlEventDetailList_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdlEventDetailList Field Functions 
    bool hasSdlEventDetailList() const { return this->sdlEventDetailList_ != nullptr;};
    void deleteSdlEventDetailList() { this->sdlEventDetailList_ = nullptr;};
    inline const vector<DescribeSdlEventListResponseBodySdlEventDetailList> & sdlEventDetailList() const { DARABONBA_PTR_GET_CONST(sdlEventDetailList_, vector<DescribeSdlEventListResponseBodySdlEventDetailList>) };
    inline vector<DescribeSdlEventListResponseBodySdlEventDetailList> sdlEventDetailList() { DARABONBA_PTR_GET(sdlEventDetailList_, vector<DescribeSdlEventListResponseBodySdlEventDetailList>) };
    inline DescribeSdlEventListResponseBody& setSdlEventDetailList(const vector<DescribeSdlEventListResponseBodySdlEventDetailList> & sdlEventDetailList) { DARABONBA_PTR_SET_VALUE(sdlEventDetailList_, sdlEventDetailList) };
    inline DescribeSdlEventListResponseBody& setSdlEventDetailList(vector<DescribeSdlEventListResponseBodySdlEventDetailList> && sdlEventDetailList) { DARABONBA_PTR_SET_RVALUE(sdlEventDetailList_, sdlEventDetailList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSdlEventListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSdlEventListResponseBodySdlEventDetailList>> sdlEventDetailList_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
