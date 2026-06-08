// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListSummariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenterSummary, centerSummary_);
      DARABONBA_PTR_TO_JSON(RegionSummaries, regionSummaries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenterSummary, centerSummary_);
      DARABONBA_PTR_FROM_JSON(RegionSummaries, regionSummaries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSummariesResponseBody() = default ;
    ListSummariesResponseBody(const ListSummariesResponseBody &) = default ;
    ListSummariesResponseBody(ListSummariesResponseBody &&) = default ;
    ListSummariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummariesResponseBody() = default ;
    ListSummariesResponseBody& operator=(const ListSummariesResponseBody &) = default ;
    ListSummariesResponseBody& operator=(ListSummariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionSummaries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionSummaries& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StackCount, stackCount_);
        DARABONBA_PTR_TO_JSON(StackDetails, stackDetails_);
        DARABONBA_PTR_TO_JSON(StackGroupCount, stackGroupCount_);
        DARABONBA_PTR_TO_JSON(TemplateScratchCount, templateScratchCount_);
      };
      friend void from_json(const Darabonba::Json& j, RegionSummaries& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StackCount, stackCount_);
        DARABONBA_PTR_FROM_JSON(StackDetails, stackDetails_);
        DARABONBA_PTR_FROM_JSON(StackGroupCount, stackGroupCount_);
        DARABONBA_PTR_FROM_JSON(TemplateScratchCount, templateScratchCount_);
      };
      RegionSummaries() = default ;
      RegionSummaries(const RegionSummaries &) = default ;
      RegionSummaries(RegionSummaries &&) = default ;
      RegionSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionSummaries() = default ;
      RegionSummaries& operator=(const RegionSummaries &) = default ;
      RegionSummaries& operator=(RegionSummaries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StackDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StackDetails& obj) { 
          DARABONBA_PTR_TO_JSON(BriefStatus, briefStatus_);
          DARABONBA_PTR_TO_JSON(Count, count_);
        };
        friend void from_json(const Darabonba::Json& j, StackDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(BriefStatus, briefStatus_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
        };
        StackDetails() = default ;
        StackDetails(const StackDetails &) = default ;
        StackDetails(StackDetails &&) = default ;
        StackDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StackDetails() = default ;
        StackDetails& operator=(const StackDetails &) = default ;
        StackDetails& operator=(StackDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->briefStatus_ == nullptr
        && this->count_ == nullptr; };
        // briefStatus Field Functions 
        bool hasBriefStatus() const { return this->briefStatus_ != nullptr;};
        void deleteBriefStatus() { this->briefStatus_ = nullptr;};
        inline string getBriefStatus() const { DARABONBA_PTR_GET_DEFAULT(briefStatus_, "") };
        inline StackDetails& setBriefStatus(string briefStatus) { DARABONBA_PTR_SET_VALUE(briefStatus_, briefStatus) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
        inline StackDetails& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      protected:
        shared_ptr<string> briefStatus_ {};
        shared_ptr<string> count_ {};
      };

      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->stackCount_ == nullptr && this->stackDetails_ == nullptr && this->stackGroupCount_ == nullptr && this->templateScratchCount_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionSummaries& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // stackCount Field Functions 
      bool hasStackCount() const { return this->stackCount_ != nullptr;};
      void deleteStackCount() { this->stackCount_ = nullptr;};
      inline string getStackCount() const { DARABONBA_PTR_GET_DEFAULT(stackCount_, "") };
      inline RegionSummaries& setStackCount(string stackCount) { DARABONBA_PTR_SET_VALUE(stackCount_, stackCount) };


      // stackDetails Field Functions 
      bool hasStackDetails() const { return this->stackDetails_ != nullptr;};
      void deleteStackDetails() { this->stackDetails_ = nullptr;};
      inline const vector<RegionSummaries::StackDetails> & getStackDetails() const { DARABONBA_PTR_GET_CONST(stackDetails_, vector<RegionSummaries::StackDetails>) };
      inline vector<RegionSummaries::StackDetails> getStackDetails() { DARABONBA_PTR_GET(stackDetails_, vector<RegionSummaries::StackDetails>) };
      inline RegionSummaries& setStackDetails(const vector<RegionSummaries::StackDetails> & stackDetails) { DARABONBA_PTR_SET_VALUE(stackDetails_, stackDetails) };
      inline RegionSummaries& setStackDetails(vector<RegionSummaries::StackDetails> && stackDetails) { DARABONBA_PTR_SET_RVALUE(stackDetails_, stackDetails) };


      // stackGroupCount Field Functions 
      bool hasStackGroupCount() const { return this->stackGroupCount_ != nullptr;};
      void deleteStackGroupCount() { this->stackGroupCount_ = nullptr;};
      inline string getStackGroupCount() const { DARABONBA_PTR_GET_DEFAULT(stackGroupCount_, "") };
      inline RegionSummaries& setStackGroupCount(string stackGroupCount) { DARABONBA_PTR_SET_VALUE(stackGroupCount_, stackGroupCount) };


      // templateScratchCount Field Functions 
      bool hasTemplateScratchCount() const { return this->templateScratchCount_ != nullptr;};
      void deleteTemplateScratchCount() { this->templateScratchCount_ = nullptr;};
      inline int32_t getTemplateScratchCount() const { DARABONBA_PTR_GET_DEFAULT(templateScratchCount_, 0) };
      inline RegionSummaries& setTemplateScratchCount(int32_t templateScratchCount) { DARABONBA_PTR_SET_VALUE(templateScratchCount_, templateScratchCount) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<string> stackCount_ {};
      shared_ptr<vector<RegionSummaries::StackDetails>> stackDetails_ {};
      shared_ptr<string> stackGroupCount_ {};
      shared_ptr<int32_t> templateScratchCount_ {};
    };

    class CenterSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CenterSummary& obj) { 
        DARABONBA_PTR_TO_JSON(RegisteredResourceTypeCount, registeredResourceTypeCount_);
        DARABONBA_PTR_TO_JSON(TemplateCount, templateCount_);
      };
      friend void from_json(const Darabonba::Json& j, CenterSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(RegisteredResourceTypeCount, registeredResourceTypeCount_);
        DARABONBA_PTR_FROM_JSON(TemplateCount, templateCount_);
      };
      CenterSummary() = default ;
      CenterSummary(const CenterSummary &) = default ;
      CenterSummary(CenterSummary &&) = default ;
      CenterSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CenterSummary() = default ;
      CenterSummary& operator=(const CenterSummary &) = default ;
      CenterSummary& operator=(CenterSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->registeredResourceTypeCount_ == nullptr
        && this->templateCount_ == nullptr; };
      // registeredResourceTypeCount Field Functions 
      bool hasRegisteredResourceTypeCount() const { return this->registeredResourceTypeCount_ != nullptr;};
      void deleteRegisteredResourceTypeCount() { this->registeredResourceTypeCount_ = nullptr;};
      inline int32_t getRegisteredResourceTypeCount() const { DARABONBA_PTR_GET_DEFAULT(registeredResourceTypeCount_, 0) };
      inline CenterSummary& setRegisteredResourceTypeCount(int32_t registeredResourceTypeCount) { DARABONBA_PTR_SET_VALUE(registeredResourceTypeCount_, registeredResourceTypeCount) };


      // templateCount Field Functions 
      bool hasTemplateCount() const { return this->templateCount_ != nullptr;};
      void deleteTemplateCount() { this->templateCount_ = nullptr;};
      inline string getTemplateCount() const { DARABONBA_PTR_GET_DEFAULT(templateCount_, "") };
      inline CenterSummary& setTemplateCount(string templateCount) { DARABONBA_PTR_SET_VALUE(templateCount_, templateCount) };


    protected:
      shared_ptr<int32_t> registeredResourceTypeCount_ {};
      shared_ptr<string> templateCount_ {};
    };

    virtual bool empty() const override { return this->centerSummary_ == nullptr
        && this->regionSummaries_ == nullptr && this->requestId_ == nullptr; };
    // centerSummary Field Functions 
    bool hasCenterSummary() const { return this->centerSummary_ != nullptr;};
    void deleteCenterSummary() { this->centerSummary_ = nullptr;};
    inline const ListSummariesResponseBody::CenterSummary & getCenterSummary() const { DARABONBA_PTR_GET_CONST(centerSummary_, ListSummariesResponseBody::CenterSummary) };
    inline ListSummariesResponseBody::CenterSummary getCenterSummary() { DARABONBA_PTR_GET(centerSummary_, ListSummariesResponseBody::CenterSummary) };
    inline ListSummariesResponseBody& setCenterSummary(const ListSummariesResponseBody::CenterSummary & centerSummary) { DARABONBA_PTR_SET_VALUE(centerSummary_, centerSummary) };
    inline ListSummariesResponseBody& setCenterSummary(ListSummariesResponseBody::CenterSummary && centerSummary) { DARABONBA_PTR_SET_RVALUE(centerSummary_, centerSummary) };


    // regionSummaries Field Functions 
    bool hasRegionSummaries() const { return this->regionSummaries_ != nullptr;};
    void deleteRegionSummaries() { this->regionSummaries_ = nullptr;};
    inline const vector<ListSummariesResponseBody::RegionSummaries> & getRegionSummaries() const { DARABONBA_PTR_GET_CONST(regionSummaries_, vector<ListSummariesResponseBody::RegionSummaries>) };
    inline vector<ListSummariesResponseBody::RegionSummaries> getRegionSummaries() { DARABONBA_PTR_GET(regionSummaries_, vector<ListSummariesResponseBody::RegionSummaries>) };
    inline ListSummariesResponseBody& setRegionSummaries(const vector<ListSummariesResponseBody::RegionSummaries> & regionSummaries) { DARABONBA_PTR_SET_VALUE(regionSummaries_, regionSummaries) };
    inline ListSummariesResponseBody& setRegionSummaries(vector<ListSummariesResponseBody::RegionSummaries> && regionSummaries) { DARABONBA_PTR_SET_RVALUE(regionSummaries_, regionSummaries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSummariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListSummariesResponseBody::CenterSummary> centerSummary_ {};
    shared_ptr<vector<ListSummariesResponseBody::RegionSummaries>> regionSummaries_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
