// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESYSTEMCNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMINSTANCESYSTEMCNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmInstanceSystemCnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmInstanceSystemCnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemCname, systemCname_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmInstanceSystemCnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemCname, systemCname_);
    };
    DescribeGtmInstanceSystemCnameResponseBody() = default ;
    DescribeGtmInstanceSystemCnameResponseBody(const DescribeGtmInstanceSystemCnameResponseBody &) = default ;
    DescribeGtmInstanceSystemCnameResponseBody(DescribeGtmInstanceSystemCnameResponseBody &&) = default ;
    DescribeGtmInstanceSystemCnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmInstanceSystemCnameResponseBody() = default ;
    DescribeGtmInstanceSystemCnameResponseBody& operator=(const DescribeGtmInstanceSystemCnameResponseBody &) = default ;
    DescribeGtmInstanceSystemCnameResponseBody& operator=(DescribeGtmInstanceSystemCnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->systemCname_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmInstanceSystemCnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemCname Field Functions 
    bool hasSystemCname() const { return this->systemCname_ != nullptr;};
    void deleteSystemCname() { this->systemCname_ = nullptr;};
    inline string systemCname() const { DARABONBA_PTR_GET_DEFAULT(systemCname_, "") };
    inline DescribeGtmInstanceSystemCnameResponseBody& setSystemCname(string systemCname) { DARABONBA_PTR_SET_VALUE(systemCname_, systemCname) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The CNAME record assigned by the system.
    std::shared_ptr<string> systemCname_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
