// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNBLOCKEDREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNBLOCKEDREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnBlockedRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnBlockedRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InfoList, infoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnBlockedRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoList, infoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnBlockedRegionsResponseBody() = default ;
    DescribeDcdnBlockedRegionsResponseBody(const DescribeDcdnBlockedRegionsResponseBody &) = default ;
    DescribeDcdnBlockedRegionsResponseBody(DescribeDcdnBlockedRegionsResponseBody &&) = default ;
    DescribeDcdnBlockedRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnBlockedRegionsResponseBody() = default ;
    DescribeDcdnBlockedRegionsResponseBody& operator=(const DescribeDcdnBlockedRegionsResponseBody &) = default ;
    DescribeDcdnBlockedRegionsResponseBody& operator=(DescribeDcdnBlockedRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InfoList& obj) { 
        DARABONBA_PTR_TO_JSON(InfoItem, infoItem_);
      };
      friend void from_json(const Darabonba::Json& j, InfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(InfoItem, infoItem_);
      };
      InfoList() = default ;
      InfoList(const InfoList &) = default ;
      InfoList(InfoList &&) = default ;
      InfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InfoList() = default ;
      InfoList& operator=(const InfoList &) = default ;
      InfoList& operator=(InfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InfoItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InfoItem& obj) { 
          DARABONBA_PTR_TO_JSON(Continent, continent_);
          DARABONBA_PTR_TO_JSON(CountriesAndRegions, countriesAndRegions_);
          DARABONBA_PTR_TO_JSON(CountriesAndRegionsName, countriesAndRegionsName_);
        };
        friend void from_json(const Darabonba::Json& j, InfoItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Continent, continent_);
          DARABONBA_PTR_FROM_JSON(CountriesAndRegions, countriesAndRegions_);
          DARABONBA_PTR_FROM_JSON(CountriesAndRegionsName, countriesAndRegionsName_);
        };
        InfoItem() = default ;
        InfoItem(const InfoItem &) = default ;
        InfoItem(InfoItem &&) = default ;
        InfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InfoItem() = default ;
        InfoItem& operator=(const InfoItem &) = default ;
        InfoItem& operator=(InfoItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->continent_ == nullptr
        && this->countriesAndRegions_ == nullptr && this->countriesAndRegionsName_ == nullptr; };
        // continent Field Functions 
        bool hasContinent() const { return this->continent_ != nullptr;};
        void deleteContinent() { this->continent_ = nullptr;};
        inline string getContinent() const { DARABONBA_PTR_GET_DEFAULT(continent_, "") };
        inline InfoItem& setContinent(string continent) { DARABONBA_PTR_SET_VALUE(continent_, continent) };


        // countriesAndRegions Field Functions 
        bool hasCountriesAndRegions() const { return this->countriesAndRegions_ != nullptr;};
        void deleteCountriesAndRegions() { this->countriesAndRegions_ = nullptr;};
        inline string getCountriesAndRegions() const { DARABONBA_PTR_GET_DEFAULT(countriesAndRegions_, "") };
        inline InfoItem& setCountriesAndRegions(string countriesAndRegions) { DARABONBA_PTR_SET_VALUE(countriesAndRegions_, countriesAndRegions) };


        // countriesAndRegionsName Field Functions 
        bool hasCountriesAndRegionsName() const { return this->countriesAndRegionsName_ != nullptr;};
        void deleteCountriesAndRegionsName() { this->countriesAndRegionsName_ = nullptr;};
        inline string getCountriesAndRegionsName() const { DARABONBA_PTR_GET_DEFAULT(countriesAndRegionsName_, "") };
        inline InfoItem& setCountriesAndRegionsName(string countriesAndRegionsName) { DARABONBA_PTR_SET_VALUE(countriesAndRegionsName_, countriesAndRegionsName) };


      protected:
        // The larger region to which the country or region belongs.
        shared_ptr<string> continent_ {};
        // The abbreviation of the name of the country or region.
        shared_ptr<string> countriesAndRegions_ {};
        // The name of the country or region.
        shared_ptr<string> countriesAndRegionsName_ {};
      };

      virtual bool empty() const override { return this->infoItem_ == nullptr; };
      // infoItem Field Functions 
      bool hasInfoItem() const { return this->infoItem_ != nullptr;};
      void deleteInfoItem() { this->infoItem_ = nullptr;};
      inline const vector<InfoList::InfoItem> & getInfoItem() const { DARABONBA_PTR_GET_CONST(infoItem_, vector<InfoList::InfoItem>) };
      inline vector<InfoList::InfoItem> getInfoItem() { DARABONBA_PTR_GET(infoItem_, vector<InfoList::InfoItem>) };
      inline InfoList& setInfoItem(const vector<InfoList::InfoItem> & infoItem) { DARABONBA_PTR_SET_VALUE(infoItem_, infoItem) };
      inline InfoList& setInfoItem(vector<InfoList::InfoItem> && infoItem) { DARABONBA_PTR_SET_RVALUE(infoItem_, infoItem) };


    protected:
      shared_ptr<vector<InfoList::InfoItem>> infoItem_ {};
    };

    virtual bool empty() const override { return this->infoList_ == nullptr
        && this->requestId_ == nullptr; };
    // infoList Field Functions 
    bool hasInfoList() const { return this->infoList_ != nullptr;};
    void deleteInfoList() { this->infoList_ = nullptr;};
    inline const DescribeDcdnBlockedRegionsResponseBody::InfoList & getInfoList() const { DARABONBA_PTR_GET_CONST(infoList_, DescribeDcdnBlockedRegionsResponseBody::InfoList) };
    inline DescribeDcdnBlockedRegionsResponseBody::InfoList getInfoList() { DARABONBA_PTR_GET(infoList_, DescribeDcdnBlockedRegionsResponseBody::InfoList) };
    inline DescribeDcdnBlockedRegionsResponseBody& setInfoList(const DescribeDcdnBlockedRegionsResponseBody::InfoList & infoList) { DARABONBA_PTR_SET_VALUE(infoList_, infoList) };
    inline DescribeDcdnBlockedRegionsResponseBody& setInfoList(DescribeDcdnBlockedRegionsResponseBody::InfoList && infoList) { DARABONBA_PTR_SET_RVALUE(infoList_, infoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnBlockedRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the country or region.
    shared_ptr<DescribeDcdnBlockedRegionsResponseBody::InfoList> infoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
