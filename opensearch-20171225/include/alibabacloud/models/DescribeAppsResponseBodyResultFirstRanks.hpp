// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTFIRSTRANKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTFIRSTRANKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeAppsResponseBodyResultFirstRanks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyResultFirstRanks& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_ANY_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyResultFirstRanks& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_ANY_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeAppsResponseBodyResultFirstRanks() = default ;
    DescribeAppsResponseBodyResultFirstRanks(const DescribeAppsResponseBodyResultFirstRanks &) = default ;
    DescribeAppsResponseBodyResultFirstRanks(DescribeAppsResponseBodyResultFirstRanks &&) = default ;
    DescribeAppsResponseBodyResultFirstRanks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyResultFirstRanks() = default ;
    DescribeAppsResponseBodyResultFirstRanks& operator=(const DescribeAppsResponseBodyResultFirstRanks &) = default ;
    DescribeAppsResponseBodyResultFirstRanks& operator=(DescribeAppsResponseBodyResultFirstRanks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->description_ == nullptr && return this->meta_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline DescribeAppsResponseBodyResultFirstRanks& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAppsResponseBodyResultFirstRanks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline     const Darabonba::Json & meta() const { DARABONBA_GET(meta_) };
    Darabonba::Json & meta() { DARABONBA_GET(meta_) };
    inline DescribeAppsResponseBodyResultFirstRanks& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
    inline DescribeAppsResponseBodyResultFirstRanks& setMeta(Darabonba::Json & meta) { DARABONBA_SET_RVALUE(meta_, meta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppsResponseBodyResultFirstRanks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAppsResponseBodyResultFirstRanks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the expression is the default one.
    std::shared_ptr<bool> active_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the expression. The information is displayed in the array or string format.
    Darabonba::Json meta_ = nullptr;
    // The name of the rough sort expression.
    std::shared_ptr<string> name_ = nullptr;
    // The expression type. Valid values:
    // 
    // STRUCT: The content of the expression is a structure. STRING (default): a custom formula.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
