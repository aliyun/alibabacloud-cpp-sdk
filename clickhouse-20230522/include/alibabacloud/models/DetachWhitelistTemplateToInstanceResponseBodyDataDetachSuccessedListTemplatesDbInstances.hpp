// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATADETACHSUCCESSEDLISTTEMPLATESDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DETACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATADETACHSUCCESSEDLISTTEMPLATESDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances() = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances(const DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances &) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances(DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances &&) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances() = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances& operator=(const DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances &) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances& operator=(DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
