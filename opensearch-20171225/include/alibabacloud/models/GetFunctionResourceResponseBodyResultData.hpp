// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCERESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCERESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFunctionResourceResponseBodyResultDataGenerators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionResourceResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionResourceResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Generators, generators_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionResourceResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Generators, generators_);
    };
    GetFunctionResourceResponseBodyResultData() = default ;
    GetFunctionResourceResponseBodyResultData(const GetFunctionResourceResponseBodyResultData &) = default ;
    GetFunctionResourceResponseBodyResultData(GetFunctionResourceResponseBodyResultData &&) = default ;
    GetFunctionResourceResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionResourceResponseBodyResultData() = default ;
    GetFunctionResourceResponseBodyResultData& operator=(const GetFunctionResourceResponseBodyResultData &) = default ;
    GetFunctionResourceResponseBodyResultData& operator=(GetFunctionResourceResponseBodyResultData &&) = default ;
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
    inline GetFunctionResourceResponseBodyResultData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // generators Field Functions 
    bool hasGenerators() const { return this->generators_ != nullptr;};
    void deleteGenerators() { this->generators_ = nullptr;};
    inline const vector<Models::GetFunctionResourceResponseBodyResultDataGenerators> & generators() const { DARABONBA_PTR_GET_CONST(generators_, vector<Models::GetFunctionResourceResponseBodyResultDataGenerators>) };
    inline vector<Models::GetFunctionResourceResponseBodyResultDataGenerators> generators() { DARABONBA_PTR_GET(generators_, vector<Models::GetFunctionResourceResponseBodyResultDataGenerators>) };
    inline GetFunctionResourceResponseBodyResultData& setGenerators(const vector<Models::GetFunctionResourceResponseBodyResultDataGenerators> & generators) { DARABONBA_PTR_SET_VALUE(generators_, generators) };
    inline GetFunctionResourceResponseBodyResultData& setGenerators(vector<Models::GetFunctionResourceResponseBodyResultDataGenerators> && generators) { DARABONBA_PTR_SET_RVALUE(generators_, generators) };


  protected:
    // The content of the file that corresponds to a resource of the raw_file type.
    std::shared_ptr<string> content_ = nullptr;
    // The feature generators that correspond to resources of the feature_generator type.
    std::shared_ptr<vector<Models::GetFunctionResourceResponseBodyResultDataGenerators>> generators_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
