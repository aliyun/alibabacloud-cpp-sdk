// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDdosEventListResponseBodyDdosEventList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosEventList, ddosEventList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosEventList, ddosEventList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDdosEventListResponseBody() = default ;
    DescribeDdosEventListResponseBody(const DescribeDdosEventListResponseBody &) = default ;
    DescribeDdosEventListResponseBody(DescribeDdosEventListResponseBody &&) = default ;
    DescribeDdosEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosEventListResponseBody() = default ;
    DescribeDdosEventListResponseBody& operator=(const DescribeDdosEventListResponseBody &) = default ;
    DescribeDdosEventListResponseBody& operator=(DescribeDdosEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosEventList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // ddosEventList Field Functions 
    bool hasDdosEventList() const { return this->ddosEventList_ != nullptr;};
    void deleteDdosEventList() { this->ddosEventList_ = nullptr;};
    inline const DescribeDdosEventListResponseBodyDdosEventList & ddosEventList() const { DARABONBA_PTR_GET_CONST(ddosEventList_, DescribeDdosEventListResponseBodyDdosEventList) };
    inline DescribeDdosEventListResponseBodyDdosEventList ddosEventList() { DARABONBA_PTR_GET(ddosEventList_, DescribeDdosEventListResponseBodyDdosEventList) };
    inline DescribeDdosEventListResponseBody& setDdosEventList(const DescribeDdosEventListResponseBodyDdosEventList & ddosEventList) { DARABONBA_PTR_SET_VALUE(ddosEventList_, ddosEventList) };
    inline DescribeDdosEventListResponseBody& setDdosEventList(DescribeDdosEventListResponseBodyDdosEventList && ddosEventList) { DARABONBA_PTR_SET_RVALUE(ddosEventList_, ddosEventList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeDdosEventListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The details of the DDoS attack events.
    std::shared_ptr<DescribeDdosEventListResponseBodyDdosEventList> ddosEventList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of DDoS attack events.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
