// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(index, index_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(index, index_);
    };
    ModifyAliasRequest() = default ;
    ModifyAliasRequest(const ModifyAliasRequest &) = default ;
    ModifyAliasRequest(ModifyAliasRequest &&) = default ;
    ModifyAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAliasRequest() = default ;
    ModifyAliasRequest& operator=(const ModifyAliasRequest &) = default ;
    ModifyAliasRequest& operator=(ModifyAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->index_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ModifyAliasRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline ModifyAliasRequest& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    // alias name
    std::shared_ptr<string> alias_ = nullptr;
    // index name
    std::shared_ptr<string> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
