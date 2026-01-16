// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPFILTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIPFILTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class AddIpfilterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIpfilterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpFilterId, ipFilterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIpfilterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpFilterId, ipFilterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddIpfilterResponseBody() = default ;
    AddIpfilterResponseBody(const AddIpfilterResponseBody &) = default ;
    AddIpfilterResponseBody(AddIpfilterResponseBody &&) = default ;
    AddIpfilterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIpfilterResponseBody() = default ;
    AddIpfilterResponseBody& operator=(const AddIpfilterResponseBody &) = default ;
    AddIpfilterResponseBody& operator=(AddIpfilterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipFilterId_ == nullptr
        && this->requestId_ == nullptr; };
    // ipFilterId Field Functions 
    bool hasIpFilterId() const { return this->ipFilterId_ != nullptr;};
    void deleteIpFilterId() { this->ipFilterId_ = nullptr;};
    inline string getIpFilterId() const { DARABONBA_PTR_GET_DEFAULT(ipFilterId_, "") };
    inline AddIpfilterResponseBody& setIpFilterId(string ipFilterId) { DARABONBA_PTR_SET_VALUE(ipFilterId_, ipFilterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddIpfilterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // ID corresponding to the IP
    shared_ptr<string> ipFilterId_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
