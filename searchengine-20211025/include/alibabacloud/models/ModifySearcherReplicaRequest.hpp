// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSEARCHERREPLICAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSEARCHERREPLICAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifySearcherReplicaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySearcherReplicaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySearcherReplicaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
    };
    ModifySearcherReplicaRequest() = default ;
    ModifySearcherReplicaRequest(const ModifySearcherReplicaRequest &) = default ;
    ModifySearcherReplicaRequest(ModifySearcherReplicaRequest &&) = default ;
    ModifySearcherReplicaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySearcherReplicaRequest() = default ;
    ModifySearcherReplicaRequest& operator=(const ModifySearcherReplicaRequest &) = default ;
    ModifySearcherReplicaRequest& operator=(ModifySearcherReplicaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->partition_ != nullptr
        && this->replica_ != nullptr; };
    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline ModifySearcherReplicaRequest& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline ModifySearcherReplicaRequest& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


  protected:
    std::shared_ptr<int32_t> partition_ = nullptr;
    std::shared_ptr<int32_t> replica_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
