// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdatePackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdatePackageRequest() = default ;
    UpdatePackageRequest(const UpdatePackageRequest &) = default ;
    UpdatePackageRequest(UpdatePackageRequest &&) = default ;
    UpdatePackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePackageRequest() = default ;
    UpdatePackageRequest& operator=(const UpdatePackageRequest &) = default ;
    UpdatePackageRequest& operator=(UpdatePackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline UpdatePackageRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The request body parameters.
    std::shared_ptr<string> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
