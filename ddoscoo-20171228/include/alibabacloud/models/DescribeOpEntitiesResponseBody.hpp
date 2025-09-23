// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOpEntitiesResponseBodyOpEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeOpEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpEntities, opEntities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpEntities, opEntities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeOpEntitiesResponseBody() = default ;
    DescribeOpEntitiesResponseBody(const DescribeOpEntitiesResponseBody &) = default ;
    DescribeOpEntitiesResponseBody(DescribeOpEntitiesResponseBody &&) = default ;
    DescribeOpEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpEntitiesResponseBody() = default ;
    DescribeOpEntitiesResponseBody& operator=(const DescribeOpEntitiesResponseBody &) = default ;
    DescribeOpEntitiesResponseBody& operator=(DescribeOpEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opEntities_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // opEntities Field Functions 
    bool hasOpEntities() const { return this->opEntities_ != nullptr;};
    void deleteOpEntities() { this->opEntities_ = nullptr;};
    inline const vector<DescribeOpEntitiesResponseBodyOpEntities> & opEntities() const { DARABONBA_PTR_GET_CONST(opEntities_, vector<DescribeOpEntitiesResponseBodyOpEntities>) };
    inline vector<DescribeOpEntitiesResponseBodyOpEntities> opEntities() { DARABONBA_PTR_GET(opEntities_, vector<DescribeOpEntitiesResponseBodyOpEntities>) };
    inline DescribeOpEntitiesResponseBody& setOpEntities(const vector<DescribeOpEntitiesResponseBodyOpEntities> & opEntities) { DARABONBA_PTR_SET_VALUE(opEntities_, opEntities) };
    inline DescribeOpEntitiesResponseBody& setOpEntities(vector<DescribeOpEntitiesResponseBodyOpEntities> && opEntities) { DARABONBA_PTR_SET_RVALUE(opEntities_, opEntities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeOpEntitiesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<DescribeOpEntitiesResponseBodyOpEntities>> opEntities_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
