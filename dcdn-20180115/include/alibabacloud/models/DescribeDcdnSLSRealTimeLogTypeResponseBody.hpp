// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGTYPERESPONSEBODY_HPP_
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
  class DescribeDcdnSLSRealTimeLogTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSLSRealTimeLogTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSLSRealTimeLogTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnSLSRealTimeLogTypeResponseBody() = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBody(const DescribeDcdnSLSRealTimeLogTypeResponseBody &) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBody(DescribeDcdnSLSRealTimeLogTypeResponseBody &&) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSLSRealTimeLogTypeResponseBody() = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBody& operator=(const DescribeDcdnSLSRealTimeLogTypeResponseBody &) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBody& operator=(DescribeDcdnSLSRealTimeLogTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Business, business_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Business, business_);
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
      class Business : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Business& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
          DARABONBA_PTR_TO_JSON(Desc, desc_);
        };
        friend void from_json(const Darabonba::Json& j, Business& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
        };
        Business() = default ;
        Business(const Business &) = default ;
        Business(Business &&) = default ;
        Business(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Business() = default ;
        Business& operator=(const Business &) = default ;
        Business& operator=(Business &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessType_ == nullptr
        && this->desc_ == nullptr; };
        // businessType Field Functions 
        bool hasBusinessType() const { return this->businessType_ != nullptr;};
        void deleteBusinessType() { this->businessType_ = nullptr;};
        inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
        inline Business& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Business& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      protected:
        // The type of real-time logs. Valid values:
        // 
        // *   **dcdn_log_access_l1**: access logs.
        // *   **dcdn_log_er**: EdgeRoutine logs
        // *   **dcdn_log_waf**: WAF interception logs
        shared_ptr<string> businessType_ {};
        // The description of the real-time log type.
        shared_ptr<string> desc_ {};
      };

      virtual bool empty() const override { return this->business_ == nullptr; };
      // business Field Functions 
      bool hasBusiness() const { return this->business_ != nullptr;};
      void deleteBusiness() { this->business_ = nullptr;};
      inline const vector<Content::Business> & getBusiness() const { DARABONBA_PTR_GET_CONST(business_, vector<Content::Business>) };
      inline vector<Content::Business> getBusiness() { DARABONBA_PTR_GET(business_, vector<Content::Business>) };
      inline Content& setBusiness(const vector<Content::Business> & business) { DARABONBA_PTR_SET_VALUE(business_, business) };
      inline Content& setBusiness(vector<Content::Business> && business) { DARABONBA_PTR_SET_RVALUE(business_, business) };


    protected:
      shared_ptr<vector<Content::Business>> business_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeDcdnSLSRealTimeLogTypeResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeDcdnSLSRealTimeLogTypeResponseBody::Content) };
    inline DescribeDcdnSLSRealTimeLogTypeResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeDcdnSLSRealTimeLogTypeResponseBody::Content) };
    inline DescribeDcdnSLSRealTimeLogTypeResponseBody& setContent(const DescribeDcdnSLSRealTimeLogTypeResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnSLSRealTimeLogTypeResponseBody& setContent(DescribeDcdnSLSRealTimeLogTypeResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnSLSRealTimeLogTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<DescribeDcdnSLSRealTimeLogTypeResponseBody::Content> content_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
