// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSdlEventDetailResponseBodySdlEventDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdlEventDetailList, sdlEventDetailList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdlEventDetailList, sdlEventDetailList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSdlEventDetailResponseBody() = default ;
    DescribeSdlEventDetailResponseBody(const DescribeSdlEventDetailResponseBody &) = default ;
    DescribeSdlEventDetailResponseBody(DescribeSdlEventDetailResponseBody &&) = default ;
    DescribeSdlEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventDetailResponseBody() = default ;
    DescribeSdlEventDetailResponseBody& operator=(const DescribeSdlEventDetailResponseBody &) = default ;
    DescribeSdlEventDetailResponseBody& operator=(DescribeSdlEventDetailResponseBody &&) = default ;
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
    inline DescribeSdlEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdlEventDetailList Field Functions 
    bool hasSdlEventDetailList() const { return this->sdlEventDetailList_ != nullptr;};
    void deleteSdlEventDetailList() { this->sdlEventDetailList_ = nullptr;};
    inline const vector<DescribeSdlEventDetailResponseBodySdlEventDetailList> & sdlEventDetailList() const { DARABONBA_PTR_GET_CONST(sdlEventDetailList_, vector<DescribeSdlEventDetailResponseBodySdlEventDetailList>) };
    inline vector<DescribeSdlEventDetailResponseBodySdlEventDetailList> sdlEventDetailList() { DARABONBA_PTR_GET(sdlEventDetailList_, vector<DescribeSdlEventDetailResponseBodySdlEventDetailList>) };
    inline DescribeSdlEventDetailResponseBody& setSdlEventDetailList(const vector<DescribeSdlEventDetailResponseBodySdlEventDetailList> & sdlEventDetailList) { DARABONBA_PTR_SET_VALUE(sdlEventDetailList_, sdlEventDetailList) };
    inline DescribeSdlEventDetailResponseBody& setSdlEventDetailList(vector<DescribeSdlEventDetailResponseBodySdlEventDetailList> && sdlEventDetailList) { DARABONBA_PTR_SET_RVALUE(sdlEventDetailList_, sdlEventDetailList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSdlEventDetailResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSdlEventDetailResponseBodySdlEventDetailList>> sdlEventDetailList_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
