// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTDOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppRequestDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestDomain& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_ANY_TO_JSON(functions, functions_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_ANY_FROM_JSON(functions, functions_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateAppRequestDomain() = default ;
    CreateAppRequestDomain(const CreateAppRequestDomain &) = default ;
    CreateAppRequestDomain(CreateAppRequestDomain &&) = default ;
    CreateAppRequestDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestDomain() = default ;
    CreateAppRequestDomain& operator=(const CreateAppRequestDomain &) = default ;
    CreateAppRequestDomain& operator=(CreateAppRequestDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->functions_ == nullptr && return this->name_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateAppRequestDomain& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline     const Darabonba::Json & functions() const { DARABONBA_GET(functions_) };
    Darabonba::Json & functions() { DARABONBA_GET(functions_) };
    inline CreateAppRequestDomain& setFunctions(const Darabonba::Json & functions) { DARABONBA_SET_VALUE(functions_, functions) };
    inline CreateAppRequestDomain& setFunctions(Darabonba::Json & functions) { DARABONBA_SET_RVALUE(functions_, functions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppRequestDomain& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The industry category.
    std::shared_ptr<string> category_ = nullptr;
    // The selected feature category. Valid values:
    // 
    // *   qp: query analysis
    // *   algo: sort policy
    // *   service: service
    Darabonba::Json functions_ = nullptr;
    // The industry type.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
