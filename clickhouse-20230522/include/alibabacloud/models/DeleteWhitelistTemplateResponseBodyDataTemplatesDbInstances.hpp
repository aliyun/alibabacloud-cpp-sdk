// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWHITELISTTEMPLATERESPONSEBODYDATATEMPLATESDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DELETEWHITELISTTEMPLATERESPONSEBODYDATATEMPLATESDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
    };
    DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances() = default ;
    DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances(const DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances &) = default ;
    DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances(DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances &&) = default ;
    DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances() = default ;
    DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances& operator=(const DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances &) = default ;
    DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances& operator=(DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstanceName_ == nullptr; };
    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DeleteWhitelistTemplateResponseBodyDataTemplatesDbInstances& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


  protected:
    std::shared_ptr<string> dbInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
