// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMLPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMLPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListSAMLProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSAMLProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLProviders, SAMLProviders_);
    };
    friend void from_json(const Darabonba::Json& j, ListSAMLProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLProviders, SAMLProviders_);
    };
    ListSAMLProvidersResponseBody() = default ;
    ListSAMLProvidersResponseBody(const ListSAMLProvidersResponseBody &) = default ;
    ListSAMLProvidersResponseBody(ListSAMLProvidersResponseBody &&) = default ;
    ListSAMLProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSAMLProvidersResponseBody() = default ;
    ListSAMLProvidersResponseBody& operator=(const ListSAMLProvidersResponseBody &) = default ;
    ListSAMLProvidersResponseBody& operator=(ListSAMLProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SAMLProviders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SAMLProviders& obj) { 
        DARABONBA_PTR_TO_JSON(SAMLProvider, SAMLProvider_);
      };
      friend void from_json(const Darabonba::Json& j, SAMLProviders& obj) { 
        DARABONBA_PTR_FROM_JSON(SAMLProvider, SAMLProvider_);
      };
      SAMLProviders() = default ;
      SAMLProviders(const SAMLProviders &) = default ;
      SAMLProviders(SAMLProviders &&) = default ;
      SAMLProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SAMLProviders() = default ;
      SAMLProviders& operator=(const SAMLProviders &) = default ;
      SAMLProviders& operator=(SAMLProviders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SAMLProvider : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SAMLProvider& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(SAMLProviderName, SAMLProviderName_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, SAMLProvider& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(SAMLProviderName, SAMLProviderName_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        };
        SAMLProvider() = default ;
        SAMLProvider(const SAMLProvider &) = default ;
        SAMLProvider(SAMLProvider &&) = default ;
        SAMLProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SAMLProvider() = default ;
        SAMLProvider& operator=(const SAMLProvider &) = default ;
        SAMLProvider& operator=(SAMLProvider &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->createDate_ == nullptr && this->description_ == nullptr && this->SAMLProviderName_ == nullptr && this->updateDate_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline SAMLProvider& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline SAMLProvider& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SAMLProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // SAMLProviderName Field Functions 
        bool hasSAMLProviderName() const { return this->SAMLProviderName_ != nullptr;};
        void deleteSAMLProviderName() { this->SAMLProviderName_ = nullptr;};
        inline string getSAMLProviderName() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderName_, "") };
        inline SAMLProvider& setSAMLProviderName(string SAMLProviderName) { DARABONBA_PTR_SET_VALUE(SAMLProviderName_, SAMLProviderName) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline SAMLProvider& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        // The Alibaba Cloud Resource Name (ARN) of the IdP.
        shared_ptr<string> arn_ {};
        // The creation time.
        shared_ptr<string> createDate_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The name of the IdP.
        shared_ptr<string> SAMLProviderName_ {};
        // The update time.
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->SAMLProvider_ == nullptr; };
      // SAMLProvider Field Functions 
      bool hasSAMLProvider() const { return this->SAMLProvider_ != nullptr;};
      void deleteSAMLProvider() { this->SAMLProvider_ = nullptr;};
      inline const vector<SAMLProviders::SAMLProvider> & getSAMLProvider() const { DARABONBA_PTR_GET_CONST(SAMLProvider_, vector<SAMLProviders::SAMLProvider>) };
      inline vector<SAMLProviders::SAMLProvider> getSAMLProvider() { DARABONBA_PTR_GET(SAMLProvider_, vector<SAMLProviders::SAMLProvider>) };
      inline SAMLProviders& setSAMLProvider(const vector<SAMLProviders::SAMLProvider> & sAMLProvider) { DARABONBA_PTR_SET_VALUE(SAMLProvider_, sAMLProvider) };
      inline SAMLProviders& setSAMLProvider(vector<SAMLProviders::SAMLProvider> && sAMLProvider) { DARABONBA_PTR_SET_RVALUE(SAMLProvider_, sAMLProvider) };


    protected:
      shared_ptr<vector<SAMLProviders::SAMLProvider>> SAMLProvider_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->marker_ == nullptr && this->requestId_ == nullptr && this->SAMLProviders_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListSAMLProvidersResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListSAMLProvidersResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSAMLProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLProviders Field Functions 
    bool hasSAMLProviders() const { return this->SAMLProviders_ != nullptr;};
    void deleteSAMLProviders() { this->SAMLProviders_ = nullptr;};
    inline const ListSAMLProvidersResponseBody::SAMLProviders & getSAMLProviders() const { DARABONBA_PTR_GET_CONST(SAMLProviders_, ListSAMLProvidersResponseBody::SAMLProviders) };
    inline ListSAMLProvidersResponseBody::SAMLProviders getSAMLProviders() { DARABONBA_PTR_GET(SAMLProviders_, ListSAMLProvidersResponseBody::SAMLProviders) };
    inline ListSAMLProvidersResponseBody& setSAMLProviders(const ListSAMLProvidersResponseBody::SAMLProviders & sAMLProviders) { DARABONBA_PTR_SET_VALUE(SAMLProviders_, sAMLProviders) };
    inline ListSAMLProvidersResponseBody& setSAMLProviders(ListSAMLProvidersResponseBody::SAMLProviders && sAMLProviders) { DARABONBA_PTR_SET_RVALUE(SAMLProviders_, sAMLProviders) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // The `marker`. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set this parameter to obtain the truncated part.``
    shared_ptr<string> marker_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about IdPs.
    shared_ptr<ListSAMLProvidersResponseBody::SAMLProviders> SAMLProviders_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
