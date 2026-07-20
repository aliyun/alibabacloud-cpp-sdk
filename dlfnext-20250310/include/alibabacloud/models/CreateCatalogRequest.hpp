// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class CreateCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isShared, isShared_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(shareId, shareId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isShared, isShared_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(shareId, shareId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateCatalogRequest() = default ;
    CreateCatalogRequest(const CreateCatalogRequest &) = default ;
    CreateCatalogRequest(CreateCatalogRequest &&) = default ;
    CreateCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCatalogRequest() = default ;
    CreateCatalogRequest& operator=(const CreateCatalogRequest &) = default ;
    CreateCatalogRequest& operator=(CreateCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isShared_ == nullptr
        && this->name_ == nullptr && this->options_ == nullptr && this->shareId_ == nullptr && this->type_ == nullptr; };
    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool getIsShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline CreateCatalogRequest& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCatalogRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> getOptions() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline CreateCatalogRequest& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline CreateCatalogRequest& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string getShareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline CreateCatalogRequest& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCatalogRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> isShared_ {};
    shared_ptr<string> name_ {};
    shared_ptr<map<string, string>> options_ {};
    shared_ptr<string> shareId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
