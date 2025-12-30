// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class PreviewGtmRecoveryPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewGtmRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Previews, previews_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewGtmRecoveryPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Previews, previews_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    PreviewGtmRecoveryPlanResponseBody() = default ;
    PreviewGtmRecoveryPlanResponseBody(const PreviewGtmRecoveryPlanResponseBody &) = default ;
    PreviewGtmRecoveryPlanResponseBody(PreviewGtmRecoveryPlanResponseBody &&) = default ;
    PreviewGtmRecoveryPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewGtmRecoveryPlanResponseBody() = default ;
    PreviewGtmRecoveryPlanResponseBody& operator=(const PreviewGtmRecoveryPlanResponseBody &) = default ;
    PreviewGtmRecoveryPlanResponseBody& operator=(PreviewGtmRecoveryPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Previews : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Previews& obj) { 
        DARABONBA_PTR_TO_JSON(Preview, preview_);
      };
      friend void from_json(const Darabonba::Json& j, Previews& obj) { 
        DARABONBA_PTR_FROM_JSON(Preview, preview_);
      };
      Previews() = default ;
      Previews(const Previews &) = default ;
      Previews(Previews &&) = default ;
      Previews(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Previews() = default ;
      Previews& operator=(const Previews &) = default ;
      Previews& operator=(Previews &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Preview : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Preview& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SwitchInfos, switchInfos_);
          DARABONBA_PTR_TO_JSON(UserDomainName, userDomainName_);
        };
        friend void from_json(const Darabonba::Json& j, Preview& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SwitchInfos, switchInfos_);
          DARABONBA_PTR_FROM_JSON(UserDomainName, userDomainName_);
        };
        Preview() = default ;
        Preview(const Preview &) = default ;
        Preview(Preview &&) = default ;
        Preview(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Preview() = default ;
        Preview& operator=(const Preview &) = default ;
        Preview& operator=(Preview &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SwitchInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SwitchInfos& obj) { 
            DARABONBA_PTR_TO_JSON(SwitchInfo, switchInfo_);
          };
          friend void from_json(const Darabonba::Json& j, SwitchInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(SwitchInfo, switchInfo_);
          };
          SwitchInfos() = default ;
          SwitchInfos(const SwitchInfos &) = default ;
          SwitchInfos(SwitchInfos &&) = default ;
          SwitchInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SwitchInfos() = default ;
          SwitchInfos& operator=(const SwitchInfos &) = default ;
          SwitchInfos& operator=(SwitchInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SwitchInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SwitchInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
            };
            friend void from_json(const Darabonba::Json& j, SwitchInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
            };
            SwitchInfo() = default ;
            SwitchInfo(const SwitchInfo &) = default ;
            SwitchInfo(SwitchInfo &&) = default ;
            SwitchInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SwitchInfo() = default ;
            SwitchInfo& operator=(const SwitchInfo &) = default ;
            SwitchInfo& operator=(SwitchInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->content_ == nullptr
        && this->strategyName_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline SwitchInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // strategyName Field Functions 
            bool hasStrategyName() const { return this->strategyName_ != nullptr;};
            void deleteStrategyName() { this->strategyName_ = nullptr;};
            inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
            inline SwitchInfo& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


          protected:
            // The formatted message content.
            shared_ptr<string> content_ {};
            // The name of the switching policy for address pools.
            shared_ptr<string> strategyName_ {};
          };

          virtual bool empty() const override { return this->switchInfo_ == nullptr; };
          // switchInfo Field Functions 
          bool hasSwitchInfo() const { return this->switchInfo_ != nullptr;};
          void deleteSwitchInfo() { this->switchInfo_ = nullptr;};
          inline const vector<SwitchInfos::SwitchInfo> & getSwitchInfo() const { DARABONBA_PTR_GET_CONST(switchInfo_, vector<SwitchInfos::SwitchInfo>) };
          inline vector<SwitchInfos::SwitchInfo> getSwitchInfo() { DARABONBA_PTR_GET(switchInfo_, vector<SwitchInfos::SwitchInfo>) };
          inline SwitchInfos& setSwitchInfo(const vector<SwitchInfos::SwitchInfo> & switchInfo) { DARABONBA_PTR_SET_VALUE(switchInfo_, switchInfo) };
          inline SwitchInfos& setSwitchInfo(vector<SwitchInfos::SwitchInfo> && switchInfo) { DARABONBA_PTR_SET_RVALUE(switchInfo_, switchInfo) };


        protected:
          shared_ptr<vector<SwitchInfos::SwitchInfo>> switchInfo_ {};
        };

        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->name_ == nullptr && this->switchInfos_ == nullptr && this->userDomainName_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Preview& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Preview& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // switchInfos Field Functions 
        bool hasSwitchInfos() const { return this->switchInfos_ != nullptr;};
        void deleteSwitchInfos() { this->switchInfos_ = nullptr;};
        inline const Preview::SwitchInfos & getSwitchInfos() const { DARABONBA_PTR_GET_CONST(switchInfos_, Preview::SwitchInfos) };
        inline Preview::SwitchInfos getSwitchInfos() { DARABONBA_PTR_GET(switchInfos_, Preview::SwitchInfos) };
        inline Preview& setSwitchInfos(const Preview::SwitchInfos & switchInfos) { DARABONBA_PTR_SET_VALUE(switchInfos_, switchInfos) };
        inline Preview& setSwitchInfos(Preview::SwitchInfos && switchInfos) { DARABONBA_PTR_SET_RVALUE(switchInfos_, switchInfos) };


        // userDomainName Field Functions 
        bool hasUserDomainName() const { return this->userDomainName_ != nullptr;};
        void deleteUserDomainName() { this->userDomainName_ = nullptr;};
        inline string getUserDomainName() const { DARABONBA_PTR_GET_DEFAULT(userDomainName_, "") };
        inline Preview& setUserDomainName(string userDomainName) { DARABONBA_PTR_SET_VALUE(userDomainName_, userDomainName) };


      protected:
        // The ID of the GTM instance to which the previewed disaster recovery plan belongs.
        shared_ptr<string> instanceId_ {};
        // The name of the GTM instance to which the previewed disaster recovery plan belongs.
        shared_ptr<string> name_ {};
        // The returned information of the switching policies for address pools.
        shared_ptr<Preview::SwitchInfos> switchInfos_ {};
        // The user\\"s domain name or domain name list.
        shared_ptr<string> userDomainName_ {};
      };

      virtual bool empty() const override { return this->preview_ == nullptr; };
      // preview Field Functions 
      bool hasPreview() const { return this->preview_ != nullptr;};
      void deletePreview() { this->preview_ = nullptr;};
      inline const vector<Previews::Preview> & getPreview() const { DARABONBA_PTR_GET_CONST(preview_, vector<Previews::Preview>) };
      inline vector<Previews::Preview> getPreview() { DARABONBA_PTR_GET(preview_, vector<Previews::Preview>) };
      inline Previews& setPreview(const vector<Previews::Preview> & preview) { DARABONBA_PTR_SET_VALUE(preview_, preview) };
      inline Previews& setPreview(vector<Previews::Preview> && preview) { DARABONBA_PTR_SET_RVALUE(preview_, preview) };


    protected:
      shared_ptr<vector<Previews::Preview>> preview_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->previews_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline PreviewGtmRecoveryPlanResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PreviewGtmRecoveryPlanResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // previews Field Functions 
    bool hasPreviews() const { return this->previews_ != nullptr;};
    void deletePreviews() { this->previews_ = nullptr;};
    inline const PreviewGtmRecoveryPlanResponseBody::Previews & getPreviews() const { DARABONBA_PTR_GET_CONST(previews_, PreviewGtmRecoveryPlanResponseBody::Previews) };
    inline PreviewGtmRecoveryPlanResponseBody::Previews getPreviews() { DARABONBA_PTR_GET(previews_, PreviewGtmRecoveryPlanResponseBody::Previews) };
    inline PreviewGtmRecoveryPlanResponseBody& setPreviews(const PreviewGtmRecoveryPlanResponseBody::Previews & previews) { DARABONBA_PTR_SET_VALUE(previews_, previews) };
    inline PreviewGtmRecoveryPlanResponseBody& setPreviews(PreviewGtmRecoveryPlanResponseBody::Previews && previews) { DARABONBA_PTR_SET_RVALUE(previews_, previews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewGtmRecoveryPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline PreviewGtmRecoveryPlanResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline PreviewGtmRecoveryPlanResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The returned preview information of the disaster recovery plan.
    shared_ptr<PreviewGtmRecoveryPlanResponseBody::Previews> previews_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned on all pages.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
