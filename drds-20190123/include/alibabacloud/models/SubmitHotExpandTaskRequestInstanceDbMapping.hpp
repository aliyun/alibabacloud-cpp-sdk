// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUESTINSTANCEDBMAPPING_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUESTINSTANCEDBMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitHotExpandTaskRequestInstanceDbMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotExpandTaskRequestInstanceDbMapping& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotExpandTaskRequestInstanceDbMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    SubmitHotExpandTaskRequestInstanceDbMapping() = default ;
    SubmitHotExpandTaskRequestInstanceDbMapping(const SubmitHotExpandTaskRequestInstanceDbMapping &) = default ;
    SubmitHotExpandTaskRequestInstanceDbMapping(SubmitHotExpandTaskRequestInstanceDbMapping &&) = default ;
    SubmitHotExpandTaskRequestInstanceDbMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotExpandTaskRequestInstanceDbMapping() = default ;
    SubmitHotExpandTaskRequestInstanceDbMapping& operator=(const SubmitHotExpandTaskRequestInstanceDbMapping &) = default ;
    SubmitHotExpandTaskRequestInstanceDbMapping& operator=(SubmitHotExpandTaskRequestInstanceDbMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbList_ != nullptr
        && this->instanceName_ != nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline string dbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
    inline SubmitHotExpandTaskRequestInstanceDbMapping& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SubmitHotExpandTaskRequestInstanceDbMapping& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The name of the hot-spot database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbList_ = nullptr;
    // The name of the ApsaraDB RDS instance to which the hot-spot database belongs.
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
