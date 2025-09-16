// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYRESULTDATANODE_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYRESULTDATANODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListClustersResponseBodyResultDataNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyResultDataNode& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyResultDataNode& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
    };
    ListClustersResponseBodyResultDataNode() = default ;
    ListClustersResponseBodyResultDataNode(const ListClustersResponseBodyResultDataNode &) = default ;
    ListClustersResponseBodyResultDataNode(ListClustersResponseBodyResultDataNode &&) = default ;
    ListClustersResponseBodyResultDataNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyResultDataNode() = default ;
    ListClustersResponseBodyResultDataNode& operator=(const ListClustersResponseBodyResultDataNode &) = default ;
    ListClustersResponseBodyResultDataNode& operator=(ListClustersResponseBodyResultDataNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->number_ != nullptr && this->partition_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClustersResponseBodyResultDataNode& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline ListClustersResponseBodyResultDataNode& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline ListClustersResponseBodyResultDataNode& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


  protected:
    // The name of the Searcher worker.
    std::shared_ptr<string> name_ = nullptr;
    // The number of Searcher workers.
    std::shared_ptr<int32_t> number_ = nullptr;
    // The ID of the partition that is stored on the Searcher worker.
    std::shared_ptr<int32_t> partition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
