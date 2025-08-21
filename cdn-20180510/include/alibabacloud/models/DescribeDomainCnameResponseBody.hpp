// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainCnameResponseBodyCnameDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameDatas, cnameDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameDatas, cnameDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainCnameResponseBody() = default ;
    DescribeDomainCnameResponseBody(const DescribeDomainCnameResponseBody &) = default ;
    DescribeDomainCnameResponseBody(DescribeDomainCnameResponseBody &&) = default ;
    DescribeDomainCnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCnameResponseBody() = default ;
    DescribeDomainCnameResponseBody& operator=(const DescribeDomainCnameResponseBody &) = default ;
    DescribeDomainCnameResponseBody& operator=(DescribeDomainCnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cnameDatas_ != nullptr
        && this->requestId_ != nullptr; };
    // cnameDatas Field Functions 
    bool hasCnameDatas() const { return this->cnameDatas_ != nullptr;};
    void deleteCnameDatas() { this->cnameDatas_ = nullptr;};
    inline const DescribeDomainCnameResponseBodyCnameDatas & cnameDatas() const { DARABONBA_PTR_GET_CONST(cnameDatas_, DescribeDomainCnameResponseBodyCnameDatas) };
    inline DescribeDomainCnameResponseBodyCnameDatas cnameDatas() { DARABONBA_PTR_GET(cnameDatas_, DescribeDomainCnameResponseBodyCnameDatas) };
    inline DescribeDomainCnameResponseBody& setCnameDatas(const DescribeDomainCnameResponseBodyCnameDatas & cnameDatas) { DARABONBA_PTR_SET_VALUE(cnameDatas_, cnameDatas) };
    inline DescribeDomainCnameResponseBody& setCnameDatas(DescribeDomainCnameResponseBodyCnameDatas && cnameDatas) { DARABONBA_PTR_SET_RVALUE(cnameDatas_, cnameDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainCnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the CNAME detection results.
    std::shared_ptr<DescribeDomainCnameResponseBodyCnameDatas> cnameDatas_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
