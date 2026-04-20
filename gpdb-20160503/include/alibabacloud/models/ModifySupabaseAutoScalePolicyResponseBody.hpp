// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUPABASEAUTOSCALEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUPABASEAUTOSCALEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySupabaseAutoScalePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySupabaseAutoScalePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySupabaseAutoScalePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifySupabaseAutoScalePolicyResponseBody() = default ;
    ModifySupabaseAutoScalePolicyResponseBody(const ModifySupabaseAutoScalePolicyResponseBody &) = default ;
    ModifySupabaseAutoScalePolicyResponseBody(ModifySupabaseAutoScalePolicyResponseBody &&) = default ;
    ModifySupabaseAutoScalePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySupabaseAutoScalePolicyResponseBody() = default ;
    ModifySupabaseAutoScalePolicyResponseBody& operator=(const ModifySupabaseAutoScalePolicyResponseBody &) = default ;
    ModifySupabaseAutoScalePolicyResponseBody& operator=(ModifySupabaseAutoScalePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySupabaseAutoScalePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
