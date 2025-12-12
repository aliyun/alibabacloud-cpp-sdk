// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODYDATATEMPLATESDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODYDATATEMPLATESDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
    };
    UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances() = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances(const UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances &) = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances(UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances &&) = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances() = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances& operator=(const UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances &) = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances& operator=(UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstanceName_ == nullptr; };
    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


  protected:
    std::shared_ptr<string> dbInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
