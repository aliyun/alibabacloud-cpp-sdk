// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUESTCREATECOMMANDPRODDATASOURCECREATE_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUESTCREATECOMMANDPRODDATASOURCECREATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataSourceRequestCreateCommandProdDataSourceCreate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequestCreateCommandProdDataSourceCreate& obj) { 
      DARABONBA_PTR_TO_JSON(CheckActivity, checkActivity_);
      DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequestCreateCommandProdDataSourceCreate& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckActivity, checkActivity_);
      DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateDataSourceRequestCreateCommandProdDataSourceCreate() = default ;
    CreateDataSourceRequestCreateCommandProdDataSourceCreate(const CreateDataSourceRequestCreateCommandProdDataSourceCreate &) = default ;
    CreateDataSourceRequestCreateCommandProdDataSourceCreate(CreateDataSourceRequestCreateCommandProdDataSourceCreate &&) = default ;
    CreateDataSourceRequestCreateCommandProdDataSourceCreate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequestCreateCommandProdDataSourceCreate() = default ;
    CreateDataSourceRequestCreateCommandProdDataSourceCreate& operator=(const CreateDataSourceRequestCreateCommandProdDataSourceCreate &) = default ;
    CreateDataSourceRequestCreateCommandProdDataSourceCreate& operator=(CreateDataSourceRequestCreateCommandProdDataSourceCreate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkActivity_ == nullptr
        && return this->configItemList_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // checkActivity Field Functions 
    bool hasCheckActivity() const { return this->checkActivity_ != nullptr;};
    void deleteCheckActivity() { this->checkActivity_ = nullptr;};
    inline bool checkActivity() const { DARABONBA_PTR_GET_DEFAULT(checkActivity_, false) };
    inline CreateDataSourceRequestCreateCommandProdDataSourceCreate& setCheckActivity(bool checkActivity) { DARABONBA_PTR_SET_VALUE(checkActivity_, checkActivity) };


    // configItemList Field Functions 
    bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
    void deleteConfigItemList() { this->configItemList_ = nullptr;};
    inline const vector<Models::CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList> & configItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<Models::CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList>) };
    inline vector<Models::CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList> configItemList() { DARABONBA_PTR_GET(configItemList_, vector<Models::CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList>) };
    inline CreateDataSourceRequestCreateCommandProdDataSourceCreate& setConfigItemList(const vector<Models::CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
    inline CreateDataSourceRequestCreateCommandProdDataSourceCreate& setConfigItemList(vector<Models::CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataSourceRequestCreateCommandProdDataSourceCreate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataSourceRequestCreateCommandProdDataSourceCreate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDataSourceRequestCreateCommandProdDataSourceCreate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> checkActivity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList>> configItemList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
