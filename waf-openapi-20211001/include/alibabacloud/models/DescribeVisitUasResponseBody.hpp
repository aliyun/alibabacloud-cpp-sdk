// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVISITUASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVISITUASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVisitUasResponseBodyUas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVisitUasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVisitUasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Uas, uas_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVisitUasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Uas, uas_);
    };
    DescribeVisitUasResponseBody() = default ;
    DescribeVisitUasResponseBody(const DescribeVisitUasResponseBody &) = default ;
    DescribeVisitUasResponseBody(DescribeVisitUasResponseBody &&) = default ;
    DescribeVisitUasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVisitUasResponseBody() = default ;
    DescribeVisitUasResponseBody& operator=(const DescribeVisitUasResponseBody &) = default ;
    DescribeVisitUasResponseBody& operator=(DescribeVisitUasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->uas_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVisitUasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uas Field Functions 
    bool hasUas() const { return this->uas_ != nullptr;};
    void deleteUas() { this->uas_ = nullptr;};
    inline const vector<DescribeVisitUasResponseBodyUas> & uas() const { DARABONBA_PTR_GET_CONST(uas_, vector<DescribeVisitUasResponseBodyUas>) };
    inline vector<DescribeVisitUasResponseBodyUas> uas() { DARABONBA_PTR_GET(uas_, vector<DescribeVisitUasResponseBodyUas>) };
    inline DescribeVisitUasResponseBody& setUas(const vector<DescribeVisitUasResponseBodyUas> & uas) { DARABONBA_PTR_SET_VALUE(uas_, uas) };
    inline DescribeVisitUasResponseBody& setUas(vector<DescribeVisitUasResponseBodyUas> && uas) { DARABONBA_PTR_SET_RVALUE(uas_, uas) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the top 10 user agents that are used to initiate requests.
    std::shared_ptr<vector<DescribeVisitUasResponseBodyUas>> uas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
