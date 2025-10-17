// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODYTABLESCHILDOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODYTABLESCHILDOBJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeColdStorageInstanceResponseBodyTablesChildObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdStorageInstanceResponseBodyTablesChildObjects& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdStorageInstanceResponseBodyTablesChildObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeColdStorageInstanceResponseBodyTablesChildObjects() = default ;
    DescribeColdStorageInstanceResponseBodyTablesChildObjects(const DescribeColdStorageInstanceResponseBodyTablesChildObjects &) = default ;
    DescribeColdStorageInstanceResponseBodyTablesChildObjects(DescribeColdStorageInstanceResponseBodyTablesChildObjects &&) = default ;
    DescribeColdStorageInstanceResponseBodyTablesChildObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdStorageInstanceResponseBodyTablesChildObjects() = default ;
    DescribeColdStorageInstanceResponseBodyTablesChildObjects& operator=(const DescribeColdStorageInstanceResponseBodyTablesChildObjects &) = default ;
    DescribeColdStorageInstanceResponseBodyTablesChildObjects& operator=(DescribeColdStorageInstanceResponseBodyTablesChildObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectName_ == nullptr
        && return this->objectType_ == nullptr && return this->size_ == nullptr && return this->status_ == nullptr; };
    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline DescribeColdStorageInstanceResponseBodyTablesChildObjects& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeColdStorageInstanceResponseBodyTablesChildObjects& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeColdStorageInstanceResponseBodyTablesChildObjects& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeColdStorageInstanceResponseBodyTablesChildObjects& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> objectName_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
