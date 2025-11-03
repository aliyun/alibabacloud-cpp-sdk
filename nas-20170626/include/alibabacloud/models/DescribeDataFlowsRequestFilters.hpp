// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowsRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowsRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowsRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDataFlowsRequestFilters() = default ;
    DescribeDataFlowsRequestFilters(const DescribeDataFlowsRequestFilters &) = default ;
    DescribeDataFlowsRequestFilters(DescribeDataFlowsRequestFilters &&) = default ;
    DescribeDataFlowsRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowsRequestFilters() = default ;
    DescribeDataFlowsRequestFilters& operator=(const DescribeDataFlowsRequestFilters &) = default ;
    DescribeDataFlowsRequestFilters& operator=(DescribeDataFlowsRequestFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDataFlowsRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDataFlowsRequestFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The filter name. Valid values:
    // 
    // *   DataFlowIds: filters data flows by data flow ID.
    // *   FsetIds: filters data flows by fileset ID.
    // *   FileSystemPath: filters data flows based on the path of a fileset in a CPFS file system.
    // *   SourceStorage: filters data flows based on the access path of the source storage.
    // *   ThroughputList: filters data flows based on data flow throughput.
    // *   Description: filters data flows based on the fileset description.
    // *   Status: filters data flows based on data flow status.
    std::shared_ptr<string> key_ = nullptr;
    // The filter value. This parameter does not support wildcards.
    // 
    // *   If Key is set to DataFlowIds, set Value to a data flow ID or a part of the data flow ID. You can specify a data flow ID or a group of data flow IDs. You can specify a maximum of 10 data flow IDs. Example: `df-194433a5be31****` or `df-194433a5be31****,df-184433a5be31****`.
    // *   If Key is set to FsetIds, set Value to a fileset ID or a part of the fileset ID. You can specify a fileset ID or a group of fileset IDs. You can specify a maximum of 10 fileset IDs. Example: `fset-1902718ea0ae****` or `fset-1902718ea0ae****,fset-1242718ea0ae****`.
    // *   If Key is set to FileSystemPath, set Value to the path or a part of the path of a fileset in a CPFS file system. The value of the parameter must be 1 to 1,024 characters in length.
    // *   If Key is set to SourceStorage, set Value to the access path or a part of the access path of the source storage. The path can be up to 1,024 characters in length.
    // *   If Key is set to ThroughputList, set Value to the data flow throughput. Combined query is supported.
    // *   If Key is set to Description, set Value to a data flow description or a part of the data flow description.
    // *   If Key is set to Status, set Value to the data flow status.
    // *   If Key is set to SourceStoragePath, set Value to the access path or a part of the access path of the source storage. The path can be up to 1,024 characters in length.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
