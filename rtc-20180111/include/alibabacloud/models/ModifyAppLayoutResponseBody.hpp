// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLAYOUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLAYOUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppLayoutResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppLayoutResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppLayoutResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyAppLayoutResponseBody() = default ;
    ModifyAppLayoutResponseBody(const ModifyAppLayoutResponseBody &) = default ;
    ModifyAppLayoutResponseBody(ModifyAppLayoutResponseBody &&) = default ;
    ModifyAppLayoutResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppLayoutResponseBody() = default ;
    ModifyAppLayoutResponseBody& operator=(const ModifyAppLayoutResponseBody &) = default ;
    ModifyAppLayoutResponseBody& operator=(ModifyAppLayoutResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layoutId_ == nullptr
        && return this->requestId_ == nullptr; };
    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline ModifyAppLayoutResponseBody& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAppLayoutResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> layoutId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
