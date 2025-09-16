// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINDEXVERSIONREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINDEXVERSIONREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyIndexVersionRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIndexVersionRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIndexVersionRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ModifyIndexVersionRequestBody() = default ;
    ModifyIndexVersionRequestBody(const ModifyIndexVersionRequestBody &) = default ;
    ModifyIndexVersionRequestBody(ModifyIndexVersionRequestBody &&) = default ;
    ModifyIndexVersionRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIndexVersionRequestBody() = default ;
    ModifyIndexVersionRequestBody& operator=(const ModifyIndexVersionRequestBody &) = default ;
    ModifyIndexVersionRequestBody& operator=(ModifyIndexVersionRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildDeployId_ != nullptr
        && this->indexName_ != nullptr && this->version_ != nullptr; };
    // buildDeployId Field Functions 
    bool hasBuildDeployId() const { return this->buildDeployId_ != nullptr;};
    void deleteBuildDeployId() { this->buildDeployId_ = nullptr;};
    inline string buildDeployId() const { DARABONBA_PTR_GET_DEFAULT(buildDeployId_, "") };
    inline ModifyIndexVersionRequestBody& setBuildDeployId(string buildDeployId) { DARABONBA_PTR_SET_VALUE(buildDeployId_, buildDeployId) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ModifyIndexVersionRequestBody& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModifyIndexVersionRequestBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The deployment ID of the data source.
    std::shared_ptr<string> buildDeployId_ = nullptr;
    // The index name.
    std::shared_ptr<string> indexName_ = nullptr;
    // The index version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
