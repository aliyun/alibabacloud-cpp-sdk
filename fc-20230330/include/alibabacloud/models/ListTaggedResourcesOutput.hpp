// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGGEDRESOURCESOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGGEDRESOURCESOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Resource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListTaggedResourcesOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaggedResourcesOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaggedResourcesOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    ListTaggedResourcesOutput() = default ;
    ListTaggedResourcesOutput(const ListTaggedResourcesOutput &) = default ;
    ListTaggedResourcesOutput(ListTaggedResourcesOutput &&) = default ;
    ListTaggedResourcesOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaggedResourcesOutput() = default ;
    ListTaggedResourcesOutput& operator=(const ListTaggedResourcesOutput &) = default ;
    ListTaggedResourcesOutput& operator=(ListTaggedResourcesOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->resources_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTaggedResourcesOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<Resource> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Resource>) };
    inline vector<Resource> resources() { DARABONBA_PTR_GET(resources_, vector<Resource>) };
    inline ListTaggedResourcesOutput& setResources(const vector<Resource> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListTaggedResourcesOutput& setResources(vector<Resource> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<Resource>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
