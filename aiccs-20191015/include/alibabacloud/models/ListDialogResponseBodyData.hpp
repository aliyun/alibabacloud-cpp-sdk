// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListDialogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDialogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, ListDialogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    ListDialogResponseBodyData() = default ;
    ListDialogResponseBodyData(const ListDialogResponseBodyData &) = default ;
    ListDialogResponseBodyData(ListDialogResponseBodyData &&) = default ;
    ListDialogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDialogResponseBodyData() = default ;
    ListDialogResponseBodyData& operator=(const ListDialogResponseBodyData &) = default ;
    ListDialogResponseBodyData& operator=(ListDialogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->nodeType_ == nullptr && return this->role_ == nullptr && return this->tag_ == nullptr && return this->time_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListDialogResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListDialogResponseBodyData& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ListDialogResponseBodyData& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListDialogResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListDialogResponseBodyData& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
