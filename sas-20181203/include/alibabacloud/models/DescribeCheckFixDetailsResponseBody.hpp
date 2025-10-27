// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKFIXDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKFIXDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCheckFixDetailsResponseBodyCheckFixDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckFixDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckFixDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckFixDetails, checkFixDetails_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckFixDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckFixDetails, checkFixDetails_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCheckFixDetailsResponseBody() = default ;
    DescribeCheckFixDetailsResponseBody(const DescribeCheckFixDetailsResponseBody &) = default ;
    DescribeCheckFixDetailsResponseBody(DescribeCheckFixDetailsResponseBody &&) = default ;
    DescribeCheckFixDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckFixDetailsResponseBody() = default ;
    DescribeCheckFixDetailsResponseBody& operator=(const DescribeCheckFixDetailsResponseBody &) = default ;
    DescribeCheckFixDetailsResponseBody& operator=(DescribeCheckFixDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkFixDetails_ == nullptr
        && return this->count_ == nullptr && return this->requestId_ == nullptr; };
    // checkFixDetails Field Functions 
    bool hasCheckFixDetails() const { return this->checkFixDetails_ != nullptr;};
    void deleteCheckFixDetails() { this->checkFixDetails_ = nullptr;};
    inline const vector<DescribeCheckFixDetailsResponseBodyCheckFixDetails> & checkFixDetails() const { DARABONBA_PTR_GET_CONST(checkFixDetails_, vector<DescribeCheckFixDetailsResponseBodyCheckFixDetails>) };
    inline vector<DescribeCheckFixDetailsResponseBodyCheckFixDetails> checkFixDetails() { DARABONBA_PTR_GET(checkFixDetails_, vector<DescribeCheckFixDetailsResponseBodyCheckFixDetails>) };
    inline DescribeCheckFixDetailsResponseBody& setCheckFixDetails(const vector<DescribeCheckFixDetailsResponseBodyCheckFixDetails> & checkFixDetails) { DARABONBA_PTR_SET_VALUE(checkFixDetails_, checkFixDetails) };
    inline DescribeCheckFixDetailsResponseBody& setCheckFixDetails(vector<DescribeCheckFixDetailsResponseBodyCheckFixDetails> && checkFixDetails) { DARABONBA_PTR_SET_RVALUE(checkFixDetails_, checkFixDetails) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCheckFixDetailsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckFixDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the parameters.
    std::shared_ptr<vector<DescribeCheckFixDetailsResponseBodyCheckFixDetails>> checkFixDetails_ = nullptr;
    // The number of risk items that can be fixed.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
