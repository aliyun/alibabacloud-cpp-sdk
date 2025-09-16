// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYRESULTSPEC_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYRESULTSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyResultSpecQrsResource.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyResultSpecSearchResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetInstanceResponseBodyResultSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyResultSpec& obj) { 
      DARABONBA_PTR_TO_JSON(qrsResource, qrsResource_);
      DARABONBA_PTR_TO_JSON(searchResource, searchResource_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyResultSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(qrsResource, qrsResource_);
      DARABONBA_PTR_FROM_JSON(searchResource, searchResource_);
    };
    GetInstanceResponseBodyResultSpec() = default ;
    GetInstanceResponseBodyResultSpec(const GetInstanceResponseBodyResultSpec &) = default ;
    GetInstanceResponseBodyResultSpec(GetInstanceResponseBodyResultSpec &&) = default ;
    GetInstanceResponseBodyResultSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyResultSpec() = default ;
    GetInstanceResponseBodyResultSpec& operator=(const GetInstanceResponseBodyResultSpec &) = default ;
    GetInstanceResponseBodyResultSpec& operator=(GetInstanceResponseBodyResultSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qrsResource_ != nullptr
        && this->searchResource_ != nullptr; };
    // qrsResource Field Functions 
    bool hasQrsResource() const { return this->qrsResource_ != nullptr;};
    void deleteQrsResource() { this->qrsResource_ = nullptr;};
    inline const Models::GetInstanceResponseBodyResultSpecQrsResource & qrsResource() const { DARABONBA_PTR_GET_CONST(qrsResource_, Models::GetInstanceResponseBodyResultSpecQrsResource) };
    inline Models::GetInstanceResponseBodyResultSpecQrsResource qrsResource() { DARABONBA_PTR_GET(qrsResource_, Models::GetInstanceResponseBodyResultSpecQrsResource) };
    inline GetInstanceResponseBodyResultSpec& setQrsResource(const Models::GetInstanceResponseBodyResultSpecQrsResource & qrsResource) { DARABONBA_PTR_SET_VALUE(qrsResource_, qrsResource) };
    inline GetInstanceResponseBodyResultSpec& setQrsResource(Models::GetInstanceResponseBodyResultSpecQrsResource && qrsResource) { DARABONBA_PTR_SET_RVALUE(qrsResource_, qrsResource) };


    // searchResource Field Functions 
    bool hasSearchResource() const { return this->searchResource_ != nullptr;};
    void deleteSearchResource() { this->searchResource_ = nullptr;};
    inline const Models::GetInstanceResponseBodyResultSpecSearchResource & searchResource() const { DARABONBA_PTR_GET_CONST(searchResource_, Models::GetInstanceResponseBodyResultSpecSearchResource) };
    inline Models::GetInstanceResponseBodyResultSpecSearchResource searchResource() { DARABONBA_PTR_GET(searchResource_, Models::GetInstanceResponseBodyResultSpecSearchResource) };
    inline GetInstanceResponseBodyResultSpec& setSearchResource(const Models::GetInstanceResponseBodyResultSpecSearchResource & searchResource) { DARABONBA_PTR_SET_VALUE(searchResource_, searchResource) };
    inline GetInstanceResponseBodyResultSpec& setSearchResource(Models::GetInstanceResponseBodyResultSpecSearchResource && searchResource) { DARABONBA_PTR_SET_RVALUE(searchResource_, searchResource) };


  protected:
    // The QRS worker specifications.
    std::shared_ptr<Models::GetInstanceResponseBodyResultSpecQrsResource> qrsResource_ = nullptr;
    // The searcher worker specifications.
    std::shared_ptr<Models::GetInstanceResponseBodyResultSpecSearchResource> searchResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
