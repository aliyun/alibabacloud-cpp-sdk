// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTISPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTISPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDosEventIspResponseBodyIsps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventIspResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventIspResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventIspResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDosEventIspResponseBody() = default ;
    DescribeDDosEventIspResponseBody(const DescribeDDosEventIspResponseBody &) = default ;
    DescribeDDosEventIspResponseBody(DescribeDDosEventIspResponseBody &&) = default ;
    DescribeDDosEventIspResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventIspResponseBody() = default ;
    DescribeDDosEventIspResponseBody& operator=(const DescribeDDosEventIspResponseBody &) = default ;
    DescribeDDosEventIspResponseBody& operator=(DescribeDDosEventIspResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isps_ == nullptr
        && return this->requestId_ == nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const vector<DescribeDDosEventIspResponseBodyIsps> & isps() const { DARABONBA_PTR_GET_CONST(isps_, vector<DescribeDDosEventIspResponseBodyIsps>) };
    inline vector<DescribeDDosEventIspResponseBodyIsps> isps() { DARABONBA_PTR_GET(isps_, vector<DescribeDDosEventIspResponseBodyIsps>) };
    inline DescribeDDosEventIspResponseBody& setIsps(const vector<DescribeDDosEventIspResponseBodyIsps> & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribeDDosEventIspResponseBody& setIsps(vector<DescribeDDosEventIspResponseBodyIsps> && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventIspResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ISPs for the volumetric attack.
    std::shared_ptr<vector<DescribeDDosEventIspResponseBodyIsps>> isps_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
