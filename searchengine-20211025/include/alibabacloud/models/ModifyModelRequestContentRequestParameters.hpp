// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMODELREQUESTCONTENTREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMODELREQUESTCONTENTREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyModelRequestContentRequestParametersBuild.hpp>
#include <alibabacloud/models/ModifyModelRequestContentRequestParametersSearch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyModelRequestContentRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyModelRequestContentRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(build, build_);
      DARABONBA_PTR_TO_JSON(search, search_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyModelRequestContentRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(build, build_);
      DARABONBA_PTR_FROM_JSON(search, search_);
    };
    ModifyModelRequestContentRequestParameters() = default ;
    ModifyModelRequestContentRequestParameters(const ModifyModelRequestContentRequestParameters &) = default ;
    ModifyModelRequestContentRequestParameters(ModifyModelRequestContentRequestParameters &&) = default ;
    ModifyModelRequestContentRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyModelRequestContentRequestParameters() = default ;
    ModifyModelRequestContentRequestParameters& operator=(const ModifyModelRequestContentRequestParameters &) = default ;
    ModifyModelRequestContentRequestParameters& operator=(ModifyModelRequestContentRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->build_ != nullptr
        && this->search_ != nullptr; };
    // build Field Functions 
    bool hasBuild() const { return this->build_ != nullptr;};
    void deleteBuild() { this->build_ = nullptr;};
    inline const Models::ModifyModelRequestContentRequestParametersBuild & build() const { DARABONBA_PTR_GET_CONST(build_, Models::ModifyModelRequestContentRequestParametersBuild) };
    inline Models::ModifyModelRequestContentRequestParametersBuild build() { DARABONBA_PTR_GET(build_, Models::ModifyModelRequestContentRequestParametersBuild) };
    inline ModifyModelRequestContentRequestParameters& setBuild(const Models::ModifyModelRequestContentRequestParametersBuild & build) { DARABONBA_PTR_SET_VALUE(build_, build) };
    inline ModifyModelRequestContentRequestParameters& setBuild(Models::ModifyModelRequestContentRequestParametersBuild && build) { DARABONBA_PTR_SET_RVALUE(build_, build) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline const Models::ModifyModelRequestContentRequestParametersSearch & search() const { DARABONBA_PTR_GET_CONST(search_, Models::ModifyModelRequestContentRequestParametersSearch) };
    inline Models::ModifyModelRequestContentRequestParametersSearch search() { DARABONBA_PTR_GET(search_, Models::ModifyModelRequestContentRequestParametersSearch) };
    inline ModifyModelRequestContentRequestParameters& setSearch(const Models::ModifyModelRequestContentRequestParametersSearch & search) { DARABONBA_PTR_SET_VALUE(search_, search) };
    inline ModifyModelRequestContentRequestParameters& setSearch(Models::ModifyModelRequestContentRequestParametersSearch && search) { DARABONBA_PTR_SET_RVALUE(search_, search) };


  protected:
    std::shared_ptr<Models::ModifyModelRequestContentRequestParametersBuild> build_ = nullptr;
    std::shared_ptr<Models::ModifyModelRequestContentRequestParametersSearch> search_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
