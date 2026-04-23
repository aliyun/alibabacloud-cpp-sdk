// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINVENTORYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINVENTORYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateInventoryJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInventoryJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Param, param_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInventoryJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Param, param_);
    };
    CreateInventoryJobRequest() = default ;
    CreateInventoryJobRequest(const CreateInventoryJobRequest &) = default ;
    CreateInventoryJobRequest(CreateInventoryJobRequest &&) = default ;
    CreateInventoryJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInventoryJobRequest() = default ;
    CreateInventoryJobRequest& operator=(const CreateInventoryJobRequest &) = default ;
    CreateInventoryJobRequest& operator=(CreateInventoryJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->param_ == nullptr; };
    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline CreateInventoryJobRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


  protected:
    shared_ptr<string> param_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
