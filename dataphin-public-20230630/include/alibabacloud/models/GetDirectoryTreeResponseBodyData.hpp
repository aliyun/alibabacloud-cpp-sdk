// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYTREERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYTREERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDirectoryTreeResponseBodyDataChildren.hpp>
#include <alibabacloud/models/GetDirectoryTreeResponseBodyDataParent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDirectoryTreeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryTreeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(Parent, parent_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryTreeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(Parent, parent_);
    };
    GetDirectoryTreeResponseBodyData() = default ;
    GetDirectoryTreeResponseBodyData(const GetDirectoryTreeResponseBodyData &) = default ;
    GetDirectoryTreeResponseBodyData(GetDirectoryTreeResponseBodyData &&) = default ;
    GetDirectoryTreeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryTreeResponseBodyData() = default ;
    GetDirectoryTreeResponseBodyData& operator=(const GetDirectoryTreeResponseBodyData &) = default ;
    GetDirectoryTreeResponseBodyData& operator=(GetDirectoryTreeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr
        && return this->parent_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const Models::GetDirectoryTreeResponseBodyDataChildren & children() const { DARABONBA_PTR_GET_CONST(children_, Models::GetDirectoryTreeResponseBodyDataChildren) };
    inline Models::GetDirectoryTreeResponseBodyDataChildren children() { DARABONBA_PTR_GET(children_, Models::GetDirectoryTreeResponseBodyDataChildren) };
    inline GetDirectoryTreeResponseBodyData& setChildren(const Models::GetDirectoryTreeResponseBodyDataChildren & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline GetDirectoryTreeResponseBodyData& setChildren(Models::GetDirectoryTreeResponseBodyDataChildren && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // parent Field Functions 
    bool hasParent() const { return this->parent_ != nullptr;};
    void deleteParent() { this->parent_ = nullptr;};
    inline const Models::GetDirectoryTreeResponseBodyDataParent & parent() const { DARABONBA_PTR_GET_CONST(parent_, Models::GetDirectoryTreeResponseBodyDataParent) };
    inline Models::GetDirectoryTreeResponseBodyDataParent parent() { DARABONBA_PTR_GET(parent_, Models::GetDirectoryTreeResponseBodyDataParent) };
    inline GetDirectoryTreeResponseBodyData& setParent(const Models::GetDirectoryTreeResponseBodyDataParent & parent) { DARABONBA_PTR_SET_VALUE(parent_, parent) };
    inline GetDirectoryTreeResponseBodyData& setParent(Models::GetDirectoryTreeResponseBodyDataParent && parent) { DARABONBA_PTR_SET_RVALUE(parent_, parent) };


  protected:
    std::shared_ptr<Models::GetDirectoryTreeResponseBodyDataChildren> children_ = nullptr;
    std::shared_ptr<Models::GetDirectoryTreeResponseBodyDataParent> parent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
