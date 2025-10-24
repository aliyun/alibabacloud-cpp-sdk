// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHYPERNODERESPONSEBODYNODESDISKS_HPP_
#define ALIBABACLOUD_MODELS_GETHYPERNODERESPONSEBODYNODESDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class GetHyperNodeResponseBodyNodesDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHyperNodeResponseBodyNodesDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetHyperNodeResponseBodyNodesDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetHyperNodeResponseBodyNodesDisks() = default ;
    GetHyperNodeResponseBodyNodesDisks(const GetHyperNodeResponseBodyNodesDisks &) = default ;
    GetHyperNodeResponseBodyNodesDisks(GetHyperNodeResponseBodyNodesDisks &&) = default ;
    GetHyperNodeResponseBodyNodesDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHyperNodeResponseBodyNodesDisks() = default ;
    GetHyperNodeResponseBodyNodesDisks& operator=(const GetHyperNodeResponseBodyNodesDisks &) = default ;
    GetHyperNodeResponseBodyNodesDisks& operator=(GetHyperNodeResponseBodyNodesDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->diskId_ == nullptr && return this->performanceLevel_ == nullptr && return this->size_ == nullptr && return this->type_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetHyperNodeResponseBodyNodesDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline GetHyperNodeResponseBodyNodesDisks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline GetHyperNodeResponseBodyNodesDisks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetHyperNodeResponseBodyNodesDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetHyperNodeResponseBodyNodesDisks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> diskId_ = nullptr;
    std::shared_ptr<string> performanceLevel_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
