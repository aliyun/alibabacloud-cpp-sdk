// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFORESPONSEBODY_HPP_
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
  class DescribeDcdnWafGeoInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGeoInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGeoInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafGeoInfoResponseBody() = default ;
    DescribeDcdnWafGeoInfoResponseBody(const DescribeDcdnWafGeoInfoResponseBody &) = default ;
    DescribeDcdnWafGeoInfoResponseBody(DescribeDcdnWafGeoInfoResponseBody &&) = default ;
    DescribeDcdnWafGeoInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGeoInfoResponseBody() = default ;
    DescribeDcdnWafGeoInfoResponseBody& operator=(const DescribeDcdnWafGeoInfoResponseBody &) = default ;
    DescribeDcdnWafGeoInfoResponseBody& operator=(DescribeDcdnWafGeoInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Continents, continents_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Continents, continents_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Continents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Continents& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Regions, regions_);
        };
        friend void from_json(const Darabonba::Json& j, Continents& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Regions, regions_);
        };
        Continents() = default ;
        Continents(const Continents &) = default ;
        Continents(Continents &&) = default ;
        Continents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Continents() = default ;
        Continents& operator=(const Continents &) = default ;
        Continents& operator=(Continents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Regions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Regions& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Regions& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Regions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Regions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the country or region.
          shared_ptr<string> name_ {};
          // The code of the country or region.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->regions_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Continents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // regions Field Functions 
        bool hasRegions() const { return this->regions_ != nullptr;};
        void deleteRegions() { this->regions_ = nullptr;};
        inline const vector<Continents::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Continents::Regions>) };
        inline vector<Continents::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<Continents::Regions>) };
        inline Continents& setRegions(const vector<Continents::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
        inline Continents& setRegions(vector<Continents::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


      protected:
        // The district to which the country or region belongs.
        shared_ptr<string> name_ {};
        // The region information.
        shared_ptr<vector<Continents::Regions>> regions_ {};
      };

      virtual bool empty() const override { return this->continents_ == nullptr
        && this->type_ == nullptr; };
      // continents Field Functions 
      bool hasContinents() const { return this->continents_ != nullptr;};
      void deleteContinents() { this->continents_ = nullptr;};
      inline const vector<Content::Continents> & getContinents() const { DARABONBA_PTR_GET_CONST(continents_, vector<Content::Continents>) };
      inline vector<Content::Continents> getContinents() { DARABONBA_PTR_GET(continents_, vector<Content::Continents>) };
      inline Content& setContinents(const vector<Content::Continents> & continents) { DARABONBA_PTR_SET_VALUE(continents_, continents) };
      inline Content& setContinents(vector<Content::Continents> && continents) { DARABONBA_PTR_SET_RVALUE(continents_, continents) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The information about the country or region.
      shared_ptr<vector<Content::Continents>> continents_ {};
      // The type of the region.
      // 
      // *   CN: China
      // *   Other: outside China
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDcdnWafGeoInfoResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDcdnWafGeoInfoResponseBody::Content>) };
    inline vector<DescribeDcdnWafGeoInfoResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<DescribeDcdnWafGeoInfoResponseBody::Content>) };
    inline DescribeDcdnWafGeoInfoResponseBody& setContent(const vector<DescribeDcdnWafGeoInfoResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnWafGeoInfoResponseBody& setContent(vector<DescribeDcdnWafGeoInfoResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafGeoInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of information about the country or region.
    shared_ptr<vector<DescribeDcdnWafGeoInfoResponseBody::Content>> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
