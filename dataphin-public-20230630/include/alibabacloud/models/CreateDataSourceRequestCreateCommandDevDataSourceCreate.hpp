// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUESTCREATECOMMANDDEVDATASOURCECREATE_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUESTCREATECOMMANDDEVDATASOURCECREATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataSourceRequestCreateCommandDevDataSourceCreate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequestCreateCommandDevDataSourceCreate& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceCreate, dataSourceCreate_);
      DARABONBA_PTR_TO_JSON(ProdDataSourceId, prodDataSourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequestCreateCommandDevDataSourceCreate& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceCreate, dataSourceCreate_);
      DARABONBA_PTR_FROM_JSON(ProdDataSourceId, prodDataSourceId_);
    };
    CreateDataSourceRequestCreateCommandDevDataSourceCreate() = default ;
    CreateDataSourceRequestCreateCommandDevDataSourceCreate(const CreateDataSourceRequestCreateCommandDevDataSourceCreate &) = default ;
    CreateDataSourceRequestCreateCommandDevDataSourceCreate(CreateDataSourceRequestCreateCommandDevDataSourceCreate &&) = default ;
    CreateDataSourceRequestCreateCommandDevDataSourceCreate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequestCreateCommandDevDataSourceCreate() = default ;
    CreateDataSourceRequestCreateCommandDevDataSourceCreate& operator=(const CreateDataSourceRequestCreateCommandDevDataSourceCreate &) = default ;
    CreateDataSourceRequestCreateCommandDevDataSourceCreate& operator=(CreateDataSourceRequestCreateCommandDevDataSourceCreate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceCreate_ == nullptr
        && return this->prodDataSourceId_ == nullptr; };
    // dataSourceCreate Field Functions 
    bool hasDataSourceCreate() const { return this->dataSourceCreate_ != nullptr;};
    void deleteDataSourceCreate() { this->dataSourceCreate_ = nullptr;};
    inline const Models::CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate & dataSourceCreate() const { DARABONBA_PTR_GET_CONST(dataSourceCreate_, Models::CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate) };
    inline Models::CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate dataSourceCreate() { DARABONBA_PTR_GET(dataSourceCreate_, Models::CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate) };
    inline CreateDataSourceRequestCreateCommandDevDataSourceCreate& setDataSourceCreate(const Models::CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate & dataSourceCreate) { DARABONBA_PTR_SET_VALUE(dataSourceCreate_, dataSourceCreate) };
    inline CreateDataSourceRequestCreateCommandDevDataSourceCreate& setDataSourceCreate(Models::CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate && dataSourceCreate) { DARABONBA_PTR_SET_RVALUE(dataSourceCreate_, dataSourceCreate) };


    // prodDataSourceId Field Functions 
    bool hasProdDataSourceId() const { return this->prodDataSourceId_ != nullptr;};
    void deleteProdDataSourceId() { this->prodDataSourceId_ = nullptr;};
    inline int64_t prodDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(prodDataSourceId_, 0L) };
    inline CreateDataSourceRequestCreateCommandDevDataSourceCreate& setProdDataSourceId(int64_t prodDataSourceId) { DARABONBA_PTR_SET_VALUE(prodDataSourceId_, prodDataSourceId) };


  protected:
    // 数据源创建结构体
    std::shared_ptr<Models::CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate> dataSourceCreate_ = nullptr;
    std::shared_ptr<int64_t> prodDataSourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
