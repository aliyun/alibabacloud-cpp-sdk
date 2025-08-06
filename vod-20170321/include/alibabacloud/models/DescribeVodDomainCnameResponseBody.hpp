// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainCnameResponseBodyCnameDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainCnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainCnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameDatas, cnameDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainCnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameDatas, cnameDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainCnameResponseBody() = default ;
    DescribeVodDomainCnameResponseBody(const DescribeVodDomainCnameResponseBody &) = default ;
    DescribeVodDomainCnameResponseBody(DescribeVodDomainCnameResponseBody &&) = default ;
    DescribeVodDomainCnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainCnameResponseBody() = default ;
    DescribeVodDomainCnameResponseBody& operator=(const DescribeVodDomainCnameResponseBody &) = default ;
    DescribeVodDomainCnameResponseBody& operator=(DescribeVodDomainCnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cnameDatas_ != nullptr
        && this->requestId_ != nullptr; };
    // cnameDatas Field Functions 
    bool hasCnameDatas() const { return this->cnameDatas_ != nullptr;};
    void deleteCnameDatas() { this->cnameDatas_ = nullptr;};
    inline const DescribeVodDomainCnameResponseBodyCnameDatas & cnameDatas() const { DARABONBA_PTR_GET_CONST(cnameDatas_, DescribeVodDomainCnameResponseBodyCnameDatas) };
    inline DescribeVodDomainCnameResponseBodyCnameDatas cnameDatas() { DARABONBA_PTR_GET(cnameDatas_, DescribeVodDomainCnameResponseBodyCnameDatas) };
    inline DescribeVodDomainCnameResponseBody& setCnameDatas(const DescribeVodDomainCnameResponseBodyCnameDatas & cnameDatas) { DARABONBA_PTR_SET_VALUE(cnameDatas_, cnameDatas) };
    inline DescribeVodDomainCnameResponseBody& setCnameDatas(DescribeVodDomainCnameResponseBodyCnameDatas && cnameDatas) { DARABONBA_PTR_SET_RVALUE(cnameDatas_, cnameDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainCnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeVodDomainCnameResponseBodyCnameDatas> cnameDatas_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
