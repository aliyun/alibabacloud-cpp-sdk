// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECNAMEREUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECNAMEREUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCnameReusesResponseBodyCnameReuses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCnameReusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCnameReusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameReuses, cnameReuses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCnameReusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameReuses, cnameReuses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCnameReusesResponseBody() = default ;
    DescribeCnameReusesResponseBody(const DescribeCnameReusesResponseBody &) = default ;
    DescribeCnameReusesResponseBody(DescribeCnameReusesResponseBody &&) = default ;
    DescribeCnameReusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCnameReusesResponseBody() = default ;
    DescribeCnameReusesResponseBody& operator=(const DescribeCnameReusesResponseBody &) = default ;
    DescribeCnameReusesResponseBody& operator=(DescribeCnameReusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnameReuses_ == nullptr
        && return this->requestId_ == nullptr; };
    // cnameReuses Field Functions 
    bool hasCnameReuses() const { return this->cnameReuses_ != nullptr;};
    void deleteCnameReuses() { this->cnameReuses_ = nullptr;};
    inline const vector<DescribeCnameReusesResponseBodyCnameReuses> & cnameReuses() const { DARABONBA_PTR_GET_CONST(cnameReuses_, vector<DescribeCnameReusesResponseBodyCnameReuses>) };
    inline vector<DescribeCnameReusesResponseBodyCnameReuses> cnameReuses() { DARABONBA_PTR_GET(cnameReuses_, vector<DescribeCnameReusesResponseBodyCnameReuses>) };
    inline DescribeCnameReusesResponseBody& setCnameReuses(const vector<DescribeCnameReusesResponseBodyCnameReuses> & cnameReuses) { DARABONBA_PTR_SET_VALUE(cnameReuses_, cnameReuses) };
    inline DescribeCnameReusesResponseBody& setCnameReuses(vector<DescribeCnameReusesResponseBodyCnameReuses> && cnameReuses) { DARABONBA_PTR_SET_RVALUE(cnameReuses_, cnameReuses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCnameReusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeCnameReusesResponseBodyCnameReuses>> cnameReuses_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
