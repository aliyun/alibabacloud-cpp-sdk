// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPHINDEXMETAS_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULTGRAPHINDEXMETAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDeployGraphResponseBodyResultGraphIndexMetas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeployGraphResponseBodyResultGraphIndexMetas& obj) { 
      DARABONBA_PTR_TO_JSON(domainName, domainName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tableDeployId, tableDeployId_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(zoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeployGraphResponseBodyResultGraphIndexMetas& obj) { 
      DARABONBA_PTR_FROM_JSON(domainName, domainName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tableDeployId, tableDeployId_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(zoneName, zoneName_);
    };
    GetDeployGraphResponseBodyResultGraphIndexMetas() = default ;
    GetDeployGraphResponseBodyResultGraphIndexMetas(const GetDeployGraphResponseBodyResultGraphIndexMetas &) = default ;
    GetDeployGraphResponseBodyResultGraphIndexMetas(GetDeployGraphResponseBodyResultGraphIndexMetas &&) = default ;
    GetDeployGraphResponseBodyResultGraphIndexMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeployGraphResponseBodyResultGraphIndexMetas() = default ;
    GetDeployGraphResponseBodyResultGraphIndexMetas& operator=(const GetDeployGraphResponseBodyResultGraphIndexMetas &) = default ;
    GetDeployGraphResponseBodyResultGraphIndexMetas& operator=(GetDeployGraphResponseBodyResultGraphIndexMetas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->name_ != nullptr && this->tableDeployId_ != nullptr && this->tableName_ != nullptr && this->tag_ != nullptr && this->zoneName_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetDeployGraphResponseBodyResultGraphIndexMetas& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDeployGraphResponseBodyResultGraphIndexMetas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tableDeployId Field Functions 
    bool hasTableDeployId() const { return this->tableDeployId_ != nullptr;};
    void deleteTableDeployId() { this->tableDeployId_ = nullptr;};
    inline int64_t tableDeployId() const { DARABONBA_PTR_GET_DEFAULT(tableDeployId_, 0L) };
    inline GetDeployGraphResponseBodyResultGraphIndexMetas& setTableDeployId(int64_t tableDeployId) { DARABONBA_PTR_SET_VALUE(tableDeployId_, tableDeployId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetDeployGraphResponseBodyResultGraphIndexMetas& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetDeployGraphResponseBodyResultGraphIndexMetas& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline GetDeployGraphResponseBodyResultGraphIndexMetas& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // The name of the data center.
    std::shared_ptr<string> domainName_ = nullptr;
    // The index name.
    std::shared_ptr<string> name_ = nullptr;
    // The deployment ID of the table.
    std::shared_ptr<int64_t> tableDeployId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> tableName_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
    // The name of the QRS worker.
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
