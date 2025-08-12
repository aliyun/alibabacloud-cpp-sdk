// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTLOGMONITORREQUESTGROUPBYS_HPP_
#define ALIBABACLOUD_MODELS_PUTLOGMONITORREQUESTGROUPBYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutLogMonitorRequestGroupbys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutLogMonitorRequestGroupbys& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
    };
    friend void from_json(const Darabonba::Json& j, PutLogMonitorRequestGroupbys& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
    };
    PutLogMonitorRequestGroupbys() = default ;
    PutLogMonitorRequestGroupbys(const PutLogMonitorRequestGroupbys &) = default ;
    PutLogMonitorRequestGroupbys(PutLogMonitorRequestGroupbys &&) = default ;
    PutLogMonitorRequestGroupbys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutLogMonitorRequestGroupbys() = default ;
    PutLogMonitorRequestGroupbys& operator=(const PutLogMonitorRequestGroupbys &) = default ;
    PutLogMonitorRequestGroupbys& operator=(PutLogMonitorRequestGroupbys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->fieldName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PutLogMonitorRequestGroupbys& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline PutLogMonitorRequestGroupbys& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


  protected:
    // The alias of the dimension based on which the data is grouped. Valid values of N: 1 to 10.
    std::shared_ptr<string> alias_ = nullptr;
    // The name of the field that is specified as the dimension. Valid values of N: 1 to 10.
    std::shared_ptr<string> fieldName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
