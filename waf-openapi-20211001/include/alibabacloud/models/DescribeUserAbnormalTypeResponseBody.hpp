// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserAbnormalTypeResponseBodyAbnormal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAbnormalTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAbnormalTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Abnormal, abnormal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAbnormalTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Abnormal, abnormal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserAbnormalTypeResponseBody() = default ;
    DescribeUserAbnormalTypeResponseBody(const DescribeUserAbnormalTypeResponseBody &) = default ;
    DescribeUserAbnormalTypeResponseBody(DescribeUserAbnormalTypeResponseBody &&) = default ;
    DescribeUserAbnormalTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAbnormalTypeResponseBody() = default ;
    DescribeUserAbnormalTypeResponseBody& operator=(const DescribeUserAbnormalTypeResponseBody &) = default ;
    DescribeUserAbnormalTypeResponseBody& operator=(DescribeUserAbnormalTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormal_ == nullptr
        && return this->requestId_ == nullptr; };
    // abnormal Field Functions 
    bool hasAbnormal() const { return this->abnormal_ != nullptr;};
    void deleteAbnormal() { this->abnormal_ = nullptr;};
    inline const vector<DescribeUserAbnormalTypeResponseBodyAbnormal> & abnormal() const { DARABONBA_PTR_GET_CONST(abnormal_, vector<DescribeUserAbnormalTypeResponseBodyAbnormal>) };
    inline vector<DescribeUserAbnormalTypeResponseBodyAbnormal> abnormal() { DARABONBA_PTR_GET(abnormal_, vector<DescribeUserAbnormalTypeResponseBodyAbnormal>) };
    inline DescribeUserAbnormalTypeResponseBody& setAbnormal(const vector<DescribeUserAbnormalTypeResponseBodyAbnormal> & abnormal) { DARABONBA_PTR_SET_VALUE(abnormal_, abnormal) };
    inline DescribeUserAbnormalTypeResponseBody& setAbnormal(vector<DescribeUserAbnormalTypeResponseBodyAbnormal> && abnormal) { DARABONBA_PTR_SET_RVALUE(abnormal_, abnormal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAbnormalTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types and statistics of risks.
    std::shared_ptr<vector<DescribeUserAbnormalTypeResponseBodyAbnormal>> abnormal_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
