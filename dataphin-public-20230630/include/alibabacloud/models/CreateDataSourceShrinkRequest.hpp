// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateDataSourceShrinkRequest() = default ;
    CreateDataSourceShrinkRequest(const CreateDataSourceShrinkRequest &) = default ;
    CreateDataSourceShrinkRequest(CreateDataSourceShrinkRequest &&) = default ;
    CreateDataSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceShrinkRequest() = default ;
    CreateDataSourceShrinkRequest& operator=(const CreateDataSourceShrinkRequest &) = default ;
    CreateDataSourceShrinkRequest& operator=(CreateDataSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createCommandShrink_ != nullptr
        && this->opTenantId_ != nullptr; };
    // createCommandShrink Field Functions 
    bool hasCreateCommandShrink() const { return this->createCommandShrink_ != nullptr;};
    void deleteCreateCommandShrink() { this->createCommandShrink_ = nullptr;};
    inline string createCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(createCommandShrink_, "") };
    inline CreateDataSourceShrinkRequest& setCreateCommandShrink(string createCommandShrink) { DARABONBA_PTR_SET_VALUE(createCommandShrink_, createCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateDataSourceShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> createCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
