// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUDFFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUDFFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DeleteUdfFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUdfFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(udfArtifactName, udfArtifactName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUdfFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(udfArtifactName, udfArtifactName_);
    };
    DeleteUdfFunctionRequest() = default ;
    DeleteUdfFunctionRequest(const DeleteUdfFunctionRequest &) = default ;
    DeleteUdfFunctionRequest(DeleteUdfFunctionRequest &&) = default ;
    DeleteUdfFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUdfFunctionRequest() = default ;
    DeleteUdfFunctionRequest& operator=(const DeleteUdfFunctionRequest &) = default ;
    DeleteUdfFunctionRequest& operator=(DeleteUdfFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->className_ == nullptr
        && return this->udfArtifactName_ == nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline DeleteUdfFunctionRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // udfArtifactName Field Functions 
    bool hasUdfArtifactName() const { return this->udfArtifactName_ != nullptr;};
    void deleteUdfArtifactName() { this->udfArtifactName_ = nullptr;};
    inline string udfArtifactName() const { DARABONBA_PTR_GET_DEFAULT(udfArtifactName_, "") };
    inline DeleteUdfFunctionRequest& setUdfArtifactName(string udfArtifactName) { DARABONBA_PTR_SET_VALUE(udfArtifactName_, udfArtifactName) };


  protected:
    // The name of the class that corresponds to the UDF.
    // 
    // This parameter is required.
    std::shared_ptr<string> className_ = nullptr;
    // The name of the resource that corresponds to the UDF that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> udfArtifactName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
