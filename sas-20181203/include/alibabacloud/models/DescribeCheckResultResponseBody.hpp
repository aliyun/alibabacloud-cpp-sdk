// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCheckResultResponseBodyCheckResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResultList, checkResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResultList, checkResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCheckResultResponseBody() = default ;
    DescribeCheckResultResponseBody(const DescribeCheckResultResponseBody &) = default ;
    DescribeCheckResultResponseBody(DescribeCheckResultResponseBody &&) = default ;
    DescribeCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckResultResponseBody() = default ;
    DescribeCheckResultResponseBody& operator=(const DescribeCheckResultResponseBody &) = default ;
    DescribeCheckResultResponseBody& operator=(DescribeCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkResultList_ != nullptr
        && this->requestId_ != nullptr; };
    // checkResultList Field Functions 
    bool hasCheckResultList() const { return this->checkResultList_ != nullptr;};
    void deleteCheckResultList() { this->checkResultList_ = nullptr;};
    inline const vector<DescribeCheckResultResponseBodyCheckResultList> & checkResultList() const { DARABONBA_PTR_GET_CONST(checkResultList_, vector<DescribeCheckResultResponseBodyCheckResultList>) };
    inline vector<DescribeCheckResultResponseBodyCheckResultList> checkResultList() { DARABONBA_PTR_GET(checkResultList_, vector<DescribeCheckResultResponseBodyCheckResultList>) };
    inline DescribeCheckResultResponseBody& setCheckResultList(const vector<DescribeCheckResultResponseBodyCheckResultList> & checkResultList) { DARABONBA_PTR_SET_VALUE(checkResultList_, checkResultList) };
    inline DescribeCheckResultResponseBody& setCheckResultList(vector<DescribeCheckResultResponseBodyCheckResultList> && checkResultList) { DARABONBA_PTR_SET_RVALUE(checkResultList_, checkResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The check results.
    std::shared_ptr<vector<DescribeCheckResultResponseBodyCheckResultList>> checkResultList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
