// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDEVICECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDEVICECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GenerateDeviceCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDeviceCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDeviceCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scope, scope_);
    };
    GenerateDeviceCodeRequest() = default ;
    GenerateDeviceCodeRequest(const GenerateDeviceCodeRequest &) = default ;
    GenerateDeviceCodeRequest(GenerateDeviceCodeRequest &&) = default ;
    GenerateDeviceCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDeviceCodeRequest() = default ;
    GenerateDeviceCodeRequest& operator=(const GenerateDeviceCodeRequest &) = default ;
    GenerateDeviceCodeRequest& operator=(GenerateDeviceCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scope_ == nullptr; };
    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GenerateDeviceCodeRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The authorization scope.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
