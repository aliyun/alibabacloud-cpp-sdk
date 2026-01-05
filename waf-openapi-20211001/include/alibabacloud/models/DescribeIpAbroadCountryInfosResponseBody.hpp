// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeIpAbroadCountryInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpAbroadCountryInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbroadInfos, abroadInfos_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpAbroadCountryInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbroadInfos, abroadInfos_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpAbroadCountryInfosResponseBody() = default ;
    DescribeIpAbroadCountryInfosResponseBody(const DescribeIpAbroadCountryInfosResponseBody &) = default ;
    DescribeIpAbroadCountryInfosResponseBody(DescribeIpAbroadCountryInfosResponseBody &&) = default ;
    DescribeIpAbroadCountryInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpAbroadCountryInfosResponseBody() = default ;
    DescribeIpAbroadCountryInfosResponseBody& operator=(const DescribeIpAbroadCountryInfosResponseBody &) = default ;
    DescribeIpAbroadCountryInfosResponseBody& operator=(DescribeIpAbroadCountryInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AbroadInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AbroadInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Continent, continent_);
        DARABONBA_PTR_TO_JSON(Country, country_);
        DARABONBA_PTR_TO_JSON(CountryName, countryName_);
        DARABONBA_PTR_TO_JSON(Regions, regions_);
      };
      friend void from_json(const Darabonba::Json& j, AbroadInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Continent, continent_);
        DARABONBA_PTR_FROM_JSON(Country, country_);
        DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
        DARABONBA_PTR_FROM_JSON(Regions, regions_);
      };
      AbroadInfos() = default ;
      AbroadInfos(const AbroadInfos &) = default ;
      AbroadInfos(AbroadInfos &&) = default ;
      AbroadInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AbroadInfos() = default ;
      AbroadInfos& operator=(const AbroadInfos &) = default ;
      AbroadInfos& operator=(AbroadInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Regions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Regions& obj) { 
          DARABONBA_PTR_TO_JSON(AbroadRegionId, abroadRegionId_);
          DARABONBA_PTR_TO_JSON(AbroadRegionName, abroadRegionName_);
        };
        friend void from_json(const Darabonba::Json& j, Regions& obj) { 
          DARABONBA_PTR_FROM_JSON(AbroadRegionId, abroadRegionId_);
          DARABONBA_PTR_FROM_JSON(AbroadRegionName, abroadRegionName_);
        };
        Regions() = default ;
        Regions(const Regions &) = default ;
        Regions(Regions &&) = default ;
        Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Regions() = default ;
        Regions& operator=(const Regions &) = default ;
        Regions& operator=(Regions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->abroadRegionId_ == nullptr
        && this->abroadRegionName_ == nullptr; };
        // abroadRegionId Field Functions 
        bool hasAbroadRegionId() const { return this->abroadRegionId_ != nullptr;};
        void deleteAbroadRegionId() { this->abroadRegionId_ = nullptr;};
        inline string getAbroadRegionId() const { DARABONBA_PTR_GET_DEFAULT(abroadRegionId_, "") };
        inline Regions& setAbroadRegionId(string abroadRegionId) { DARABONBA_PTR_SET_VALUE(abroadRegionId_, abroadRegionId) };


        // abroadRegionName Field Functions 
        bool hasAbroadRegionName() const { return this->abroadRegionName_ != nullptr;};
        void deleteAbroadRegionName() { this->abroadRegionName_ = nullptr;};
        inline string getAbroadRegionName() const { DARABONBA_PTR_GET_DEFAULT(abroadRegionName_, "") };
        inline Regions& setAbroadRegionName(string abroadRegionName) { DARABONBA_PTR_SET_VALUE(abroadRegionName_, abroadRegionName) };


      protected:
        shared_ptr<string> abroadRegionId_ {};
        shared_ptr<string> abroadRegionName_ {};
      };

      virtual bool empty() const override { return this->continent_ == nullptr
        && this->country_ == nullptr && this->countryName_ == nullptr && this->regions_ == nullptr; };
      // continent Field Functions 
      bool hasContinent() const { return this->continent_ != nullptr;};
      void deleteContinent() { this->continent_ = nullptr;};
      inline string getContinent() const { DARABONBA_PTR_GET_DEFAULT(continent_, "") };
      inline AbroadInfos& setContinent(string continent) { DARABONBA_PTR_SET_VALUE(continent_, continent) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline AbroadInfos& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // countryName Field Functions 
      bool hasCountryName() const { return this->countryName_ != nullptr;};
      void deleteCountryName() { this->countryName_ = nullptr;};
      inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
      inline AbroadInfos& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


      // regions Field Functions 
      bool hasRegions() const { return this->regions_ != nullptr;};
      void deleteRegions() { this->regions_ = nullptr;};
      inline const vector<AbroadInfos::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<AbroadInfos::Regions>) };
      inline vector<AbroadInfos::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<AbroadInfos::Regions>) };
      inline AbroadInfos& setRegions(const vector<AbroadInfos::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
      inline AbroadInfos& setRegions(vector<AbroadInfos::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    protected:
      shared_ptr<string> continent_ {};
      shared_ptr<string> country_ {};
      shared_ptr<string> countryName_ {};
      shared_ptr<vector<AbroadInfos::Regions>> regions_ {};
    };

    virtual bool empty() const override { return this->abroadInfos_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // abroadInfos Field Functions 
    bool hasAbroadInfos() const { return this->abroadInfos_ != nullptr;};
    void deleteAbroadInfos() { this->abroadInfos_ = nullptr;};
    inline const vector<DescribeIpAbroadCountryInfosResponseBody::AbroadInfos> & getAbroadInfos() const { DARABONBA_PTR_GET_CONST(abroadInfos_, vector<DescribeIpAbroadCountryInfosResponseBody::AbroadInfos>) };
    inline vector<DescribeIpAbroadCountryInfosResponseBody::AbroadInfos> getAbroadInfos() { DARABONBA_PTR_GET(abroadInfos_, vector<DescribeIpAbroadCountryInfosResponseBody::AbroadInfos>) };
    inline DescribeIpAbroadCountryInfosResponseBody& setAbroadInfos(const vector<DescribeIpAbroadCountryInfosResponseBody::AbroadInfos> & abroadInfos) { DARABONBA_PTR_SET_VALUE(abroadInfos_, abroadInfos) };
    inline DescribeIpAbroadCountryInfosResponseBody& setAbroadInfos(vector<DescribeIpAbroadCountryInfosResponseBody::AbroadInfos> && abroadInfos) { DARABONBA_PTR_SET_RVALUE(abroadInfos_, abroadInfos) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeIpAbroadCountryInfosResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeIpAbroadCountryInfosResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpAbroadCountryInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpAbroadCountryInfosResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeIpAbroadCountryInfosResponseBody::AbroadInfos>> abroadInfos_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
