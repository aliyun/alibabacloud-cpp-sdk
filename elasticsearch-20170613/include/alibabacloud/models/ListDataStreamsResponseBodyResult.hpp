// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataStreamsResponseBodyResultIndices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataStreamsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataStreamsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(ilmPolicyName, ilmPolicyName_);
      DARABONBA_PTR_TO_JSON(indexTemplateName, indexTemplateName_);
      DARABONBA_PTR_TO_JSON(indices, indices_);
      DARABONBA_PTR_TO_JSON(managedStorageSize, managedStorageSize_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(totalStorageSize, totalStorageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataStreamsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(ilmPolicyName, ilmPolicyName_);
      DARABONBA_PTR_FROM_JSON(indexTemplateName, indexTemplateName_);
      DARABONBA_PTR_FROM_JSON(indices, indices_);
      DARABONBA_PTR_FROM_JSON(managedStorageSize, managedStorageSize_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(totalStorageSize, totalStorageSize_);
    };
    ListDataStreamsResponseBodyResult() = default ;
    ListDataStreamsResponseBodyResult(const ListDataStreamsResponseBodyResult &) = default ;
    ListDataStreamsResponseBodyResult(ListDataStreamsResponseBodyResult &&) = default ;
    ListDataStreamsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataStreamsResponseBodyResult() = default ;
    ListDataStreamsResponseBodyResult& operator=(const ListDataStreamsResponseBodyResult &) = default ;
    ListDataStreamsResponseBodyResult& operator=(ListDataStreamsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->health_ != nullptr
        && this->ilmPolicyName_ != nullptr && this->indexTemplateName_ != nullptr && this->indices_ != nullptr && this->managedStorageSize_ != nullptr && this->name_ != nullptr
        && this->totalStorageSize_ != nullptr; };
    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline ListDataStreamsResponseBodyResult& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // ilmPolicyName Field Functions 
    bool hasIlmPolicyName() const { return this->ilmPolicyName_ != nullptr;};
    void deleteIlmPolicyName() { this->ilmPolicyName_ = nullptr;};
    inline string ilmPolicyName() const { DARABONBA_PTR_GET_DEFAULT(ilmPolicyName_, "") };
    inline ListDataStreamsResponseBodyResult& setIlmPolicyName(string ilmPolicyName) { DARABONBA_PTR_SET_VALUE(ilmPolicyName_, ilmPolicyName) };


    // indexTemplateName Field Functions 
    bool hasIndexTemplateName() const { return this->indexTemplateName_ != nullptr;};
    void deleteIndexTemplateName() { this->indexTemplateName_ = nullptr;};
    inline string indexTemplateName() const { DARABONBA_PTR_GET_DEFAULT(indexTemplateName_, "") };
    inline ListDataStreamsResponseBodyResult& setIndexTemplateName(string indexTemplateName) { DARABONBA_PTR_SET_VALUE(indexTemplateName_, indexTemplateName) };


    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const vector<Models::ListDataStreamsResponseBodyResultIndices> & indices() const { DARABONBA_PTR_GET_CONST(indices_, vector<Models::ListDataStreamsResponseBodyResultIndices>) };
    inline vector<Models::ListDataStreamsResponseBodyResultIndices> indices() { DARABONBA_PTR_GET(indices_, vector<Models::ListDataStreamsResponseBodyResultIndices>) };
    inline ListDataStreamsResponseBodyResult& setIndices(const vector<Models::ListDataStreamsResponseBodyResultIndices> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline ListDataStreamsResponseBodyResult& setIndices(vector<Models::ListDataStreamsResponseBodyResultIndices> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // managedStorageSize Field Functions 
    bool hasManagedStorageSize() const { return this->managedStorageSize_ != nullptr;};
    void deleteManagedStorageSize() { this->managedStorageSize_ = nullptr;};
    inline int64_t managedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(managedStorageSize_, 0L) };
    inline ListDataStreamsResponseBodyResult& setManagedStorageSize(int64_t managedStorageSize) { DARABONBA_PTR_SET_VALUE(managedStorageSize_, managedStorageSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataStreamsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // totalStorageSize Field Functions 
    bool hasTotalStorageSize() const { return this->totalStorageSize_ != nullptr;};
    void deleteTotalStorageSize() { this->totalStorageSize_ = nullptr;};
    inline int64_t totalStorageSize() const { DARABONBA_PTR_GET_DEFAULT(totalStorageSize_, 0L) };
    inline ListDataStreamsResponseBodyResult& setTotalStorageSize(int64_t totalStorageSize) { DARABONBA_PTR_SET_VALUE(totalStorageSize_, totalStorageSize) };


  protected:
    std::shared_ptr<string> health_ = nullptr;
    std::shared_ptr<string> ilmPolicyName_ = nullptr;
    std::shared_ptr<string> indexTemplateName_ = nullptr;
    std::shared_ptr<vector<Models::ListDataStreamsResponseBodyResultIndices>> indices_ = nullptr;
    std::shared_ptr<int64_t> managedStorageSize_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> totalStorageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
