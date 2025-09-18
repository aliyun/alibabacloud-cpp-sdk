// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISKCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_DISKCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValueConstraints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DiskConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiskConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(CountConstraint, countConstraint_);
      DARABONBA_PTR_TO_JSON(SizeConstraint, sizeConstraint_);
    };
    friend void from_json(const Darabonba::Json& j, DiskConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(CountConstraint, countConstraint_);
      DARABONBA_PTR_FROM_JSON(SizeConstraint, sizeConstraint_);
    };
    DiskConstraints() = default ;
    DiskConstraints(const DiskConstraints &) = default ;
    DiskConstraints(DiskConstraints &&) = default ;
    DiskConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiskConstraints() = default ;
    DiskConstraints& operator=(const DiskConstraints &) = default ;
    DiskConstraints& operator=(DiskConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr
        && this->countConstraint_ != nullptr && this->sizeConstraint_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline DiskConstraints& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline DiskConstraints& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // countConstraint Field Functions 
    bool hasCountConstraint() const { return this->countConstraint_ != nullptr;};
    void deleteCountConstraint() { this->countConstraint_ = nullptr;};
    inline const ValueConstraints & countConstraint() const { DARABONBA_PTR_GET_CONST(countConstraint_, ValueConstraints) };
    inline ValueConstraints countConstraint() { DARABONBA_PTR_GET(countConstraint_, ValueConstraints) };
    inline DiskConstraints& setCountConstraint(const ValueConstraints & countConstraint) { DARABONBA_PTR_SET_VALUE(countConstraint_, countConstraint) };
    inline DiskConstraints& setCountConstraint(ValueConstraints && countConstraint) { DARABONBA_PTR_SET_RVALUE(countConstraint_, countConstraint) };


    // sizeConstraint Field Functions 
    bool hasSizeConstraint() const { return this->sizeConstraint_ != nullptr;};
    void deleteSizeConstraint() { this->sizeConstraint_ = nullptr;};
    inline const ValueConstraints & sizeConstraint() const { DARABONBA_PTR_GET_CONST(sizeConstraint_, ValueConstraints) };
    inline ValueConstraints sizeConstraint() { DARABONBA_PTR_GET(sizeConstraint_, ValueConstraints) };
    inline DiskConstraints& setSizeConstraint(const ValueConstraints & sizeConstraint) { DARABONBA_PTR_SET_VALUE(sizeConstraint_, sizeConstraint) };
    inline DiskConstraints& setSizeConstraint(ValueConstraints && sizeConstraint) { DARABONBA_PTR_SET_RVALUE(sizeConstraint_, sizeConstraint) };


  protected:
    // 支持的磁盘类型。
    std::shared_ptr<vector<string>> categories_ = nullptr;
    // 磁盘数量最小值。
    std::shared_ptr<ValueConstraints> countConstraint_ = nullptr;
    // 磁盘容量限制。
    std::shared_ptr<ValueConstraints> sizeConstraint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
