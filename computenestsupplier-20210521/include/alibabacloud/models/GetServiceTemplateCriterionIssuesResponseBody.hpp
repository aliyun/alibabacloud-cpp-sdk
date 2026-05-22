// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATECRITERIONISSUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATECRITERIONISSUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceTemplateCriterionIssuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateCriterionIssuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskyTemplateCount, riskyTemplateCount_);
      DARABONBA_PTR_TO_JSON(TemplateCriterionIssueList, templateCriterionIssueList_);
      DARABONBA_PTR_TO_JSON(TotalCriterionIssueCount, totalCriterionIssueCount_);
      DARABONBA_PTR_TO_JSON(TotalMandatoryCriterionIssueCount, totalMandatoryCriterionIssueCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateCriterionIssuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskyTemplateCount, riskyTemplateCount_);
      DARABONBA_PTR_FROM_JSON(TemplateCriterionIssueList, templateCriterionIssueList_);
      DARABONBA_PTR_FROM_JSON(TotalCriterionIssueCount, totalCriterionIssueCount_);
      DARABONBA_PTR_FROM_JSON(TotalMandatoryCriterionIssueCount, totalMandatoryCriterionIssueCount_);
    };
    GetServiceTemplateCriterionIssuesResponseBody() = default ;
    GetServiceTemplateCriterionIssuesResponseBody(const GetServiceTemplateCriterionIssuesResponseBody &) = default ;
    GetServiceTemplateCriterionIssuesResponseBody(GetServiceTemplateCriterionIssuesResponseBody &&) = default ;
    GetServiceTemplateCriterionIssuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateCriterionIssuesResponseBody() = default ;
    GetServiceTemplateCriterionIssuesResponseBody& operator=(const GetServiceTemplateCriterionIssuesResponseBody &) = default ;
    GetServiceTemplateCriterionIssuesResponseBody& operator=(GetServiceTemplateCriterionIssuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateCriterionIssueList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateCriterionIssueList& obj) { 
        DARABONBA_PTR_TO_JSON(CriterionIssues, criterionIssues_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateUrl, templateUrl_);
        DARABONBA_PTR_TO_JSON(TotalCriterionIssueCount, totalCriterionIssueCount_);
        DARABONBA_PTR_TO_JSON(TotalMandatoryCriterionIssueCount, totalMandatoryCriterionIssueCount_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateCriterionIssueList& obj) { 
        DARABONBA_PTR_FROM_JSON(CriterionIssues, criterionIssues_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateUrl, templateUrl_);
        DARABONBA_PTR_FROM_JSON(TotalCriterionIssueCount, totalCriterionIssueCount_);
        DARABONBA_PTR_FROM_JSON(TotalMandatoryCriterionIssueCount, totalMandatoryCriterionIssueCount_);
      };
      TemplateCriterionIssueList() = default ;
      TemplateCriterionIssueList(const TemplateCriterionIssueList &) = default ;
      TemplateCriterionIssueList(TemplateCriterionIssueList &&) = default ;
      TemplateCriterionIssueList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateCriterionIssueList() = default ;
      TemplateCriterionIssueList& operator=(const TemplateCriterionIssueList &) = default ;
      TemplateCriterionIssueList& operator=(TemplateCriterionIssueList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CriterionIssues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CriterionIssues& obj) { 
          DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Position, position_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, CriterionIssues& obj) { 
          DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        CriterionIssues() = default ;
        CriterionIssues(const CriterionIssues &) = default ;
        CriterionIssues(CriterionIssues &&) = default ;
        CriterionIssues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CriterionIssues() = default ;
        CriterionIssues& operator=(const CriterionIssues &) = default ;
        CriterionIssues& operator=(CriterionIssues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExtendInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtendInfo& obj) { 
            DARABONBA_PTR_TO_JSON(AssociationProperty, associationProperty_);
            DARABONBA_PTR_TO_JSON(Property, property_);
            DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
          };
          friend void from_json(const Darabonba::Json& j, ExtendInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(AssociationProperty, associationProperty_);
            DARABONBA_PTR_FROM_JSON(Property, property_);
            DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
          };
          ExtendInfo() = default ;
          ExtendInfo(const ExtendInfo &) = default ;
          ExtendInfo(ExtendInfo &&) = default ;
          ExtendInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtendInfo() = default ;
          ExtendInfo& operator=(const ExtendInfo &) = default ;
          ExtendInfo& operator=(ExtendInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->associationProperty_ == nullptr
        && this->property_ == nullptr && this->propertyValue_ == nullptr; };
          // associationProperty Field Functions 
          bool hasAssociationProperty() const { return this->associationProperty_ != nullptr;};
          void deleteAssociationProperty() { this->associationProperty_ = nullptr;};
          inline string getAssociationProperty() const { DARABONBA_PTR_GET_DEFAULT(associationProperty_, "") };
          inline ExtendInfo& setAssociationProperty(string associationProperty) { DARABONBA_PTR_SET_VALUE(associationProperty_, associationProperty) };


          // property Field Functions 
          bool hasProperty() const { return this->property_ != nullptr;};
          void deleteProperty() { this->property_ = nullptr;};
          inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
          inline ExtendInfo& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


          // propertyValue Field Functions 
          bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
          void deletePropertyValue() { this->propertyValue_ = nullptr;};
          inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
          inline ExtendInfo& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


        protected:
          shared_ptr<string> associationProperty_ {};
          shared_ptr<string> property_ {};
          shared_ptr<string> propertyValue_ {};
        };

        virtual bool empty() const override { return this->extendInfo_ == nullptr
        && this->level_ == nullptr && this->position_ == nullptr && this->type_ == nullptr; };
        // extendInfo Field Functions 
        bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
        void deleteExtendInfo() { this->extendInfo_ = nullptr;};
        inline const CriterionIssues::ExtendInfo & getExtendInfo() const { DARABONBA_PTR_GET_CONST(extendInfo_, CriterionIssues::ExtendInfo) };
        inline CriterionIssues::ExtendInfo getExtendInfo() { DARABONBA_PTR_GET(extendInfo_, CriterionIssues::ExtendInfo) };
        inline CriterionIssues& setExtendInfo(const CriterionIssues::ExtendInfo & extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };
        inline CriterionIssues& setExtendInfo(CriterionIssues::ExtendInfo && extendInfo) { DARABONBA_PTR_SET_RVALUE(extendInfo_, extendInfo) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline CriterionIssues& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
        inline CriterionIssues& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CriterionIssues& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<CriterionIssues::ExtendInfo> extendInfo_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> position_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->criterionIssues_ == nullptr
        && this->templateName_ == nullptr && this->templateUrl_ == nullptr && this->totalCriterionIssueCount_ == nullptr && this->totalMandatoryCriterionIssueCount_ == nullptr; };
      // criterionIssues Field Functions 
      bool hasCriterionIssues() const { return this->criterionIssues_ != nullptr;};
      void deleteCriterionIssues() { this->criterionIssues_ = nullptr;};
      inline const vector<TemplateCriterionIssueList::CriterionIssues> & getCriterionIssues() const { DARABONBA_PTR_GET_CONST(criterionIssues_, vector<TemplateCriterionIssueList::CriterionIssues>) };
      inline vector<TemplateCriterionIssueList::CriterionIssues> getCriterionIssues() { DARABONBA_PTR_GET(criterionIssues_, vector<TemplateCriterionIssueList::CriterionIssues>) };
      inline TemplateCriterionIssueList& setCriterionIssues(const vector<TemplateCriterionIssueList::CriterionIssues> & criterionIssues) { DARABONBA_PTR_SET_VALUE(criterionIssues_, criterionIssues) };
      inline TemplateCriterionIssueList& setCriterionIssues(vector<TemplateCriterionIssueList::CriterionIssues> && criterionIssues) { DARABONBA_PTR_SET_RVALUE(criterionIssues_, criterionIssues) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline TemplateCriterionIssueList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateUrl Field Functions 
      bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
      void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
      inline int32_t getTemplateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, 0) };
      inline TemplateCriterionIssueList& setTemplateUrl(int32_t templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


      // totalCriterionIssueCount Field Functions 
      bool hasTotalCriterionIssueCount() const { return this->totalCriterionIssueCount_ != nullptr;};
      void deleteTotalCriterionIssueCount() { this->totalCriterionIssueCount_ = nullptr;};
      inline int32_t getTotalCriterionIssueCount() const { DARABONBA_PTR_GET_DEFAULT(totalCriterionIssueCount_, 0) };
      inline TemplateCriterionIssueList& setTotalCriterionIssueCount(int32_t totalCriterionIssueCount) { DARABONBA_PTR_SET_VALUE(totalCriterionIssueCount_, totalCriterionIssueCount) };


      // totalMandatoryCriterionIssueCount Field Functions 
      bool hasTotalMandatoryCriterionIssueCount() const { return this->totalMandatoryCriterionIssueCount_ != nullptr;};
      void deleteTotalMandatoryCriterionIssueCount() { this->totalMandatoryCriterionIssueCount_ = nullptr;};
      inline int32_t getTotalMandatoryCriterionIssueCount() const { DARABONBA_PTR_GET_DEFAULT(totalMandatoryCriterionIssueCount_, 0) };
      inline TemplateCriterionIssueList& setTotalMandatoryCriterionIssueCount(int32_t totalMandatoryCriterionIssueCount) { DARABONBA_PTR_SET_VALUE(totalMandatoryCriterionIssueCount_, totalMandatoryCriterionIssueCount) };


    protected:
      shared_ptr<vector<TemplateCriterionIssueList::CriterionIssues>> criterionIssues_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<int32_t> templateUrl_ {};
      shared_ptr<int32_t> totalCriterionIssueCount_ {};
      shared_ptr<int32_t> totalMandatoryCriterionIssueCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskyTemplateCount_ == nullptr && this->templateCriterionIssueList_ == nullptr && this->totalCriterionIssueCount_ == nullptr && this->totalMandatoryCriterionIssueCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTemplateCriterionIssuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskyTemplateCount Field Functions 
    bool hasRiskyTemplateCount() const { return this->riskyTemplateCount_ != nullptr;};
    void deleteRiskyTemplateCount() { this->riskyTemplateCount_ = nullptr;};
    inline int32_t getRiskyTemplateCount() const { DARABONBA_PTR_GET_DEFAULT(riskyTemplateCount_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setRiskyTemplateCount(int32_t riskyTemplateCount) { DARABONBA_PTR_SET_VALUE(riskyTemplateCount_, riskyTemplateCount) };


    // templateCriterionIssueList Field Functions 
    bool hasTemplateCriterionIssueList() const { return this->templateCriterionIssueList_ != nullptr;};
    void deleteTemplateCriterionIssueList() { this->templateCriterionIssueList_ = nullptr;};
    inline const vector<GetServiceTemplateCriterionIssuesResponseBody::TemplateCriterionIssueList> & getTemplateCriterionIssueList() const { DARABONBA_PTR_GET_CONST(templateCriterionIssueList_, vector<GetServiceTemplateCriterionIssuesResponseBody::TemplateCriterionIssueList>) };
    inline vector<GetServiceTemplateCriterionIssuesResponseBody::TemplateCriterionIssueList> getTemplateCriterionIssueList() { DARABONBA_PTR_GET(templateCriterionIssueList_, vector<GetServiceTemplateCriterionIssuesResponseBody::TemplateCriterionIssueList>) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setTemplateCriterionIssueList(const vector<GetServiceTemplateCriterionIssuesResponseBody::TemplateCriterionIssueList> & templateCriterionIssueList) { DARABONBA_PTR_SET_VALUE(templateCriterionIssueList_, templateCriterionIssueList) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setTemplateCriterionIssueList(vector<GetServiceTemplateCriterionIssuesResponseBody::TemplateCriterionIssueList> && templateCriterionIssueList) { DARABONBA_PTR_SET_RVALUE(templateCriterionIssueList_, templateCriterionIssueList) };


    // totalCriterionIssueCount Field Functions 
    bool hasTotalCriterionIssueCount() const { return this->totalCriterionIssueCount_ != nullptr;};
    void deleteTotalCriterionIssueCount() { this->totalCriterionIssueCount_ = nullptr;};
    inline int32_t getTotalCriterionIssueCount() const { DARABONBA_PTR_GET_DEFAULT(totalCriterionIssueCount_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setTotalCriterionIssueCount(int32_t totalCriterionIssueCount) { DARABONBA_PTR_SET_VALUE(totalCriterionIssueCount_, totalCriterionIssueCount) };


    // totalMandatoryCriterionIssueCount Field Functions 
    bool hasTotalMandatoryCriterionIssueCount() const { return this->totalMandatoryCriterionIssueCount_ != nullptr;};
    void deleteTotalMandatoryCriterionIssueCount() { this->totalMandatoryCriterionIssueCount_ = nullptr;};
    inline int32_t getTotalMandatoryCriterionIssueCount() const { DARABONBA_PTR_GET_DEFAULT(totalMandatoryCriterionIssueCount_, 0) };
    inline GetServiceTemplateCriterionIssuesResponseBody& setTotalMandatoryCriterionIssueCount(int32_t totalMandatoryCriterionIssueCount) { DARABONBA_PTR_SET_VALUE(totalMandatoryCriterionIssueCount_, totalMandatoryCriterionIssueCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> riskyTemplateCount_ {};
    shared_ptr<vector<GetServiceTemplateCriterionIssuesResponseBody::TemplateCriterionIssueList>> templateCriterionIssueList_ {};
    shared_ptr<int32_t> totalCriterionIssueCount_ {};
    shared_ptr<int32_t> totalMandatoryCriterionIssueCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
