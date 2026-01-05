// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONRESPONSEBODY_HPP_
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
  class DescribeCrossCloudRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrossCloudRegionList, crossCloudRegionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossCloudRegionList, crossCloudRegionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCrossCloudRegionResponseBody() = default ;
    DescribeCrossCloudRegionResponseBody(const DescribeCrossCloudRegionResponseBody &) = default ;
    DescribeCrossCloudRegionResponseBody(DescribeCrossCloudRegionResponseBody &&) = default ;
    DescribeCrossCloudRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudRegionResponseBody() = default ;
    DescribeCrossCloudRegionResponseBody& operator=(const DescribeCrossCloudRegionResponseBody &) = default ;
    DescribeCrossCloudRegionResponseBody& operator=(DescribeCrossCloudRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CrossCloudRegionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CrossCloudRegionList& obj) { 
        DARABONBA_PTR_TO_JSON(CrossCloudRegionId, crossCloudRegionId_);
        DARABONBA_PTR_TO_JSON(CrossCloudRegionName, crossCloudRegionName_);
        DARABONBA_PTR_TO_JSON(CrossCloudZoneList, crossCloudZoneList_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, CrossCloudRegionList& obj) { 
        DARABONBA_PTR_FROM_JSON(CrossCloudRegionId, crossCloudRegionId_);
        DARABONBA_PTR_FROM_JSON(CrossCloudRegionName, crossCloudRegionName_);
        DARABONBA_PTR_FROM_JSON(CrossCloudZoneList, crossCloudZoneList_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      CrossCloudRegionList() = default ;
      CrossCloudRegionList(const CrossCloudRegionList &) = default ;
      CrossCloudRegionList(CrossCloudRegionList &&) = default ;
      CrossCloudRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CrossCloudRegionList() = default ;
      CrossCloudRegionList& operator=(const CrossCloudRegionList &) = default ;
      CrossCloudRegionList& operator=(CrossCloudRegionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CrossCloudZoneList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CrossCloudZoneList& obj) { 
          DARABONBA_PTR_TO_JSON(CrossCloudZoneId, crossCloudZoneId_);
          DARABONBA_PTR_TO_JSON(CrossCloudZoneName, crossCloudZoneName_);
        };
        friend void from_json(const Darabonba::Json& j, CrossCloudZoneList& obj) { 
          DARABONBA_PTR_FROM_JSON(CrossCloudZoneId, crossCloudZoneId_);
          DARABONBA_PTR_FROM_JSON(CrossCloudZoneName, crossCloudZoneName_);
        };
        CrossCloudZoneList() = default ;
        CrossCloudZoneList(const CrossCloudZoneList &) = default ;
        CrossCloudZoneList(CrossCloudZoneList &&) = default ;
        CrossCloudZoneList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CrossCloudZoneList() = default ;
        CrossCloudZoneList& operator=(const CrossCloudZoneList &) = default ;
        CrossCloudZoneList& operator=(CrossCloudZoneList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->crossCloudZoneId_ == nullptr
        && this->crossCloudZoneName_ == nullptr; };
        // crossCloudZoneId Field Functions 
        bool hasCrossCloudZoneId() const { return this->crossCloudZoneId_ != nullptr;};
        void deleteCrossCloudZoneId() { this->crossCloudZoneId_ = nullptr;};
        inline string getCrossCloudZoneId() const { DARABONBA_PTR_GET_DEFAULT(crossCloudZoneId_, "") };
        inline CrossCloudZoneList& setCrossCloudZoneId(string crossCloudZoneId) { DARABONBA_PTR_SET_VALUE(crossCloudZoneId_, crossCloudZoneId) };


        // crossCloudZoneName Field Functions 
        bool hasCrossCloudZoneName() const { return this->crossCloudZoneName_ != nullptr;};
        void deleteCrossCloudZoneName() { this->crossCloudZoneName_ = nullptr;};
        inline string getCrossCloudZoneName() const { DARABONBA_PTR_GET_DEFAULT(crossCloudZoneName_, "") };
        inline CrossCloudZoneList& setCrossCloudZoneName(string crossCloudZoneName) { DARABONBA_PTR_SET_VALUE(crossCloudZoneName_, crossCloudZoneName) };


      protected:
        shared_ptr<string> crossCloudZoneId_ {};
        shared_ptr<string> crossCloudZoneName_ {};
      };

      virtual bool empty() const override { return this->crossCloudRegionId_ == nullptr
        && this->crossCloudRegionName_ == nullptr && this->crossCloudZoneList_ == nullptr && this->projectId_ == nullptr; };
      // crossCloudRegionId Field Functions 
      bool hasCrossCloudRegionId() const { return this->crossCloudRegionId_ != nullptr;};
      void deleteCrossCloudRegionId() { this->crossCloudRegionId_ = nullptr;};
      inline string getCrossCloudRegionId() const { DARABONBA_PTR_GET_DEFAULT(crossCloudRegionId_, "") };
      inline CrossCloudRegionList& setCrossCloudRegionId(string crossCloudRegionId) { DARABONBA_PTR_SET_VALUE(crossCloudRegionId_, crossCloudRegionId) };


      // crossCloudRegionName Field Functions 
      bool hasCrossCloudRegionName() const { return this->crossCloudRegionName_ != nullptr;};
      void deleteCrossCloudRegionName() { this->crossCloudRegionName_ = nullptr;};
      inline string getCrossCloudRegionName() const { DARABONBA_PTR_GET_DEFAULT(crossCloudRegionName_, "") };
      inline CrossCloudRegionList& setCrossCloudRegionName(string crossCloudRegionName) { DARABONBA_PTR_SET_VALUE(crossCloudRegionName_, crossCloudRegionName) };


      // crossCloudZoneList Field Functions 
      bool hasCrossCloudZoneList() const { return this->crossCloudZoneList_ != nullptr;};
      void deleteCrossCloudZoneList() { this->crossCloudZoneList_ = nullptr;};
      inline const vector<CrossCloudRegionList::CrossCloudZoneList> & getCrossCloudZoneList() const { DARABONBA_PTR_GET_CONST(crossCloudZoneList_, vector<CrossCloudRegionList::CrossCloudZoneList>) };
      inline vector<CrossCloudRegionList::CrossCloudZoneList> getCrossCloudZoneList() { DARABONBA_PTR_GET(crossCloudZoneList_, vector<CrossCloudRegionList::CrossCloudZoneList>) };
      inline CrossCloudRegionList& setCrossCloudZoneList(const vector<CrossCloudRegionList::CrossCloudZoneList> & crossCloudZoneList) { DARABONBA_PTR_SET_VALUE(crossCloudZoneList_, crossCloudZoneList) };
      inline CrossCloudRegionList& setCrossCloudZoneList(vector<CrossCloudRegionList::CrossCloudZoneList> && crossCloudZoneList) { DARABONBA_PTR_SET_RVALUE(crossCloudZoneList_, crossCloudZoneList) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline CrossCloudRegionList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      shared_ptr<string> crossCloudRegionId_ {};
      shared_ptr<string> crossCloudRegionName_ {};
      shared_ptr<vector<CrossCloudRegionList::CrossCloudZoneList>> crossCloudZoneList_ {};
      shared_ptr<string> projectId_ {};
    };

    virtual bool empty() const override { return this->crossCloudRegionList_ == nullptr
        && this->requestId_ == nullptr; };
    // crossCloudRegionList Field Functions 
    bool hasCrossCloudRegionList() const { return this->crossCloudRegionList_ != nullptr;};
    void deleteCrossCloudRegionList() { this->crossCloudRegionList_ = nullptr;};
    inline const vector<DescribeCrossCloudRegionResponseBody::CrossCloudRegionList> & getCrossCloudRegionList() const { DARABONBA_PTR_GET_CONST(crossCloudRegionList_, vector<DescribeCrossCloudRegionResponseBody::CrossCloudRegionList>) };
    inline vector<DescribeCrossCloudRegionResponseBody::CrossCloudRegionList> getCrossCloudRegionList() { DARABONBA_PTR_GET(crossCloudRegionList_, vector<DescribeCrossCloudRegionResponseBody::CrossCloudRegionList>) };
    inline DescribeCrossCloudRegionResponseBody& setCrossCloudRegionList(const vector<DescribeCrossCloudRegionResponseBody::CrossCloudRegionList> & crossCloudRegionList) { DARABONBA_PTR_SET_VALUE(crossCloudRegionList_, crossCloudRegionList) };
    inline DescribeCrossCloudRegionResponseBody& setCrossCloudRegionList(vector<DescribeCrossCloudRegionResponseBody::CrossCloudRegionList> && crossCloudRegionList) { DARABONBA_PTR_SET_RVALUE(crossCloudRegionList_, crossCloudRegionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossCloudRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCrossCloudRegionResponseBody::CrossCloudRegionList>> crossCloudRegionList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
