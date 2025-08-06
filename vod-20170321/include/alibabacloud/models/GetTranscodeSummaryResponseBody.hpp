// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranscodeSummaryResponseBodyTranscodeSummaryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeSummaryList, transcodeSummaryList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeSummaryList, transcodeSummaryList_);
    };
    GetTranscodeSummaryResponseBody() = default ;
    GetTranscodeSummaryResponseBody(const GetTranscodeSummaryResponseBody &) = default ;
    GetTranscodeSummaryResponseBody(GetTranscodeSummaryResponseBody &&) = default ;
    GetTranscodeSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeSummaryResponseBody() = default ;
    GetTranscodeSummaryResponseBody& operator=(const GetTranscodeSummaryResponseBody &) = default ;
    GetTranscodeSummaryResponseBody& operator=(GetTranscodeSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nonExistVideoIds_ != nullptr
        && this->requestId_ != nullptr && this->transcodeSummaryList_ != nullptr; };
    // nonExistVideoIds Field Functions 
    bool hasNonExistVideoIds() const { return this->nonExistVideoIds_ != nullptr;};
    void deleteNonExistVideoIds() { this->nonExistVideoIds_ = nullptr;};
    inline const vector<string> & nonExistVideoIds() const { DARABONBA_PTR_GET_CONST(nonExistVideoIds_, vector<string>) };
    inline vector<string> nonExistVideoIds() { DARABONBA_PTR_GET(nonExistVideoIds_, vector<string>) };
    inline GetTranscodeSummaryResponseBody& setNonExistVideoIds(const vector<string> & nonExistVideoIds) { DARABONBA_PTR_SET_VALUE(nonExistVideoIds_, nonExistVideoIds) };
    inline GetTranscodeSummaryResponseBody& setNonExistVideoIds(vector<string> && nonExistVideoIds) { DARABONBA_PTR_SET_RVALUE(nonExistVideoIds_, nonExistVideoIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeSummaryList Field Functions 
    bool hasTranscodeSummaryList() const { return this->transcodeSummaryList_ != nullptr;};
    void deleteTranscodeSummaryList() { this->transcodeSummaryList_ = nullptr;};
    inline const vector<GetTranscodeSummaryResponseBodyTranscodeSummaryList> & transcodeSummaryList() const { DARABONBA_PTR_GET_CONST(transcodeSummaryList_, vector<GetTranscodeSummaryResponseBodyTranscodeSummaryList>) };
    inline vector<GetTranscodeSummaryResponseBodyTranscodeSummaryList> transcodeSummaryList() { DARABONBA_PTR_GET(transcodeSummaryList_, vector<GetTranscodeSummaryResponseBodyTranscodeSummaryList>) };
    inline GetTranscodeSummaryResponseBody& setTranscodeSummaryList(const vector<GetTranscodeSummaryResponseBodyTranscodeSummaryList> & transcodeSummaryList) { DARABONBA_PTR_SET_VALUE(transcodeSummaryList_, transcodeSummaryList) };
    inline GetTranscodeSummaryResponseBody& setTranscodeSummaryList(vector<GetTranscodeSummaryResponseBodyTranscodeSummaryList> && transcodeSummaryList) { DARABONBA_PTR_SET_RVALUE(transcodeSummaryList_, transcodeSummaryList) };


  protected:
    // The IDs of the audio or video files that do not exist.
    std::shared_ptr<vector<string>> nonExistVideoIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The transcoding summary of the file.
    std::shared_ptr<vector<GetTranscodeSummaryResponseBodyTranscodeSummaryList>> transcodeSummaryList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
