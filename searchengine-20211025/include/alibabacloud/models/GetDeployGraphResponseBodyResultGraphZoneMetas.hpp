// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPHZONEMETAS_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPHZONEMETAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDeployGraphResponseBodyResultGraphZoneMetas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeployGraphResponseBodyResultGraphZoneMetas& obj) { 
      DARABONBA_PTR_TO_JSON(domainInfo, domainInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(suezAdminName, suezAdminName_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeployGraphResponseBodyResultGraphZoneMetas& obj) { 
      DARABONBA_PTR_FROM_JSON(domainInfo, domainInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(suezAdminName, suezAdminName_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetDeployGraphResponseBodyResultGraphZoneMetas() = default ;
    GetDeployGraphResponseBodyResultGraphZoneMetas(const GetDeployGraphResponseBodyResultGraphZoneMetas &) = default ;
    GetDeployGraphResponseBodyResultGraphZoneMetas(GetDeployGraphResponseBodyResultGraphZoneMetas &&) = default ;
    GetDeployGraphResponseBodyResultGraphZoneMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeployGraphResponseBodyResultGraphZoneMetas() = default ;
    GetDeployGraphResponseBodyResultGraphZoneMetas& operator=(const GetDeployGraphResponseBodyResultGraphZoneMetas &) = default ;
    GetDeployGraphResponseBodyResultGraphZoneMetas& operator=(GetDeployGraphResponseBodyResultGraphZoneMetas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainInfo_ != nullptr
        && this->name_ != nullptr && this->suezAdminName_ != nullptr && this->tag_ != nullptr && this->type_ != nullptr; };
    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline string domainInfo() const { DARABONBA_PTR_GET_DEFAULT(domainInfo_, "") };
    inline GetDeployGraphResponseBodyResultGraphZoneMetas& setDomainInfo(string domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDeployGraphResponseBodyResultGraphZoneMetas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // suezAdminName Field Functions 
    bool hasSuezAdminName() const { return this->suezAdminName_ != nullptr;};
    void deleteSuezAdminName() { this->suezAdminName_ = nullptr;};
    inline string suezAdminName() const { DARABONBA_PTR_GET_DEFAULT(suezAdminName_, "") };
    inline GetDeployGraphResponseBodyResultGraphZoneMetas& setSuezAdminName(string suezAdminName) { DARABONBA_PTR_SET_VALUE(suezAdminName_, suezAdminName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetDeployGraphResponseBodyResultGraphZoneMetas& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDeployGraphResponseBodyResultGraphZoneMetas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the data center.
    std::shared_ptr<string> domainInfo_ = nullptr;
    // The name of the Query Result Searcher (QRS) worker.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the service that is used to manage the relationships between online clusters and indexes.
    std::shared_ptr<string> suezAdminName_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
    // The node type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
