// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITCONTENTERRORTYPESRESPONSEBODYDATASUBCLASSES_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITCONTENTERRORTYPESRESPONSEBODYDATASUBCLASSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListAuditContentErrorTypesResponseBodyDataSubClasses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditContentErrorTypesResponseBodyDataSubClasses& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(ClassName, className_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuditContentErrorTypesResponseBodyDataSubClasses& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
    };
    ListAuditContentErrorTypesResponseBodyDataSubClasses() = default ;
    ListAuditContentErrorTypesResponseBodyDataSubClasses(const ListAuditContentErrorTypesResponseBodyDataSubClasses &) = default ;
    ListAuditContentErrorTypesResponseBodyDataSubClasses(ListAuditContentErrorTypesResponseBodyDataSubClasses &&) = default ;
    ListAuditContentErrorTypesResponseBodyDataSubClasses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditContentErrorTypesResponseBodyDataSubClasses() = default ;
    ListAuditContentErrorTypesResponseBodyDataSubClasses& operator=(const ListAuditContentErrorTypesResponseBodyDataSubClasses &) = default ;
    ListAuditContentErrorTypesResponseBodyDataSubClasses& operator=(ListAuditContentErrorTypesResponseBodyDataSubClasses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classCode_ != nullptr
        && this->className_ != nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline ListAuditContentErrorTypesResponseBodyDataSubClasses& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline ListAuditContentErrorTypesResponseBodyDataSubClasses& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


  protected:
    std::shared_ptr<string> classCode_ = nullptr;
    std::shared_ptr<string> className_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
