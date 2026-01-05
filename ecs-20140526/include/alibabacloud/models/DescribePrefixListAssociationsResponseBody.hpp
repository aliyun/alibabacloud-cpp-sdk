// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrefixListAssociations, prefixListAssociations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrefixListAssociations, prefixListAssociations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrefixListAssociationsResponseBody() = default ;
    DescribePrefixListAssociationsResponseBody(const DescribePrefixListAssociationsResponseBody &) = default ;
    DescribePrefixListAssociationsResponseBody(DescribePrefixListAssociationsResponseBody &&) = default ;
    DescribePrefixListAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListAssociationsResponseBody() = default ;
    DescribePrefixListAssociationsResponseBody& operator=(const DescribePrefixListAssociationsResponseBody &) = default ;
    DescribePrefixListAssociationsResponseBody& operator=(DescribePrefixListAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrefixListAssociations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrefixListAssociations& obj) { 
        DARABONBA_PTR_TO_JSON(PrefixListAssociation, prefixListAssociation_);
      };
      friend void from_json(const Darabonba::Json& j, PrefixListAssociations& obj) { 
        DARABONBA_PTR_FROM_JSON(PrefixListAssociation, prefixListAssociation_);
      };
      PrefixListAssociations() = default ;
      PrefixListAssociations(const PrefixListAssociations &) = default ;
      PrefixListAssociations(PrefixListAssociations &&) = default ;
      PrefixListAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrefixListAssociations() = default ;
      PrefixListAssociations& operator=(const PrefixListAssociations &) = default ;
      PrefixListAssociations& operator=(PrefixListAssociations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrefixListAssociation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrefixListAssociation& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, PrefixListAssociation& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        PrefixListAssociation() = default ;
        PrefixListAssociation(const PrefixListAssociation &) = default ;
        PrefixListAssociation(PrefixListAssociation &&) = default ;
        PrefixListAssociation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrefixListAssociation() = default ;
        PrefixListAssociation& operator=(const PrefixListAssociation &) = default ;
        PrefixListAssociation& operator=(PrefixListAssociation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline PrefixListAssociation& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline PrefixListAssociation& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The ID of the resource.
        shared_ptr<string> resourceId_ {};
        // The type of the resource.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->prefixListAssociation_ == nullptr; };
      // prefixListAssociation Field Functions 
      bool hasPrefixListAssociation() const { return this->prefixListAssociation_ != nullptr;};
      void deletePrefixListAssociation() { this->prefixListAssociation_ = nullptr;};
      inline const vector<PrefixListAssociations::PrefixListAssociation> & getPrefixListAssociation() const { DARABONBA_PTR_GET_CONST(prefixListAssociation_, vector<PrefixListAssociations::PrefixListAssociation>) };
      inline vector<PrefixListAssociations::PrefixListAssociation> getPrefixListAssociation() { DARABONBA_PTR_GET(prefixListAssociation_, vector<PrefixListAssociations::PrefixListAssociation>) };
      inline PrefixListAssociations& setPrefixListAssociation(const vector<PrefixListAssociations::PrefixListAssociation> & prefixListAssociation) { DARABONBA_PTR_SET_VALUE(prefixListAssociation_, prefixListAssociation) };
      inline PrefixListAssociations& setPrefixListAssociation(vector<PrefixListAssociations::PrefixListAssociation> && prefixListAssociation) { DARABONBA_PTR_SET_RVALUE(prefixListAssociation_, prefixListAssociation) };


    protected:
      shared_ptr<vector<PrefixListAssociations::PrefixListAssociation>> prefixListAssociation_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->prefixListAssociations_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePrefixListAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixListAssociations Field Functions 
    bool hasPrefixListAssociations() const { return this->prefixListAssociations_ != nullptr;};
    void deletePrefixListAssociations() { this->prefixListAssociations_ = nullptr;};
    inline const DescribePrefixListAssociationsResponseBody::PrefixListAssociations & getPrefixListAssociations() const { DARABONBA_PTR_GET_CONST(prefixListAssociations_, DescribePrefixListAssociationsResponseBody::PrefixListAssociations) };
    inline DescribePrefixListAssociationsResponseBody::PrefixListAssociations getPrefixListAssociations() { DARABONBA_PTR_GET(prefixListAssociations_, DescribePrefixListAssociationsResponseBody::PrefixListAssociations) };
    inline DescribePrefixListAssociationsResponseBody& setPrefixListAssociations(const DescribePrefixListAssociationsResponseBody::PrefixListAssociations & prefixListAssociations) { DARABONBA_PTR_SET_VALUE(prefixListAssociations_, prefixListAssociations) };
    inline DescribePrefixListAssociationsResponseBody& setPrefixListAssociations(DescribePrefixListAssociationsResponseBody::PrefixListAssociations && prefixListAssociations) { DARABONBA_PTR_SET_RVALUE(prefixListAssociations_, prefixListAssociations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrefixListAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query token that is returned in this call. If the return value is empty, no more data is returned.
    shared_ptr<string> nextToken_ {};
    // Details about the resources that are associated with the prefix list.
    shared_ptr<DescribePrefixListAssociationsResponseBody::PrefixListAssociations> prefixListAssociations_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
