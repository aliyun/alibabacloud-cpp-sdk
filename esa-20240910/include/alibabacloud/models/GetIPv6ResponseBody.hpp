// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPV6RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPV6RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetIPv6ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIPv6ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIPv6ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIPv6ResponseBody() = default ;
    GetIPv6ResponseBody(const GetIPv6ResponseBody &) = default ;
    GetIPv6ResponseBody(GetIPv6ResponseBody &&) = default ;
    GetIPv6ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIPv6ResponseBody() = default ;
    GetIPv6ResponseBody& operator=(const GetIPv6ResponseBody &) = default ;
    GetIPv6ResponseBody& operator=(GetIPv6ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->region_ == nullptr && return this->requestId_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline GetIPv6ResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetIPv6ResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIPv6ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether IPv6 is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> enable_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
