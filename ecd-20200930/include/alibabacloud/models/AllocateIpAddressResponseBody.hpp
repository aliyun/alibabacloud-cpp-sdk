// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AllocateIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocateIpAddressResponseBody() = default ;
    AllocateIpAddressResponseBody(const AllocateIpAddressResponseBody &) = default ;
    AllocateIpAddressResponseBody(AllocateIpAddressResponseBody &&) = default ;
    AllocateIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateIpAddressResponseBody() = default ;
    AllocateIpAddressResponseBody& operator=(const AllocateIpAddressResponseBody &) = default ;
    AllocateIpAddressResponseBody& operator=(AllocateIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipAddress_ == nullptr
        && return this->eipId_ == nullptr && return this->requestId_ == nullptr; };
    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline string eipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
    inline AllocateIpAddressResponseBody& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string eipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline AllocateIpAddressResponseBody& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> eipAddress_ = nullptr;
    std::shared_ptr<string> eipId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
