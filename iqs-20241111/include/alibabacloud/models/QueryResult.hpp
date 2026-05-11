// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class QueryResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryResult() = default ;
    QueryResult(const QueryResult &) = default ;
    QueryResult(QueryResult &&) = default ;
    QueryResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResult() = default ;
    QueryResult& operator=(const QueryResult &) = default ;
    QueryResult& operator=(QueryResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(address, address_);
        DARABONBA_PTR_TO_JSON(cityCode, cityCode_);
        DARABONBA_PTR_TO_JSON(cityName, cityName_);
        DARABONBA_PTR_TO_JSON(distanceMeter, distanceMeter_);
        DARABONBA_PTR_TO_JSON(districtCode, districtCode_);
        DARABONBA_PTR_TO_JSON(districtName, districtName_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(images, images_);
        DARABONBA_PTR_TO_JSON(latitude, latitude_);
        DARABONBA_PTR_TO_JSON(longitude, longitude_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(provinceCode, provinceCode_);
        DARABONBA_PTR_TO_JSON(provinceName, provinceName_);
        DARABONBA_PTR_TO_JSON(typeCode, typeCode_);
        DARABONBA_PTR_TO_JSON(types, types_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(address, address_);
        DARABONBA_PTR_FROM_JSON(cityCode, cityCode_);
        DARABONBA_PTR_FROM_JSON(cityName, cityName_);
        DARABONBA_PTR_FROM_JSON(distanceMeter, distanceMeter_);
        DARABONBA_PTR_FROM_JSON(districtCode, districtCode_);
        DARABONBA_PTR_FROM_JSON(districtName, districtName_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(images, images_);
        DARABONBA_PTR_FROM_JSON(latitude, latitude_);
        DARABONBA_PTR_FROM_JSON(longitude, longitude_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(provinceCode, provinceCode_);
        DARABONBA_PTR_FROM_JSON(provinceName, provinceName_);
        DARABONBA_PTR_FROM_JSON(typeCode, typeCode_);
        DARABONBA_PTR_FROM_JSON(types, types_);
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
      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(averageSpend, averageSpend_);
          DARABONBA_PTR_TO_JSON(businessArea, businessArea_);
          DARABONBA_PTR_TO_JSON(dailyOpeningHours, dailyOpeningHours_);
          DARABONBA_PTR_TO_JSON(mainTag, mainTag_);
          DARABONBA_PTR_TO_JSON(phone, phone_);
          DARABONBA_PTR_TO_JSON(score, score_);
          DARABONBA_PTR_TO_JSON(weeklyOpeningDays, weeklyOpeningDays_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(averageSpend, averageSpend_);
          DARABONBA_PTR_FROM_JSON(businessArea, businessArea_);
          DARABONBA_PTR_FROM_JSON(dailyOpeningHours, dailyOpeningHours_);
          DARABONBA_PTR_FROM_JSON(mainTag, mainTag_);
          DARABONBA_PTR_FROM_JSON(phone, phone_);
          DARABONBA_PTR_FROM_JSON(score, score_);
          DARABONBA_PTR_FROM_JSON(weeklyOpeningDays, weeklyOpeningDays_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->averageSpend_ == nullptr
        && this->businessArea_ == nullptr && this->dailyOpeningHours_ == nullptr && this->mainTag_ == nullptr && this->phone_ == nullptr && this->score_ == nullptr
        && this->weeklyOpeningDays_ == nullptr; };
        // averageSpend Field Functions 
        bool hasAverageSpend() const { return this->averageSpend_ != nullptr;};
        void deleteAverageSpend() { this->averageSpend_ = nullptr;};
        inline string getAverageSpend() const { DARABONBA_PTR_GET_DEFAULT(averageSpend_, "") };
        inline Metadata& setAverageSpend(string averageSpend) { DARABONBA_PTR_SET_VALUE(averageSpend_, averageSpend) };


        // businessArea Field Functions 
        bool hasBusinessArea() const { return this->businessArea_ != nullptr;};
        void deleteBusinessArea() { this->businessArea_ = nullptr;};
        inline string getBusinessArea() const { DARABONBA_PTR_GET_DEFAULT(businessArea_, "") };
        inline Metadata& setBusinessArea(string businessArea) { DARABONBA_PTR_SET_VALUE(businessArea_, businessArea) };


        // dailyOpeningHours Field Functions 
        bool hasDailyOpeningHours() const { return this->dailyOpeningHours_ != nullptr;};
        void deleteDailyOpeningHours() { this->dailyOpeningHours_ = nullptr;};
        inline string getDailyOpeningHours() const { DARABONBA_PTR_GET_DEFAULT(dailyOpeningHours_, "") };
        inline Metadata& setDailyOpeningHours(string dailyOpeningHours) { DARABONBA_PTR_SET_VALUE(dailyOpeningHours_, dailyOpeningHours) };


        // mainTag Field Functions 
        bool hasMainTag() const { return this->mainTag_ != nullptr;};
        void deleteMainTag() { this->mainTag_ = nullptr;};
        inline string getMainTag() const { DARABONBA_PTR_GET_DEFAULT(mainTag_, "") };
        inline Metadata& setMainTag(string mainTag) { DARABONBA_PTR_SET_VALUE(mainTag_, mainTag) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline Metadata& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline Metadata& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // weeklyOpeningDays Field Functions 
        bool hasWeeklyOpeningDays() const { return this->weeklyOpeningDays_ != nullptr;};
        void deleteWeeklyOpeningDays() { this->weeklyOpeningDays_ = nullptr;};
        inline string getWeeklyOpeningDays() const { DARABONBA_PTR_GET_DEFAULT(weeklyOpeningDays_, "") };
        inline Metadata& setWeeklyOpeningDays(string weeklyOpeningDays) { DARABONBA_PTR_SET_VALUE(weeklyOpeningDays_, weeklyOpeningDays) };


      protected:
        shared_ptr<string> averageSpend_ {};
        shared_ptr<string> businessArea_ {};
        shared_ptr<string> dailyOpeningHours_ {};
        shared_ptr<string> mainTag_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<string> score_ {};
        shared_ptr<string> weeklyOpeningDays_ {};
      };

      class Images : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Images& obj) { 
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Images& obj) { 
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Images() = default ;
        Images(const Images &) = default ;
        Images(Images &&) = default ;
        Images(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Images() = default ;
        Images& operator=(const Images &) = default ;
        Images& operator=(Images &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->title_ == nullptr
        && this->url_ == nullptr; };
        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Images& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Images& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> title_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->distanceMeter_ == nullptr && this->districtCode_ == nullptr && this->districtName_ == nullptr
        && this->id_ == nullptr && this->images_ == nullptr && this->latitude_ == nullptr && this->longitude_ == nullptr && this->metadata_ == nullptr
        && this->name_ == nullptr && this->provinceCode_ == nullptr && this->provinceName_ == nullptr && this->typeCode_ == nullptr && this->types_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Data& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // cityCode Field Functions 
      bool hasCityCode() const { return this->cityCode_ != nullptr;};
      void deleteCityCode() { this->cityCode_ = nullptr;};
      inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
      inline Data& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


      // cityName Field Functions 
      bool hasCityName() const { return this->cityName_ != nullptr;};
      void deleteCityName() { this->cityName_ = nullptr;};
      inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
      inline Data& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


      // distanceMeter Field Functions 
      bool hasDistanceMeter() const { return this->distanceMeter_ != nullptr;};
      void deleteDistanceMeter() { this->distanceMeter_ = nullptr;};
      inline string getDistanceMeter() const { DARABONBA_PTR_GET_DEFAULT(distanceMeter_, "") };
      inline Data& setDistanceMeter(string distanceMeter) { DARABONBA_PTR_SET_VALUE(distanceMeter_, distanceMeter) };


      // districtCode Field Functions 
      bool hasDistrictCode() const { return this->districtCode_ != nullptr;};
      void deleteDistrictCode() { this->districtCode_ = nullptr;};
      inline string getDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(districtCode_, "") };
      inline Data& setDistrictCode(string districtCode) { DARABONBA_PTR_SET_VALUE(districtCode_, districtCode) };


      // districtName Field Functions 
      bool hasDistrictName() const { return this->districtName_ != nullptr;};
      void deleteDistrictName() { this->districtName_ = nullptr;};
      inline string getDistrictName() const { DARABONBA_PTR_GET_DEFAULT(districtName_, "") };
      inline Data& setDistrictName(string districtName) { DARABONBA_PTR_SET_VALUE(districtName_, districtName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<Data::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<Data::Images>) };
      inline vector<Data::Images> getImages() { DARABONBA_PTR_GET(images_, vector<Data::Images>) };
      inline Data& setImages(const vector<Data::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline Data& setImages(vector<Data::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // latitude Field Functions 
      bool hasLatitude() const { return this->latitude_ != nullptr;};
      void deleteLatitude() { this->latitude_ = nullptr;};
      inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
      inline Data& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


      // longitude Field Functions 
      bool hasLongitude() const { return this->longitude_ != nullptr;};
      void deleteLongitude() { this->longitude_ = nullptr;};
      inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
      inline Data& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Data::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Data::Metadata) };
      inline Data::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Data::Metadata) };
      inline Data& setMetadata(const Data::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Data::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // provinceCode Field Functions 
      bool hasProvinceCode() const { return this->provinceCode_ != nullptr;};
      void deleteProvinceCode() { this->provinceCode_ = nullptr;};
      inline string getProvinceCode() const { DARABONBA_PTR_GET_DEFAULT(provinceCode_, "") };
      inline Data& setProvinceCode(string provinceCode) { DARABONBA_PTR_SET_VALUE(provinceCode_, provinceCode) };


      // provinceName Field Functions 
      bool hasProvinceName() const { return this->provinceName_ != nullptr;};
      void deleteProvinceName() { this->provinceName_ = nullptr;};
      inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
      inline Data& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


      // typeCode Field Functions 
      bool hasTypeCode() const { return this->typeCode_ != nullptr;};
      void deleteTypeCode() { this->typeCode_ = nullptr;};
      inline string getTypeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
      inline Data& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


      // types Field Functions 
      bool hasTypes() const { return this->types_ != nullptr;};
      void deleteTypes() { this->types_ = nullptr;};
      inline string getTypes() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
      inline Data& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


    protected:
      shared_ptr<string> address_ {};
      shared_ptr<string> cityCode_ {};
      shared_ptr<string> cityName_ {};
      shared_ptr<string> distanceMeter_ {};
      shared_ptr<string> districtCode_ {};
      shared_ptr<string> districtName_ {};
      shared_ptr<string> id_ {};
      shared_ptr<vector<Data::Images>> images_ {};
      shared_ptr<string> latitude_ {};
      shared_ptr<string> longitude_ {};
      shared_ptr<Data::Metadata> metadata_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> provinceCode_ {};
      shared_ptr<string> provinceName_ {};
      shared_ptr<string> typeCode_ {};
      shared_ptr<string> types_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryResult::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryResult::Data>) };
    inline vector<QueryResult::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryResult::Data>) };
    inline QueryResult& setData(const vector<QueryResult::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryResult& setData(vector<QueryResult::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryResult::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
