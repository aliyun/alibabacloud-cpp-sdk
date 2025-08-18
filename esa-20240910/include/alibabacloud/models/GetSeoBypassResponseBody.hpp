// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSEOBYPASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSEOBYPASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSeoBypassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSeoBypassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSeoBypassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSeoBypassResponseBody() = default ;
    GetSeoBypassResponseBody(const GetSeoBypassResponseBody &) = default ;
    GetSeoBypassResponseBody(GetSeoBypassResponseBody &&) = default ;
    GetSeoBypassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSeoBypassResponseBody() = default ;
    GetSeoBypassResponseBody& operator=(const GetSeoBypassResponseBody &) = default ;
    GetSeoBypassResponseBody& operator=(GetSeoBypassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->requestId_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline GetSeoBypassResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSeoBypassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the feature. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> enable_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
