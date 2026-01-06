// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSRESOURCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSRESOURCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsResourceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeApsResourceGroupsResponseBody() = default ;
    DescribeApsResourceGroupsResponseBody(const DescribeApsResourceGroupsResponseBody &) = default ;
    DescribeApsResourceGroupsResponseBody(DescribeApsResourceGroupsResponseBody &&) = default ;
    DescribeApsResourceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsResourceGroupsResponseBody() = default ;
    DescribeApsResourceGroupsResponseBody& operator=(const DescribeApsResourceGroupsResponseBody &) = default ;
    DescribeApsResourceGroupsResponseBody& operator=(DescribeApsResourceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
        DARABONBA_PTR_TO_JSON(Step, step_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
        DARABONBA_PTR_FROM_JSON(Step, step_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceGroups& obj) { 
          DARABONBA_PTR_TO_JSON(Available, available_);
          DARABONBA_PTR_TO_JSON(CuOptions, cuOptions_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(LeftComputeResource, leftComputeResource_);
          DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
          DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(Available, available_);
          DARABONBA_PTR_FROM_JSON(CuOptions, cuOptions_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(LeftComputeResource, leftComputeResource_);
          DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
          DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
        };
        ResourceGroups() = default ;
        ResourceGroups(const ResourceGroups &) = default ;
        ResourceGroups(ResourceGroups &&) = default ;
        ResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceGroups() = default ;
        ResourceGroups& operator=(const ResourceGroups &) = default ;
        ResourceGroups& operator=(ResourceGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->available_ == nullptr
        && this->cuOptions_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->leftComputeResource_ == nullptr && this->maxComputeResource_ == nullptr
        && this->minComputeResource_ == nullptr; };
        // available Field Functions 
        bool hasAvailable() const { return this->available_ != nullptr;};
        void deleteAvailable() { this->available_ = nullptr;};
        inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
        inline ResourceGroups& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


        // cuOptions Field Functions 
        bool hasCuOptions() const { return this->cuOptions_ != nullptr;};
        void deleteCuOptions() { this->cuOptions_ = nullptr;};
        inline const vector<int64_t> & getCuOptions() const { DARABONBA_PTR_GET_CONST(cuOptions_, vector<int64_t>) };
        inline vector<int64_t> getCuOptions() { DARABONBA_PTR_GET(cuOptions_, vector<int64_t>) };
        inline ResourceGroups& setCuOptions(const vector<int64_t> & cuOptions) { DARABONBA_PTR_SET_VALUE(cuOptions_, cuOptions) };
        inline ResourceGroups& setCuOptions(vector<int64_t> && cuOptions) { DARABONBA_PTR_SET_RVALUE(cuOptions_, cuOptions) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ResourceGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
        inline ResourceGroups& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // leftComputeResource Field Functions 
        bool hasLeftComputeResource() const { return this->leftComputeResource_ != nullptr;};
        void deleteLeftComputeResource() { this->leftComputeResource_ = nullptr;};
        inline int32_t getLeftComputeResource() const { DARABONBA_PTR_GET_DEFAULT(leftComputeResource_, 0) };
        inline ResourceGroups& setLeftComputeResource(int32_t leftComputeResource) { DARABONBA_PTR_SET_VALUE(leftComputeResource_, leftComputeResource) };


        // maxComputeResource Field Functions 
        bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
        void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
        inline int32_t getMaxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, 0) };
        inline ResourceGroups& setMaxComputeResource(int32_t maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


        // minComputeResource Field Functions 
        bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
        void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
        inline int32_t getMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, 0) };
        inline ResourceGroups& setMinComputeResource(int32_t minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


      protected:
        // Indicates whether the resource group is available. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> available_ {};
        shared_ptr<vector<int64_t>> cuOptions_ {};
        // The name of the resource group.
        shared_ptr<string> groupName_ {};
        // The type of the resource group. Valid values:
        // 
        // *   **Interactive**
        // *   **Job**
        // 
        // >  For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/428610.html).
        shared_ptr<string> groupType_ {};
        // The amount of remaining computing resources. Unit: ACUs.
        shared_ptr<int32_t> leftComputeResource_ {};
        // The maximum amount of reserved computing resources. Unit: ACUs.
        // 
        // *   If the value of GroupType is **Interactive**, the amount of reserved computing resources that are not allocated in the cluster is returned in increments of 16 ACUs.
        // *   If the value of GroupType is **Job**, the amount of reserved computing resources that are not allocated in the cluster is returned in increments of 8 ACUs.
        shared_ptr<int32_t> maxComputeResource_ {};
        // The minimum amount of reserved computing resources. Unit: ACUs.
        // 
        // *   If the value of GroupType is **Interactive**, 16 is returned.
        // *   If the value of GroupType is **Job**, 0 is returned.
        shared_ptr<int32_t> minComputeResource_ {};
      };

      virtual bool empty() const override { return this->resourceGroups_ == nullptr
        && this->step_ == nullptr; };
      // resourceGroups Field Functions 
      bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
      void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
      inline const vector<Data::ResourceGroups> & getResourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<Data::ResourceGroups>) };
      inline vector<Data::ResourceGroups> getResourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<Data::ResourceGroups>) };
      inline Data& setResourceGroups(const vector<Data::ResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
      inline Data& setResourceGroups(vector<Data::ResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


      // step Field Functions 
      bool hasStep() const { return this->step_ != nullptr;};
      void deleteStep() { this->step_ = nullptr;};
      inline int64_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
      inline Data& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    protected:
      // The queried resource groups.
      shared_ptr<vector<Data::ResourceGroups>> resourceGroups_ {};
      // The step size of resources. Unit: AnalyticDB compute units (ACUs).
      // 
      // *   If the value of GroupType is **Interactive**, 16 is returned.
      // *   If the value of GroupType is **Job**, 8 is returned.
      shared_ptr<int64_t> step_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApsResourceGroupsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApsResourceGroupsResponseBody::Data) };
    inline DescribeApsResourceGroupsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApsResourceGroupsResponseBody::Data) };
    inline DescribeApsResourceGroupsResponseBody& setData(const DescribeApsResourceGroupsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApsResourceGroupsResponseBody& setData(DescribeApsResourceGroupsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline DescribeApsResourceGroupsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApsResourceGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsResourceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApsResourceGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The queried resource groups.
    shared_ptr<DescribeApsResourceGroupsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The returned message.
    // 
    // *   If the request was successful, a success message is returned.
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
