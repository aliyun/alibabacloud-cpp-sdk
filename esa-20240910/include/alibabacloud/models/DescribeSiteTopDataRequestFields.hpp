// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETOPDATAREQUESTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETOPDATAREQUESTFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTopDataRequestFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTopDataRequestFields& obj) { 
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTopDataRequestFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
    };
    DescribeSiteTopDataRequestFields() = default ;
    DescribeSiteTopDataRequestFields(const DescribeSiteTopDataRequestFields &) = default ;
    DescribeSiteTopDataRequestFields(DescribeSiteTopDataRequestFields &&) = default ;
    DescribeSiteTopDataRequestFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTopDataRequestFields() = default ;
    DescribeSiteTopDataRequestFields& operator=(const DescribeSiteTopDataRequestFields &) = default ;
    DescribeSiteTopDataRequestFields& operator=(DescribeSiteTopDataRequestFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimension_ == nullptr
        && return this->fieldName_ == nullptr; };
    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline const vector<string> & dimension() const { DARABONBA_PTR_GET_CONST(dimension_, vector<string>) };
    inline vector<string> dimension() { DARABONBA_PTR_GET(dimension_, vector<string>) };
    inline DescribeSiteTopDataRequestFields& setDimension(const vector<string> & dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };
    inline DescribeSiteTopDataRequestFields& setDimension(vector<string> && dimension) { DARABONBA_PTR_SET_RVALUE(dimension_, dimension) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeSiteTopDataRequestFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


  protected:
    // The dimensions at which you want to query data.
    std::shared_ptr<vector<string>> dimension_ = nullptr;
    // The metric name.
    std::shared_ptr<string> fieldName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
