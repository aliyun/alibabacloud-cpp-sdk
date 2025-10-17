// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEMASRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEMASRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSchemasResponseBodyItemsSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSchemasResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchemasResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchemasResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    DescribeSchemasResponseBodyItems() = default ;
    DescribeSchemasResponseBodyItems(const DescribeSchemasResponseBodyItems &) = default ;
    DescribeSchemasResponseBodyItems(DescribeSchemasResponseBodyItems &&) = default ;
    DescribeSchemasResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchemasResponseBodyItems() = default ;
    DescribeSchemasResponseBodyItems& operator=(const DescribeSchemasResponseBodyItems &) = default ;
    DescribeSchemasResponseBodyItems& operator=(DescribeSchemasResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schema_ == nullptr; };
    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const vector<Models::DescribeSchemasResponseBodyItemsSchema> & schema() const { DARABONBA_PTR_GET_CONST(schema_, vector<Models::DescribeSchemasResponseBodyItemsSchema>) };
    inline vector<Models::DescribeSchemasResponseBodyItemsSchema> schema() { DARABONBA_PTR_GET(schema_, vector<Models::DescribeSchemasResponseBodyItemsSchema>) };
    inline DescribeSchemasResponseBodyItems& setSchema(const vector<Models::DescribeSchemasResponseBodyItemsSchema> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline DescribeSchemasResponseBodyItems& setSchema(vector<Models::DescribeSchemasResponseBodyItemsSchema> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    std::shared_ptr<vector<Models::DescribeSchemasResponseBodyItemsSchema>> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
