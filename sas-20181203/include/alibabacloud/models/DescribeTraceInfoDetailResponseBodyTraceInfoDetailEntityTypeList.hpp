// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAILENTITYTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAILENTITYTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DisplayColor, displayColor_);
      DARABONBA_PTR_TO_JSON(DisplayIcon, displayIcon_);
      DARABONBA_PTR_TO_JSON(DisplayTemplate, displayTemplate_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DisplayColor, displayColor_);
      DARABONBA_PTR_FROM_JSON(DisplayIcon, displayIcon_);
      DARABONBA_PTR_FROM_JSON(DisplayTemplate, displayTemplate_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
    };
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList(const DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList(DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList &&) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& operator=(const DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& operator=(DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->displayColor_ == nullptr && return this->displayIcon_ == nullptr && return this->displayTemplate_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->id_ == nullptr && return this->limit_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->offset_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // displayColor Field Functions 
    bool hasDisplayColor() const { return this->displayColor_ != nullptr;};
    void deleteDisplayColor() { this->displayColor_ = nullptr;};
    inline string displayColor() const { DARABONBA_PTR_GET_DEFAULT(displayColor_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setDisplayColor(string displayColor) { DARABONBA_PTR_SET_VALUE(displayColor_, displayColor) };


    // displayIcon Field Functions 
    bool hasDisplayIcon() const { return this->displayIcon_ != nullptr;};
    void deleteDisplayIcon() { this->displayIcon_ = nullptr;};
    inline string displayIcon() const { DARABONBA_PTR_GET_DEFAULT(displayIcon_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setDisplayIcon(string displayIcon) { DARABONBA_PTR_SET_VALUE(displayIcon_, displayIcon) };


    // displayTemplate Field Functions 
    bool hasDisplayTemplate() const { return this->displayTemplate_ != nullptr;};
    void deleteDisplayTemplate() { this->displayTemplate_ = nullptr;};
    inline string displayTemplate() const { DARABONBA_PTR_GET_DEFAULT(displayTemplate_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setDisplayTemplate(string displayTemplate) { DARABONBA_PTR_SET_VALUE(displayTemplate_, displayTemplate) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEntityTypeList& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // The rendering color of the vertex.
    std::shared_ptr<string> displayColor_ = nullptr;
    // The icon style of the vertex.
    std::shared_ptr<string> displayIcon_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> displayTemplate_ = nullptr;
    // The timestamp when the vertex was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The time when the vertex was last modified.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the vertex type.
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The name of the vertex type.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> offset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
