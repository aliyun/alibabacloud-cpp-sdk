// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPROPERTYTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPROPERTYTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSystemPropertyTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemPropertyTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemPropertyTemplateModel, systemPropertyTemplateModel_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemPropertyTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemPropertyTemplateModel, systemPropertyTemplateModel_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSystemPropertyTemplatesResponseBody() = default ;
    DescribeSystemPropertyTemplatesResponseBody(const DescribeSystemPropertyTemplatesResponseBody &) = default ;
    DescribeSystemPropertyTemplatesResponseBody(DescribeSystemPropertyTemplatesResponseBody &&) = default ;
    DescribeSystemPropertyTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemPropertyTemplatesResponseBody() = default ;
    DescribeSystemPropertyTemplatesResponseBody& operator=(const DescribeSystemPropertyTemplatesResponseBody &) = default ;
    DescribeSystemPropertyTemplatesResponseBody& operator=(DescribeSystemPropertyTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemPropertyTemplateModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemPropertyTemplateModel& obj) { 
        DARABONBA_PTR_TO_JSON(EnableAuto, enableAuto_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SystemPropertyInfo, systemPropertyInfo_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, SystemPropertyTemplateModel& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableAuto, enableAuto_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SystemPropertyInfo, systemPropertyInfo_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      SystemPropertyTemplateModel() = default ;
      SystemPropertyTemplateModel(const SystemPropertyTemplateModel &) = default ;
      SystemPropertyTemplateModel(SystemPropertyTemplateModel &&) = default ;
      SystemPropertyTemplateModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemPropertyTemplateModel() = default ;
      SystemPropertyTemplateModel& operator=(const SystemPropertyTemplateModel &) = default ;
      SystemPropertyTemplateModel& operator=(SystemPropertyTemplateModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemPropertyInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemPropertyInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CustomPropertyInfos, customPropertyInfos_);
          DARABONBA_PTR_TO_JSON(RoProductDevice, roProductDevice_);
        };
        friend void from_json(const Darabonba::Json& j, SystemPropertyInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomPropertyInfos, customPropertyInfos_);
          DARABONBA_PTR_FROM_JSON(RoProductDevice, roProductDevice_);
        };
        SystemPropertyInfo() = default ;
        SystemPropertyInfo(const SystemPropertyInfo &) = default ;
        SystemPropertyInfo(SystemPropertyInfo &&) = default ;
        SystemPropertyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemPropertyInfo() = default ;
        SystemPropertyInfo& operator=(const SystemPropertyInfo &) = default ;
        SystemPropertyInfo& operator=(SystemPropertyInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CustomPropertyInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomPropertyInfos& obj) { 
            DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
            DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
          };
          friend void from_json(const Darabonba::Json& j, CustomPropertyInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
            DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
          };
          CustomPropertyInfos() = default ;
          CustomPropertyInfos(const CustomPropertyInfos &) = default ;
          CustomPropertyInfos(CustomPropertyInfos &&) = default ;
          CustomPropertyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomPropertyInfos() = default ;
          CustomPropertyInfos& operator=(const CustomPropertyInfos &) = default ;
          CustomPropertyInfos& operator=(CustomPropertyInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->propertyName_ == nullptr
        && this->propertyValue_ == nullptr; };
          // propertyName Field Functions 
          bool hasPropertyName() const { return this->propertyName_ != nullptr;};
          void deletePropertyName() { this->propertyName_ = nullptr;};
          inline string getPropertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
          inline CustomPropertyInfos& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


          // propertyValue Field Functions 
          bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
          void deletePropertyValue() { this->propertyValue_ = nullptr;};
          inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
          inline CustomPropertyInfos& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


        protected:
          shared_ptr<string> propertyName_ {};
          shared_ptr<string> propertyValue_ {};
        };

        virtual bool empty() const override { return this->customPropertyInfos_ == nullptr
        && this->roProductDevice_ == nullptr; };
        // customPropertyInfos Field Functions 
        bool hasCustomPropertyInfos() const { return this->customPropertyInfos_ != nullptr;};
        void deleteCustomPropertyInfos() { this->customPropertyInfos_ = nullptr;};
        inline const vector<SystemPropertyInfo::CustomPropertyInfos> & getCustomPropertyInfos() const { DARABONBA_PTR_GET_CONST(customPropertyInfos_, vector<SystemPropertyInfo::CustomPropertyInfos>) };
        inline vector<SystemPropertyInfo::CustomPropertyInfos> getCustomPropertyInfos() { DARABONBA_PTR_GET(customPropertyInfos_, vector<SystemPropertyInfo::CustomPropertyInfos>) };
        inline SystemPropertyInfo& setCustomPropertyInfos(const vector<SystemPropertyInfo::CustomPropertyInfos> & customPropertyInfos) { DARABONBA_PTR_SET_VALUE(customPropertyInfos_, customPropertyInfos) };
        inline SystemPropertyInfo& setCustomPropertyInfos(vector<SystemPropertyInfo::CustomPropertyInfos> && customPropertyInfos) { DARABONBA_PTR_SET_RVALUE(customPropertyInfos_, customPropertyInfos) };


        // roProductDevice Field Functions 
        bool hasRoProductDevice() const { return this->roProductDevice_ != nullptr;};
        void deleteRoProductDevice() { this->roProductDevice_ = nullptr;};
        inline string getRoProductDevice() const { DARABONBA_PTR_GET_DEFAULT(roProductDevice_, "") };
        inline SystemPropertyInfo& setRoProductDevice(string roProductDevice) { DARABONBA_PTR_SET_VALUE(roProductDevice_, roProductDevice) };


      protected:
        shared_ptr<vector<SystemPropertyInfo::CustomPropertyInfos>> customPropertyInfos_ {};
        shared_ptr<string> roProductDevice_ {};
      };

      virtual bool empty() const override { return this->enableAuto_ == nullptr
        && this->filePath_ == nullptr && this->status_ == nullptr && this->systemPropertyInfo_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
      // enableAuto Field Functions 
      bool hasEnableAuto() const { return this->enableAuto_ != nullptr;};
      void deleteEnableAuto() { this->enableAuto_ = nullptr;};
      inline bool getEnableAuto() const { DARABONBA_PTR_GET_DEFAULT(enableAuto_, false) };
      inline SystemPropertyTemplateModel& setEnableAuto(bool enableAuto) { DARABONBA_PTR_SET_VALUE(enableAuto_, enableAuto) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline SystemPropertyTemplateModel& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SystemPropertyTemplateModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // systemPropertyInfo Field Functions 
      bool hasSystemPropertyInfo() const { return this->systemPropertyInfo_ != nullptr;};
      void deleteSystemPropertyInfo() { this->systemPropertyInfo_ = nullptr;};
      inline const SystemPropertyTemplateModel::SystemPropertyInfo & getSystemPropertyInfo() const { DARABONBA_PTR_GET_CONST(systemPropertyInfo_, SystemPropertyTemplateModel::SystemPropertyInfo) };
      inline SystemPropertyTemplateModel::SystemPropertyInfo getSystemPropertyInfo() { DARABONBA_PTR_GET(systemPropertyInfo_, SystemPropertyTemplateModel::SystemPropertyInfo) };
      inline SystemPropertyTemplateModel& setSystemPropertyInfo(const SystemPropertyTemplateModel::SystemPropertyInfo & systemPropertyInfo) { DARABONBA_PTR_SET_VALUE(systemPropertyInfo_, systemPropertyInfo) };
      inline SystemPropertyTemplateModel& setSystemPropertyInfo(SystemPropertyTemplateModel::SystemPropertyInfo && systemPropertyInfo) { DARABONBA_PTR_SET_RVALUE(systemPropertyInfo_, systemPropertyInfo) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline SystemPropertyTemplateModel& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline SystemPropertyTemplateModel& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      shared_ptr<bool> enableAuto_ {};
      shared_ptr<string> filePath_ {};
      shared_ptr<string> status_ {};
      shared_ptr<SystemPropertyTemplateModel::SystemPropertyInfo> systemPropertyInfo_ {};
      shared_ptr<string> templateId_ {};
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->systemPropertyTemplateModel_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSystemPropertyTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemPropertyTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemPropertyTemplateModel Field Functions 
    bool hasSystemPropertyTemplateModel() const { return this->systemPropertyTemplateModel_ != nullptr;};
    void deleteSystemPropertyTemplateModel() { this->systemPropertyTemplateModel_ = nullptr;};
    inline const vector<DescribeSystemPropertyTemplatesResponseBody::SystemPropertyTemplateModel> & getSystemPropertyTemplateModel() const { DARABONBA_PTR_GET_CONST(systemPropertyTemplateModel_, vector<DescribeSystemPropertyTemplatesResponseBody::SystemPropertyTemplateModel>) };
    inline vector<DescribeSystemPropertyTemplatesResponseBody::SystemPropertyTemplateModel> getSystemPropertyTemplateModel() { DARABONBA_PTR_GET(systemPropertyTemplateModel_, vector<DescribeSystemPropertyTemplatesResponseBody::SystemPropertyTemplateModel>) };
    inline DescribeSystemPropertyTemplatesResponseBody& setSystemPropertyTemplateModel(const vector<DescribeSystemPropertyTemplatesResponseBody::SystemPropertyTemplateModel> & systemPropertyTemplateModel) { DARABONBA_PTR_SET_VALUE(systemPropertyTemplateModel_, systemPropertyTemplateModel) };
    inline DescribeSystemPropertyTemplatesResponseBody& setSystemPropertyTemplateModel(vector<DescribeSystemPropertyTemplatesResponseBody::SystemPropertyTemplateModel> && systemPropertyTemplateModel) { DARABONBA_PTR_SET_RVALUE(systemPropertyTemplateModel_, systemPropertyTemplateModel) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSystemPropertyTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSystemPropertyTemplatesResponseBody::SystemPropertyTemplateModel>> systemPropertyTemplateModel_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
