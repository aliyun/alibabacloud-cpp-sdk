// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListArtifactsRequestFilter() = default ;
    ListArtifactsRequestFilter(const ListArtifactsRequestFilter &) = default ;
    ListArtifactsRequestFilter(ListArtifactsRequestFilter &&) = default ;
    ListArtifactsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactsRequestFilter() = default ;
    ListArtifactsRequestFilter& operator=(const ListArtifactsRequestFilter &) = default ;
    ListArtifactsRequestFilter& operator=(ListArtifactsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->values_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListArtifactsRequestFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ListArtifactsRequestFilter& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListArtifactsRequestFilter& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The parameter name of the filter. You can specify one or more filters. Valid values:
    // 
    // *   *Name*: The name of the deployment package. Fuzzy match is used.
    // *   ArtifactId: The ID of the deployment package.
    // *   ArtifactType: The type of the deployment package.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter values of the filter.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
