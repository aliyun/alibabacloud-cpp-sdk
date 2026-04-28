// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeAdvicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAdvicesResponseBody() = default ;
    DescribeAdvicesResponseBody(const DescribeAdvicesResponseBody &) = default ;
    DescribeAdvicesResponseBody(DescribeAdvicesResponseBody &&) = default ;
    DescribeAdvicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvicesResponseBody() = default ;
    DescribeAdvicesResponseBody& operator=(const DescribeAdvicesResponseBody &) = default ;
    DescribeAdvicesResponseBody& operator=(DescribeAdvicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Advice, advice_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Advice, advice_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Advice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Advice& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(CheckName, checkName_);
          DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(Resource, resource_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
        };
        friend void from_json(const Darabonba::Json& j, Advice& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
          DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
        };
        Advice() = default ;
        Advice(const Advice &) = default ;
        Advice(Advice &&) = default ;
        Advice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Advice() = default ;
        Advice& operator=(const Advice &) = default ;
        Advice& operator=(Advice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->checkId_ == nullptr && this->checkName_ == nullptr && this->checkPlanId_ == nullptr && this->content_ == nullptr && this->description_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isExpired_ == nullptr && this->product_ == nullptr
        && this->resource_ == nullptr && this->resourceId_ == nullptr && this->severity_ == nullptr; };
        // aliyunId Field Functions 
        bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
        void deleteAliyunId() { this->aliyunId_ = nullptr;};
        inline int64_t getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, 0L) };
        inline Advice& setAliyunId(int64_t aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
        inline Advice& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // checkName Field Functions 
        bool hasCheckName() const { return this->checkName_ != nullptr;};
        void deleteCheckName() { this->checkName_ = nullptr;};
        inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
        inline Advice& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


        // checkPlanId Field Functions 
        bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
        void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
        inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
        inline Advice& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Advice& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Advice& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline Advice& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Advice& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Advice& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isExpired Field Functions 
        bool hasIsExpired() const { return this->isExpired_ != nullptr;};
        void deleteIsExpired() { this->isExpired_ = nullptr;};
        inline bool getIsExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
        inline Advice& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline Advice& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
        inline Advice& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Advice& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline int32_t getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, 0) };
        inline Advice& setSeverity(int32_t severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      protected:
        shared_ptr<int64_t> aliyunId_ {};
        shared_ptr<string> checkId_ {};
        shared_ptr<string> checkName_ {};
        shared_ptr<int64_t> checkPlanId_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> isExpired_ {};
        shared_ptr<string> product_ {};
        shared_ptr<string> resource_ {};
        shared_ptr<string> resourceId_ {};
        shared_ptr<int32_t> severity_ {};
      };

      virtual bool empty() const override { return this->advice_ == nullptr; };
      // advice Field Functions 
      bool hasAdvice() const { return this->advice_ != nullptr;};
      void deleteAdvice() { this->advice_ = nullptr;};
      inline const vector<Data::Advice> & getAdvice() const { DARABONBA_PTR_GET_CONST(advice_, vector<Data::Advice>) };
      inline vector<Data::Advice> getAdvice() { DARABONBA_PTR_GET(advice_, vector<Data::Advice>) };
      inline Data& setAdvice(const vector<Data::Advice> & advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };
      inline Data& setAdvice(vector<Data::Advice> && advice) { DARABONBA_PTR_SET_RVALUE(advice_, advice) };


    protected:
      shared_ptr<vector<Data::Advice>> advice_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAdvicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAdvicesResponseBody::Data) };
    inline DescribeAdvicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAdvicesResponseBody::Data) };
    inline DescribeAdvicesResponseBody& setData(const DescribeAdvicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAdvicesResponseBody& setData(DescribeAdvicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAdvicesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
