// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECNAMECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECNAMECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCnameCountResponseBodyCnameCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCnameCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCnameCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameCount, cnameCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCnameCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameCount, cnameCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCnameCountResponseBody() = default ;
    DescribeCnameCountResponseBody(const DescribeCnameCountResponseBody &) = default ;
    DescribeCnameCountResponseBody(DescribeCnameCountResponseBody &&) = default ;
    DescribeCnameCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCnameCountResponseBody() = default ;
    DescribeCnameCountResponseBody& operator=(const DescribeCnameCountResponseBody &) = default ;
    DescribeCnameCountResponseBody& operator=(DescribeCnameCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cnameCount_ != nullptr
        && this->requestId_ != nullptr; };
    // cnameCount Field Functions 
    bool hasCnameCount() const { return this->cnameCount_ != nullptr;};
    void deleteCnameCount() { this->cnameCount_ = nullptr;};
    inline const DescribeCnameCountResponseBodyCnameCount & cnameCount() const { DARABONBA_PTR_GET_CONST(cnameCount_, DescribeCnameCountResponseBodyCnameCount) };
    inline DescribeCnameCountResponseBodyCnameCount cnameCount() { DARABONBA_PTR_GET(cnameCount_, DescribeCnameCountResponseBodyCnameCount) };
    inline DescribeCnameCountResponseBody& setCnameCount(const DescribeCnameCountResponseBodyCnameCount & cnameCount) { DARABONBA_PTR_SET_VALUE(cnameCount_, cnameCount) };
    inline DescribeCnameCountResponseBody& setCnameCount(DescribeCnameCountResponseBodyCnameCount && cnameCount) { DARABONBA_PTR_SET_RVALUE(cnameCount_, cnameCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCnameCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the number of domain names that are added to WAF in CNAME record mode and hybrid cloud reverse proxy mode.
    std::shared_ptr<DescribeCnameCountResponseBodyCnameCount> cnameCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
