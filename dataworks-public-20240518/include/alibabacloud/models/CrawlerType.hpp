// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CRAWLERTYPE_HPP_
#define ALIBABACLOUD_MODELS_CRAWLERTYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CrawlerType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CrawlerType& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(SupportedEntityTypes, supportedEntityTypes_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CrawlerType& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(SupportedEntityTypes, supportedEntityTypes_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CrawlerType() = default ;
    CrawlerType(const CrawlerType &) = default ;
    CrawlerType(CrawlerType &&) = default ;
    CrawlerType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CrawlerType() = default ;
    CrawlerType& operator=(const CrawlerType &) = default ;
    CrawlerType& operator=(CrawlerType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportedEntityTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportedEntityTypes& obj) { 
        DARABONBA_PTR_TO_JSON(Optional, optional_);
        DARABONBA_PTR_TO_JSON(ParentSubType, parentSubType_);
        DARABONBA_PTR_TO_JSON(SubType, subType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SupportedEntityTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(Optional, optional_);
        DARABONBA_PTR_FROM_JSON(ParentSubType, parentSubType_);
        DARABONBA_PTR_FROM_JSON(SubType, subType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SupportedEntityTypes() = default ;
      SupportedEntityTypes(const SupportedEntityTypes &) = default ;
      SupportedEntityTypes(SupportedEntityTypes &&) = default ;
      SupportedEntityTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportedEntityTypes() = default ;
      SupportedEntityTypes& operator=(const SupportedEntityTypes &) = default ;
      SupportedEntityTypes& operator=(SupportedEntityTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->optional_ == nullptr
        && this->parentSubType_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr; };
      // optional Field Functions 
      bool hasOptional() const { return this->optional_ != nullptr;};
      void deleteOptional() { this->optional_ = nullptr;};
      inline bool getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, false) };
      inline SupportedEntityTypes& setOptional(bool optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


      // parentSubType Field Functions 
      bool hasParentSubType() const { return this->parentSubType_ != nullptr;};
      void deleteParentSubType() { this->parentSubType_ = nullptr;};
      inline string getParentSubType() const { DARABONBA_PTR_GET_DEFAULT(parentSubType_, "") };
      inline SupportedEntityTypes& setParentSubType(string parentSubType) { DARABONBA_PTR_SET_VALUE(parentSubType_, parentSubType) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline SupportedEntityTypes& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SupportedEntityTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<bool> optional_ {};
      shared_ptr<string> parentSubType_ {};
      shared_ptr<string> subType_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->supportedEntityTypes_ == nullptr && this->type_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CrawlerType& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // supportedEntityTypes Field Functions 
    bool hasSupportedEntityTypes() const { return this->supportedEntityTypes_ != nullptr;};
    void deleteSupportedEntityTypes() { this->supportedEntityTypes_ = nullptr;};
    inline const vector<CrawlerType::SupportedEntityTypes> & getSupportedEntityTypes() const { DARABONBA_PTR_GET_CONST(supportedEntityTypes_, vector<CrawlerType::SupportedEntityTypes>) };
    inline vector<CrawlerType::SupportedEntityTypes> getSupportedEntityTypes() { DARABONBA_PTR_GET(supportedEntityTypes_, vector<CrawlerType::SupportedEntityTypes>) };
    inline CrawlerType& setSupportedEntityTypes(const vector<CrawlerType::SupportedEntityTypes> & supportedEntityTypes) { DARABONBA_PTR_SET_VALUE(supportedEntityTypes_, supportedEntityTypes) };
    inline CrawlerType& setSupportedEntityTypes(vector<CrawlerType::SupportedEntityTypes> && supportedEntityTypes) { DARABONBA_PTR_SET_RVALUE(supportedEntityTypes_, supportedEntityTypes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CrawlerType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> displayName_ {};
    shared_ptr<vector<CrawlerType::SupportedEntityTypes>> supportedEntityTypes_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
