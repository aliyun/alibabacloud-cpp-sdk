// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGERMANAGERNODESYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGERMANAGERNODESYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetClusterResponseBodyManagerManagerNodeSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyManagerManagerNodeSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyManagerManagerNodeSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    GetClusterResponseBodyManagerManagerNodeSystemDisk() = default ;
    GetClusterResponseBodyManagerManagerNodeSystemDisk(const GetClusterResponseBodyManagerManagerNodeSystemDisk &) = default ;
    GetClusterResponseBodyManagerManagerNodeSystemDisk(GetClusterResponseBodyManagerManagerNodeSystemDisk &&) = default ;
    GetClusterResponseBodyManagerManagerNodeSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyManagerManagerNodeSystemDisk() = default ;
    GetClusterResponseBodyManagerManagerNodeSystemDisk& operator=(const GetClusterResponseBodyManagerManagerNodeSystemDisk &) = default ;
    GetClusterResponseBodyManagerManagerNodeSystemDisk& operator=(GetClusterResponseBodyManagerManagerNodeSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->level_ == nullptr && return this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetClusterResponseBodyManagerManagerNodeSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetClusterResponseBodyManagerManagerNodeSystemDisk& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetClusterResponseBodyManagerManagerNodeSystemDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
