// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEFUNCTIONINVOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEFUNCTIONINVOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DisableFunctionInvocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableFunctionInvocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DisableFunctionInvocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DisableFunctionInvocationResponseBody() = default ;
    DisableFunctionInvocationResponseBody(const DisableFunctionInvocationResponseBody &) = default ;
    DisableFunctionInvocationResponseBody(DisableFunctionInvocationResponseBody &&) = default ;
    DisableFunctionInvocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableFunctionInvocationResponseBody() = default ;
    DisableFunctionInvocationResponseBody& operator=(const DisableFunctionInvocationResponseBody &) = default ;
    DisableFunctionInvocationResponseBody& operator=(DisableFunctionInvocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DisableFunctionInvocationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
