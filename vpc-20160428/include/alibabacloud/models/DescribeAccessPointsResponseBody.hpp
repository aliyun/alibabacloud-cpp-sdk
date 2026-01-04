// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointSet, accessPointSet_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointSet, accessPointSet_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessPointsResponseBody() = default ;
    DescribeAccessPointsResponseBody(const DescribeAccessPointsResponseBody &) = default ;
    DescribeAccessPointsResponseBody(DescribeAccessPointsResponseBody &&) = default ;
    DescribeAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBody() = default ;
    DescribeAccessPointsResponseBody& operator=(const DescribeAccessPointsResponseBody &) = default ;
    DescribeAccessPointsResponseBody& operator=(DescribeAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessPointSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessPointSet& obj) { 
        DARABONBA_PTR_TO_JSON(AccessPointType, accessPointType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessPointSet& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessPointType, accessPointType_);
      };
      AccessPointSet() = default ;
      AccessPointSet(const AccessPointSet &) = default ;
      AccessPointSet(AccessPointSet &&) = default ;
      AccessPointSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessPointSet() = default ;
      AccessPointSet& operator=(const AccessPointSet &) = default ;
      AccessPointSet& operator=(AccessPointSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccessPointType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessPointType& obj) { 
          DARABONBA_PTR_TO_JSON(AccessPointFeatureModels, accessPointFeatureModels_);
          DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_TO_JSON(AttachedRegionNo, attachedRegionNo_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(HostOperator, hostOperator_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AccessPointType& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessPointFeatureModels, accessPointFeatureModels_);
          DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_FROM_JSON(AttachedRegionNo, attachedRegionNo_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(HostOperator, hostOperator_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AccessPointType() = default ;
        AccessPointType(const AccessPointType &) = default ;
        AccessPointType(AccessPointType &&) = default ;
        AccessPointType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessPointType() = default ;
        AccessPointType& operator=(const AccessPointType &) = default ;
        AccessPointType& operator=(AccessPointType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AccessPointFeatureModels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccessPointFeatureModels& obj) { 
            DARABONBA_PTR_TO_JSON(AccessPointFeatureModel, accessPointFeatureModel_);
          };
          friend void from_json(const Darabonba::Json& j, AccessPointFeatureModels& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessPointFeatureModel, accessPointFeatureModel_);
          };
          AccessPointFeatureModels() = default ;
          AccessPointFeatureModels(const AccessPointFeatureModels &) = default ;
          AccessPointFeatureModels(AccessPointFeatureModels &&) = default ;
          AccessPointFeatureModels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccessPointFeatureModels() = default ;
          AccessPointFeatureModels& operator=(const AccessPointFeatureModels &) = default ;
          AccessPointFeatureModels& operator=(AccessPointFeatureModels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AccessPointFeatureModel : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AccessPointFeatureModel& obj) { 
              DARABONBA_PTR_TO_JSON(FeatureKey, featureKey_);
              DARABONBA_PTR_TO_JSON(FeatureValue, featureValue_);
            };
            friend void from_json(const Darabonba::Json& j, AccessPointFeatureModel& obj) { 
              DARABONBA_PTR_FROM_JSON(FeatureKey, featureKey_);
              DARABONBA_PTR_FROM_JSON(FeatureValue, featureValue_);
            };
            AccessPointFeatureModel() = default ;
            AccessPointFeatureModel(const AccessPointFeatureModel &) = default ;
            AccessPointFeatureModel(AccessPointFeatureModel &&) = default ;
            AccessPointFeatureModel(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AccessPointFeatureModel() = default ;
            AccessPointFeatureModel& operator=(const AccessPointFeatureModel &) = default ;
            AccessPointFeatureModel& operator=(AccessPointFeatureModel &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->featureKey_ == nullptr
        && this->featureValue_ == nullptr; };
            // featureKey Field Functions 
            bool hasFeatureKey() const { return this->featureKey_ != nullptr;};
            void deleteFeatureKey() { this->featureKey_ = nullptr;};
            inline string getFeatureKey() const { DARABONBA_PTR_GET_DEFAULT(featureKey_, "") };
            inline AccessPointFeatureModel& setFeatureKey(string featureKey) { DARABONBA_PTR_SET_VALUE(featureKey_, featureKey) };


            // featureValue Field Functions 
            bool hasFeatureValue() const { return this->featureValue_ != nullptr;};
            void deleteFeatureValue() { this->featureValue_ = nullptr;};
            inline string getFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(featureValue_, "") };
            inline AccessPointFeatureModel& setFeatureValue(string featureValue) { DARABONBA_PTR_SET_VALUE(featureValue_, featureValue) };


          protected:
            // The feature of the access point.
            shared_ptr<string> featureKey_ {};
            // The feature value of the access point.
            shared_ptr<string> featureValue_ {};
          };

          virtual bool empty() const override { return this->accessPointFeatureModel_ == nullptr; };
          // accessPointFeatureModel Field Functions 
          bool hasAccessPointFeatureModel() const { return this->accessPointFeatureModel_ != nullptr;};
          void deleteAccessPointFeatureModel() { this->accessPointFeatureModel_ = nullptr;};
          inline const vector<AccessPointFeatureModels::AccessPointFeatureModel> & getAccessPointFeatureModel() const { DARABONBA_PTR_GET_CONST(accessPointFeatureModel_, vector<AccessPointFeatureModels::AccessPointFeatureModel>) };
          inline vector<AccessPointFeatureModels::AccessPointFeatureModel> getAccessPointFeatureModel() { DARABONBA_PTR_GET(accessPointFeatureModel_, vector<AccessPointFeatureModels::AccessPointFeatureModel>) };
          inline AccessPointFeatureModels& setAccessPointFeatureModel(const vector<AccessPointFeatureModels::AccessPointFeatureModel> & accessPointFeatureModel) { DARABONBA_PTR_SET_VALUE(accessPointFeatureModel_, accessPointFeatureModel) };
          inline AccessPointFeatureModels& setAccessPointFeatureModel(vector<AccessPointFeatureModels::AccessPointFeatureModel> && accessPointFeatureModel) { DARABONBA_PTR_SET_RVALUE(accessPointFeatureModel_, accessPointFeatureModel) };


        protected:
          shared_ptr<vector<AccessPointFeatureModels::AccessPointFeatureModel>> accessPointFeatureModel_ {};
        };

        virtual bool empty() const override { return this->accessPointFeatureModels_ == nullptr
        && this->accessPointId_ == nullptr && this->attachedRegionNo_ == nullptr && this->description_ == nullptr && this->hostOperator_ == nullptr && this->location_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // accessPointFeatureModels Field Functions 
        bool hasAccessPointFeatureModels() const { return this->accessPointFeatureModels_ != nullptr;};
        void deleteAccessPointFeatureModels() { this->accessPointFeatureModels_ = nullptr;};
        inline const AccessPointType::AccessPointFeatureModels & getAccessPointFeatureModels() const { DARABONBA_PTR_GET_CONST(accessPointFeatureModels_, AccessPointType::AccessPointFeatureModels) };
        inline AccessPointType::AccessPointFeatureModels getAccessPointFeatureModels() { DARABONBA_PTR_GET(accessPointFeatureModels_, AccessPointType::AccessPointFeatureModels) };
        inline AccessPointType& setAccessPointFeatureModels(const AccessPointType::AccessPointFeatureModels & accessPointFeatureModels) { DARABONBA_PTR_SET_VALUE(accessPointFeatureModels_, accessPointFeatureModels) };
        inline AccessPointType& setAccessPointFeatureModels(AccessPointType::AccessPointFeatureModels && accessPointFeatureModels) { DARABONBA_PTR_SET_RVALUE(accessPointFeatureModels_, accessPointFeatureModels) };


        // accessPointId Field Functions 
        bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
        void deleteAccessPointId() { this->accessPointId_ = nullptr;};
        inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
        inline AccessPointType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


        // attachedRegionNo Field Functions 
        bool hasAttachedRegionNo() const { return this->attachedRegionNo_ != nullptr;};
        void deleteAttachedRegionNo() { this->attachedRegionNo_ = nullptr;};
        inline string getAttachedRegionNo() const { DARABONBA_PTR_GET_DEFAULT(attachedRegionNo_, "") };
        inline AccessPointType& setAttachedRegionNo(string attachedRegionNo) { DARABONBA_PTR_SET_VALUE(attachedRegionNo_, attachedRegionNo) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AccessPointType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hostOperator Field Functions 
        bool hasHostOperator() const { return this->hostOperator_ != nullptr;};
        void deleteHostOperator() { this->hostOperator_ = nullptr;};
        inline string getHostOperator() const { DARABONBA_PTR_GET_DEFAULT(hostOperator_, "") };
        inline AccessPointType& setHostOperator(string hostOperator) { DARABONBA_PTR_SET_VALUE(hostOperator_, hostOperator) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline AccessPointType& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AccessPointType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AccessPointType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AccessPointType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The feature model of the access point.
        shared_ptr<AccessPointType::AccessPointFeatureModels> accessPointFeatureModels_ {};
        // The ID of the access point.
        shared_ptr<string> accessPointId_ {};
        // The region ID of the access point.
        shared_ptr<string> attachedRegionNo_ {};
        // The description of the access point.
        shared_ptr<string> description_ {};
        // The Internet service provider (ISP) of the access point. Valid values:
        shared_ptr<string> hostOperator_ {};
        // The location of the access point.
        shared_ptr<string> location_ {};
        // The name of the access point.
        shared_ptr<string> name_ {};
        // The status of the access point. Valid values:
        // 
        // *   **recommended**: The access point is ready for use.
        // *   **hot**: A large number of Express Connect circuits are connected to the access point.
        // *   **full**: The number of Express Connect circuits connected to the access point has reached the upper limit.
        // *   **disabled**: The access point is unavailable.
        shared_ptr<string> status_ {};
        // The network type of the Express Connect circuit. Default value: **VPC**.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->accessPointType_ == nullptr; };
      // accessPointType Field Functions 
      bool hasAccessPointType() const { return this->accessPointType_ != nullptr;};
      void deleteAccessPointType() { this->accessPointType_ = nullptr;};
      inline const vector<AccessPointSet::AccessPointType> & getAccessPointType() const { DARABONBA_PTR_GET_CONST(accessPointType_, vector<AccessPointSet::AccessPointType>) };
      inline vector<AccessPointSet::AccessPointType> getAccessPointType() { DARABONBA_PTR_GET(accessPointType_, vector<AccessPointSet::AccessPointType>) };
      inline AccessPointSet& setAccessPointType(const vector<AccessPointSet::AccessPointType> & accessPointType) { DARABONBA_PTR_SET_VALUE(accessPointType_, accessPointType) };
      inline AccessPointSet& setAccessPointType(vector<AccessPointSet::AccessPointType> && accessPointType) { DARABONBA_PTR_SET_RVALUE(accessPointType_, accessPointType) };


    protected:
      shared_ptr<vector<AccessPointSet::AccessPointType>> accessPointType_ {};
    };

    virtual bool empty() const override { return this->accessPointSet_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessPointSet Field Functions 
    bool hasAccessPointSet() const { return this->accessPointSet_ != nullptr;};
    void deleteAccessPointSet() { this->accessPointSet_ = nullptr;};
    inline const DescribeAccessPointsResponseBody::AccessPointSet & getAccessPointSet() const { DARABONBA_PTR_GET_CONST(accessPointSet_, DescribeAccessPointsResponseBody::AccessPointSet) };
    inline DescribeAccessPointsResponseBody::AccessPointSet getAccessPointSet() { DARABONBA_PTR_GET(accessPointSet_, DescribeAccessPointsResponseBody::AccessPointSet) };
    inline DescribeAccessPointsResponseBody& setAccessPointSet(const DescribeAccessPointsResponseBody::AccessPointSet & accessPointSet) { DARABONBA_PTR_SET_VALUE(accessPointSet_, accessPointSet) };
    inline DescribeAccessPointsResponseBody& setAccessPointSet(DescribeAccessPointsResponseBody::AccessPointSet && accessPointSet) { DARABONBA_PTR_SET_RVALUE(accessPointSet_, accessPointSet) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessPointsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessPointsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the access point.
    shared_ptr<DescribeAccessPointsResponseBody::AccessPointSet> accessPointSet_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
