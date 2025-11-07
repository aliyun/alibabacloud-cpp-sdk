// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONTASKRESPONSEBODYCHECKRESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONTASKRESPONSEBODYCHECKRESOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionTaskResponseBodyCheckResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionTaskResponseBodyCheckResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckScope, checkScope_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionTaskResponseBodyCheckResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckScope, checkScope_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeNisInspectionTaskResponseBodyCheckResourceList() = default ;
    DescribeNisInspectionTaskResponseBodyCheckResourceList(const DescribeNisInspectionTaskResponseBodyCheckResourceList &) = default ;
    DescribeNisInspectionTaskResponseBodyCheckResourceList(DescribeNisInspectionTaskResponseBodyCheckResourceList &&) = default ;
    DescribeNisInspectionTaskResponseBodyCheckResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionTaskResponseBodyCheckResourceList() = default ;
    DescribeNisInspectionTaskResponseBodyCheckResourceList& operator=(const DescribeNisInspectionTaskResponseBodyCheckResourceList &) = default ;
    DescribeNisInspectionTaskResponseBodyCheckResourceList& operator=(DescribeNisInspectionTaskResponseBodyCheckResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkScope_ == nullptr
        && return this->resourceType_ == nullptr; };
    // checkScope Field Functions 
    bool hasCheckScope() const { return this->checkScope_ != nullptr;};
    void deleteCheckScope() { this->checkScope_ = nullptr;};
    inline string checkScope() const { DARABONBA_PTR_GET_DEFAULT(checkScope_, "") };
    inline DescribeNisInspectionTaskResponseBodyCheckResourceList& setCheckScope(string checkScope) { DARABONBA_PTR_SET_VALUE(checkScope_, checkScope) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeNisInspectionTaskResponseBodyCheckResourceList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> checkScope_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
