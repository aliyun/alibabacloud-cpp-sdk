// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILV2RESPONSEBODYITEMSMODELTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILV2RESPONSEBODYITEMSMODELTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags() = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags(const DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags &) = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags(DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags &&) = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags() = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags& operator=(const DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags &) = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags& operator=(DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // ID corresponding to the data tag name. Values:
    // - **101**: Personal Sensitive Information.
    // - **102**: Personal Information.
    // - **107**: General Information.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Data tag name. Values:
    // - Personal Sensitive Information.
    // - Personal Information.
    // - General Information.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
