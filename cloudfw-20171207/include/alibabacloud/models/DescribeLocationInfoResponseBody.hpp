// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLocationInfoResponseBodyCnList.hpp>
#include <alibabacloud/models/DescribeLocationInfoResponseBodyCnProvinceList.hpp>
#include <alibabacloud/models/DescribeLocationInfoResponseBodyOverseasList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeLocationInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLocationInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnCount, cnCount_);
      DARABONBA_PTR_TO_JSON(CnList, cnList_);
      DARABONBA_PTR_TO_JSON(CnProvinceList, cnProvinceList_);
      DARABONBA_PTR_TO_JSON(OverseasCount, overseasCount_);
      DARABONBA_PTR_TO_JSON(OverseasList, overseasList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLocationInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnCount, cnCount_);
      DARABONBA_PTR_FROM_JSON(CnList, cnList_);
      DARABONBA_PTR_FROM_JSON(CnProvinceList, cnProvinceList_);
      DARABONBA_PTR_FROM_JSON(OverseasCount, overseasCount_);
      DARABONBA_PTR_FROM_JSON(OverseasList, overseasList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLocationInfoResponseBody() = default ;
    DescribeLocationInfoResponseBody(const DescribeLocationInfoResponseBody &) = default ;
    DescribeLocationInfoResponseBody(DescribeLocationInfoResponseBody &&) = default ;
    DescribeLocationInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLocationInfoResponseBody() = default ;
    DescribeLocationInfoResponseBody& operator=(const DescribeLocationInfoResponseBody &) = default ;
    DescribeLocationInfoResponseBody& operator=(DescribeLocationInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnCount_ == nullptr
        && return this->cnList_ == nullptr && return this->cnProvinceList_ == nullptr && return this->overseasCount_ == nullptr && return this->overseasList_ == nullptr && return this->requestId_ == nullptr; };
    // cnCount Field Functions 
    bool hasCnCount() const { return this->cnCount_ != nullptr;};
    void deleteCnCount() { this->cnCount_ = nullptr;};
    inline int32_t cnCount() const { DARABONBA_PTR_GET_DEFAULT(cnCount_, 0) };
    inline DescribeLocationInfoResponseBody& setCnCount(int32_t cnCount) { DARABONBA_PTR_SET_VALUE(cnCount_, cnCount) };


    // cnList Field Functions 
    bool hasCnList() const { return this->cnList_ != nullptr;};
    void deleteCnList() { this->cnList_ = nullptr;};
    inline const vector<DescribeLocationInfoResponseBodyCnList> & cnList() const { DARABONBA_PTR_GET_CONST(cnList_, vector<DescribeLocationInfoResponseBodyCnList>) };
    inline vector<DescribeLocationInfoResponseBodyCnList> cnList() { DARABONBA_PTR_GET(cnList_, vector<DescribeLocationInfoResponseBodyCnList>) };
    inline DescribeLocationInfoResponseBody& setCnList(const vector<DescribeLocationInfoResponseBodyCnList> & cnList) { DARABONBA_PTR_SET_VALUE(cnList_, cnList) };
    inline DescribeLocationInfoResponseBody& setCnList(vector<DescribeLocationInfoResponseBodyCnList> && cnList) { DARABONBA_PTR_SET_RVALUE(cnList_, cnList) };


    // cnProvinceList Field Functions 
    bool hasCnProvinceList() const { return this->cnProvinceList_ != nullptr;};
    void deleteCnProvinceList() { this->cnProvinceList_ = nullptr;};
    inline const vector<DescribeLocationInfoResponseBodyCnProvinceList> & cnProvinceList() const { DARABONBA_PTR_GET_CONST(cnProvinceList_, vector<DescribeLocationInfoResponseBodyCnProvinceList>) };
    inline vector<DescribeLocationInfoResponseBodyCnProvinceList> cnProvinceList() { DARABONBA_PTR_GET(cnProvinceList_, vector<DescribeLocationInfoResponseBodyCnProvinceList>) };
    inline DescribeLocationInfoResponseBody& setCnProvinceList(const vector<DescribeLocationInfoResponseBodyCnProvinceList> & cnProvinceList) { DARABONBA_PTR_SET_VALUE(cnProvinceList_, cnProvinceList) };
    inline DescribeLocationInfoResponseBody& setCnProvinceList(vector<DescribeLocationInfoResponseBodyCnProvinceList> && cnProvinceList) { DARABONBA_PTR_SET_RVALUE(cnProvinceList_, cnProvinceList) };


    // overseasCount Field Functions 
    bool hasOverseasCount() const { return this->overseasCount_ != nullptr;};
    void deleteOverseasCount() { this->overseasCount_ = nullptr;};
    inline int32_t overseasCount() const { DARABONBA_PTR_GET_DEFAULT(overseasCount_, 0) };
    inline DescribeLocationInfoResponseBody& setOverseasCount(int32_t overseasCount) { DARABONBA_PTR_SET_VALUE(overseasCount_, overseasCount) };


    // overseasList Field Functions 
    bool hasOverseasList() const { return this->overseasList_ != nullptr;};
    void deleteOverseasList() { this->overseasList_ = nullptr;};
    inline const vector<DescribeLocationInfoResponseBodyOverseasList> & overseasList() const { DARABONBA_PTR_GET_CONST(overseasList_, vector<DescribeLocationInfoResponseBodyOverseasList>) };
    inline vector<DescribeLocationInfoResponseBodyOverseasList> overseasList() { DARABONBA_PTR_GET(overseasList_, vector<DescribeLocationInfoResponseBodyOverseasList>) };
    inline DescribeLocationInfoResponseBody& setOverseasList(const vector<DescribeLocationInfoResponseBodyOverseasList> & overseasList) { DARABONBA_PTR_SET_VALUE(overseasList_, overseasList) };
    inline DescribeLocationInfoResponseBody& setOverseasList(vector<DescribeLocationInfoResponseBodyOverseasList> && overseasList) { DARABONBA_PTR_SET_RVALUE(overseasList_, overseasList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLocationInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> cnCount_ = nullptr;
    std::shared_ptr<vector<DescribeLocationInfoResponseBodyCnList>> cnList_ = nullptr;
    std::shared_ptr<vector<DescribeLocationInfoResponseBodyCnProvinceList>> cnProvinceList_ = nullptr;
    std::shared_ptr<int32_t> overseasCount_ = nullptr;
    std::shared_ptr<vector<DescribeLocationInfoResponseBodyOverseasList>> overseasList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
