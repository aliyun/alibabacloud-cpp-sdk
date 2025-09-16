// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELREQUESTCONTENTREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELREQUESTCONTENTREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateModelRequestContentRequestParametersBuild.hpp>
#include <alibabacloud/models/CreateModelRequestContentRequestParametersSearch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateModelRequestContentRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelRequestContentRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(build, build_);
      DARABONBA_PTR_TO_JSON(search, search_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelRequestContentRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(build, build_);
      DARABONBA_PTR_FROM_JSON(search, search_);
    };
    CreateModelRequestContentRequestParameters() = default ;
    CreateModelRequestContentRequestParameters(const CreateModelRequestContentRequestParameters &) = default ;
    CreateModelRequestContentRequestParameters(CreateModelRequestContentRequestParameters &&) = default ;
    CreateModelRequestContentRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelRequestContentRequestParameters() = default ;
    CreateModelRequestContentRequestParameters& operator=(const CreateModelRequestContentRequestParameters &) = default ;
    CreateModelRequestContentRequestParameters& operator=(CreateModelRequestContentRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->build_ != nullptr
        && this->search_ != nullptr; };
    // build Field Functions 
    bool hasBuild() const { return this->build_ != nullptr;};
    void deleteBuild() { this->build_ = nullptr;};
    inline const Models::CreateModelRequestContentRequestParametersBuild & build() const { DARABONBA_PTR_GET_CONST(build_, Models::CreateModelRequestContentRequestParametersBuild) };
    inline Models::CreateModelRequestContentRequestParametersBuild build() { DARABONBA_PTR_GET(build_, Models::CreateModelRequestContentRequestParametersBuild) };
    inline CreateModelRequestContentRequestParameters& setBuild(const Models::CreateModelRequestContentRequestParametersBuild & build) { DARABONBA_PTR_SET_VALUE(build_, build) };
    inline CreateModelRequestContentRequestParameters& setBuild(Models::CreateModelRequestContentRequestParametersBuild && build) { DARABONBA_PTR_SET_RVALUE(build_, build) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline const Models::CreateModelRequestContentRequestParametersSearch & search() const { DARABONBA_PTR_GET_CONST(search_, Models::CreateModelRequestContentRequestParametersSearch) };
    inline Models::CreateModelRequestContentRequestParametersSearch search() { DARABONBA_PTR_GET(search_, Models::CreateModelRequestContentRequestParametersSearch) };
    inline CreateModelRequestContentRequestParameters& setSearch(const Models::CreateModelRequestContentRequestParametersSearch & search) { DARABONBA_PTR_SET_VALUE(search_, search) };
    inline CreateModelRequestContentRequestParameters& setSearch(Models::CreateModelRequestContentRequestParametersSearch && search) { DARABONBA_PTR_SET_RVALUE(search_, search) };


  protected:
    std::shared_ptr<Models::CreateModelRequestContentRequestParametersBuild> build_ = nullptr;
    std::shared_ptr<Models::CreateModelRequestContentRequestParametersSearch> search_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
