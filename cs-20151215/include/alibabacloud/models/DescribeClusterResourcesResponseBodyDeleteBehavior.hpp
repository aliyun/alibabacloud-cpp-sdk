// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSEBODYDELETEBEHAVIOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSEBODYDELETEBEHAVIOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterResourcesResponseBodyDeleteBehavior : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourcesResponseBodyDeleteBehavior& obj) { 
      DARABONBA_PTR_TO_JSON(delete_by_default, deleteByDefault_);
      DARABONBA_PTR_TO_JSON(changeable, changeable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourcesResponseBodyDeleteBehavior& obj) { 
      DARABONBA_PTR_FROM_JSON(delete_by_default, deleteByDefault_);
      DARABONBA_PTR_FROM_JSON(changeable, changeable_);
    };
    DescribeClusterResourcesResponseBodyDeleteBehavior() = default ;
    DescribeClusterResourcesResponseBodyDeleteBehavior(const DescribeClusterResourcesResponseBodyDeleteBehavior &) = default ;
    DescribeClusterResourcesResponseBodyDeleteBehavior(DescribeClusterResourcesResponseBodyDeleteBehavior &&) = default ;
    DescribeClusterResourcesResponseBodyDeleteBehavior(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourcesResponseBodyDeleteBehavior() = default ;
    DescribeClusterResourcesResponseBodyDeleteBehavior& operator=(const DescribeClusterResourcesResponseBodyDeleteBehavior &) = default ;
    DescribeClusterResourcesResponseBodyDeleteBehavior& operator=(DescribeClusterResourcesResponseBodyDeleteBehavior &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteByDefault_ == nullptr
        && return this->changeable_ == nullptr; };
    // deleteByDefault Field Functions 
    bool hasDeleteByDefault() const { return this->deleteByDefault_ != nullptr;};
    void deleteDeleteByDefault() { this->deleteByDefault_ = nullptr;};
    inline bool deleteByDefault() const { DARABONBA_PTR_GET_DEFAULT(deleteByDefault_, false) };
    inline DescribeClusterResourcesResponseBodyDeleteBehavior& setDeleteByDefault(bool deleteByDefault) { DARABONBA_PTR_SET_VALUE(deleteByDefault_, deleteByDefault) };


    // changeable Field Functions 
    bool hasChangeable() const { return this->changeable_ != nullptr;};
    void deleteChangeable() { this->changeable_ = nullptr;};
    inline bool changeable() const { DARABONBA_PTR_GET_DEFAULT(changeable_, false) };
    inline DescribeClusterResourcesResponseBodyDeleteBehavior& setChangeable(bool changeable) { DARABONBA_PTR_SET_VALUE(changeable_, changeable) };


  protected:
    // Specifies whether to delete the resource by default when the cluster is deleted.
    std::shared_ptr<bool> deleteByDefault_ = nullptr;
    // Specifies whether the default behavior returned in delete_by_default can be changed.
    std::shared_ptr<bool> changeable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
