// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CRAWLERTYPESUPPORTEDENTITYTYPES_HPP_
#define ALIBABACLOUD_MODELS_CRAWLERTYPESUPPORTEDENTITYTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CrawlerTypeSupportedEntityTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CrawlerTypeSupportedEntityTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Optional, optional_);
      DARABONBA_PTR_TO_JSON(ParentSubType, parentSubType_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CrawlerTypeSupportedEntityTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Optional, optional_);
      DARABONBA_PTR_FROM_JSON(ParentSubType, parentSubType_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CrawlerTypeSupportedEntityTypes() = default ;
    CrawlerTypeSupportedEntityTypes(const CrawlerTypeSupportedEntityTypes &) = default ;
    CrawlerTypeSupportedEntityTypes(CrawlerTypeSupportedEntityTypes &&) = default ;
    CrawlerTypeSupportedEntityTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CrawlerTypeSupportedEntityTypes() = default ;
    CrawlerTypeSupportedEntityTypes& operator=(const CrawlerTypeSupportedEntityTypes &) = default ;
    CrawlerTypeSupportedEntityTypes& operator=(CrawlerTypeSupportedEntityTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->optional_ != nullptr
        && this->parentSubType_ != nullptr && this->subType_ != nullptr && this->type_ != nullptr; };
    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline bool optional() const { DARABONBA_PTR_GET_DEFAULT(optional_, false) };
    inline CrawlerTypeSupportedEntityTypes& setOptional(bool optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // parentSubType Field Functions 
    bool hasParentSubType() const { return this->parentSubType_ != nullptr;};
    void deleteParentSubType() { this->parentSubType_ = nullptr;};
    inline string parentSubType() const { DARABONBA_PTR_GET_DEFAULT(parentSubType_, "") };
    inline CrawlerTypeSupportedEntityTypes& setParentSubType(string parentSubType) { DARABONBA_PTR_SET_VALUE(parentSubType_, parentSubType) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline CrawlerTypeSupportedEntityTypes& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CrawlerTypeSupportedEntityTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> optional_ = nullptr;
    std::shared_ptr<string> parentSubType_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
