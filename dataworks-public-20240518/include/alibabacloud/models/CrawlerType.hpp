// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CRAWLERTYPE_HPP_
#define ALIBABACLOUD_MODELS_CRAWLERTYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CrawlerTypeSupportedEntityTypes.hpp>
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
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->supportedEntityTypes_ != nullptr && this->type_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CrawlerType& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // supportedEntityTypes Field Functions 
    bool hasSupportedEntityTypes() const { return this->supportedEntityTypes_ != nullptr;};
    void deleteSupportedEntityTypes() { this->supportedEntityTypes_ = nullptr;};
    inline const vector<CrawlerTypeSupportedEntityTypes> & supportedEntityTypes() const { DARABONBA_PTR_GET_CONST(supportedEntityTypes_, vector<CrawlerTypeSupportedEntityTypes>) };
    inline vector<CrawlerTypeSupportedEntityTypes> supportedEntityTypes() { DARABONBA_PTR_GET(supportedEntityTypes_, vector<CrawlerTypeSupportedEntityTypes>) };
    inline CrawlerType& setSupportedEntityTypes(const vector<CrawlerTypeSupportedEntityTypes> & supportedEntityTypes) { DARABONBA_PTR_SET_VALUE(supportedEntityTypes_, supportedEntityTypes) };
    inline CrawlerType& setSupportedEntityTypes(vector<CrawlerTypeSupportedEntityTypes> && supportedEntityTypes) { DARABONBA_PTR_SET_RVALUE(supportedEntityTypes_, supportedEntityTypes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CrawlerType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<vector<CrawlerTypeSupportedEntityTypes>> supportedEntityTypes_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
