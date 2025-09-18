// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTFEATUREVIEWSRESPONSEBODYFEATUREVIEWSFEATURES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTFEATUREVIEWSRESPONSEBODYFEATUREVIEWSFEATURES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListProjectFeatureViewsResponseBodyFeatureViewsFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectFeatureViewsResponseBodyFeatureViewsFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectFeatureViewsResponseBodyFeatureViewsFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListProjectFeatureViewsResponseBodyFeatureViewsFeatures() = default ;
    ListProjectFeatureViewsResponseBodyFeatureViewsFeatures(const ListProjectFeatureViewsResponseBodyFeatureViewsFeatures &) = default ;
    ListProjectFeatureViewsResponseBodyFeatureViewsFeatures(ListProjectFeatureViewsResponseBodyFeatureViewsFeatures &&) = default ;
    ListProjectFeatureViewsResponseBodyFeatureViewsFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectFeatureViewsResponseBodyFeatureViewsFeatures() = default ;
    ListProjectFeatureViewsResponseBodyFeatureViewsFeatures& operator=(const ListProjectFeatureViewsResponseBodyFeatureViewsFeatures &) = default ;
    ListProjectFeatureViewsResponseBodyFeatureViewsFeatures& operator=(ListProjectFeatureViewsResponseBodyFeatureViewsFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
    inline vector<string> attributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
    inline ListProjectFeatureViewsResponseBodyFeatureViewsFeatures& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline ListProjectFeatureViewsResponseBodyFeatureViewsFeatures& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectFeatureViewsResponseBodyFeatureViewsFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectFeatureViewsResponseBodyFeatureViewsFeatures& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<string>> attributes_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
