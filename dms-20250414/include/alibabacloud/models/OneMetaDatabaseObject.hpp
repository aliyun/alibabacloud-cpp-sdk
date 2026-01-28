// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONEMETADATABASEOBJECT_HPP_
#define ALIBABACLOUD_MODELS_ONEMETADATABASEOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OneMetaDatabaseObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OneMetaDatabaseObject& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ObjectQualifiedName, objectQualifiedName_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, OneMetaDatabaseObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ObjectQualifiedName, objectQualifiedName_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
    };
    OneMetaDatabaseObject() = default ;
    OneMetaDatabaseObject(const OneMetaDatabaseObject &) = default ;
    OneMetaDatabaseObject(OneMetaDatabaseObject &&) = default ;
    OneMetaDatabaseObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OneMetaDatabaseObject() = default ;
    OneMetaDatabaseObject& operator=(const OneMetaDatabaseObject &) = default ;
    OneMetaDatabaseObject& operator=(OneMetaDatabaseObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectName_ == nullptr
        && this->objectQualifiedName_ == nullptr && this->objectType_ == nullptr; };
    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline OneMetaDatabaseObject& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectQualifiedName Field Functions 
    bool hasObjectQualifiedName() const { return this->objectQualifiedName_ != nullptr;};
    void deleteObjectQualifiedName() { this->objectQualifiedName_ = nullptr;};
    inline string getObjectQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(objectQualifiedName_, "") };
    inline OneMetaDatabaseObject& setObjectQualifiedName(string objectQualifiedName) { DARABONBA_PTR_SET_VALUE(objectQualifiedName_, objectQualifiedName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline OneMetaDatabaseObject& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    shared_ptr<string> objectName_ {};
    shared_ptr<string> objectQualifiedName_ {};
    shared_ptr<string> objectType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
