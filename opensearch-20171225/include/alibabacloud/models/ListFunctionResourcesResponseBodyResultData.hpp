// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONRESOURCESRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONRESOURCESRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFunctionResourcesResponseBodyResultDataGenerators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListFunctionResourcesResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionResourcesResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Generators, generators_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionResourcesResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Generators, generators_);
    };
    ListFunctionResourcesResponseBodyResultData() = default ;
    ListFunctionResourcesResponseBodyResultData(const ListFunctionResourcesResponseBodyResultData &) = default ;
    ListFunctionResourcesResponseBodyResultData(ListFunctionResourcesResponseBodyResultData &&) = default ;
    ListFunctionResourcesResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionResourcesResponseBodyResultData() = default ;
    ListFunctionResourcesResponseBodyResultData& operator=(const ListFunctionResourcesResponseBodyResultData &) = default ;
    ListFunctionResourcesResponseBodyResultData& operator=(ListFunctionResourcesResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->generators_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListFunctionResourcesResponseBodyResultData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // generators Field Functions 
    bool hasGenerators() const { return this->generators_ != nullptr;};
    void deleteGenerators() { this->generators_ = nullptr;};
    inline const vector<Models::ListFunctionResourcesResponseBodyResultDataGenerators> & generators() const { DARABONBA_PTR_GET_CONST(generators_, vector<Models::ListFunctionResourcesResponseBodyResultDataGenerators>) };
    inline vector<Models::ListFunctionResourcesResponseBodyResultDataGenerators> generators() { DARABONBA_PTR_GET(generators_, vector<Models::ListFunctionResourcesResponseBodyResultDataGenerators>) };
    inline ListFunctionResourcesResponseBodyResultData& setGenerators(const vector<Models::ListFunctionResourcesResponseBodyResultDataGenerators> & generators) { DARABONBA_PTR_SET_VALUE(generators_, generators) };
    inline ListFunctionResourcesResponseBodyResultData& setGenerators(vector<Models::ListFunctionResourcesResponseBodyResultDataGenerators> && generators) { DARABONBA_PTR_SET_RVALUE(generators_, generators) };


  protected:
    // The content of the file that corresponds to a resource of the raw_file type.
    std::shared_ptr<string> content_ = nullptr;
    // The feature generators that correspond to resources of the feature_generator type.
    std::shared_ptr<vector<Models::ListFunctionResourcesResponseBodyResultDataGenerators>> generators_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
