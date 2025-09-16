// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPHTABLEMETAS_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPHTABLEMETAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDeployGraphResponseBodyResultGraphTableMetas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeployGraphResponseBodyResultGraphTableMetas& obj) { 
      DARABONBA_PTR_TO_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_TO_JSON(domainName, domainName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tableDeployId, tableDeployId_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeployGraphResponseBodyResultGraphTableMetas& obj) { 
      DARABONBA_PTR_FROM_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_FROM_JSON(domainName, domainName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tableDeployId, tableDeployId_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetDeployGraphResponseBodyResultGraphTableMetas() = default ;
    GetDeployGraphResponseBodyResultGraphTableMetas(const GetDeployGraphResponseBodyResultGraphTableMetas &) = default ;
    GetDeployGraphResponseBodyResultGraphTableMetas(GetDeployGraphResponseBodyResultGraphTableMetas &&) = default ;
    GetDeployGraphResponseBodyResultGraphTableMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeployGraphResponseBodyResultGraphTableMetas() = default ;
    GetDeployGraphResponseBodyResultGraphTableMetas& operator=(const GetDeployGraphResponseBodyResultGraphTableMetas &) = default ;
    GetDeployGraphResponseBodyResultGraphTableMetas& operator=(GetDeployGraphResponseBodyResultGraphTableMetas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildDeployId_ != nullptr
        && this->domainName_ != nullptr && this->name_ != nullptr && this->tableDeployId_ != nullptr && this->tag_ != nullptr && this->type_ != nullptr; };
    // buildDeployId Field Functions 
    bool hasBuildDeployId() const { return this->buildDeployId_ != nullptr;};
    void deleteBuildDeployId() { this->buildDeployId_ = nullptr;};
    inline int64_t buildDeployId() const { DARABONBA_PTR_GET_DEFAULT(buildDeployId_, 0L) };
    inline GetDeployGraphResponseBodyResultGraphTableMetas& setBuildDeployId(int64_t buildDeployId) { DARABONBA_PTR_SET_VALUE(buildDeployId_, buildDeployId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetDeployGraphResponseBodyResultGraphTableMetas& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDeployGraphResponseBodyResultGraphTableMetas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tableDeployId Field Functions 
    bool hasTableDeployId() const { return this->tableDeployId_ != nullptr;};
    void deleteTableDeployId() { this->tableDeployId_ = nullptr;};
    inline int64_t tableDeployId() const { DARABONBA_PTR_GET_DEFAULT(tableDeployId_, 0L) };
    inline GetDeployGraphResponseBodyResultGraphTableMetas& setTableDeployId(int64_t tableDeployId) { DARABONBA_PTR_SET_VALUE(tableDeployId_, tableDeployId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetDeployGraphResponseBodyResultGraphTableMetas& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDeployGraphResponseBodyResultGraphTableMetas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the offline deployment.
    std::shared_ptr<int64_t> buildDeployId_ = nullptr;
    // The name of the data center.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The deployment ID of the table.
    std::shared_ptr<int64_t> tableDeployId_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
