// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class DeleteModelServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
    };
    DeleteModelServiceRequest() = default ;
    DeleteModelServiceRequest(const DeleteModelServiceRequest &) = default ;
    DeleteModelServiceRequest(DeleteModelServiceRequest &&) = default ;
    DeleteModelServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelServiceRequest() = default ;
    DeleteModelServiceRequest& operator=(const DeleteModelServiceRequest &) = default ;
    DeleteModelServiceRequest& operator=(DeleteModelServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelServiceName_ == nullptr; };
    // modelServiceName Field Functions 
    bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
    void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
    inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
    inline DeleteModelServiceRequest& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


  protected:
    shared_ptr<string> modelServiceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
