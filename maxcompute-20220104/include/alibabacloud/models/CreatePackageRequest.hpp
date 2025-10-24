// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreatePackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(isInstall, isInstall_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(isInstall, isInstall_);
    };
    CreatePackageRequest() = default ;
    CreatePackageRequest(const CreatePackageRequest &) = default ;
    CreatePackageRequest(CreatePackageRequest &&) = default ;
    CreatePackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePackageRequest() = default ;
    CreatePackageRequest& operator=(const CreatePackageRequest &) = default ;
    CreatePackageRequest& operator=(CreatePackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->isInstall_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreatePackageRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // isInstall Field Functions 
    bool hasIsInstall() const { return this->isInstall_ != nullptr;};
    void deleteIsInstall() { this->isInstall_ = nullptr;};
    inline bool isInstall() const { DARABONBA_PTR_GET_DEFAULT(isInstall_, false) };
    inline CreatePackageRequest& setIsInstall(bool isInstall) { DARABONBA_PTR_SET_VALUE(isInstall_, isInstall) };


  protected:
    // The request body parameters.
    std::shared_ptr<string> body_ = nullptr;
    // Specifies whether to install the package.
    std::shared_ptr<bool> isInstall_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
