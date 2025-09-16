// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULTSPEC_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULTSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyResultSpecQrsResource.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyResultSpecSearchResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListInstancesResponseBodyResultSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyResultSpec& obj) { 
      DARABONBA_PTR_TO_JSON(qrsResource, qrsResource_);
      DARABONBA_PTR_TO_JSON(searchResource, searchResource_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyResultSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(qrsResource, qrsResource_);
      DARABONBA_PTR_FROM_JSON(searchResource, searchResource_);
    };
    ListInstancesResponseBodyResultSpec() = default ;
    ListInstancesResponseBodyResultSpec(const ListInstancesResponseBodyResultSpec &) = default ;
    ListInstancesResponseBodyResultSpec(ListInstancesResponseBodyResultSpec &&) = default ;
    ListInstancesResponseBodyResultSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyResultSpec() = default ;
    ListInstancesResponseBodyResultSpec& operator=(const ListInstancesResponseBodyResultSpec &) = default ;
    ListInstancesResponseBodyResultSpec& operator=(ListInstancesResponseBodyResultSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qrsResource_ != nullptr
        && this->searchResource_ != nullptr; };
    // qrsResource Field Functions 
    bool hasQrsResource() const { return this->qrsResource_ != nullptr;};
    void deleteQrsResource() { this->qrsResource_ = nullptr;};
    inline const Models::ListInstancesResponseBodyResultSpecQrsResource & qrsResource() const { DARABONBA_PTR_GET_CONST(qrsResource_, Models::ListInstancesResponseBodyResultSpecQrsResource) };
    inline Models::ListInstancesResponseBodyResultSpecQrsResource qrsResource() { DARABONBA_PTR_GET(qrsResource_, Models::ListInstancesResponseBodyResultSpecQrsResource) };
    inline ListInstancesResponseBodyResultSpec& setQrsResource(const Models::ListInstancesResponseBodyResultSpecQrsResource & qrsResource) { DARABONBA_PTR_SET_VALUE(qrsResource_, qrsResource) };
    inline ListInstancesResponseBodyResultSpec& setQrsResource(Models::ListInstancesResponseBodyResultSpecQrsResource && qrsResource) { DARABONBA_PTR_SET_RVALUE(qrsResource_, qrsResource) };


    // searchResource Field Functions 
    bool hasSearchResource() const { return this->searchResource_ != nullptr;};
    void deleteSearchResource() { this->searchResource_ = nullptr;};
    inline const Models::ListInstancesResponseBodyResultSpecSearchResource & searchResource() const { DARABONBA_PTR_GET_CONST(searchResource_, Models::ListInstancesResponseBodyResultSpecSearchResource) };
    inline Models::ListInstancesResponseBodyResultSpecSearchResource searchResource() { DARABONBA_PTR_GET(searchResource_, Models::ListInstancesResponseBodyResultSpecSearchResource) };
    inline ListInstancesResponseBodyResultSpec& setSearchResource(const Models::ListInstancesResponseBodyResultSpecSearchResource & searchResource) { DARABONBA_PTR_SET_VALUE(searchResource_, searchResource) };
    inline ListInstancesResponseBodyResultSpec& setSearchResource(Models::ListInstancesResponseBodyResultSpecSearchResource && searchResource) { DARABONBA_PTR_SET_RVALUE(searchResource_, searchResource) };


  protected:
    std::shared_ptr<Models::ListInstancesResponseBodyResultSpecQrsResource> qrsResource_ = nullptr;
    std::shared_ptr<Models::ListInstancesResponseBodyResultSpecSearchResource> searchResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
