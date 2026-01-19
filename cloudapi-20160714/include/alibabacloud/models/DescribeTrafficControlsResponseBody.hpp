// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficControls, trafficControls_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficControls, trafficControls_);
    };
    DescribeTrafficControlsResponseBody() = default ;
    DescribeTrafficControlsResponseBody(const DescribeTrafficControlsResponseBody &) = default ;
    DescribeTrafficControlsResponseBody(DescribeTrafficControlsResponseBody &&) = default ;
    DescribeTrafficControlsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsResponseBody() = default ;
    DescribeTrafficControlsResponseBody& operator=(const DescribeTrafficControlsResponseBody &) = default ;
    DescribeTrafficControlsResponseBody& operator=(DescribeTrafficControlsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficControls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficControls& obj) { 
        DARABONBA_PTR_TO_JSON(TrafficControl, trafficControl_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficControls& obj) { 
        DARABONBA_PTR_FROM_JSON(TrafficControl, trafficControl_);
      };
      TrafficControls() = default ;
      TrafficControls(const TrafficControls &) = default ;
      TrafficControls(TrafficControls &&) = default ;
      TrafficControls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficControls() = default ;
      TrafficControls& operator=(const TrafficControls &) = default ;
      TrafficControls& operator=(TrafficControls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrafficControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficControl& obj) { 
          DARABONBA_PTR_TO_JSON(ApiDefault, apiDefault_);
          DARABONBA_PTR_TO_JSON(AppDefault, appDefault_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(SpecialPolicies, specialPolicies_);
          DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
          DARABONBA_PTR_TO_JSON(TrafficControlName, trafficControlName_);
          DARABONBA_PTR_TO_JSON(TrafficControlUnit, trafficControlUnit_);
          DARABONBA_PTR_TO_JSON(UserDefault, userDefault_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficControl& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiDefault, apiDefault_);
          DARABONBA_PTR_FROM_JSON(AppDefault, appDefault_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(SpecialPolicies, specialPolicies_);
          DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
          DARABONBA_PTR_FROM_JSON(TrafficControlName, trafficControlName_);
          DARABONBA_PTR_FROM_JSON(TrafficControlUnit, trafficControlUnit_);
          DARABONBA_PTR_FROM_JSON(UserDefault, userDefault_);
        };
        TrafficControl() = default ;
        TrafficControl(const TrafficControl &) = default ;
        TrafficControl(TrafficControl &&) = default ;
        TrafficControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficControl() = default ;
        TrafficControl& operator=(const TrafficControl &) = default ;
        TrafficControl& operator=(TrafficControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SpecialPolicies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SpecialPolicies& obj) { 
            DARABONBA_PTR_TO_JSON(SpecialPolicy, specialPolicy_);
          };
          friend void from_json(const Darabonba::Json& j, SpecialPolicies& obj) { 
            DARABONBA_PTR_FROM_JSON(SpecialPolicy, specialPolicy_);
          };
          SpecialPolicies() = default ;
          SpecialPolicies(const SpecialPolicies &) = default ;
          SpecialPolicies(SpecialPolicies &&) = default ;
          SpecialPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SpecialPolicies() = default ;
          SpecialPolicies& operator=(const SpecialPolicies &) = default ;
          SpecialPolicies& operator=(SpecialPolicies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SpecialPolicy : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SpecialPolicy& obj) { 
              DARABONBA_PTR_TO_JSON(SpecialType, specialType_);
              DARABONBA_PTR_TO_JSON(Specials, specials_);
            };
            friend void from_json(const Darabonba::Json& j, SpecialPolicy& obj) { 
              DARABONBA_PTR_FROM_JSON(SpecialType, specialType_);
              DARABONBA_PTR_FROM_JSON(Specials, specials_);
            };
            SpecialPolicy() = default ;
            SpecialPolicy(const SpecialPolicy &) = default ;
            SpecialPolicy(SpecialPolicy &&) = default ;
            SpecialPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SpecialPolicy() = default ;
            SpecialPolicy& operator=(const SpecialPolicy &) = default ;
            SpecialPolicy& operator=(SpecialPolicy &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Specials : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Specials& obj) { 
                DARABONBA_PTR_TO_JSON(Special, special_);
              };
              friend void from_json(const Darabonba::Json& j, Specials& obj) { 
                DARABONBA_PTR_FROM_JSON(Special, special_);
              };
              Specials() = default ;
              Specials(const Specials &) = default ;
              Specials(Specials &&) = default ;
              Specials(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Specials() = default ;
              Specials& operator=(const Specials &) = default ;
              Specials& operator=(Specials &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Special : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Special& obj) { 
                  DARABONBA_PTR_TO_JSON(SpecialKey, specialKey_);
                  DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
                };
                friend void from_json(const Darabonba::Json& j, Special& obj) { 
                  DARABONBA_PTR_FROM_JSON(SpecialKey, specialKey_);
                  DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
                };
                Special() = default ;
                Special(const Special &) = default ;
                Special(Special &&) = default ;
                Special(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Special() = default ;
                Special& operator=(const Special &) = default ;
                Special& operator=(Special &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->specialKey_ == nullptr
        && this->trafficValue_ == nullptr; };
                // specialKey Field Functions 
                bool hasSpecialKey() const { return this->specialKey_ != nullptr;};
                void deleteSpecialKey() { this->specialKey_ = nullptr;};
                inline string getSpecialKey() const { DARABONBA_PTR_GET_DEFAULT(specialKey_, "") };
                inline Special& setSpecialKey(string specialKey) { DARABONBA_PTR_SET_VALUE(specialKey_, specialKey) };


                // trafficValue Field Functions 
                bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
                void deleteTrafficValue() { this->trafficValue_ = nullptr;};
                inline int32_t getTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, 0) };
                inline Special& setTrafficValue(int32_t trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


              protected:
                // The AppId or user account corresponding to SpecialType.
                shared_ptr<string> specialKey_ {};
                // The throttling value.
                shared_ptr<int32_t> trafficValue_ {};
              };

              virtual bool empty() const override { return this->special_ == nullptr; };
              // special Field Functions 
              bool hasSpecial() const { return this->special_ != nullptr;};
              void deleteSpecial() { this->special_ = nullptr;};
              inline const vector<Specials::Special> & getSpecial() const { DARABONBA_PTR_GET_CONST(special_, vector<Specials::Special>) };
              inline vector<Specials::Special> getSpecial() { DARABONBA_PTR_GET(special_, vector<Specials::Special>) };
              inline Specials& setSpecial(const vector<Specials::Special> & special) { DARABONBA_PTR_SET_VALUE(special_, special) };
              inline Specials& setSpecial(vector<Specials::Special> && special) { DARABONBA_PTR_SET_RVALUE(special_, special) };


            protected:
              shared_ptr<vector<Specials::Special>> special_ {};
            };

            virtual bool empty() const override { return this->specialType_ == nullptr
        && this->specials_ == nullptr; };
            // specialType Field Functions 
            bool hasSpecialType() const { return this->specialType_ != nullptr;};
            void deleteSpecialType() { this->specialType_ = nullptr;};
            inline string getSpecialType() const { DARABONBA_PTR_GET_DEFAULT(specialType_, "") };
            inline SpecialPolicy& setSpecialType(string specialType) { DARABONBA_PTR_SET_VALUE(specialType_, specialType) };


            // specials Field Functions 
            bool hasSpecials() const { return this->specials_ != nullptr;};
            void deleteSpecials() { this->specials_ = nullptr;};
            inline const SpecialPolicy::Specials & getSpecials() const { DARABONBA_PTR_GET_CONST(specials_, SpecialPolicy::Specials) };
            inline SpecialPolicy::Specials getSpecials() { DARABONBA_PTR_GET(specials_, SpecialPolicy::Specials) };
            inline SpecialPolicy& setSpecials(const SpecialPolicy::Specials & specials) { DARABONBA_PTR_SET_VALUE(specials_, specials) };
            inline SpecialPolicy& setSpecials(SpecialPolicy::Specials && specials) { DARABONBA_PTR_SET_RVALUE(specials_, specials) };


          protected:
            // The type of the special throttling policy. Valid values:
            // 
            // *   **APP**
            // *   **USER**
            shared_ptr<string> specialType_ {};
            // The returned information about a special throttling policy. It is an array consisting of Special data.
            shared_ptr<SpecialPolicy::Specials> specials_ {};
          };

          virtual bool empty() const override { return this->specialPolicy_ == nullptr; };
          // specialPolicy Field Functions 
          bool hasSpecialPolicy() const { return this->specialPolicy_ != nullptr;};
          void deleteSpecialPolicy() { this->specialPolicy_ = nullptr;};
          inline const vector<SpecialPolicies::SpecialPolicy> & getSpecialPolicy() const { DARABONBA_PTR_GET_CONST(specialPolicy_, vector<SpecialPolicies::SpecialPolicy>) };
          inline vector<SpecialPolicies::SpecialPolicy> getSpecialPolicy() { DARABONBA_PTR_GET(specialPolicy_, vector<SpecialPolicies::SpecialPolicy>) };
          inline SpecialPolicies& setSpecialPolicy(const vector<SpecialPolicies::SpecialPolicy> & specialPolicy) { DARABONBA_PTR_SET_VALUE(specialPolicy_, specialPolicy) };
          inline SpecialPolicies& setSpecialPolicy(vector<SpecialPolicies::SpecialPolicy> && specialPolicy) { DARABONBA_PTR_SET_RVALUE(specialPolicy_, specialPolicy) };


        protected:
          shared_ptr<vector<SpecialPolicies::SpecialPolicy>> specialPolicy_ {};
        };

        virtual bool empty() const override { return this->apiDefault_ == nullptr
        && this->appDefault_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->modifiedTime_ == nullptr && this->specialPolicies_ == nullptr
        && this->trafficControlId_ == nullptr && this->trafficControlName_ == nullptr && this->trafficControlUnit_ == nullptr && this->userDefault_ == nullptr; };
        // apiDefault Field Functions 
        bool hasApiDefault() const { return this->apiDefault_ != nullptr;};
        void deleteApiDefault() { this->apiDefault_ = nullptr;};
        inline int32_t getApiDefault() const { DARABONBA_PTR_GET_DEFAULT(apiDefault_, 0) };
        inline TrafficControl& setApiDefault(int32_t apiDefault) { DARABONBA_PTR_SET_VALUE(apiDefault_, apiDefault) };


        // appDefault Field Functions 
        bool hasAppDefault() const { return this->appDefault_ != nullptr;};
        void deleteAppDefault() { this->appDefault_ = nullptr;};
        inline int32_t getAppDefault() const { DARABONBA_PTR_GET_DEFAULT(appDefault_, 0) };
        inline TrafficControl& setAppDefault(int32_t appDefault) { DARABONBA_PTR_SET_VALUE(appDefault_, appDefault) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline TrafficControl& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TrafficControl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline TrafficControl& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // specialPolicies Field Functions 
        bool hasSpecialPolicies() const { return this->specialPolicies_ != nullptr;};
        void deleteSpecialPolicies() { this->specialPolicies_ = nullptr;};
        inline const TrafficControl::SpecialPolicies & getSpecialPolicies() const { DARABONBA_PTR_GET_CONST(specialPolicies_, TrafficControl::SpecialPolicies) };
        inline TrafficControl::SpecialPolicies getSpecialPolicies() { DARABONBA_PTR_GET(specialPolicies_, TrafficControl::SpecialPolicies) };
        inline TrafficControl& setSpecialPolicies(const TrafficControl::SpecialPolicies & specialPolicies) { DARABONBA_PTR_SET_VALUE(specialPolicies_, specialPolicies) };
        inline TrafficControl& setSpecialPolicies(TrafficControl::SpecialPolicies && specialPolicies) { DARABONBA_PTR_SET_RVALUE(specialPolicies_, specialPolicies) };


        // trafficControlId Field Functions 
        bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
        void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
        inline string getTrafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
        inline TrafficControl& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


        // trafficControlName Field Functions 
        bool hasTrafficControlName() const { return this->trafficControlName_ != nullptr;};
        void deleteTrafficControlName() { this->trafficControlName_ = nullptr;};
        inline string getTrafficControlName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlName_, "") };
        inline TrafficControl& setTrafficControlName(string trafficControlName) { DARABONBA_PTR_SET_VALUE(trafficControlName_, trafficControlName) };


        // trafficControlUnit Field Functions 
        bool hasTrafficControlUnit() const { return this->trafficControlUnit_ != nullptr;};
        void deleteTrafficControlUnit() { this->trafficControlUnit_ = nullptr;};
        inline string getTrafficControlUnit() const { DARABONBA_PTR_GET_DEFAULT(trafficControlUnit_, "") };
        inline TrafficControl& setTrafficControlUnit(string trafficControlUnit) { DARABONBA_PTR_SET_VALUE(trafficControlUnit_, trafficControlUnit) };


        // userDefault Field Functions 
        bool hasUserDefault() const { return this->userDefault_ != nullptr;};
        void deleteUserDefault() { this->userDefault_ = nullptr;};
        inline int32_t getUserDefault() const { DARABONBA_PTR_GET_DEFAULT(userDefault_, 0) };
        inline TrafficControl& setUserDefault(int32_t userDefault) { DARABONBA_PTR_SET_VALUE(userDefault_, userDefault) };


      protected:
        // The default throttling value for each API.
        shared_ptr<int32_t> apiDefault_ {};
        // The default throttling value for each app.
        shared_ptr<int32_t> appDefault_ {};
        // The creation time (UTC) of the throttling policy.
        shared_ptr<string> createdTime_ {};
        // The description of the throttling policy.
        shared_ptr<string> description_ {};
        // The last modification time (UTC) of the throttling policy.
        shared_ptr<string> modifiedTime_ {};
        // The returned information about a special throttling policy. It is an array consisting of SpecialPolicy data.
        shared_ptr<TrafficControl::SpecialPolicies> specialPolicies_ {};
        // The ID of the throttling policy.
        shared_ptr<string> trafficControlId_ {};
        // The name of the throttling policy.
        shared_ptr<string> trafficControlName_ {};
        // The unit to be used in the throttling policy. Valid values:
        // 
        // *   MINUTE
        // *   HOUR
        // *   DAY
        shared_ptr<string> trafficControlUnit_ {};
        // The default throttling value for each user.
        shared_ptr<int32_t> userDefault_ {};
      };

      virtual bool empty() const override { return this->trafficControl_ == nullptr; };
      // trafficControl Field Functions 
      bool hasTrafficControl() const { return this->trafficControl_ != nullptr;};
      void deleteTrafficControl() { this->trafficControl_ = nullptr;};
      inline const vector<TrafficControls::TrafficControl> & getTrafficControl() const { DARABONBA_PTR_GET_CONST(trafficControl_, vector<TrafficControls::TrafficControl>) };
      inline vector<TrafficControls::TrafficControl> getTrafficControl() { DARABONBA_PTR_GET(trafficControl_, vector<TrafficControls::TrafficControl>) };
      inline TrafficControls& setTrafficControl(const vector<TrafficControls::TrafficControl> & trafficControl) { DARABONBA_PTR_SET_VALUE(trafficControl_, trafficControl) };
      inline TrafficControls& setTrafficControl(vector<TrafficControls::TrafficControl> && trafficControl) { DARABONBA_PTR_SET_RVALUE(trafficControl_, trafficControl) };


    protected:
      shared_ptr<vector<TrafficControls::TrafficControl>> trafficControl_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->trafficControls_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTrafficControlsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTrafficControlsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrafficControlsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTrafficControlsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficControls Field Functions 
    bool hasTrafficControls() const { return this->trafficControls_ != nullptr;};
    void deleteTrafficControls() { this->trafficControls_ = nullptr;};
    inline const DescribeTrafficControlsResponseBody::TrafficControls & getTrafficControls() const { DARABONBA_PTR_GET_CONST(trafficControls_, DescribeTrafficControlsResponseBody::TrafficControls) };
    inline DescribeTrafficControlsResponseBody::TrafficControls getTrafficControls() { DARABONBA_PTR_GET(trafficControls_, DescribeTrafficControlsResponseBody::TrafficControls) };
    inline DescribeTrafficControlsResponseBody& setTrafficControls(const DescribeTrafficControlsResponseBody::TrafficControls & trafficControls) { DARABONBA_PTR_SET_VALUE(trafficControls_, trafficControls) };
    inline DescribeTrafficControlsResponseBody& setTrafficControls(DescribeTrafficControlsResponseBody::TrafficControls && trafficControls) { DARABONBA_PTR_SET_RVALUE(trafficControls_, trafficControls) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
    // The returned throttling policy information. It is an array consisting of TrafficControl data.
    shared_ptr<DescribeTrafficControlsResponseBody::TrafficControls> trafficControls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
