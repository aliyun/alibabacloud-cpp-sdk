// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCastersResponseBodyCasterList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCastersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCastersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterList, casterList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCastersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterList, casterList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCastersResponseBody() = default ;
    DescribeCastersResponseBody(const DescribeCastersResponseBody &) = default ;
    DescribeCastersResponseBody(DescribeCastersResponseBody &&) = default ;
    DescribeCastersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCastersResponseBody() = default ;
    DescribeCastersResponseBody& operator=(const DescribeCastersResponseBody &) = default ;
    DescribeCastersResponseBody& operator=(DescribeCastersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->casterList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // casterList Field Functions 
    bool hasCasterList() const { return this->casterList_ != nullptr;};
    void deleteCasterList() { this->casterList_ = nullptr;};
    inline const DescribeCastersResponseBodyCasterList & casterList() const { DARABONBA_PTR_GET_CONST(casterList_, DescribeCastersResponseBodyCasterList) };
    inline DescribeCastersResponseBodyCasterList casterList() { DARABONBA_PTR_GET(casterList_, DescribeCastersResponseBodyCasterList) };
    inline DescribeCastersResponseBody& setCasterList(const DescribeCastersResponseBodyCasterList & casterList) { DARABONBA_PTR_SET_VALUE(casterList_, casterList) };
    inline DescribeCastersResponseBody& setCasterList(DescribeCastersResponseBodyCasterList && casterList) { DARABONBA_PTR_SET_RVALUE(casterList_, casterList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCastersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCastersResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The production studios.
    std::shared_ptr<DescribeCastersResponseBodyCasterList> casterList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of production studios.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
