// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEDHYPERNODEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEDHYPERNODEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AllocatedHyperNodeDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocatedHyperNodeDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AllocatedNodeNum, allocatedNodeNum_);
      DARABONBA_PTR_TO_JSON(EmptyNodeNum, emptyNodeNum_);
      DARABONBA_PTR_TO_JSON(HyperNodeName, hyperNodeName_);
      DARABONBA_PTR_TO_JSON(TotalNodeNum, totalNodeNum_);
    };
    friend void from_json(const Darabonba::Json& j, AllocatedHyperNodeDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocatedNodeNum, allocatedNodeNum_);
      DARABONBA_PTR_FROM_JSON(EmptyNodeNum, emptyNodeNum_);
      DARABONBA_PTR_FROM_JSON(HyperNodeName, hyperNodeName_);
      DARABONBA_PTR_FROM_JSON(TotalNodeNum, totalNodeNum_);
    };
    AllocatedHyperNodeDetail() = default ;
    AllocatedHyperNodeDetail(const AllocatedHyperNodeDetail &) = default ;
    AllocatedHyperNodeDetail(AllocatedHyperNodeDetail &&) = default ;
    AllocatedHyperNodeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocatedHyperNodeDetail() = default ;
    AllocatedHyperNodeDetail& operator=(const AllocatedHyperNodeDetail &) = default ;
    AllocatedHyperNodeDetail& operator=(AllocatedHyperNodeDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocatedNodeNum_ == nullptr
        && this->emptyNodeNum_ == nullptr && this->hyperNodeName_ == nullptr && this->totalNodeNum_ == nullptr; };
    // allocatedNodeNum Field Functions 
    bool hasAllocatedNodeNum() const { return this->allocatedNodeNum_ != nullptr;};
    void deleteAllocatedNodeNum() { this->allocatedNodeNum_ = nullptr;};
    inline int64_t getAllocatedNodeNum() const { DARABONBA_PTR_GET_DEFAULT(allocatedNodeNum_, 0L) };
    inline AllocatedHyperNodeDetail& setAllocatedNodeNum(int64_t allocatedNodeNum) { DARABONBA_PTR_SET_VALUE(allocatedNodeNum_, allocatedNodeNum) };


    // emptyNodeNum Field Functions 
    bool hasEmptyNodeNum() const { return this->emptyNodeNum_ != nullptr;};
    void deleteEmptyNodeNum() { this->emptyNodeNum_ = nullptr;};
    inline int64_t getEmptyNodeNum() const { DARABONBA_PTR_GET_DEFAULT(emptyNodeNum_, 0L) };
    inline AllocatedHyperNodeDetail& setEmptyNodeNum(int64_t emptyNodeNum) { DARABONBA_PTR_SET_VALUE(emptyNodeNum_, emptyNodeNum) };


    // hyperNodeName Field Functions 
    bool hasHyperNodeName() const { return this->hyperNodeName_ != nullptr;};
    void deleteHyperNodeName() { this->hyperNodeName_ = nullptr;};
    inline string getHyperNodeName() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeName_, "") };
    inline AllocatedHyperNodeDetail& setHyperNodeName(string hyperNodeName) { DARABONBA_PTR_SET_VALUE(hyperNodeName_, hyperNodeName) };


    // totalNodeNum Field Functions 
    bool hasTotalNodeNum() const { return this->totalNodeNum_ != nullptr;};
    void deleteTotalNodeNum() { this->totalNodeNum_ = nullptr;};
    inline int64_t getTotalNodeNum() const { DARABONBA_PTR_GET_DEFAULT(totalNodeNum_, 0L) };
    inline AllocatedHyperNodeDetail& setTotalNodeNum(int64_t totalNodeNum) { DARABONBA_PTR_SET_VALUE(totalNodeNum_, totalNodeNum) };


  protected:
    shared_ptr<int64_t> allocatedNodeNum_ {};
    shared_ptr<int64_t> emptyNodeNum_ {};
    shared_ptr<string> hyperNodeName_ {};
    shared_ptr<int64_t> totalNodeNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
