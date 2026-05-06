// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteModelTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
    };
    DeleteModelTemplateRequest() = default ;
    DeleteModelTemplateRequest(const DeleteModelTemplateRequest &) = default ;
    DeleteModelTemplateRequest(DeleteModelTemplateRequest &&) = default ;
    DeleteModelTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelTemplateRequest() = default ;
    DeleteModelTemplateRequest& operator=(const DeleteModelTemplateRequest &) = default ;
    DeleteModelTemplateRequest& operator=(DeleteModelTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelTemplateId_ == nullptr; };
    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline DeleteModelTemplateRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> modelTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
