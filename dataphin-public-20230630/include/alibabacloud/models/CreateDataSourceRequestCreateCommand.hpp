// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUESTCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataSourceRequestCreateCommandDevDataSourceCreate.hpp>
#include <alibabacloud/models/CreateDataSourceRequestCreateCommandProdDataSourceCreate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataSourceRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(DevDataSourceCreate, devDataSourceCreate_);
      DARABONBA_PTR_TO_JSON(ProdDataSourceCreate, prodDataSourceCreate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(DevDataSourceCreate, devDataSourceCreate_);
      DARABONBA_PTR_FROM_JSON(ProdDataSourceCreate, prodDataSourceCreate_);
    };
    CreateDataSourceRequestCreateCommand() = default ;
    CreateDataSourceRequestCreateCommand(const CreateDataSourceRequestCreateCommand &) = default ;
    CreateDataSourceRequestCreateCommand(CreateDataSourceRequestCreateCommand &&) = default ;
    CreateDataSourceRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequestCreateCommand() = default ;
    CreateDataSourceRequestCreateCommand& operator=(const CreateDataSourceRequestCreateCommand &) = default ;
    CreateDataSourceRequestCreateCommand& operator=(CreateDataSourceRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devDataSourceCreate_ == nullptr
        && return this->prodDataSourceCreate_ == nullptr; };
    // devDataSourceCreate Field Functions 
    bool hasDevDataSourceCreate() const { return this->devDataSourceCreate_ != nullptr;};
    void deleteDevDataSourceCreate() { this->devDataSourceCreate_ = nullptr;};
    inline const Models::CreateDataSourceRequestCreateCommandDevDataSourceCreate & devDataSourceCreate() const { DARABONBA_PTR_GET_CONST(devDataSourceCreate_, Models::CreateDataSourceRequestCreateCommandDevDataSourceCreate) };
    inline Models::CreateDataSourceRequestCreateCommandDevDataSourceCreate devDataSourceCreate() { DARABONBA_PTR_GET(devDataSourceCreate_, Models::CreateDataSourceRequestCreateCommandDevDataSourceCreate) };
    inline CreateDataSourceRequestCreateCommand& setDevDataSourceCreate(const Models::CreateDataSourceRequestCreateCommandDevDataSourceCreate & devDataSourceCreate) { DARABONBA_PTR_SET_VALUE(devDataSourceCreate_, devDataSourceCreate) };
    inline CreateDataSourceRequestCreateCommand& setDevDataSourceCreate(Models::CreateDataSourceRequestCreateCommandDevDataSourceCreate && devDataSourceCreate) { DARABONBA_PTR_SET_RVALUE(devDataSourceCreate_, devDataSourceCreate) };


    // prodDataSourceCreate Field Functions 
    bool hasProdDataSourceCreate() const { return this->prodDataSourceCreate_ != nullptr;};
    void deleteProdDataSourceCreate() { this->prodDataSourceCreate_ = nullptr;};
    inline const Models::CreateDataSourceRequestCreateCommandProdDataSourceCreate & prodDataSourceCreate() const { DARABONBA_PTR_GET_CONST(prodDataSourceCreate_, Models::CreateDataSourceRequestCreateCommandProdDataSourceCreate) };
    inline Models::CreateDataSourceRequestCreateCommandProdDataSourceCreate prodDataSourceCreate() { DARABONBA_PTR_GET(prodDataSourceCreate_, Models::CreateDataSourceRequestCreateCommandProdDataSourceCreate) };
    inline CreateDataSourceRequestCreateCommand& setProdDataSourceCreate(const Models::CreateDataSourceRequestCreateCommandProdDataSourceCreate & prodDataSourceCreate) { DARABONBA_PTR_SET_VALUE(prodDataSourceCreate_, prodDataSourceCreate) };
    inline CreateDataSourceRequestCreateCommand& setProdDataSourceCreate(Models::CreateDataSourceRequestCreateCommandProdDataSourceCreate && prodDataSourceCreate) { DARABONBA_PTR_SET_RVALUE(prodDataSourceCreate_, prodDataSourceCreate) };


  protected:
    std::shared_ptr<Models::CreateDataSourceRequestCreateCommandDevDataSourceCreate> devDataSourceCreate_ = nullptr;
    // 数据源创建结构体
    std::shared_ptr<Models::CreateDataSourceRequestCreateCommandProdDataSourceCreate> prodDataSourceCreate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
