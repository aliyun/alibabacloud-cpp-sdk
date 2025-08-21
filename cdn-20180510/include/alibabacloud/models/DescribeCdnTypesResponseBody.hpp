// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnTypesResponseBodyCdnTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CdnTypes, cdnTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnTypes, cdnTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnTypesResponseBody() = default ;
    DescribeCdnTypesResponseBody(const DescribeCdnTypesResponseBody &) = default ;
    DescribeCdnTypesResponseBody(DescribeCdnTypesResponseBody &&) = default ;
    DescribeCdnTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnTypesResponseBody() = default ;
    DescribeCdnTypesResponseBody& operator=(const DescribeCdnTypesResponseBody &) = default ;
    DescribeCdnTypesResponseBody& operator=(DescribeCdnTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdnTypes_ != nullptr
        && this->requestId_ != nullptr; };
    // cdnTypes Field Functions 
    bool hasCdnTypes() const { return this->cdnTypes_ != nullptr;};
    void deleteCdnTypes() { this->cdnTypes_ = nullptr;};
    inline const DescribeCdnTypesResponseBodyCdnTypes & cdnTypes() const { DARABONBA_PTR_GET_CONST(cdnTypes_, DescribeCdnTypesResponseBodyCdnTypes) };
    inline DescribeCdnTypesResponseBodyCdnTypes cdnTypes() { DARABONBA_PTR_GET(cdnTypes_, DescribeCdnTypesResponseBodyCdnTypes) };
    inline DescribeCdnTypesResponseBody& setCdnTypes(const DescribeCdnTypesResponseBodyCdnTypes & cdnTypes) { DARABONBA_PTR_SET_VALUE(cdnTypes_, cdnTypes) };
    inline DescribeCdnTypesResponseBody& setCdnTypes(DescribeCdnTypesResponseBodyCdnTypes && cdnTypes) { DARABONBA_PTR_SET_RVALUE(cdnTypes_, cdnTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types of the domain names.
    std::shared_ptr<DescribeCdnTypesResponseBodyCdnTypes> cdnTypes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
