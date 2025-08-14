// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTDIALOGUESRESPONSEBODYDIALOGUESATTACHEDFILELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTDIALOGUESRESPONSEBODYDIALOGUESATTACHEDFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList() = default ;
    ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList(const ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList &) = default ;
    ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList(ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList &&) = default ;
    ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList() = default ;
    ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& operator=(const ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList &) = default ;
    ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& operator=(ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->format_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->type_ != nullptr && this->url_ != nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListAIAgentDialoguesResponseBodyDialoguesAttachedFileList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
