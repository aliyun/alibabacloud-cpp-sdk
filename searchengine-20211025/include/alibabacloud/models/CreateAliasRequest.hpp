// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(newMode, newMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(newMode, newMode_);
    };
    CreateAliasRequest() = default ;
    CreateAliasRequest(const CreateAliasRequest &) = default ;
    CreateAliasRequest(CreateAliasRequest &&) = default ;
    CreateAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAliasRequest() = default ;
    CreateAliasRequest& operator=(const CreateAliasRequest &) = default ;
    CreateAliasRequest& operator=(CreateAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->index_ != nullptr && this->newMode_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline CreateAliasRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline CreateAliasRequest& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // newMode Field Functions 
    bool hasNewMode() const { return this->newMode_ != nullptr;};
    void deleteNewMode() { this->newMode_ = nullptr;};
    inline bool newMode() const { DARABONBA_PTR_GET_DEFAULT(newMode_, false) };
    inline CreateAliasRequest& setNewMode(bool newMode) { DARABONBA_PTR_SET_VALUE(newMode_, newMode) };


  protected:
    // alias name
    std::shared_ptr<string> alias_ = nullptr;
    // index name
    std::shared_ptr<string> index_ = nullptr;
    // Specifies whether the OpenSearch Vector Search Edition instance is of the new version.
    std::shared_ptr<bool> newMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
