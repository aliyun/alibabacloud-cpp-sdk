// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTEXTUALMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_CONTEXTUALMESSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContextualFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ContextualMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContextualMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ContextualMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ContextualMessage() = default ;
    ContextualMessage(const ContextualMessage &) = default ;
    ContextualMessage(ContextualMessage &&) = default ;
    ContextualMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContextualMessage() = default ;
    ContextualMessage& operator=(const ContextualMessage &) = default ;
    ContextualMessage& operator=(ContextualMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->files_ != nullptr && this->role_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ContextualMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ContextualFile> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<ContextualFile>) };
    inline vector<ContextualFile> files() { DARABONBA_PTR_GET(files_, vector<ContextualFile>) };
    inline ContextualMessage& setFiles(const vector<ContextualFile> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ContextualMessage& setFiles(vector<ContextualFile> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ContextualMessage& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<ContextualFile>> files_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
