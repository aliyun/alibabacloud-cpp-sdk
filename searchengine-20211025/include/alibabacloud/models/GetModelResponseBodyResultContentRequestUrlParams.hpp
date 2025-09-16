// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTREQUESTURLPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTREQUESTURLPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetModelResponseBodyResultContentRequestUrlParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelResponseBodyResultContentRequestUrlParams& obj) { 
      DARABONBA_ANY_TO_JSON(build, build_);
      DARABONBA_ANY_TO_JSON(search, search_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelResponseBodyResultContentRequestUrlParams& obj) { 
      DARABONBA_ANY_FROM_JSON(build, build_);
      DARABONBA_ANY_FROM_JSON(search, search_);
    };
    GetModelResponseBodyResultContentRequestUrlParams() = default ;
    GetModelResponseBodyResultContentRequestUrlParams(const GetModelResponseBodyResultContentRequestUrlParams &) = default ;
    GetModelResponseBodyResultContentRequestUrlParams(GetModelResponseBodyResultContentRequestUrlParams &&) = default ;
    GetModelResponseBodyResultContentRequestUrlParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelResponseBodyResultContentRequestUrlParams() = default ;
    GetModelResponseBodyResultContentRequestUrlParams& operator=(const GetModelResponseBodyResultContentRequestUrlParams &) = default ;
    GetModelResponseBodyResultContentRequestUrlParams& operator=(GetModelResponseBodyResultContentRequestUrlParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->build_ != nullptr
        && this->search_ != nullptr; };
    // build Field Functions 
    bool hasBuild() const { return this->build_ != nullptr;};
    void deleteBuild() { this->build_ = nullptr;};
    inline     const Darabonba::Json & build() const { DARABONBA_GET(build_) };
    Darabonba::Json & build() { DARABONBA_GET(build_) };
    inline GetModelResponseBodyResultContentRequestUrlParams& setBuild(const Darabonba::Json & build) { DARABONBA_SET_VALUE(build_, build) };
    inline GetModelResponseBodyResultContentRequestUrlParams& setBuild(Darabonba::Json & build) { DARABONBA_SET_RVALUE(build_, build) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline     const Darabonba::Json & search() const { DARABONBA_GET(search_) };
    Darabonba::Json & search() { DARABONBA_GET(search_) };
    inline GetModelResponseBodyResultContentRequestUrlParams& setSearch(const Darabonba::Json & search) { DARABONBA_SET_VALUE(search_, search) };
    inline GetModelResponseBodyResultContentRequestUrlParams& setSearch(Darabonba::Json & search) { DARABONBA_SET_RVALUE(search_, search) };


  protected:
    Darabonba::Json build_ = nullptr;
    Darabonba::Json search_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
