// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyCasterLayoutResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterLayoutResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterLayoutResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCasterLayoutResponseBody() = default ;
    ModifyCasterLayoutResponseBody(const ModifyCasterLayoutResponseBody &) = default ;
    ModifyCasterLayoutResponseBody(ModifyCasterLayoutResponseBody &&) = default ;
    ModifyCasterLayoutResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterLayoutResponseBody() = default ;
    ModifyCasterLayoutResponseBody& operator=(const ModifyCasterLayoutResponseBody &) = default ;
    ModifyCasterLayoutResponseBody& operator=(ModifyCasterLayoutResponseBody &&) = default ;
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
    inline ModifyCasterLayoutResponseBody& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCasterLayoutResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the layout. You can use this ID to query information about the layout.
    std::shared_ptr<string> layoutId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
