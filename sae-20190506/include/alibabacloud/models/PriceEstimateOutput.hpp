// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PriceEstimateFeature.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PriceEstimateOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceEstimateOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PostPayItems, postPayItems_);
      DARABONBA_PTR_TO_JSON(PostPayTotalPrice, postPayTotalPrice_);
      DARABONBA_PTR_TO_JSON(TotalPrice, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, PriceEstimateOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PostPayItems, postPayItems_);
      DARABONBA_PTR_FROM_JSON(PostPayTotalPrice, postPayTotalPrice_);
      DARABONBA_PTR_FROM_JSON(TotalPrice, totalPrice_);
    };
    PriceEstimateOutput() = default ;
    PriceEstimateOutput(const PriceEstimateOutput &) = default ;
    PriceEstimateOutput(PriceEstimateOutput &&) = default ;
    PriceEstimateOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceEstimateOutput() = default ;
    PriceEstimateOutput& operator=(const PriceEstimateOutput &) = default ;
    PriceEstimateOutput& operator=(PriceEstimateOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PostPayItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PostPayItems& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Steps, steps_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, PostPayItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Steps, steps_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      PostPayItems() = default ;
      PostPayItems(const PostPayItems &) = default ;
      PostPayItems(PostPayItems &&) = default ;
      PostPayItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PostPayItems() = default ;
      PostPayItems& operator=(const PostPayItems &) = default ;
      PostPayItems& operator=(PostPayItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Steps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Steps& obj) { 
          DARABONBA_PTR_TO_JSON(Begin, begin_);
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Price, price_);
          DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Steps& obj) { 
          DARABONBA_PTR_FROM_JSON(Begin, begin_);
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Price, price_);
          DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
        };
        Steps() = default ;
        Steps(const Steps &) = default ;
        Steps(Steps &&) = default ;
        Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Steps() = default ;
        Steps& operator=(const Steps &) = default ;
        Steps& operator=(Steps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr && this->price_ == nullptr && this->regionIds_ == nullptr && this->unit_ == nullptr; };
        // begin Field Functions 
        bool hasBegin() const { return this->begin_ != nullptr;};
        void deleteBegin() { this->begin_ = nullptr;};
        inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
        inline Steps& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline Steps& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
        inline Steps& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // regionIds Field Functions 
        bool hasRegionIds() const { return this->regionIds_ != nullptr;};
        void deleteRegionIds() { this->regionIds_ = nullptr;};
        inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
        inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
        inline Steps& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
        inline Steps& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Steps& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        shared_ptr<int64_t> begin_ {};
        shared_ptr<int64_t> end_ {};
        shared_ptr<float> price_ {};
        shared_ptr<vector<string>> regionIds_ {};
        shared_ptr<string> unit_ {};
      };

      virtual bool empty() const override { return this->amount_ == nullptr
        && this->count_ == nullptr && this->id_ == nullptr && this->price_ == nullptr && this->steps_ == nullptr && this->type_ == nullptr
        && this->unit_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline float getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
      inline PostPayItems& setAmount(float amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline PostPayItems& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline PostPayItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline PostPayItems& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // steps Field Functions 
      bool hasSteps() const { return this->steps_ != nullptr;};
      void deleteSteps() { this->steps_ = nullptr;};
      inline const vector<PostPayItems::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<PostPayItems::Steps>) };
      inline vector<PostPayItems::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<PostPayItems::Steps>) };
      inline PostPayItems& setSteps(const vector<PostPayItems::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
      inline PostPayItems& setSteps(vector<PostPayItems::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PostPayItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline PostPayItems& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<float> amount_ {};
      shared_ptr<int64_t> count_ {};
      shared_ptr<string> id_ {};
      shared_ptr<float> price_ {};
      shared_ptr<vector<PostPayItems::Steps>> steps_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> unit_ {};
    };

    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Steps, steps_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Steps, steps_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Steps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Steps& obj) { 
          DARABONBA_PTR_TO_JSON(Begin, begin_);
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Price, price_);
          DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Steps& obj) { 
          DARABONBA_PTR_FROM_JSON(Begin, begin_);
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Price, price_);
          DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
        };
        Steps() = default ;
        Steps(const Steps &) = default ;
        Steps(Steps &&) = default ;
        Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Steps() = default ;
        Steps& operator=(const Steps &) = default ;
        Steps& operator=(Steps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr && this->price_ == nullptr && this->regionIds_ == nullptr && this->unit_ == nullptr; };
        // begin Field Functions 
        bool hasBegin() const { return this->begin_ != nullptr;};
        void deleteBegin() { this->begin_ = nullptr;};
        inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
        inline Steps& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline Steps& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
        inline Steps& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // regionIds Field Functions 
        bool hasRegionIds() const { return this->regionIds_ != nullptr;};
        void deleteRegionIds() { this->regionIds_ = nullptr;};
        inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
        inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
        inline Steps& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
        inline Steps& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Steps& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        shared_ptr<int64_t> begin_ {};
        shared_ptr<int64_t> end_ {};
        shared_ptr<float> price_ {};
        shared_ptr<vector<string>> regionIds_ {};
        shared_ptr<string> unit_ {};
      };

      virtual bool empty() const override { return this->amount_ == nullptr
        && this->count_ == nullptr && this->id_ == nullptr && this->price_ == nullptr && this->steps_ == nullptr && this->type_ == nullptr
        && this->unit_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline float getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
      inline Items& setAmount(float amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Items& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline Items& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // steps Field Functions 
      bool hasSteps() const { return this->steps_ != nullptr;};
      void deleteSteps() { this->steps_ = nullptr;};
      inline const vector<Items::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Items::Steps>) };
      inline vector<Items::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<Items::Steps>) };
      inline Items& setSteps(const vector<Items::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
      inline Items& setSteps(vector<Items::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Items& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<float> amount_ {};
      shared_ptr<int64_t> count_ {};
      shared_ptr<string> id_ {};
      shared_ptr<float> price_ {};
      shared_ptr<vector<Items::Steps>> steps_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> unit_ {};
    };

    class Apps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apps& obj) { 
        DARABONBA_PTR_TO_JSON(Feature, feature_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Usages, usages_);
      };
      friend void from_json(const Darabonba::Json& j, Apps& obj) { 
        DARABONBA_PTR_FROM_JSON(Feature, feature_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Usages, usages_);
      };
      Apps() = default ;
      Apps(const Apps &) = default ;
      Apps(Apps &&) = default ;
      Apps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Apps() = default ;
      Apps& operator=(const Apps &) = default ;
      Apps& operator=(Apps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Usages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usages& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Usages& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
        };
        Usages() = default ;
        Usages(const Usages &) = default ;
        Usages(Usages &&) = default ;
        Usages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usages() = default ;
        Usages& operator=(const Usages &) = default ;
        Usages& operator=(Usages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->id_ == nullptr && this->unit_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline float getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
        inline Usages& setAmount(float amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Usages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Usages& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        shared_ptr<float> amount_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> unit_ {};
      };

      virtual bool empty() const override { return this->feature_ == nullptr
        && this->id_ == nullptr && this->usages_ == nullptr; };
      // feature Field Functions 
      bool hasFeature() const { return this->feature_ != nullptr;};
      void deleteFeature() { this->feature_ = nullptr;};
      inline const PriceEstimateFeature & getFeature() const { DARABONBA_PTR_GET_CONST(feature_, PriceEstimateFeature) };
      inline PriceEstimateFeature getFeature() { DARABONBA_PTR_GET(feature_, PriceEstimateFeature) };
      inline Apps& setFeature(const PriceEstimateFeature & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
      inline Apps& setFeature(PriceEstimateFeature && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Apps& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // usages Field Functions 
      bool hasUsages() const { return this->usages_ != nullptr;};
      void deleteUsages() { this->usages_ = nullptr;};
      inline const vector<Apps::Usages> & getUsages() const { DARABONBA_PTR_GET_CONST(usages_, vector<Apps::Usages>) };
      inline vector<Apps::Usages> getUsages() { DARABONBA_PTR_GET(usages_, vector<Apps::Usages>) };
      inline Apps& setUsages(const vector<Apps::Usages> & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
      inline Apps& setUsages(vector<Apps::Usages> && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


    protected:
      shared_ptr<PriceEstimateFeature> feature_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<Apps::Usages>> usages_ {};
    };

    virtual bool empty() const override { return this->apps_ == nullptr
        && this->items_ == nullptr && this->postPayItems_ == nullptr && this->postPayTotalPrice_ == nullptr && this->totalPrice_ == nullptr; };
    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<PriceEstimateOutput::Apps> & getApps() const { DARABONBA_PTR_GET_CONST(apps_, vector<PriceEstimateOutput::Apps>) };
    inline vector<PriceEstimateOutput::Apps> getApps() { DARABONBA_PTR_GET(apps_, vector<PriceEstimateOutput::Apps>) };
    inline PriceEstimateOutput& setApps(const vector<PriceEstimateOutput::Apps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline PriceEstimateOutput& setApps(vector<PriceEstimateOutput::Apps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<PriceEstimateOutput::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<PriceEstimateOutput::Items>) };
    inline vector<PriceEstimateOutput::Items> getItems() { DARABONBA_PTR_GET(items_, vector<PriceEstimateOutput::Items>) };
    inline PriceEstimateOutput& setItems(const vector<PriceEstimateOutput::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline PriceEstimateOutput& setItems(vector<PriceEstimateOutput::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // postPayItems Field Functions 
    bool hasPostPayItems() const { return this->postPayItems_ != nullptr;};
    void deletePostPayItems() { this->postPayItems_ = nullptr;};
    inline const vector<PriceEstimateOutput::PostPayItems> & getPostPayItems() const { DARABONBA_PTR_GET_CONST(postPayItems_, vector<PriceEstimateOutput::PostPayItems>) };
    inline vector<PriceEstimateOutput::PostPayItems> getPostPayItems() { DARABONBA_PTR_GET(postPayItems_, vector<PriceEstimateOutput::PostPayItems>) };
    inline PriceEstimateOutput& setPostPayItems(const vector<PriceEstimateOutput::PostPayItems> & postPayItems) { DARABONBA_PTR_SET_VALUE(postPayItems_, postPayItems) };
    inline PriceEstimateOutput& setPostPayItems(vector<PriceEstimateOutput::PostPayItems> && postPayItems) { DARABONBA_PTR_SET_RVALUE(postPayItems_, postPayItems) };


    // postPayTotalPrice Field Functions 
    bool hasPostPayTotalPrice() const { return this->postPayTotalPrice_ != nullptr;};
    void deletePostPayTotalPrice() { this->postPayTotalPrice_ = nullptr;};
    inline float getPostPayTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(postPayTotalPrice_, 0.0) };
    inline PriceEstimateOutput& setPostPayTotalPrice(float postPayTotalPrice) { DARABONBA_PTR_SET_VALUE(postPayTotalPrice_, postPayTotalPrice) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline float getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
    inline PriceEstimateOutput& setTotalPrice(float totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    shared_ptr<vector<PriceEstimateOutput::Apps>> apps_ {};
    shared_ptr<vector<PriceEstimateOutput::Items>> items_ {};
    shared_ptr<vector<PriceEstimateOutput::PostPayItems>> postPayItems_ {};
    shared_ptr<float> postPayTotalPrice_ {};
    shared_ptr<float> totalPrice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
