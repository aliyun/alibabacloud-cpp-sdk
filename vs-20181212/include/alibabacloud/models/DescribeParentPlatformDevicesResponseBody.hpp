// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeParentPlatformDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParentPlatformDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParentPlatformDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeParentPlatformDevicesResponseBody() = default ;
    DescribeParentPlatformDevicesResponseBody(const DescribeParentPlatformDevicesResponseBody &) = default ;
    DescribeParentPlatformDevicesResponseBody(DescribeParentPlatformDevicesResponseBody &&) = default ;
    DescribeParentPlatformDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParentPlatformDevicesResponseBody() = default ;
    DescribeParentPlatformDevicesResponseBody& operator=(const DescribeParentPlatformDevicesResponseBody &) = default ;
    DescribeParentPlatformDevicesResponseBody& operator=(DescribeParentPlatformDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Devices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Devices& obj) { 
        DARABONBA_PTR_TO_JSON(GbId, gbId_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      };
      friend void from_json(const Darabonba::Json& j, Devices& obj) { 
        DARABONBA_PTR_FROM_JSON(GbId, gbId_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      };
      Devices() = default ;
      Devices(const Devices &) = default ;
      Devices(Devices &&) = default ;
      Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Devices() = default ;
      Devices& operator=(const Devices &) = default ;
      Devices& operator=(Devices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gbId_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr; };
      // gbId Field Functions 
      bool hasGbId() const { return this->gbId_ != nullptr;};
      void deleteGbId() { this->gbId_ = nullptr;};
      inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
      inline Devices& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Devices& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Devices& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Devices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Devices& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    protected:
      shared_ptr<string> gbId_ {};
      shared_ptr<string> groupId_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> parentId_ {};
    };

    virtual bool empty() const override { return this->devices_ == nullptr
        && this->pageCount_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<DescribeParentPlatformDevicesResponseBody::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<DescribeParentPlatformDevicesResponseBody::Devices>) };
    inline vector<DescribeParentPlatformDevicesResponseBody::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<DescribeParentPlatformDevicesResponseBody::Devices>) };
    inline DescribeParentPlatformDevicesResponseBody& setDevices(const vector<DescribeParentPlatformDevicesResponseBody::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline DescribeParentPlatformDevicesResponseBody& setDevices(vector<DescribeParentPlatformDevicesResponseBody::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribeParentPlatformDevicesResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeParentPlatformDevicesResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeParentPlatformDevicesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParentPlatformDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeParentPlatformDevicesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeParentPlatformDevicesResponseBody::Devices>> devices_ {};
    shared_ptr<int64_t> pageCount_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
