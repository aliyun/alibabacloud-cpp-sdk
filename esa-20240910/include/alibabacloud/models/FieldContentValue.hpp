// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDCONTENTVALUE_HPP_
#define ALIBABACLOUD_MODELS_FIELDCONTENTVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldContentValueFieldList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class FieldContentValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldContentValue& obj) { 
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
    };
    friend void from_json(const Darabonba::Json& j, FieldContentValue& obj) { 
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
    };
    FieldContentValue() = default ;
    FieldContentValue(const FieldContentValue &) = default ;
    FieldContentValue(FieldContentValue &&) = default ;
    FieldContentValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldContentValue() = default ;
    FieldContentValue& operator=(const FieldContentValue &) = default ;
    FieldContentValue& operator=(FieldContentValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sortOrder_ != nullptr
        && this->fieldList_ != nullptr; };
    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline int64_t sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0L) };
    inline FieldContentValue& setSortOrder(int64_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline const vector<FieldContentValueFieldList> & fieldList() const { DARABONBA_PTR_GET_CONST(fieldList_, vector<FieldContentValueFieldList>) };
    inline vector<FieldContentValueFieldList> fieldList() { DARABONBA_PTR_GET(fieldList_, vector<FieldContentValueFieldList>) };
    inline FieldContentValue& setFieldList(const vector<FieldContentValueFieldList> & fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };
    inline FieldContentValue& setFieldList(vector<FieldContentValueFieldList> && fieldList) { DARABONBA_PTR_SET_RVALUE(fieldList_, fieldList) };


  protected:
    // The sequence number of the fields.
    std::shared_ptr<int64_t> sortOrder_ = nullptr;
    // The fields.
    std::shared_ptr<vector<FieldContentValueFieldList>> fieldList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
