// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAILRELATIONTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAILRELATIONTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(Directed, directed_);
      DARABONBA_PTR_TO_JSON(DisplayColor, displayColor_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RelationTypeId, relationTypeId_);
      DARABONBA_PTR_TO_JSON(ShowType, showType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Directed, directed_);
      DARABONBA_PTR_FROM_JSON(DisplayColor, displayColor_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RelationTypeId, relationTypeId_);
      DARABONBA_PTR_FROM_JSON(ShowType, showType_);
    };
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList(const DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList(DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList &&) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& operator=(const DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& operator=(DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directed_ == nullptr
        && return this->displayColor_ == nullptr && return this->name_ == nullptr && return this->relationTypeId_ == nullptr && return this->showType_ == nullptr; };
    // directed Field Functions 
    bool hasDirected() const { return this->directed_ != nullptr;};
    void deleteDirected() { this->directed_ = nullptr;};
    inline int32_t directed() const { DARABONBA_PTR_GET_DEFAULT(directed_, 0) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& setDirected(int32_t directed) { DARABONBA_PTR_SET_VALUE(directed_, directed) };


    // displayColor Field Functions 
    bool hasDisplayColor() const { return this->displayColor_ != nullptr;};
    void deleteDisplayColor() { this->displayColor_ = nullptr;};
    inline string displayColor() const { DARABONBA_PTR_GET_DEFAULT(displayColor_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& setDisplayColor(string displayColor) { DARABONBA_PTR_SET_VALUE(displayColor_, displayColor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // relationTypeId Field Functions 
    bool hasRelationTypeId() const { return this->relationTypeId_ != nullptr;};
    void deleteRelationTypeId() { this->relationTypeId_ = nullptr;};
    inline string relationTypeId() const { DARABONBA_PTR_GET_DEFAULT(relationTypeId_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& setRelationTypeId(string relationTypeId) { DARABONBA_PTR_SET_VALUE(relationTypeId_, relationTypeId) };


    // showType Field Functions 
    bool hasShowType() const { return this->showType_ != nullptr;};
    void deleteShowType() { this->showType_ = nullptr;};
    inline string showType() const { DARABONBA_PTR_GET_DEFAULT(showType_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailRelationTypeList& setShowType(string showType) { DARABONBA_PTR_SET_VALUE(showType_, showType) };


  protected:
    // Indicates whether the edge is a directional edge. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> directed_ = nullptr;
    // The rendering color of the edge.
    std::shared_ptr<string> displayColor_ = nullptr;
    // The name of the edge type.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the edge type.
    std::shared_ptr<string> relationTypeId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> showType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
