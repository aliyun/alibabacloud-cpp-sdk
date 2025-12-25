// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODYDIGITALEMPLOYEESKNOWLEDGESBAILIAN_HPP_
#define ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODYDIGITALEMPLOYEESKNOWLEDGESBAILIAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian& obj) { 
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(indexId, indexId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian& obj) { 
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(indexId, indexId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian() = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian(const ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian &) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian(ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian &&) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian() = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian& operator=(const ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian &) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian& operator=(ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->indexId_ == nullptr && return this->region_ == nullptr && return this->workspaceId_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> attributes_ = nullptr;
    std::shared_ptr<string> indexId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
