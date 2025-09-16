// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTDATANODE_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTDATANODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateClusterRequestDataNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestDataNode& obj) { 
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestDataNode& obj) { 
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
    };
    CreateClusterRequestDataNode() = default ;
    CreateClusterRequestDataNode(const CreateClusterRequestDataNode &) = default ;
    CreateClusterRequestDataNode(CreateClusterRequestDataNode &&) = default ;
    CreateClusterRequestDataNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestDataNode() = default ;
    CreateClusterRequestDataNode& operator=(const CreateClusterRequestDataNode &) = default ;
    CreateClusterRequestDataNode& operator=(CreateClusterRequestDataNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->number_ != nullptr
        && this->partition_ != nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline CreateClusterRequestDataNode& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline CreateClusterRequestDataNode& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


  protected:
    // The number of Searcher workers.
    std::shared_ptr<int32_t> number_ = nullptr;
    // The number of shards.
    std::shared_ptr<string> partition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
