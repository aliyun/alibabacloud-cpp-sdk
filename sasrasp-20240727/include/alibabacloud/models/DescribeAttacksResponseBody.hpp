// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAttacksResponseBodyAttacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasRasp20240727
{
namespace Models
{
  class DescribeAttacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Attacks, attacks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Attacks, attacks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAttacksResponseBody() = default ;
    DescribeAttacksResponseBody(const DescribeAttacksResponseBody &) = default ;
    DescribeAttacksResponseBody(DescribeAttacksResponseBody &&) = default ;
    DescribeAttacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttacksResponseBody() = default ;
    DescribeAttacksResponseBody& operator=(const DescribeAttacksResponseBody &) = default ;
    DescribeAttacksResponseBody& operator=(DescribeAttacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attacks_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // attacks Field Functions 
    bool hasAttacks() const { return this->attacks_ != nullptr;};
    void deleteAttacks() { this->attacks_ = nullptr;};
    inline const vector<DescribeAttacksResponseBodyAttacks> & attacks() const { DARABONBA_PTR_GET_CONST(attacks_, vector<DescribeAttacksResponseBodyAttacks>) };
    inline vector<DescribeAttacksResponseBodyAttacks> attacks() { DARABONBA_PTR_GET(attacks_, vector<DescribeAttacksResponseBodyAttacks>) };
    inline DescribeAttacksResponseBody& setAttacks(const vector<DescribeAttacksResponseBodyAttacks> & attacks) { DARABONBA_PTR_SET_VALUE(attacks_, attacks) };
    inline DescribeAttacksResponseBody& setAttacks(vector<DescribeAttacksResponseBodyAttacks> && attacks) { DARABONBA_PTR_SET_RVALUE(attacks_, attacks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAttacksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeAttacksResponseBodyAttacks>> attacks_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SasRasp20240727
#endif
