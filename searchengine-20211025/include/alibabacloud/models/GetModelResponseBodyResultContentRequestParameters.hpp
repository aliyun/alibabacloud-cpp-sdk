// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetModelResponseBodyResultContentRequestParametersBuild.hpp>
#include <alibabacloud/models/GetModelResponseBodyResultContentRequestParametersSearch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetModelResponseBodyResultContentRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelResponseBodyResultContentRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(build, build_);
      DARABONBA_PTR_TO_JSON(search, search_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelResponseBodyResultContentRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(build, build_);
      DARABONBA_PTR_FROM_JSON(search, search_);
    };
    GetModelResponseBodyResultContentRequestParameters() = default ;
    GetModelResponseBodyResultContentRequestParameters(const GetModelResponseBodyResultContentRequestParameters &) = default ;
    GetModelResponseBodyResultContentRequestParameters(GetModelResponseBodyResultContentRequestParameters &&) = default ;
    GetModelResponseBodyResultContentRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelResponseBodyResultContentRequestParameters() = default ;
    GetModelResponseBodyResultContentRequestParameters& operator=(const GetModelResponseBodyResultContentRequestParameters &) = default ;
    GetModelResponseBodyResultContentRequestParameters& operator=(GetModelResponseBodyResultContentRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->build_ != nullptr
        && this->search_ != nullptr; };
    // build Field Functions 
    bool hasBuild() const { return this->build_ != nullptr;};
    void deleteBuild() { this->build_ = nullptr;};
    inline const Models::GetModelResponseBodyResultContentRequestParametersBuild & build() const { DARABONBA_PTR_GET_CONST(build_, Models::GetModelResponseBodyResultContentRequestParametersBuild) };
    inline Models::GetModelResponseBodyResultContentRequestParametersBuild build() { DARABONBA_PTR_GET(build_, Models::GetModelResponseBodyResultContentRequestParametersBuild) };
    inline GetModelResponseBodyResultContentRequestParameters& setBuild(const Models::GetModelResponseBodyResultContentRequestParametersBuild & build) { DARABONBA_PTR_SET_VALUE(build_, build) };
    inline GetModelResponseBodyResultContentRequestParameters& setBuild(Models::GetModelResponseBodyResultContentRequestParametersBuild && build) { DARABONBA_PTR_SET_RVALUE(build_, build) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline const Models::GetModelResponseBodyResultContentRequestParametersSearch & search() const { DARABONBA_PTR_GET_CONST(search_, Models::GetModelResponseBodyResultContentRequestParametersSearch) };
    inline Models::GetModelResponseBodyResultContentRequestParametersSearch search() { DARABONBA_PTR_GET(search_, Models::GetModelResponseBodyResultContentRequestParametersSearch) };
    inline GetModelResponseBodyResultContentRequestParameters& setSearch(const Models::GetModelResponseBodyResultContentRequestParametersSearch & search) { DARABONBA_PTR_SET_VALUE(search_, search) };
    inline GetModelResponseBodyResultContentRequestParameters& setSearch(Models::GetModelResponseBodyResultContentRequestParametersSearch && search) { DARABONBA_PTR_SET_RVALUE(search_, search) };


  protected:
    std::shared_ptr<Models::GetModelResponseBodyResultContentRequestParametersBuild> build_ = nullptr;
    std::shared_ptr<Models::GetModelResponseBodyResultContentRequestParametersSearch> search_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
