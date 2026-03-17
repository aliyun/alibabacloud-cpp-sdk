// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINDABLESMARTACCESSGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINDABLESMARTACCESSGATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeBindableSmartAccessGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBindableSmartAccessGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartAccessGateways, smartAccessGateways_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBindableSmartAccessGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartAccessGateways, smartAccessGateways_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBindableSmartAccessGatewaysResponseBody() = default ;
    DescribeBindableSmartAccessGatewaysResponseBody(const DescribeBindableSmartAccessGatewaysResponseBody &) = default ;
    DescribeBindableSmartAccessGatewaysResponseBody(DescribeBindableSmartAccessGatewaysResponseBody &&) = default ;
    DescribeBindableSmartAccessGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBindableSmartAccessGatewaysResponseBody() = default ;
    DescribeBindableSmartAccessGatewaysResponseBody& operator=(const DescribeBindableSmartAccessGatewaysResponseBody &) = default ;
    DescribeBindableSmartAccessGatewaysResponseBody& operator=(DescribeBindableSmartAccessGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmartAccessGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmartAccessGateways& obj) { 
        DARABONBA_PTR_TO_JSON(SmartAccessGateway, smartAccessGateway_);
      };
      friend void from_json(const Darabonba::Json& j, SmartAccessGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(SmartAccessGateway, smartAccessGateway_);
      };
      SmartAccessGateways() = default ;
      SmartAccessGateways(const SmartAccessGateways &) = default ;
      SmartAccessGateways(SmartAccessGateways &&) = default ;
      SmartAccessGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmartAccessGateways() = default ;
      SmartAccessGateways& operator=(const SmartAccessGateways &) = default ;
      SmartAccessGateways& operator=(SmartAccessGateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SmartAccessGateway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SmartAccessGateway& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_TO_JSON(SmartAGUid, smartAGUid_);
        };
        friend void from_json(const Darabonba::Json& j, SmartAccessGateway& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_FROM_JSON(SmartAGUid, smartAGUid_);
        };
        SmartAccessGateway() = default ;
        SmartAccessGateway(const SmartAccessGateway &) = default ;
        SmartAccessGateway(SmartAccessGateway &&) = default ;
        SmartAccessGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SmartAccessGateway() = default ;
        SmartAccessGateway& operator=(const SmartAccessGateway &) = default ;
        SmartAccessGateway& operator=(SmartAccessGateway &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->smartAGId_ == nullptr && this->smartAGUid_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SmartAccessGateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // smartAGId Field Functions 
        bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
        void deleteSmartAGId() { this->smartAGId_ = nullptr;};
        inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
        inline SmartAccessGateway& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


        // smartAGUid Field Functions 
        bool hasSmartAGUid() const { return this->smartAGUid_ != nullptr;};
        void deleteSmartAGUid() { this->smartAGUid_ = nullptr;};
        inline int64_t getSmartAGUid() const { DARABONBA_PTR_GET_DEFAULT(smartAGUid_, 0L) };
        inline SmartAccessGateway& setSmartAGUid(int64_t smartAGUid) { DARABONBA_PTR_SET_VALUE(smartAGUid_, smartAGUid) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> smartAGId_ {};
        shared_ptr<int64_t> smartAGUid_ {};
      };

      virtual bool empty() const override { return this->smartAccessGateway_ == nullptr; };
      // smartAccessGateway Field Functions 
      bool hasSmartAccessGateway() const { return this->smartAccessGateway_ != nullptr;};
      void deleteSmartAccessGateway() { this->smartAccessGateway_ = nullptr;};
      inline const vector<SmartAccessGateways::SmartAccessGateway> & getSmartAccessGateway() const { DARABONBA_PTR_GET_CONST(smartAccessGateway_, vector<SmartAccessGateways::SmartAccessGateway>) };
      inline vector<SmartAccessGateways::SmartAccessGateway> getSmartAccessGateway() { DARABONBA_PTR_GET(smartAccessGateway_, vector<SmartAccessGateways::SmartAccessGateway>) };
      inline SmartAccessGateways& setSmartAccessGateway(const vector<SmartAccessGateways::SmartAccessGateway> & smartAccessGateway) { DARABONBA_PTR_SET_VALUE(smartAccessGateway_, smartAccessGateway) };
      inline SmartAccessGateways& setSmartAccessGateway(vector<SmartAccessGateways::SmartAccessGateway> && smartAccessGateway) { DARABONBA_PTR_SET_RVALUE(smartAccessGateway_, smartAccessGateway) };


    protected:
      shared_ptr<vector<SmartAccessGateways::SmartAccessGateway>> smartAccessGateway_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->smartAccessGateways_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBindableSmartAccessGatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBindableSmartAccessGatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBindableSmartAccessGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartAccessGateways Field Functions 
    bool hasSmartAccessGateways() const { return this->smartAccessGateways_ != nullptr;};
    void deleteSmartAccessGateways() { this->smartAccessGateways_ = nullptr;};
    inline const DescribeBindableSmartAccessGatewaysResponseBody::SmartAccessGateways & getSmartAccessGateways() const { DARABONBA_PTR_GET_CONST(smartAccessGateways_, DescribeBindableSmartAccessGatewaysResponseBody::SmartAccessGateways) };
    inline DescribeBindableSmartAccessGatewaysResponseBody::SmartAccessGateways getSmartAccessGateways() { DARABONBA_PTR_GET(smartAccessGateways_, DescribeBindableSmartAccessGatewaysResponseBody::SmartAccessGateways) };
    inline DescribeBindableSmartAccessGatewaysResponseBody& setSmartAccessGateways(const DescribeBindableSmartAccessGatewaysResponseBody::SmartAccessGateways & smartAccessGateways) { DARABONBA_PTR_SET_VALUE(smartAccessGateways_, smartAccessGateways) };
    inline DescribeBindableSmartAccessGatewaysResponseBody& setSmartAccessGateways(DescribeBindableSmartAccessGatewaysResponseBody::SmartAccessGateways && smartAccessGateways) { DARABONBA_PTR_SET_RVALUE(smartAccessGateways_, smartAccessGateways) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBindableSmartAccessGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeBindableSmartAccessGatewaysResponseBody::SmartAccessGateways> smartAccessGateways_ {};
    // The total number of SAG instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
