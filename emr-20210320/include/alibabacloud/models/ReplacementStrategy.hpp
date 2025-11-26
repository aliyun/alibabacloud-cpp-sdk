// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEMENTSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_REPLACEMENTSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ReplacementStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplacementStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCategories, instanceCategories_);
    };
    friend void from_json(const Darabonba::Json& j, ReplacementStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCategories, instanceCategories_);
    };
    ReplacementStrategy() = default ;
    ReplacementStrategy(const ReplacementStrategy &) = default ;
    ReplacementStrategy(ReplacementStrategy &&) = default ;
    ReplacementStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplacementStrategy() = default ;
    ReplacementStrategy& operator=(const ReplacementStrategy &) = default ;
    ReplacementStrategy& operator=(ReplacementStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCategories_ == nullptr; };
    // instanceCategories Field Functions 
    bool hasInstanceCategories() const { return this->instanceCategories_ != nullptr;};
    void deleteInstanceCategories() { this->instanceCategories_ = nullptr;};
    inline const vector<InstanceCategory> & instanceCategories() const { DARABONBA_PTR_GET_CONST(instanceCategories_, vector<InstanceCategory>) };
    inline vector<InstanceCategory> instanceCategories() { DARABONBA_PTR_GET(instanceCategories_, vector<InstanceCategory>) };
    inline ReplacementStrategy& setInstanceCategories(const vector<InstanceCategory> & instanceCategories) { DARABONBA_PTR_SET_VALUE(instanceCategories_, instanceCategories) };
    inline ReplacementStrategy& setInstanceCategories(vector<InstanceCategory> && instanceCategories) { DARABONBA_PTR_SET_RVALUE(instanceCategories_, instanceCategories) };


  protected:
    std::shared_ptr<vector<InstanceCategory>> instanceCategories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
