// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebAccessModeResponseBodyDomainModes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAccessModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainModes, domainModes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainModes, domainModes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebAccessModeResponseBody() = default ;
    DescribeWebAccessModeResponseBody(const DescribeWebAccessModeResponseBody &) = default ;
    DescribeWebAccessModeResponseBody(DescribeWebAccessModeResponseBody &&) = default ;
    DescribeWebAccessModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessModeResponseBody() = default ;
    DescribeWebAccessModeResponseBody& operator=(const DescribeWebAccessModeResponseBody &) = default ;
    DescribeWebAccessModeResponseBody& operator=(DescribeWebAccessModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainModes_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainModes Field Functions 
    bool hasDomainModes() const { return this->domainModes_ != nullptr;};
    void deleteDomainModes() { this->domainModes_ = nullptr;};
    inline const vector<DescribeWebAccessModeResponseBodyDomainModes> & domainModes() const { DARABONBA_PTR_GET_CONST(domainModes_, vector<DescribeWebAccessModeResponseBodyDomainModes>) };
    inline vector<DescribeWebAccessModeResponseBodyDomainModes> domainModes() { DARABONBA_PTR_GET(domainModes_, vector<DescribeWebAccessModeResponseBodyDomainModes>) };
    inline DescribeWebAccessModeResponseBody& setDomainModes(const vector<DescribeWebAccessModeResponseBodyDomainModes> & domainModes) { DARABONBA_PTR_SET_VALUE(domainModes_, domainModes) };
    inline DescribeWebAccessModeResponseBody& setDomainModes(vector<DescribeWebAccessModeResponseBodyDomainModes> && domainModes) { DARABONBA_PTR_SET_RVALUE(domainModes_, domainModes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebAccessModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the modes in which the website service is added.
    std::shared_ptr<vector<DescribeWebAccessModeResponseBodyDomainModes>> domainModes_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
