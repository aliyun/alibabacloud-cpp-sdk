// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAREHOUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateWarehouseRequest() = default ;
    CreateWarehouseRequest(const CreateWarehouseRequest &) = default ;
    CreateWarehouseRequest(CreateWarehouseRequest &&) = default ;
    CreateWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWarehouseRequest() = default ;
    CreateWarehouseRequest& operator=(const CreateWarehouseRequest &) = default ;
    CreateWarehouseRequest& operator=(CreateWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->biz_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline CreateWarehouseRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWarehouseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWarehouseRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> biz_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
