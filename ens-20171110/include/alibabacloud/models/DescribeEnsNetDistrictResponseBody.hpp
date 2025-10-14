// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsNetDistrictResponseBodyEnsNetDistricts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetDistrictResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetDistrictResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnsNetDistricts, ensNetDistricts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetDistrictResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnsNetDistricts, ensNetDistricts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsNetDistrictResponseBody() = default ;
    DescribeEnsNetDistrictResponseBody(const DescribeEnsNetDistrictResponseBody &) = default ;
    DescribeEnsNetDistrictResponseBody(DescribeEnsNetDistrictResponseBody &&) = default ;
    DescribeEnsNetDistrictResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetDistrictResponseBody() = default ;
    DescribeEnsNetDistrictResponseBody& operator=(const DescribeEnsNetDistrictResponseBody &) = default ;
    DescribeEnsNetDistrictResponseBody& operator=(DescribeEnsNetDistrictResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->ensNetDistricts_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnsNetDistrictResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ensNetDistricts Field Functions 
    bool hasEnsNetDistricts() const { return this->ensNetDistricts_ != nullptr;};
    void deleteEnsNetDistricts() { this->ensNetDistricts_ = nullptr;};
    inline const DescribeEnsNetDistrictResponseBodyEnsNetDistricts & ensNetDistricts() const { DARABONBA_PTR_GET_CONST(ensNetDistricts_, DescribeEnsNetDistrictResponseBodyEnsNetDistricts) };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistricts ensNetDistricts() { DARABONBA_PTR_GET(ensNetDistricts_, DescribeEnsNetDistrictResponseBodyEnsNetDistricts) };
    inline DescribeEnsNetDistrictResponseBody& setEnsNetDistricts(const DescribeEnsNetDistrictResponseBodyEnsNetDistricts & ensNetDistricts) { DARABONBA_PTR_SET_VALUE(ensNetDistricts_, ensNetDistricts) };
    inline DescribeEnsNetDistrictResponseBody& setEnsNetDistricts(DescribeEnsNetDistrictResponseBodyEnsNetDistricts && ensNetDistricts) { DARABONBA_PTR_SET_RVALUE(ensNetDistricts_, ensNetDistricts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsNetDistrictResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. A value of 0 indicates that the operation was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The information about the regions.
    std::shared_ptr<DescribeEnsNetDistrictResponseBodyEnsNetDistricts> ensNetDistricts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
