// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSyntheticTaskListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSyntheticTaskListResponseBody() = default ;
    GetSyntheticTaskListResponseBody(const GetSyntheticTaskListResponseBody &) = default ;
    GetSyntheticTaskListResponseBody(GetSyntheticTaskListResponseBody &&) = default ;
    GetSyntheticTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskListResponseBody() = default ;
    GetSyntheticTaskListResponseBody& operator=(const GetSyntheticTaskListResponseBody &) = default ;
    GetSyntheticTaskListResponseBody& operator=(GetSyntheticTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetSyntheticTaskListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetSyntheticTaskListResponseBodyPageInfo) };
    inline GetSyntheticTaskListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, GetSyntheticTaskListResponseBodyPageInfo) };
    inline GetSyntheticTaskListResponseBody& setPageInfo(const GetSyntheticTaskListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetSyntheticTaskListResponseBody& setPageInfo(GetSyntheticTaskListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSyntheticTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query results.
    std::shared_ptr<GetSyntheticTaskListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
