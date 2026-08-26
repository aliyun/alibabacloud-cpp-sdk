// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_TO_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_FROM_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
    };
    CreateKnowledgeBaseRequest() = default ;
    CreateKnowledgeBaseRequest(const CreateKnowledgeBaseRequest &) = default ;
    CreateKnowledgeBaseRequest(CreateKnowledgeBaseRequest &&) = default ;
    CreateKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequest() = default ;
    CreateKnowledgeBaseRequest& operator=(const CreateKnowledgeBaseRequest &) = default ;
    CreateKnowledgeBaseRequest& operator=(CreateKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->knowledgeBaseType_ == nullptr && this->knowledgeSpaceId_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->searchMode_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // knowledgeBaseType Field Functions 
    bool hasKnowledgeBaseType() const { return this->knowledgeBaseType_ != nullptr;};
    void deleteKnowledgeBaseType() { this->knowledgeBaseType_ = nullptr;};
    inline string getKnowledgeBaseType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseType_, "") };
    inline CreateKnowledgeBaseRequest& setKnowledgeBaseType(string knowledgeBaseType) { DARABONBA_PTR_SET_VALUE(knowledgeBaseType_, knowledgeBaseType) };


    // knowledgeSpaceId Field Functions 
    bool hasKnowledgeSpaceId() const { return this->knowledgeSpaceId_ != nullptr;};
    void deleteKnowledgeSpaceId() { this->knowledgeSpaceId_ = nullptr;};
    inline string getKnowledgeSpaceId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSpaceId_, "") };
    inline CreateKnowledgeBaseRequest& setKnowledgeSpaceId(string knowledgeSpaceId) { DARABONBA_PTR_SET_VALUE(knowledgeSpaceId_, knowledgeSpaceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeBaseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateKnowledgeBaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline CreateKnowledgeBaseRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


  protected:
    // The description of the knowledge base.
    shared_ptr<string> description_ {};
    // The type of the knowledge base: PERSONAL or PUBLIC.
    shared_ptr<string> knowledgeBaseType_ {};
    // The unique identifier of the knowledge space.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeSpaceId_ {};
    // The name of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The search mode. Valid values:
    // 
    // * balanced (default): balanced mode
    // * precise: precise mode
    // * semantic: semantic mode
    // * knn: KNN mode
    // * rrf: reciprocal rank fusion
    shared_ptr<string> searchMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
