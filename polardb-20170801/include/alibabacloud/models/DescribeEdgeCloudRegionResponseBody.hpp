// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGECLOUDREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGECLOUDREGIONRESPONSEBODY_HPP_
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
  class DescribeEdgeCloudRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeCloudRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeCloudRegions, edgeCloudRegions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeCloudRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeCloudRegions, edgeCloudRegions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEdgeCloudRegionResponseBody() = default ;
    DescribeEdgeCloudRegionResponseBody(const DescribeEdgeCloudRegionResponseBody &) = default ;
    DescribeEdgeCloudRegionResponseBody(DescribeEdgeCloudRegionResponseBody &&) = default ;
    DescribeEdgeCloudRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeCloudRegionResponseBody() = default ;
    DescribeEdgeCloudRegionResponseBody& operator=(const DescribeEdgeCloudRegionResponseBody &) = default ;
    DescribeEdgeCloudRegionResponseBody& operator=(DescribeEdgeCloudRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EdgeCloudRegions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EdgeCloudRegions& obj) { 
        DARABONBA_PTR_TO_JSON(CentralControlRegionId, centralControlRegionId_);
        DARABONBA_PTR_TO_JSON(EdgeCloudRegionId, edgeCloudRegionId_);
        DARABONBA_PTR_TO_JSON(EdgeCloudRegionName, edgeCloudRegionName_);
        DARABONBA_PTR_TO_JSON(StandbyEdgeCloudRegionList, standbyEdgeCloudRegionList_);
      };
      friend void from_json(const Darabonba::Json& j, EdgeCloudRegions& obj) { 
        DARABONBA_PTR_FROM_JSON(CentralControlRegionId, centralControlRegionId_);
        DARABONBA_PTR_FROM_JSON(EdgeCloudRegionId, edgeCloudRegionId_);
        DARABONBA_PTR_FROM_JSON(EdgeCloudRegionName, edgeCloudRegionName_);
        DARABONBA_PTR_FROM_JSON(StandbyEdgeCloudRegionList, standbyEdgeCloudRegionList_);
      };
      EdgeCloudRegions() = default ;
      EdgeCloudRegions(const EdgeCloudRegions &) = default ;
      EdgeCloudRegions(EdgeCloudRegions &&) = default ;
      EdgeCloudRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EdgeCloudRegions() = default ;
      EdgeCloudRegions& operator=(const EdgeCloudRegions &) = default ;
      EdgeCloudRegions& operator=(EdgeCloudRegions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StandbyEdgeCloudRegionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandbyEdgeCloudRegionList& obj) { 
          DARABONBA_PTR_TO_JSON(StandbyEdgeCloudRegionId, standbyEdgeCloudRegionId_);
          DARABONBA_PTR_TO_JSON(StandbyEdgeCloudRegionName, standbyEdgeCloudRegionName_);
        };
        friend void from_json(const Darabonba::Json& j, StandbyEdgeCloudRegionList& obj) { 
          DARABONBA_PTR_FROM_JSON(StandbyEdgeCloudRegionId, standbyEdgeCloudRegionId_);
          DARABONBA_PTR_FROM_JSON(StandbyEdgeCloudRegionName, standbyEdgeCloudRegionName_);
        };
        StandbyEdgeCloudRegionList() = default ;
        StandbyEdgeCloudRegionList(const StandbyEdgeCloudRegionList &) = default ;
        StandbyEdgeCloudRegionList(StandbyEdgeCloudRegionList &&) = default ;
        StandbyEdgeCloudRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandbyEdgeCloudRegionList() = default ;
        StandbyEdgeCloudRegionList& operator=(const StandbyEdgeCloudRegionList &) = default ;
        StandbyEdgeCloudRegionList& operator=(StandbyEdgeCloudRegionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->standbyEdgeCloudRegionId_ == nullptr
        && this->standbyEdgeCloudRegionName_ == nullptr; };
        // standbyEdgeCloudRegionId Field Functions 
        bool hasStandbyEdgeCloudRegionId() const { return this->standbyEdgeCloudRegionId_ != nullptr;};
        void deleteStandbyEdgeCloudRegionId() { this->standbyEdgeCloudRegionId_ = nullptr;};
        inline string getStandbyEdgeCloudRegionId() const { DARABONBA_PTR_GET_DEFAULT(standbyEdgeCloudRegionId_, "") };
        inline StandbyEdgeCloudRegionList& setStandbyEdgeCloudRegionId(string standbyEdgeCloudRegionId) { DARABONBA_PTR_SET_VALUE(standbyEdgeCloudRegionId_, standbyEdgeCloudRegionId) };


        // standbyEdgeCloudRegionName Field Functions 
        bool hasStandbyEdgeCloudRegionName() const { return this->standbyEdgeCloudRegionName_ != nullptr;};
        void deleteStandbyEdgeCloudRegionName() { this->standbyEdgeCloudRegionName_ = nullptr;};
        inline string getStandbyEdgeCloudRegionName() const { DARABONBA_PTR_GET_DEFAULT(standbyEdgeCloudRegionName_, "") };
        inline StandbyEdgeCloudRegionList& setStandbyEdgeCloudRegionName(string standbyEdgeCloudRegionName) { DARABONBA_PTR_SET_VALUE(standbyEdgeCloudRegionName_, standbyEdgeCloudRegionName) };


      protected:
        // The ID of the standby edge cloud region.
        shared_ptr<string> standbyEdgeCloudRegionId_ {};
        // The name of the standby edge cloud region.
        shared_ptr<string> standbyEdgeCloudRegionName_ {};
      };

      virtual bool empty() const override { return this->centralControlRegionId_ == nullptr
        && this->edgeCloudRegionId_ == nullptr && this->edgeCloudRegionName_ == nullptr && this->standbyEdgeCloudRegionList_ == nullptr; };
      // centralControlRegionId Field Functions 
      bool hasCentralControlRegionId() const { return this->centralControlRegionId_ != nullptr;};
      void deleteCentralControlRegionId() { this->centralControlRegionId_ = nullptr;};
      inline string getCentralControlRegionId() const { DARABONBA_PTR_GET_DEFAULT(centralControlRegionId_, "") };
      inline EdgeCloudRegions& setCentralControlRegionId(string centralControlRegionId) { DARABONBA_PTR_SET_VALUE(centralControlRegionId_, centralControlRegionId) };


      // edgeCloudRegionId Field Functions 
      bool hasEdgeCloudRegionId() const { return this->edgeCloudRegionId_ != nullptr;};
      void deleteEdgeCloudRegionId() { this->edgeCloudRegionId_ = nullptr;};
      inline string getEdgeCloudRegionId() const { DARABONBA_PTR_GET_DEFAULT(edgeCloudRegionId_, "") };
      inline EdgeCloudRegions& setEdgeCloudRegionId(string edgeCloudRegionId) { DARABONBA_PTR_SET_VALUE(edgeCloudRegionId_, edgeCloudRegionId) };


      // edgeCloudRegionName Field Functions 
      bool hasEdgeCloudRegionName() const { return this->edgeCloudRegionName_ != nullptr;};
      void deleteEdgeCloudRegionName() { this->edgeCloudRegionName_ = nullptr;};
      inline string getEdgeCloudRegionName() const { DARABONBA_PTR_GET_DEFAULT(edgeCloudRegionName_, "") };
      inline EdgeCloudRegions& setEdgeCloudRegionName(string edgeCloudRegionName) { DARABONBA_PTR_SET_VALUE(edgeCloudRegionName_, edgeCloudRegionName) };


      // standbyEdgeCloudRegionList Field Functions 
      bool hasStandbyEdgeCloudRegionList() const { return this->standbyEdgeCloudRegionList_ != nullptr;};
      void deleteStandbyEdgeCloudRegionList() { this->standbyEdgeCloudRegionList_ = nullptr;};
      inline const vector<EdgeCloudRegions::StandbyEdgeCloudRegionList> & getStandbyEdgeCloudRegionList() const { DARABONBA_PTR_GET_CONST(standbyEdgeCloudRegionList_, vector<EdgeCloudRegions::StandbyEdgeCloudRegionList>) };
      inline vector<EdgeCloudRegions::StandbyEdgeCloudRegionList> getStandbyEdgeCloudRegionList() { DARABONBA_PTR_GET(standbyEdgeCloudRegionList_, vector<EdgeCloudRegions::StandbyEdgeCloudRegionList>) };
      inline EdgeCloudRegions& setStandbyEdgeCloudRegionList(const vector<EdgeCloudRegions::StandbyEdgeCloudRegionList> & standbyEdgeCloudRegionList) { DARABONBA_PTR_SET_VALUE(standbyEdgeCloudRegionList_, standbyEdgeCloudRegionList) };
      inline EdgeCloudRegions& setStandbyEdgeCloudRegionList(vector<EdgeCloudRegions::StandbyEdgeCloudRegionList> && standbyEdgeCloudRegionList) { DARABONBA_PTR_SET_RVALUE(standbyEdgeCloudRegionList_, standbyEdgeCloudRegionList) };


    protected:
      // The ID of the central control region corresponding to the edge cloud region.
      shared_ptr<string> centralControlRegionId_ {};
      // The ID of the edge cloud region.
      shared_ptr<string> edgeCloudRegionId_ {};
      // The name of the edge cloud region.
      shared_ptr<string> edgeCloudRegionName_ {};
      // The list of standby edge cloud regions.
      shared_ptr<vector<EdgeCloudRegions::StandbyEdgeCloudRegionList>> standbyEdgeCloudRegionList_ {};
    };

    virtual bool empty() const override { return this->edgeCloudRegions_ == nullptr
        && this->requestId_ == nullptr; };
    // edgeCloudRegions Field Functions 
    bool hasEdgeCloudRegions() const { return this->edgeCloudRegions_ != nullptr;};
    void deleteEdgeCloudRegions() { this->edgeCloudRegions_ = nullptr;};
    inline const vector<DescribeEdgeCloudRegionResponseBody::EdgeCloudRegions> & getEdgeCloudRegions() const { DARABONBA_PTR_GET_CONST(edgeCloudRegions_, vector<DescribeEdgeCloudRegionResponseBody::EdgeCloudRegions>) };
    inline vector<DescribeEdgeCloudRegionResponseBody::EdgeCloudRegions> getEdgeCloudRegions() { DARABONBA_PTR_GET(edgeCloudRegions_, vector<DescribeEdgeCloudRegionResponseBody::EdgeCloudRegions>) };
    inline DescribeEdgeCloudRegionResponseBody& setEdgeCloudRegions(const vector<DescribeEdgeCloudRegionResponseBody::EdgeCloudRegions> & edgeCloudRegions) { DARABONBA_PTR_SET_VALUE(edgeCloudRegions_, edgeCloudRegions) };
    inline DescribeEdgeCloudRegionResponseBody& setEdgeCloudRegions(vector<DescribeEdgeCloudRegionResponseBody::EdgeCloudRegions> && edgeCloudRegions) { DARABONBA_PTR_SET_RVALUE(edgeCloudRegions_, edgeCloudRegions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEdgeCloudRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of available edge cloud regions. When a whitelist is configured, only the regions available to the current account are returned.
    shared_ptr<vector<DescribeEdgeCloudRegionResponseBody::EdgeCloudRegions>> edgeCloudRegions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
