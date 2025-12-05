// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEFUNCTIONINVOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLEFUNCTIONINVOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class EnableFunctionInvocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableFunctionInvocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnableFunctionInvocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    EnableFunctionInvocationResponseBody() = default ;
    EnableFunctionInvocationResponseBody(const EnableFunctionInvocationResponseBody &) = default ;
    EnableFunctionInvocationResponseBody(EnableFunctionInvocationResponseBody &&) = default ;
    EnableFunctionInvocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableFunctionInvocationResponseBody() = default ;
    EnableFunctionInvocationResponseBody& operator=(const EnableFunctionInvocationResponseBody &) = default ;
    EnableFunctionInvocationResponseBody& operator=(EnableFunctionInvocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->success_ == nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnableFunctionInvocationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
