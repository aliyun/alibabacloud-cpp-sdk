// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateSqlInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parent, parent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parent, parent_);
    };
    CreateSqlInstanceRequest() = default ;
    CreateSqlInstanceRequest(const CreateSqlInstanceRequest &) = default ;
    CreateSqlInstanceRequest(CreateSqlInstanceRequest &&) = default ;
    CreateSqlInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlInstanceRequest() = default ;
    CreateSqlInstanceRequest& operator=(const CreateSqlInstanceRequest &) = default ;
    CreateSqlInstanceRequest& operator=(CreateSqlInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->parent_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSqlInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parent Field Functions 
    bool hasParent() const { return this->parent_ != nullptr;};
    void deleteParent() { this->parent_ = nullptr;};
    inline int64_t parent() const { DARABONBA_PTR_GET_DEFAULT(parent_, 0L) };
    inline CreateSqlInstanceRequest& setParent(int64_t parent) { DARABONBA_PTR_SET_VALUE(parent_, parent) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> parent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
