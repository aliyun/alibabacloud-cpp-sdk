// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUESTPARAMVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUESTPARAMVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataArchiveOrderRequestParamVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataArchiveOrderRequestParamVariables& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataArchiveOrderRequestParamVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
    };
    CreateDataArchiveOrderRequestParamVariables() = default ;
    CreateDataArchiveOrderRequestParamVariables(const CreateDataArchiveOrderRequestParamVariables &) = default ;
    CreateDataArchiveOrderRequestParamVariables(CreateDataArchiveOrderRequestParamVariables &&) = default ;
    CreateDataArchiveOrderRequestParamVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataArchiveOrderRequestParamVariables() = default ;
    CreateDataArchiveOrderRequestParamVariables& operator=(const CreateDataArchiveOrderRequestParamVariables &) = default ;
    CreateDataArchiveOrderRequestParamVariables& operator=(CreateDataArchiveOrderRequestParamVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->pattern_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataArchiveOrderRequestParamVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline CreateDataArchiveOrderRequestParamVariables& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> pattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
