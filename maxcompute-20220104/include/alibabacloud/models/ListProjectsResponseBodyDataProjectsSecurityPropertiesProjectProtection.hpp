// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATAPROJECTSSECURITYPROPERTIESPROJECTPROTECTION_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATAPROJECTSSECURITYPROPERTIESPROJECTPROTECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection& obj) { 
      DARABONBA_PTR_TO_JSON(exceptionPolicy, exceptionPolicy_);
      DARABONBA_PTR_TO_JSON(protected, protected_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection& obj) { 
      DARABONBA_PTR_FROM_JSON(exceptionPolicy, exceptionPolicy_);
      DARABONBA_PTR_FROM_JSON(protected, protected_);
    };
    ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection() = default ;
    ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection(const ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection &) = default ;
    ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection(ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection &&) = default ;
    ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection() = default ;
    ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection& operator=(const ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection &) = default ;
    ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection& operator=(ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionPolicy_ == nullptr
        && return this->protected_ == nullptr; };
    // exceptionPolicy Field Functions 
    bool hasExceptionPolicy() const { return this->exceptionPolicy_ != nullptr;};
    void deleteExceptionPolicy() { this->exceptionPolicy_ = nullptr;};
    inline string exceptionPolicy() const { DARABONBA_PTR_GET_DEFAULT(exceptionPolicy_, "") };
    inline ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection& setExceptionPolicy(string exceptionPolicy) { DARABONBA_PTR_SET_VALUE(exceptionPolicy_, exceptionPolicy) };


    // protected Field Functions 
    bool hasProtected() const { return this->protected_ != nullptr;};
    void deleteProtected() { this->protected_ = nullptr;};
    inline bool _protected() const { DARABONBA_PTR_GET_DEFAULT(protected_, false) };
    inline ListProjectsResponseBodyDataProjectsSecurityPropertiesProjectProtection& setProtected(bool _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


  protected:
    // If you enable the project data protection mechanism, you can configure exception or trusted projects. This allows specified users to transfer data of a specified object to a specified project. The project data protection mechanism does not take effect in all the situations that are specified in the exception policy.
    std::shared_ptr<string> exceptionPolicy_ = nullptr;
    // Indicates whether the [data protection mechanism](https://www.alibabacloud.com/help/zh/maxcompute/security-and-compliance/project-data-protection) is enabled for the project. This allows or denies data transfer across projects. By default, the data protection mechanism is disabled.
    std::shared_ptr<bool> protected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
