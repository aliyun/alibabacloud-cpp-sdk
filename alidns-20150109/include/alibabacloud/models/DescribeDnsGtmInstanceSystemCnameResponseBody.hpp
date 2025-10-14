// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESYSTEMCNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESYSTEMCNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceSystemCnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceSystemCnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemCname, systemCname_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceSystemCnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemCname, systemCname_);
    };
    DescribeDnsGtmInstanceSystemCnameResponseBody() = default ;
    DescribeDnsGtmInstanceSystemCnameResponseBody(const DescribeDnsGtmInstanceSystemCnameResponseBody &) = default ;
    DescribeDnsGtmInstanceSystemCnameResponseBody(DescribeDnsGtmInstanceSystemCnameResponseBody &&) = default ;
    DescribeDnsGtmInstanceSystemCnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceSystemCnameResponseBody() = default ;
    DescribeDnsGtmInstanceSystemCnameResponseBody& operator=(const DescribeDnsGtmInstanceSystemCnameResponseBody &) = default ;
    DescribeDnsGtmInstanceSystemCnameResponseBody& operator=(DescribeDnsGtmInstanceSystemCnameResponseBody &&) = default ;
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
    inline DescribeDnsGtmInstanceSystemCnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemCname Field Functions 
    bool hasSystemCname() const { return this->systemCname_ != nullptr;};
    void deleteSystemCname() { this->systemCname_ = nullptr;};
    inline string systemCname() const { DARABONBA_PTR_GET_DEFAULT(systemCname_, "") };
    inline DescribeDnsGtmInstanceSystemCnameResponseBody& setSystemCname(string systemCname) { DARABONBA_PTR_SET_VALUE(systemCname_, systemCname) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The CNAME domain name assigned by the system.
    std::shared_ptr<string> systemCname_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
