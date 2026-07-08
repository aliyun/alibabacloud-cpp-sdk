// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTRESOURCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListSupportResourceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResourceTypes, supportResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResourceTypes, supportResourceTypes_);
    };
    ListSupportResourceTypesResponseBody() = default ;
    ListSupportResourceTypesResponseBody(const ListSupportResourceTypesResponseBody &) = default ;
    ListSupportResourceTypesResponseBody(ListSupportResourceTypesResponseBody &&) = default ;
    ListSupportResourceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportResourceTypesResponseBody() = default ;
    ListSupportResourceTypesResponseBody& operator=(const ListSupportResourceTypesResponseBody &) = default ;
    ListSupportResourceTypesResponseBody& operator=(ListSupportResourceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(ArnTemplate, arnTemplate_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SupportItems, supportItems_);
      };
      friend void from_json(const Darabonba::Json& j, SupportResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(ArnTemplate, arnTemplate_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SupportItems, supportItems_);
      };
      SupportResourceTypes() = default ;
      SupportResourceTypes(const SupportResourceTypes &) = default ;
      SupportResourceTypes(SupportResourceTypes &&) = default ;
      SupportResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportResourceTypes() = default ;
      SupportResourceTypes& operator=(const SupportResourceTypes &) = default ;
      SupportResourceTypes& operator=(SupportResourceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportItems& obj) { 
          DARABONBA_PTR_TO_JSON(Support, support_);
          DARABONBA_PTR_TO_JSON(SupportCode, supportCode_);
          DARABONBA_PTR_TO_JSON(SupportDetails, supportDetails_);
        };
        friend void from_json(const Darabonba::Json& j, SupportItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Support, support_);
          DARABONBA_PTR_FROM_JSON(SupportCode, supportCode_);
          DARABONBA_PTR_FROM_JSON(SupportDetails, supportDetails_);
        };
        SupportItems() = default ;
        SupportItems(const SupportItems &) = default ;
        SupportItems(SupportItems &&) = default ;
        SupportItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportItems() = default ;
        SupportItems& operator=(const SupportItems &) = default ;
        SupportItems& operator=(SupportItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->support_ == nullptr
        && this->supportCode_ == nullptr && this->supportDetails_ == nullptr; };
        // support Field Functions 
        bool hasSupport() const { return this->support_ != nullptr;};
        void deleteSupport() { this->support_ = nullptr;};
        inline bool getSupport() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
        inline SupportItems& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


        // supportCode Field Functions 
        bool hasSupportCode() const { return this->supportCode_ != nullptr;};
        void deleteSupportCode() { this->supportCode_ = nullptr;};
        inline string getSupportCode() const { DARABONBA_PTR_GET_DEFAULT(supportCode_, "") };
        inline SupportItems& setSupportCode(string supportCode) { DARABONBA_PTR_SET_VALUE(supportCode_, supportCode) };


        // supportDetails Field Functions 
        bool hasSupportDetails() const { return this->supportDetails_ != nullptr;};
        void deleteSupportDetails() { this->supportDetails_ = nullptr;};
        inline const vector<map<string, string>> & getSupportDetails() const { DARABONBA_PTR_GET_CONST(supportDetails_, vector<map<string, string>>) };
        inline vector<map<string, string>> getSupportDetails() { DARABONBA_PTR_GET(supportDetails_, vector<map<string, string>>) };
        inline SupportItems& setSupportDetails(const vector<map<string, string>> & supportDetails) { DARABONBA_PTR_SET_VALUE(supportDetails_, supportDetails) };
        inline SupportItems& setSupportDetails(vector<map<string, string>> && supportDetails) { DARABONBA_PTR_SET_RVALUE(supportDetails_, supportDetails) };


      protected:
        // Indicates whether the tag-related capability item is supported. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> support_ {};
        // The code of the tag-related capability item.
        shared_ptr<string> supportCode_ {};
        // The details of the support for the tag-related capability item.
        shared_ptr<vector<map<string, string>>> supportDetails_ {};
      };

      virtual bool empty() const override { return this->arnTemplate_ == nullptr
        && this->productCode_ == nullptr && this->resourceType_ == nullptr && this->supportItems_ == nullptr; };
      // arnTemplate Field Functions 
      bool hasArnTemplate() const { return this->arnTemplate_ != nullptr;};
      void deleteArnTemplate() { this->arnTemplate_ = nullptr;};
      inline string getArnTemplate() const { DARABONBA_PTR_GET_DEFAULT(arnTemplate_, "") };
      inline SupportResourceTypes& setArnTemplate(string arnTemplate) { DARABONBA_PTR_SET_VALUE(arnTemplate_, arnTemplate) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline SupportResourceTypes& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline SupportResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // supportItems Field Functions 
      bool hasSupportItems() const { return this->supportItems_ != nullptr;};
      void deleteSupportItems() { this->supportItems_ = nullptr;};
      inline const vector<SupportResourceTypes::SupportItems> & getSupportItems() const { DARABONBA_PTR_GET_CONST(supportItems_, vector<SupportResourceTypes::SupportItems>) };
      inline vector<SupportResourceTypes::SupportItems> getSupportItems() { DARABONBA_PTR_GET(supportItems_, vector<SupportResourceTypes::SupportItems>) };
      inline SupportResourceTypes& setSupportItems(const vector<SupportResourceTypes::SupportItems> & supportItems) { DARABONBA_PTR_SET_VALUE(supportItems_, supportItems) };
      inline SupportResourceTypes& setSupportItems(vector<SupportResourceTypes::SupportItems> && supportItems) { DARABONBA_PTR_SET_RVALUE(supportItems_, supportItems) };


    protected:
      // The resource ARN template.
      shared_ptr<string> arnTemplate_ {};
      // The service code.
      shared_ptr<string> productCode_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The supported tag-related capability items.
      // 
      // >  This parameter is returned only if the `ShowItems` parameter is set to `true`.
      shared_ptr<vector<SupportResourceTypes::SupportItems>> supportItems_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->supportResourceTypes_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupportResourceTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupportResourceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResourceTypes Field Functions 
    bool hasSupportResourceTypes() const { return this->supportResourceTypes_ != nullptr;};
    void deleteSupportResourceTypes() { this->supportResourceTypes_ = nullptr;};
    inline const vector<ListSupportResourceTypesResponseBody::SupportResourceTypes> & getSupportResourceTypes() const { DARABONBA_PTR_GET_CONST(supportResourceTypes_, vector<ListSupportResourceTypesResponseBody::SupportResourceTypes>) };
    inline vector<ListSupportResourceTypesResponseBody::SupportResourceTypes> getSupportResourceTypes() { DARABONBA_PTR_GET(supportResourceTypes_, vector<ListSupportResourceTypesResponseBody::SupportResourceTypes>) };
    inline ListSupportResourceTypesResponseBody& setSupportResourceTypes(const vector<ListSupportResourceTypesResponseBody::SupportResourceTypes> & supportResourceTypes) { DARABONBA_PTR_SET_VALUE(supportResourceTypes_, supportResourceTypes) };
    inline ListSupportResourceTypesResponseBody& setSupportResourceTypes(vector<ListSupportResourceTypesResponseBody::SupportResourceTypes> && supportResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportResourceTypes_, supportResourceTypes) };


  protected:
    // Indicates whether the next query is required.
    // 
    // *   If the value of this parameter is empty, all results are returned, and the next query is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The supported resource types.
    shared_ptr<vector<ListSupportResourceTypesResponseBody::SupportResourceTypes>> supportResourceTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
