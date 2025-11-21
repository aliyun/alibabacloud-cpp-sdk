// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class CreateInstanceRequestComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestComponents& obj) { 
      DARABONBA_PTR_TO_JSON(cuNum, cuNum_);
      DARABONBA_PTR_TO_JSON(cuType, cuType_);
      DARABONBA_PTR_TO_JSON(diskSizeType, diskSizeType_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(cuNum, cuNum_);
      DARABONBA_PTR_FROM_JSON(cuType, cuType_);
      DARABONBA_PTR_FROM_JSON(diskSizeType, diskSizeType_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateInstanceRequestComponents() = default ;
    CreateInstanceRequestComponents(const CreateInstanceRequestComponents &) = default ;
    CreateInstanceRequestComponents(CreateInstanceRequestComponents &&) = default ;
    CreateInstanceRequestComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestComponents() = default ;
    CreateInstanceRequestComponents& operator=(const CreateInstanceRequestComponents &) = default ;
    CreateInstanceRequestComponents& operator=(CreateInstanceRequestComponents &&) = default ;
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
    inline CreateInstanceRequestComponents& setCuNum(int32_t cuNum) { DARABONBA_PTR_SET_VALUE(cuNum_, cuNum) };


    // cuType Field Functions 
    bool hasCuType() const { return this->cuType_ != nullptr;};
    void deleteCuType() { this->cuType_ = nullptr;};
    inline string cuType() const { DARABONBA_PTR_GET_DEFAULT(cuType_, "") };
    inline CreateInstanceRequestComponents& setCuType(string cuType) { DARABONBA_PTR_SET_VALUE(cuType_, cuType) };


    // diskSizeType Field Functions 
    bool hasDiskSizeType() const { return this->diskSizeType_ != nullptr;};
    void deleteDiskSizeType() { this->diskSizeType_ = nullptr;};
    inline string diskSizeType() const { DARABONBA_PTR_GET_DEFAULT(diskSizeType_, "") };
    inline CreateInstanceRequestComponents& setDiskSizeType(string diskSizeType) { DARABONBA_PTR_SET_VALUE(diskSizeType_, diskSizeType) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline CreateInstanceRequestComponents& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateInstanceRequestComponents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> cuNum_ = nullptr;
    std::shared_ptr<string> cuType_ = nullptr;
    std::shared_ptr<string> diskSizeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> replica_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
