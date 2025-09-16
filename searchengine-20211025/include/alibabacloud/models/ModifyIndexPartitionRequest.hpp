// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINDEXPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINDEXPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyIndexPartitionRequestIndexInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyIndexPartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIndexPartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(domainName, domainName_);
      DARABONBA_PTR_TO_JSON(generation, generation_);
      DARABONBA_PTR_TO_JSON(indexInfos, indexInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIndexPartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(domainName, domainName_);
      DARABONBA_PTR_FROM_JSON(generation, generation_);
      DARABONBA_PTR_FROM_JSON(indexInfos, indexInfos_);
    };
    ModifyIndexPartitionRequest() = default ;
    ModifyIndexPartitionRequest(const ModifyIndexPartitionRequest &) = default ;
    ModifyIndexPartitionRequest(ModifyIndexPartitionRequest &&) = default ;
    ModifyIndexPartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIndexPartitionRequest() = default ;
    ModifyIndexPartitionRequest& operator=(const ModifyIndexPartitionRequest &) = default ;
    ModifyIndexPartitionRequest& operator=(ModifyIndexPartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceName_ != nullptr
        && this->domainName_ != nullptr && this->generation_ != nullptr && this->indexInfos_ != nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ModifyIndexPartitionRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyIndexPartitionRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline int64_t generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0L) };
    inline ModifyIndexPartitionRequest& setGeneration(int64_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // indexInfos Field Functions 
    bool hasIndexInfos() const { return this->indexInfos_ != nullptr;};
    void deleteIndexInfos() { this->indexInfos_ = nullptr;};
    inline const vector<ModifyIndexPartitionRequestIndexInfos> & indexInfos() const { DARABONBA_PTR_GET_CONST(indexInfos_, vector<ModifyIndexPartitionRequestIndexInfos>) };
    inline vector<ModifyIndexPartitionRequestIndexInfos> indexInfos() { DARABONBA_PTR_GET(indexInfos_, vector<ModifyIndexPartitionRequestIndexInfos>) };
    inline ModifyIndexPartitionRequest& setIndexInfos(const vector<ModifyIndexPartitionRequestIndexInfos> & indexInfos) { DARABONBA_PTR_SET_VALUE(indexInfos_, indexInfos) };
    inline ModifyIndexPartitionRequest& setIndexInfos(vector<ModifyIndexPartitionRequestIndexInfos> && indexInfos) { DARABONBA_PTR_SET_RVALUE(indexInfos_, indexInfos) };


  protected:
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The data center.
    std::shared_ptr<string> domainName_ = nullptr;
    // The primary key.
    std::shared_ptr<int64_t> generation_ = nullptr;
    // The index information.
    std::shared_ptr<vector<ModifyIndexPartitionRequestIndexInfos>> indexInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
