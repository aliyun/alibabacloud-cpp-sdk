// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTERESOURCESRESPONSEBODYPAGINGINFOCOMPUTERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTERESOURCESRESPONSEBODYPAGINGINFOCOMPUTERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComputeResourcesResponseBodyPagingInfoComputeResourcesComputeResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListComputeResourcesResponseBodyPagingInfoComputeResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeResourcesResponseBodyPagingInfoComputeResources& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeResourcesResponseBodyPagingInfoComputeResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListComputeResourcesResponseBodyPagingInfoComputeResources() = default ;
    ListComputeResourcesResponseBodyPagingInfoComputeResources(const ListComputeResourcesResponseBodyPagingInfoComputeResources &) = default ;
    ListComputeResourcesResponseBodyPagingInfoComputeResources(ListComputeResourcesResponseBodyPagingInfoComputeResources &&) = default ;
    ListComputeResourcesResponseBodyPagingInfoComputeResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeResourcesResponseBodyPagingInfoComputeResources() = default ;
    ListComputeResourcesResponseBodyPagingInfoComputeResources& operator=(const ListComputeResourcesResponseBodyPagingInfoComputeResources &) = default ;
    ListComputeResourcesResponseBodyPagingInfoComputeResources& operator=(ListComputeResourcesResponseBodyPagingInfoComputeResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResource_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResourcesComputeResource> & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResourcesComputeResource>) };
    inline vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResourcesComputeResource> computeResource() { DARABONBA_PTR_GET(computeResource_, vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResourcesComputeResource>) };
    inline ListComputeResourcesResponseBodyPagingInfoComputeResources& setComputeResource(const vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResourcesComputeResource> & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline ListComputeResourcesResponseBodyPagingInfoComputeResources& setComputeResource(vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResourcesComputeResource> && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListComputeResourcesResponseBodyPagingInfoComputeResources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListComputeResourcesResponseBodyPagingInfoComputeResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::ListComputeResourcesResponseBodyPagingInfoComputeResourcesComputeResource>> computeResource_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
