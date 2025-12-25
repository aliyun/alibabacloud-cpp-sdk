// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class CreateUploadPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateUploadPolicyRequest() = default ;
    CreateUploadPolicyRequest(const CreateUploadPolicyRequest &) = default ;
    CreateUploadPolicyRequest(CreateUploadPolicyRequest &&) = default ;
    CreateUploadPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadPolicyRequest() = default ;
    CreateUploadPolicyRequest& operator=(const CreateUploadPolicyRequest &) = default ;
    CreateUploadPolicyRequest& operator=(CreateUploadPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->option_ == nullptr
        && return this->type_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline CreateUploadPolicyRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateUploadPolicyRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> option_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
