// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMARESPONSEBODYPLAYBOOKNODESCHEMA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMARESPONSEBODYPLAYBOOKNODESCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema& obj) { 
      DARABONBA_PTR_TO_JSON(NodeSchema, nodeSchema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeSchema, nodeSchema_);
    };
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema() = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema(const DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema &) = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema(DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema &&) = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema() = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema& operator=(const DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema &) = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema& operator=(DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeSchema_ == nullptr; };
    // nodeSchema Field Functions 
    bool hasNodeSchema() const { return this->nodeSchema_ != nullptr;};
    void deleteNodeSchema() { this->nodeSchema_ = nullptr;};
    inline const vector<Models::DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema> & nodeSchema() const { DARABONBA_PTR_GET_CONST(nodeSchema_, vector<Models::DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema>) };
    inline vector<Models::DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema> nodeSchema() { DARABONBA_PTR_GET(nodeSchema_, vector<Models::DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema>) };
    inline DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema& setNodeSchema(const vector<Models::DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema> & nodeSchema) { DARABONBA_PTR_SET_VALUE(nodeSchema_, nodeSchema) };
    inline DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema& setNodeSchema(vector<Models::DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema> && nodeSchema) { DARABONBA_PTR_SET_RVALUE(nodeSchema_, nodeSchema) };


  protected:
    // The structure information.
    std::shared_ptr<vector<Models::DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema>> nodeSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
