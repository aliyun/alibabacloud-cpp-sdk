// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenGeographicSpansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenGeographicSpansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GeographicSpanModels, geographicSpanModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenGeographicSpansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GeographicSpanModels, geographicSpanModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenGeographicSpansResponseBody() = default ;
    DescribeCenGeographicSpansResponseBody(const DescribeCenGeographicSpansResponseBody &) = default ;
    DescribeCenGeographicSpansResponseBody(DescribeCenGeographicSpansResponseBody &&) = default ;
    DescribeCenGeographicSpansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenGeographicSpansResponseBody() = default ;
    DescribeCenGeographicSpansResponseBody& operator=(const DescribeCenGeographicSpansResponseBody &) = default ;
    DescribeCenGeographicSpansResponseBody& operator=(DescribeCenGeographicSpansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GeographicSpanModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GeographicSpanModels& obj) { 
        DARABONBA_PTR_TO_JSON(GeographicSpanModel, geographicSpanModel_);
      };
      friend void from_json(const Darabonba::Json& j, GeographicSpanModels& obj) { 
        DARABONBA_PTR_FROM_JSON(GeographicSpanModel, geographicSpanModel_);
      };
      GeographicSpanModels() = default ;
      GeographicSpanModels(const GeographicSpanModels &) = default ;
      GeographicSpanModels(GeographicSpanModels &&) = default ;
      GeographicSpanModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GeographicSpanModels() = default ;
      GeographicSpanModels& operator=(const GeographicSpanModels &) = default ;
      GeographicSpanModels& operator=(GeographicSpanModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GeographicSpanModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GeographicSpanModel& obj) { 
          DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
          DARABONBA_PTR_TO_JSON(LocalGeoRegionId, localGeoRegionId_);
          DARABONBA_PTR_TO_JSON(OppositeGeoRegionId, oppositeGeoRegionId_);
        };
        friend void from_json(const Darabonba::Json& j, GeographicSpanModel& obj) { 
          DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
          DARABONBA_PTR_FROM_JSON(LocalGeoRegionId, localGeoRegionId_);
          DARABONBA_PTR_FROM_JSON(OppositeGeoRegionId, oppositeGeoRegionId_);
        };
        GeographicSpanModel() = default ;
        GeographicSpanModel(const GeographicSpanModel &) = default ;
        GeographicSpanModel(GeographicSpanModel &&) = default ;
        GeographicSpanModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GeographicSpanModel() = default ;
        GeographicSpanModel& operator=(const GeographicSpanModel &) = default ;
        GeographicSpanModel& operator=(GeographicSpanModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->geographicSpanId_ == nullptr
        && this->localGeoRegionId_ == nullptr && this->oppositeGeoRegionId_ == nullptr; };
        // geographicSpanId Field Functions 
        bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
        void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
        inline string getGeographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
        inline GeographicSpanModel& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


        // localGeoRegionId Field Functions 
        bool hasLocalGeoRegionId() const { return this->localGeoRegionId_ != nullptr;};
        void deleteLocalGeoRegionId() { this->localGeoRegionId_ = nullptr;};
        inline string getLocalGeoRegionId() const { DARABONBA_PTR_GET_DEFAULT(localGeoRegionId_, "") };
        inline GeographicSpanModel& setLocalGeoRegionId(string localGeoRegionId) { DARABONBA_PTR_SET_VALUE(localGeoRegionId_, localGeoRegionId) };


        // oppositeGeoRegionId Field Functions 
        bool hasOppositeGeoRegionId() const { return this->oppositeGeoRegionId_ != nullptr;};
        void deleteOppositeGeoRegionId() { this->oppositeGeoRegionId_ = nullptr;};
        inline string getOppositeGeoRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeGeoRegionId_, "") };
        inline GeographicSpanModel& setOppositeGeoRegionId(string oppositeGeoRegionId) { DARABONBA_PTR_SET_VALUE(oppositeGeoRegionId_, oppositeGeoRegionId) };


      protected:
        // The ID of the pair of connected areas.
        shared_ptr<string> geographicSpanId_ {};
        // The ID of the local area.
        shared_ptr<string> localGeoRegionId_ {};
        // The ID of the peer area.
        shared_ptr<string> oppositeGeoRegionId_ {};
      };

      virtual bool empty() const override { return this->geographicSpanModel_ == nullptr; };
      // geographicSpanModel Field Functions 
      bool hasGeographicSpanModel() const { return this->geographicSpanModel_ != nullptr;};
      void deleteGeographicSpanModel() { this->geographicSpanModel_ = nullptr;};
      inline const vector<GeographicSpanModels::GeographicSpanModel> & getGeographicSpanModel() const { DARABONBA_PTR_GET_CONST(geographicSpanModel_, vector<GeographicSpanModels::GeographicSpanModel>) };
      inline vector<GeographicSpanModels::GeographicSpanModel> getGeographicSpanModel() { DARABONBA_PTR_GET(geographicSpanModel_, vector<GeographicSpanModels::GeographicSpanModel>) };
      inline GeographicSpanModels& setGeographicSpanModel(const vector<GeographicSpanModels::GeographicSpanModel> & geographicSpanModel) { DARABONBA_PTR_SET_VALUE(geographicSpanModel_, geographicSpanModel) };
      inline GeographicSpanModels& setGeographicSpanModel(vector<GeographicSpanModels::GeographicSpanModel> && geographicSpanModel) { DARABONBA_PTR_SET_RVALUE(geographicSpanModel_, geographicSpanModel) };


    protected:
      shared_ptr<vector<GeographicSpanModels::GeographicSpanModel>> geographicSpanModel_ {};
    };

    virtual bool empty() const override { return this->geographicSpanModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // geographicSpanModels Field Functions 
    bool hasGeographicSpanModels() const { return this->geographicSpanModels_ != nullptr;};
    void deleteGeographicSpanModels() { this->geographicSpanModels_ = nullptr;};
    inline const DescribeCenGeographicSpansResponseBody::GeographicSpanModels & getGeographicSpanModels() const { DARABONBA_PTR_GET_CONST(geographicSpanModels_, DescribeCenGeographicSpansResponseBody::GeographicSpanModels) };
    inline DescribeCenGeographicSpansResponseBody::GeographicSpanModels getGeographicSpanModels() { DARABONBA_PTR_GET(geographicSpanModels_, DescribeCenGeographicSpansResponseBody::GeographicSpanModels) };
    inline DescribeCenGeographicSpansResponseBody& setGeographicSpanModels(const DescribeCenGeographicSpansResponseBody::GeographicSpanModels & geographicSpanModels) { DARABONBA_PTR_SET_VALUE(geographicSpanModels_, geographicSpanModels) };
    inline DescribeCenGeographicSpansResponseBody& setGeographicSpanModels(DescribeCenGeographicSpansResponseBody::GeographicSpanModels && geographicSpanModels) { DARABONBA_PTR_SET_RVALUE(geographicSpanModels_, geographicSpanModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenGeographicSpansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenGeographicSpansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenGeographicSpansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenGeographicSpansResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of areas.
    shared_ptr<DescribeCenGeographicSpansResponseBody::GeographicSpanModels> geographicSpanModels_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
