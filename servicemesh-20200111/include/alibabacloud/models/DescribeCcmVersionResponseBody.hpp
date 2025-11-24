// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECCMVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECCMVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CCMVersionsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeCCMVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCCMVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CCMVersions, CCMVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCCMVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CCMVersions, CCMVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCCMVersionResponseBody() = default ;
    DescribeCCMVersionResponseBody(const DescribeCCMVersionResponseBody &) = default ;
    DescribeCCMVersionResponseBody(DescribeCCMVersionResponseBody &&) = default ;
    DescribeCCMVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCCMVersionResponseBody() = default ;
    DescribeCCMVersionResponseBody& operator=(const DescribeCCMVersionResponseBody &) = default ;
    DescribeCCMVersionResponseBody& operator=(DescribeCCMVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CCMVersions_ == nullptr
        && return this->requestId_ == nullptr; };
    // CCMVersions Field Functions 
    bool hasCCMVersions() const { return this->CCMVersions_ != nullptr;};
    void deleteCCMVersions() { this->CCMVersions_ = nullptr;};
    inline const map<string, CCMVersionsValue> & CCMVersions() const { DARABONBA_PTR_GET_CONST(CCMVersions_, map<string, CCMVersionsValue>) };
    inline map<string, CCMVersionsValue> CCMVersions() { DARABONBA_PTR_GET(CCMVersions_, map<string, CCMVersionsValue>) };
    inline DescribeCCMVersionResponseBody& setCCMVersions(const map<string, CCMVersionsValue> & CCMVersions) { DARABONBA_PTR_SET_VALUE(CCMVersions_, CCMVersions) };
    inline DescribeCCMVersionResponseBody& setCCMVersions(map<string, CCMVersionsValue> && CCMVersions) { DARABONBA_PTR_SET_RVALUE(CCMVersions_, CCMVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCCMVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The versions of the CCM component in all clusters on the data plane.
    std::shared_ptr<map<string, CCMVersionsValue>> CCMVersions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
