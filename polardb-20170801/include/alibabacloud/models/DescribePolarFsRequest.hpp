// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceIds, polarFsInstanceIds_);
      DARABONBA_PTR_TO_JSON(PolarFsType, polarFsType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelativeDbClusterId, relativeDbClusterId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceIds, polarFsInstanceIds_);
      DARABONBA_PTR_FROM_JSON(PolarFsType, polarFsType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelativeDbClusterId, relativeDbClusterId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribePolarFsRequest() = default ;
    DescribePolarFsRequest(const DescribePolarFsRequest &) = default ;
    DescribePolarFsRequest(DescribePolarFsRequest &&) = default ;
    DescribePolarFsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsRequest() = default ;
    DescribePolarFsRequest& operator=(const DescribePolarFsRequest &) = default ;
    DescribePolarFsRequest& operator=(DescribePolarFsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->polarFsInstanceDescription_ == nullptr && this->polarFsInstanceIds_ == nullptr && this->polarFsType_ == nullptr
        && this->regionId_ == nullptr && this->relativeDbClusterId_ == nullptr && this->tag_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribePolarFsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolarFsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePolarFsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // polarFsInstanceDescription Field Functions 
    bool hasPolarFsInstanceDescription() const { return this->polarFsInstanceDescription_ != nullptr;};
    void deletePolarFsInstanceDescription() { this->polarFsInstanceDescription_ = nullptr;};
    inline string getPolarFsInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceDescription_, "") };
    inline DescribePolarFsRequest& setPolarFsInstanceDescription(string polarFsInstanceDescription) { DARABONBA_PTR_SET_VALUE(polarFsInstanceDescription_, polarFsInstanceDescription) };


    // polarFsInstanceIds Field Functions 
    bool hasPolarFsInstanceIds() const { return this->polarFsInstanceIds_ != nullptr;};
    void deletePolarFsInstanceIds() { this->polarFsInstanceIds_ = nullptr;};
    inline string getPolarFsInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceIds_, "") };
    inline DescribePolarFsRequest& setPolarFsInstanceIds(string polarFsInstanceIds) { DARABONBA_PTR_SET_VALUE(polarFsInstanceIds_, polarFsInstanceIds) };


    // polarFsType Field Functions 
    bool hasPolarFsType() const { return this->polarFsType_ != nullptr;};
    void deletePolarFsType() { this->polarFsType_ = nullptr;};
    inline string getPolarFsType() const { DARABONBA_PTR_GET_DEFAULT(polarFsType_, "") };
    inline DescribePolarFsRequest& setPolarFsType(string polarFsType) { DARABONBA_PTR_SET_VALUE(polarFsType_, polarFsType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePolarFsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relativeDbClusterId Field Functions 
    bool hasRelativeDbClusterId() const { return this->relativeDbClusterId_ != nullptr;};
    void deleteRelativeDbClusterId() { this->relativeDbClusterId_ = nullptr;};
    inline string getRelativeDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDbClusterId_, "") };
    inline DescribePolarFsRequest& setRelativeDbClusterId(string relativeDbClusterId) { DARABONBA_PTR_SET_VALUE(relativeDbClusterId_, relativeDbClusterId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribePolarFsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribePolarFsRequest::Tag>) };
    inline vector<DescribePolarFsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribePolarFsRequest::Tag>) };
    inline DescribePolarFsRequest& setTag(const vector<DescribePolarFsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribePolarFsRequest& setTag(vector<DescribePolarFsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The instance ID of the PolarDB instance on which the application depends.
    shared_ptr<string> DBClusterId_ {};
    // The page number. The value must be an integer greater than 0 and not exceeding the maximum value of Integer.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    shared_ptr<int32_t> pageSize_ {};
    // The description of the PolarFS instance.
    shared_ptr<string> polarFsInstanceDescription_ {};
    // The list of PolarFS instance IDs, separated by commas (,).
    shared_ptr<string> polarFsInstanceIds_ {};
    // The PolarFS type.
    shared_ptr<string> polarFsType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the associated PolarDB cluster.
    shared_ptr<string> relativeDbClusterId_ {};
    // The tags.
    shared_ptr<vector<DescribePolarFsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
