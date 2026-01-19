// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeIpControlsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpControlsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlInfos, ipControlInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpControlsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlInfos, ipControlInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpControlsResponseBody() = default ;
    DescribeIpControlsResponseBody(const DescribeIpControlsResponseBody &) = default ;
    DescribeIpControlsResponseBody(DescribeIpControlsResponseBody &&) = default ;
    DescribeIpControlsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpControlsResponseBody() = default ;
    DescribeIpControlsResponseBody& operator=(const DescribeIpControlsResponseBody &) = default ;
    DescribeIpControlsResponseBody& operator=(DescribeIpControlsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpControlInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpControlInfos& obj) { 
        DARABONBA_PTR_TO_JSON(IpControlInfo, ipControlInfo_);
      };
      friend void from_json(const Darabonba::Json& j, IpControlInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(IpControlInfo, ipControlInfo_);
      };
      IpControlInfos() = default ;
      IpControlInfos(const IpControlInfos &) = default ;
      IpControlInfos(IpControlInfos &&) = default ;
      IpControlInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpControlInfos() = default ;
      IpControlInfos& operator=(const IpControlInfos &) = default ;
      IpControlInfos& operator=(IpControlInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpControlInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpControlInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
          DARABONBA_PTR_TO_JSON(IpControlName, ipControlName_);
          DARABONBA_PTR_TO_JSON(IpControlType, ipControlType_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, IpControlInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
          DARABONBA_PTR_FROM_JSON(IpControlName, ipControlName_);
          DARABONBA_PTR_FROM_JSON(IpControlType, ipControlType_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        IpControlInfo() = default ;
        IpControlInfo(const IpControlInfo &) = default ;
        IpControlInfo(IpControlInfo &&) = default ;
        IpControlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpControlInfo() = default ;
        IpControlInfo& operator=(const IpControlInfo &) = default ;
        IpControlInfo& operator=(IpControlInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->ipControlId_ == nullptr && this->ipControlName_ == nullptr && this->ipControlType_ == nullptr && this->modifiedTime_ == nullptr
        && this->regionId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline IpControlInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline IpControlInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ipControlId Field Functions 
        bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
        void deleteIpControlId() { this->ipControlId_ = nullptr;};
        inline string getIpControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
        inline IpControlInfo& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


        // ipControlName Field Functions 
        bool hasIpControlName() const { return this->ipControlName_ != nullptr;};
        void deleteIpControlName() { this->ipControlName_ = nullptr;};
        inline string getIpControlName() const { DARABONBA_PTR_GET_DEFAULT(ipControlName_, "") };
        inline IpControlInfo& setIpControlName(string ipControlName) { DARABONBA_PTR_SET_VALUE(ipControlName_, ipControlName) };


        // ipControlType Field Functions 
        bool hasIpControlType() const { return this->ipControlType_ != nullptr;};
        void deleteIpControlType() { this->ipControlType_ = nullptr;};
        inline string getIpControlType() const { DARABONBA_PTR_GET_DEFAULT(ipControlType_, "") };
        inline IpControlInfo& setIpControlType(string ipControlType) { DARABONBA_PTR_SET_VALUE(ipControlType_, ipControlType) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline IpControlInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline IpControlInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The time when the ACL was created. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The description of the ACL.
        shared_ptr<string> description_ {};
        // The ID of the ACL.
        shared_ptr<string> ipControlId_ {};
        // The name of the ACL.
        shared_ptr<string> ipControlName_ {};
        // The type of the ACL.
        shared_ptr<string> ipControlType_ {};
        // The time when the ACL was modified. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The ID of the region in which the ACL is deployed.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->ipControlInfo_ == nullptr; };
      // ipControlInfo Field Functions 
      bool hasIpControlInfo() const { return this->ipControlInfo_ != nullptr;};
      void deleteIpControlInfo() { this->ipControlInfo_ = nullptr;};
      inline const vector<IpControlInfos::IpControlInfo> & getIpControlInfo() const { DARABONBA_PTR_GET_CONST(ipControlInfo_, vector<IpControlInfos::IpControlInfo>) };
      inline vector<IpControlInfos::IpControlInfo> getIpControlInfo() { DARABONBA_PTR_GET(ipControlInfo_, vector<IpControlInfos::IpControlInfo>) };
      inline IpControlInfos& setIpControlInfo(const vector<IpControlInfos::IpControlInfo> & ipControlInfo) { DARABONBA_PTR_SET_VALUE(ipControlInfo_, ipControlInfo) };
      inline IpControlInfos& setIpControlInfo(vector<IpControlInfos::IpControlInfo> && ipControlInfo) { DARABONBA_PTR_SET_RVALUE(ipControlInfo_, ipControlInfo) };


    protected:
      shared_ptr<vector<IpControlInfos::IpControlInfo>> ipControlInfo_ {};
    };

    virtual bool empty() const override { return this->ipControlInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipControlInfos Field Functions 
    bool hasIpControlInfos() const { return this->ipControlInfos_ != nullptr;};
    void deleteIpControlInfos() { this->ipControlInfos_ = nullptr;};
    inline const DescribeIpControlsResponseBody::IpControlInfos & getIpControlInfos() const { DARABONBA_PTR_GET_CONST(ipControlInfos_, DescribeIpControlsResponseBody::IpControlInfos) };
    inline DescribeIpControlsResponseBody::IpControlInfos getIpControlInfos() { DARABONBA_PTR_GET(ipControlInfos_, DescribeIpControlsResponseBody::IpControlInfos) };
    inline DescribeIpControlsResponseBody& setIpControlInfos(const DescribeIpControlsResponseBody::IpControlInfos & ipControlInfos) { DARABONBA_PTR_SET_VALUE(ipControlInfos_, ipControlInfos) };
    inline DescribeIpControlsResponseBody& setIpControlInfos(DescribeIpControlsResponseBody::IpControlInfos && ipControlInfos) { DARABONBA_PTR_SET_RVALUE(ipControlInfos_, ipControlInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpControlsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpControlsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpControlsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpControlsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the ACL. The information is an array that consists of IpControlInfo data. The information does not include specific policies.
    shared_ptr<DescribeIpControlsResponseBody::IpControlInfos> ipControlInfos_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
