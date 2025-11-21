// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class UpdateInstanceRequestComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestComponents& obj) { 
      DARABONBA_PTR_TO_JSON(cuNum, cuNum_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(cuNum, cuNum_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateInstanceRequestComponents() = default ;
    UpdateInstanceRequestComponents(const UpdateInstanceRequestComponents &) = default ;
    UpdateInstanceRequestComponents(UpdateInstanceRequestComponents &&) = default ;
    UpdateInstanceRequestComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestComponents() = default ;
    UpdateInstanceRequestComponents& operator=(const UpdateInstanceRequestComponents &) = default ;
    UpdateInstanceRequestComponents& operator=(UpdateInstanceRequestComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cuNum_ == nullptr
        && return this->replica_ == nullptr && return this->type_ == nullptr; };
    // cuNum Field Functions 
    bool hasCuNum() const { return this->cuNum_ != nullptr;};
    void deleteCuNum() { this->cuNum_ = nullptr;};
    inline int32_t cuNum() const { DARABONBA_PTR_GET_DEFAULT(cuNum_, 0) };
    inline UpdateInstanceRequestComponents& setCuNum(int32_t cuNum) { DARABONBA_PTR_SET_VALUE(cuNum_, cuNum) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline UpdateInstanceRequestComponents& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateInstanceRequestComponents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> cuNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> replica_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
