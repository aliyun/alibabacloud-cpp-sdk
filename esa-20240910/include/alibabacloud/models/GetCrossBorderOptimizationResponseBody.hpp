// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCROSSBORDEROPTIMIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCROSSBORDEROPTIMIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCrossBorderOptimizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrossBorderOptimizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrossBorderOptimizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCrossBorderOptimizationResponseBody() = default ;
    GetCrossBorderOptimizationResponseBody(const GetCrossBorderOptimizationResponseBody &) = default ;
    GetCrossBorderOptimizationResponseBody(GetCrossBorderOptimizationResponseBody &&) = default ;
    GetCrossBorderOptimizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrossBorderOptimizationResponseBody() = default ;
    GetCrossBorderOptimizationResponseBody& operator=(const GetCrossBorderOptimizationResponseBody &) = default ;
    GetCrossBorderOptimizationResponseBody& operator=(GetCrossBorderOptimizationResponseBody &&) = default ;
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
    inline GetCrossBorderOptimizationResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCrossBorderOptimizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Whether to enable Chinese mainland network access optimization. By default, it is disabled. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> enable_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
