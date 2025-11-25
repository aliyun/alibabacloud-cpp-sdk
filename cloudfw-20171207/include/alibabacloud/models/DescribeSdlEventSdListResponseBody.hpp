// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTSDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTSDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlEventSdListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventSdListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdlEventSensitiveDataList, sdlEventSensitiveDataList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventSdListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdlEventSensitiveDataList, sdlEventSensitiveDataList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSdlEventSdListResponseBody() = default ;
    DescribeSdlEventSdListResponseBody(const DescribeSdlEventSdListResponseBody &) = default ;
    DescribeSdlEventSdListResponseBody(DescribeSdlEventSdListResponseBody &&) = default ;
    DescribeSdlEventSdListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventSdListResponseBody() = default ;
    DescribeSdlEventSdListResponseBody& operator=(const DescribeSdlEventSdListResponseBody &) = default ;
    DescribeSdlEventSdListResponseBody& operator=(DescribeSdlEventSdListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sdlEventSensitiveDataList_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlEventSdListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdlEventSensitiveDataList Field Functions 
    bool hasSdlEventSensitiveDataList() const { return this->sdlEventSensitiveDataList_ != nullptr;};
    void deleteSdlEventSensitiveDataList() { this->sdlEventSensitiveDataList_ = nullptr;};
    inline const vector<DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList> & sdlEventSensitiveDataList() const { DARABONBA_PTR_GET_CONST(sdlEventSensitiveDataList_, vector<DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList>) };
    inline vector<DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList> sdlEventSensitiveDataList() { DARABONBA_PTR_GET(sdlEventSensitiveDataList_, vector<DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList>) };
    inline DescribeSdlEventSdListResponseBody& setSdlEventSensitiveDataList(const vector<DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList> & sdlEventSensitiveDataList) { DARABONBA_PTR_SET_VALUE(sdlEventSensitiveDataList_, sdlEventSensitiveDataList) };
    inline DescribeSdlEventSdListResponseBody& setSdlEventSensitiveDataList(vector<DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList> && sdlEventSensitiveDataList) { DARABONBA_PTR_SET_RVALUE(sdlEventSensitiveDataList_, sdlEventSensitiveDataList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSdlEventSdListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSdlEventSdListResponseBodySdlEventSensitiveDataList>> sdlEventSensitiveDataList_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
