// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPTOKENSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPTOKENSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppTokenServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppTokenServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateAction, createAction_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppTokenServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateAction, createAction_);
    };
    CreateAppTokenServiceRequest() = default ;
    CreateAppTokenServiceRequest(const CreateAppTokenServiceRequest &) = default ;
    CreateAppTokenServiceRequest(CreateAppTokenServiceRequest &&) = default ;
    CreateAppTokenServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppTokenServiceRequest() = default ;
    CreateAppTokenServiceRequest& operator=(const CreateAppTokenServiceRequest &) = default ;
    CreateAppTokenServiceRequest& operator=(CreateAppTokenServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createAction_ == nullptr; };
    // createAction Field Functions 
    bool hasCreateAction() const { return this->createAction_ != nullptr;};
    void deleteCreateAction() { this->createAction_ = nullptr;};
    inline string getCreateAction() const { DARABONBA_PTR_GET_DEFAULT(createAction_, "") };
    inline CreateAppTokenServiceRequest& setCreateAction(string createAction) { DARABONBA_PTR_SET_VALUE(createAction_, createAction) };


  protected:
    shared_ptr<string> createAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
