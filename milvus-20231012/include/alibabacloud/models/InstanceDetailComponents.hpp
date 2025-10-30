// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEDETAILCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEDETAILCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class InstanceDetailComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceDetailComponents& obj) { 
      DARABONBA_PTR_TO_JSON(cuNum, cuNum_);
      DARABONBA_PTR_TO_JSON(cuType, cuType_);
      DARABONBA_PTR_TO_JSON(diskSizeType, diskSizeType_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceDetailComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(cuNum, cuNum_);
      DARABONBA_PTR_FROM_JSON(cuType, cuType_);
      DARABONBA_PTR_FROM_JSON(diskSizeType, diskSizeType_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    InstanceDetailComponents() = default ;
    InstanceDetailComponents(const InstanceDetailComponents &) = default ;
    InstanceDetailComponents(InstanceDetailComponents &&) = default ;
    InstanceDetailComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceDetailComponents() = default ;
    InstanceDetailComponents& operator=(const InstanceDetailComponents &) = default ;
    InstanceDetailComponents& operator=(InstanceDetailComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cuNum_ == nullptr
        && return this->cuType_ == nullptr && return this->diskSizeType_ == nullptr && return this->replica_ == nullptr && return this->type_ == nullptr; };
    // cuNum Field Functions 
    bool hasCuNum() const { return this->cuNum_ != nullptr;};
    void deleteCuNum() { this->cuNum_ = nullptr;};
    inline int32_t cuNum() const { DARABONBA_PTR_GET_DEFAULT(cuNum_, 0) };
    inline InstanceDetailComponents& setCuNum(int32_t cuNum) { DARABONBA_PTR_SET_VALUE(cuNum_, cuNum) };


    // cuType Field Functions 
    bool hasCuType() const { return this->cuType_ != nullptr;};
    void deleteCuType() { this->cuType_ = nullptr;};
    inline string cuType() const { DARABONBA_PTR_GET_DEFAULT(cuType_, "") };
    inline InstanceDetailComponents& setCuType(string cuType) { DARABONBA_PTR_SET_VALUE(cuType_, cuType) };


    // diskSizeType Field Functions 
    bool hasDiskSizeType() const { return this->diskSizeType_ != nullptr;};
    void deleteDiskSizeType() { this->diskSizeType_ = nullptr;};
    inline string diskSizeType() const { DARABONBA_PTR_GET_DEFAULT(diskSizeType_, "") };
    inline InstanceDetailComponents& setDiskSizeType(string diskSizeType) { DARABONBA_PTR_SET_VALUE(diskSizeType_, diskSizeType) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline InstanceDetailComponents& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InstanceDetailComponents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> cuNum_ = nullptr;
    std::shared_ptr<string> cuType_ = nullptr;
    std::shared_ptr<string> diskSizeType_ = nullptr;
    std::shared_ptr<int32_t> replica_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
