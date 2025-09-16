// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODYRESULTCONTENTREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODYRESULTCONTENTREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListModelsResponseBodyResultContentRequestParametersBuild.hpp>
#include <alibabacloud/models/ListModelsResponseBodyResultContentRequestParametersSearch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListModelsResponseBodyResultContentRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsResponseBodyResultContentRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(build, build_);
      DARABONBA_PTR_TO_JSON(search, search_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsResponseBodyResultContentRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(build, build_);
      DARABONBA_PTR_FROM_JSON(search, search_);
    };
    ListModelsResponseBodyResultContentRequestParameters() = default ;
    ListModelsResponseBodyResultContentRequestParameters(const ListModelsResponseBodyResultContentRequestParameters &) = default ;
    ListModelsResponseBodyResultContentRequestParameters(ListModelsResponseBodyResultContentRequestParameters &&) = default ;
    ListModelsResponseBodyResultContentRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsResponseBodyResultContentRequestParameters() = default ;
    ListModelsResponseBodyResultContentRequestParameters& operator=(const ListModelsResponseBodyResultContentRequestParameters &) = default ;
    ListModelsResponseBodyResultContentRequestParameters& operator=(ListModelsResponseBodyResultContentRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->build_ != nullptr
        && this->search_ != nullptr; };
    // build Field Functions 
    bool hasBuild() const { return this->build_ != nullptr;};
    void deleteBuild() { this->build_ = nullptr;};
    inline const Models::ListModelsResponseBodyResultContentRequestParametersBuild & build() const { DARABONBA_PTR_GET_CONST(build_, Models::ListModelsResponseBodyResultContentRequestParametersBuild) };
    inline Models::ListModelsResponseBodyResultContentRequestParametersBuild build() { DARABONBA_PTR_GET(build_, Models::ListModelsResponseBodyResultContentRequestParametersBuild) };
    inline ListModelsResponseBodyResultContentRequestParameters& setBuild(const Models::ListModelsResponseBodyResultContentRequestParametersBuild & build) { DARABONBA_PTR_SET_VALUE(build_, build) };
    inline ListModelsResponseBodyResultContentRequestParameters& setBuild(Models::ListModelsResponseBodyResultContentRequestParametersBuild && build) { DARABONBA_PTR_SET_RVALUE(build_, build) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline const Models::ListModelsResponseBodyResultContentRequestParametersSearch & search() const { DARABONBA_PTR_GET_CONST(search_, Models::ListModelsResponseBodyResultContentRequestParametersSearch) };
    inline Models::ListModelsResponseBodyResultContentRequestParametersSearch search() { DARABONBA_PTR_GET(search_, Models::ListModelsResponseBodyResultContentRequestParametersSearch) };
    inline ListModelsResponseBodyResultContentRequestParameters& setSearch(const Models::ListModelsResponseBodyResultContentRequestParametersSearch & search) { DARABONBA_PTR_SET_VALUE(search_, search) };
    inline ListModelsResponseBodyResultContentRequestParameters& setSearch(Models::ListModelsResponseBodyResultContentRequestParametersSearch && search) { DARABONBA_PTR_SET_RVALUE(search_, search) };


  protected:
    std::shared_ptr<Models::ListModelsResponseBodyResultContentRequestParametersBuild> build_ = nullptr;
    std::shared_ptr<Models::ListModelsResponseBodyResultContentRequestParametersSearch> search_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
