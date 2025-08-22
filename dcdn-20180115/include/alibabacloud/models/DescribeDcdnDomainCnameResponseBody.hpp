// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainCnameResponseBodyCnameDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainCnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainCnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameDatas, cnameDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainCnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameDatas, cnameDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainCnameResponseBody() = default ;
    DescribeDcdnDomainCnameResponseBody(const DescribeDcdnDomainCnameResponseBody &) = default ;
    DescribeDcdnDomainCnameResponseBody(DescribeDcdnDomainCnameResponseBody &&) = default ;
    DescribeDcdnDomainCnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainCnameResponseBody() = default ;
    DescribeDcdnDomainCnameResponseBody& operator=(const DescribeDcdnDomainCnameResponseBody &) = default ;
    DescribeDcdnDomainCnameResponseBody& operator=(DescribeDcdnDomainCnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cnameDatas_ != nullptr
        && this->requestId_ != nullptr; };
    // cnameDatas Field Functions 
    bool hasCnameDatas() const { return this->cnameDatas_ != nullptr;};
    void deleteCnameDatas() { this->cnameDatas_ = nullptr;};
    inline const DescribeDcdnDomainCnameResponseBodyCnameDatas & cnameDatas() const { DARABONBA_PTR_GET_CONST(cnameDatas_, DescribeDcdnDomainCnameResponseBodyCnameDatas) };
    inline DescribeDcdnDomainCnameResponseBodyCnameDatas cnameDatas() { DARABONBA_PTR_GET(cnameDatas_, DescribeDcdnDomainCnameResponseBodyCnameDatas) };
    inline DescribeDcdnDomainCnameResponseBody& setCnameDatas(const DescribeDcdnDomainCnameResponseBodyCnameDatas & cnameDatas) { DARABONBA_PTR_SET_VALUE(cnameDatas_, cnameDatas) };
    inline DescribeDcdnDomainCnameResponseBody& setCnameDatas(DescribeDcdnDomainCnameResponseBodyCnameDatas && cnameDatas) { DARABONBA_PTR_SET_RVALUE(cnameDatas_, cnameDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainCnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The CNAME information.
    std::shared_ptr<DescribeDcdnDomainCnameResponseBodyCnameDatas> cnameDatas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
