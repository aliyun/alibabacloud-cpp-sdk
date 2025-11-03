// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESETSREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESETSREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesetsRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesetsRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesetsRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeFilesetsRequestFilters() = default ;
    DescribeFilesetsRequestFilters(const DescribeFilesetsRequestFilters &) = default ;
    DescribeFilesetsRequestFilters(DescribeFilesetsRequestFilters &&) = default ;
    DescribeFilesetsRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesetsRequestFilters() = default ;
    DescribeFilesetsRequestFilters& operator=(const DescribeFilesetsRequestFilters &) = default ;
    DescribeFilesetsRequestFilters& operator=(DescribeFilesetsRequestFilters &&) = default ;
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
    inline DescribeFilesetsRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeFilesetsRequestFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The filter name. Valid values:
    // 
    // *   FsetIds: filters filesets by fileset ID.
    // *   FileSystemPath: filters filesets based on the path of a fileset in a CPFS file system.
    // *   Description: filters filesets based on the fileset description.
    // *   QuotaExists: filters filesets based on whether quotas exist.
    // 
    // >  Only CPFS for LINGJUN V2.7.0 and later support the QuotaExists parameter.
    std::shared_ptr<string> key_ = nullptr;
    // The filter value. This parameter does not support wildcards.
    // 
    // *   If Key is set to FsetIds, set Value to a fileset ID or a part of the fileset ID. You can specify a fileset ID or a group of fileset IDs. You can specify a maximum of 10 fileset IDs. Example: `fset-1902718ea0ae****` or `fset-1902718ea0ae****,fset-3212718ea0ae****`.
    // *   If Key is set to FileSystemPath, set Value to the path or a part of the path of a fileset in a CPFS file system. The value must be 2 to 1024 characters in length. The value must be encoded in UTF-8.
    // *   If Key is set to Description, set Value to a fileset description or a part of the fileset description.
    // *   If Key is set to QuotaExists, set Value to true or false. If you do not specify the parameter, all filesets are returned.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
