// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFIRSTRANKRESPONSEBODYRESULTMETA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFIRSTRANKRESPONSEBODYRESULTMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyFirstRankResponseBodyResultMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFirstRankResponseBodyResultMeta& obj) { 
      DARABONBA_PTR_TO_JSON(arg, arg_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFirstRankResponseBodyResultMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(arg, arg_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    ModifyFirstRankResponseBodyResultMeta() = default ;
    ModifyFirstRankResponseBodyResultMeta(const ModifyFirstRankResponseBodyResultMeta &) = default ;
    ModifyFirstRankResponseBodyResultMeta(ModifyFirstRankResponseBodyResultMeta &&) = default ;
    ModifyFirstRankResponseBodyResultMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFirstRankResponseBodyResultMeta() = default ;
    ModifyFirstRankResponseBodyResultMeta& operator=(const ModifyFirstRankResponseBodyResultMeta &) = default ;
    ModifyFirstRankResponseBodyResultMeta& operator=(ModifyFirstRankResponseBodyResultMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arg_ == nullptr
        && return this->attribute_ == nullptr && return this->weight_ == nullptr; };
    // arg Field Functions 
    bool hasArg() const { return this->arg_ != nullptr;};
    void deleteArg() { this->arg_ = nullptr;};
    inline string arg() const { DARABONBA_PTR_GET_DEFAULT(arg_, "") };
    inline ModifyFirstRankResponseBodyResultMeta& setArg(string arg) { DARABONBA_PTR_SET_VALUE(arg_, arg) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ModifyFirstRankResponseBodyResultMeta& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline float weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0.0) };
    inline ModifyFirstRankResponseBodyResultMeta& setWeight(float weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The parameters that are used by a function in the expression.
    std::shared_ptr<string> arg_ = nullptr;
    // The attribute, feature function, or field to be searched for.
    std::shared_ptr<string> attribute_ = nullptr;
    // The weight. Valid values: -100000 to 100000. The value cannot be 0.
    std::shared_ptr<float> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
