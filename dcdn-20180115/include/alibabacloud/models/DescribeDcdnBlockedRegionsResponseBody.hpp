// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNBLOCKEDREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNBLOCKEDREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnBlockedRegionsResponseBodyInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnBlockedRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnBlockedRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InfoList, infoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnBlockedRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoList, infoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnBlockedRegionsResponseBody() = default ;
    DescribeDcdnBlockedRegionsResponseBody(const DescribeDcdnBlockedRegionsResponseBody &) = default ;
    DescribeDcdnBlockedRegionsResponseBody(DescribeDcdnBlockedRegionsResponseBody &&) = default ;
    DescribeDcdnBlockedRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnBlockedRegionsResponseBody() = default ;
    DescribeDcdnBlockedRegionsResponseBody& operator=(const DescribeDcdnBlockedRegionsResponseBody &) = default ;
    DescribeDcdnBlockedRegionsResponseBody& operator=(DescribeDcdnBlockedRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->infoList_ != nullptr
        && this->requestId_ != nullptr; };
    // infoList Field Functions 
    bool hasInfoList() const { return this->infoList_ != nullptr;};
    void deleteInfoList() { this->infoList_ = nullptr;};
    inline const DescribeDcdnBlockedRegionsResponseBodyInfoList & infoList() const { DARABONBA_PTR_GET_CONST(infoList_, DescribeDcdnBlockedRegionsResponseBodyInfoList) };
    inline DescribeDcdnBlockedRegionsResponseBodyInfoList infoList() { DARABONBA_PTR_GET(infoList_, DescribeDcdnBlockedRegionsResponseBodyInfoList) };
    inline DescribeDcdnBlockedRegionsResponseBody& setInfoList(const DescribeDcdnBlockedRegionsResponseBodyInfoList & infoList) { DARABONBA_PTR_SET_VALUE(infoList_, infoList) };
    inline DescribeDcdnBlockedRegionsResponseBody& setInfoList(DescribeDcdnBlockedRegionsResponseBodyInfoList && infoList) { DARABONBA_PTR_SET_RVALUE(infoList_, infoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnBlockedRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the country or region.
    std::shared_ptr<DescribeDcdnBlockedRegionsResponseBodyInfoList> infoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
