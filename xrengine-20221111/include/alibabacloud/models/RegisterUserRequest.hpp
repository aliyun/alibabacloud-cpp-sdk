// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class RegisterUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    RegisterUserRequest() = default ;
    RegisterUserRequest(const RegisterUserRequest &) = default ;
    RegisterUserRequest(RegisterUserRequest &&) = default ;
    RegisterUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterUserRequest() = default ;
    RegisterUserRequest& operator=(const RegisterUserRequest &) = default ;
    RegisterUserRequest& operator=(RegisterUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceType_ == nullptr; };
    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline RegisterUserRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
